/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#include <jni.h>

#include <aws/testing/platform/android/AndroidTesting.h>


#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

JNIEXPORT jint JNICALL
Java_aws_coretests_TestActivity_linkTest( JNIEnv* env, jobject classRef, jobject context )
{
    return Java_aws_coretests_TestActivity_runTests(env, classRef, context);
}

#ifdef __cplusplus
}
#endif // __cplusplus




