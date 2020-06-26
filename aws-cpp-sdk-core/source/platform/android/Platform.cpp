/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/platform/Android.h>

#include <iostream>
#include <chrono>
#include <thread>

namespace Aws
{
namespace Platform
{

JavaVM* g_javaVM(nullptr);

Aws::String g_cacheDirectory;

static void InitCacheDirectory(JNIEnv* env, jobject context)
{
    jclass contextClass = env->FindClass( "android/content/Context" );
    jmethodID getCacheDir = env->GetMethodID( contextClass, "getCacheDir", "()Ljava/io/File;" );
    jobject cache_dir = env->CallObjectMethod( context, getCacheDir );

    jclass fileClass = env->FindClass( "java/io/File" );
    jmethodID getPath = env->GetMethodID( fileClass, "getPath", "()Ljava/lang/String;" );
    jstring path_string = (jstring)env->CallObjectMethod( cache_dir, getPath );

    const char *path_chars = env->GetStringUTFChars( path_string, NULL );
    g_cacheDirectory = path_chars;
    g_cacheDirectory.append("/");

    env->ReleaseStringUTFChars( path_string, path_chars );
}

/*
We intentionally don't use JNI_OnLoad to do this because that wouldn't work if the sdk is linked statically into external user code.
 */
void InitAndroid(JNIEnv* env, jobject context)
{
    // save off the vm
    env->GetJavaVM(&g_javaVM);

    // cache anything else we need
    InitCacheDirectory(env, context);
}

JavaVM* GetJavaVM()
{
    return g_javaVM;
}

const char* GetCacheDirectory()
{
    return g_cacheDirectory.c_str();
}

} // namespace Platform
} // namespace Aws
