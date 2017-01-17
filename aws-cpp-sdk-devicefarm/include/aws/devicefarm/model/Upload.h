﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/devicefarm/model/UploadType.h>
#include <aws/devicefarm/model/UploadStatus.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>An app or a set of one or more tests to upload or that have been
   * uploaded.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/Upload">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API Upload
  {
  public:
    Upload();
    Upload(const Aws::Utils::Json::JsonValue& jsonValue);
    Upload& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The upload's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The upload's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The upload's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The upload's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The upload's ARN.</p>
     */
    inline Upload& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The upload's ARN.</p>
     */
    inline Upload& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The upload's ARN.</p>
     */
    inline Upload& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The upload's file name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The upload's file name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The upload's file name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The upload's file name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The upload's file name.</p>
     */
    inline Upload& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The upload's file name.</p>
     */
    inline Upload& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The upload's file name.</p>
     */
    inline Upload& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>When the upload was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>When the upload was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>When the upload was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>When the upload was created.</p>
     */
    inline Upload& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>When the upload was created.</p>
     */
    inline Upload& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(value); return *this;}

    /**
     * <p>The upload's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>ANDROID_APP: An Android upload.</p> </li> <li> <p>IOS_APP: An iOS upload.</p>
     * </li> <li> <p>WEB_APP: A web appliction upload.</p> </li> <li> <p>EXTERNAL_DATA:
     * An external data upload.</p> </li> <li> <p>APPIUM_JAVA_JUNIT_TEST_PACKAGE: An
     * Appium Java JUnit test package upload.</p> </li> <li>
     * <p>APPIUM_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test package
     * upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_PACKAGE: An Appium Python test
     * package upload.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE: An Appium
     * Java JUnit test package upload.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test package
     * upload.</p> </li> <li> <p>APPIUM_WEB_PYTHON_TEST_PACKAGE: An Appium Python test
     * package upload.</p> </li> <li> <p>CALABASH_TEST_PACKAGE: A Calabash test package
     * upload.</p> </li> <li> <p>INSTRUMENTATION_TEST_PACKAGE: An instrumentation
     * upload.</p> </li> <li> <p>UIAUTOMATION_TEST_PACKAGE: A uiautomation test package
     * upload.</p> </li> <li> <p>UIAUTOMATOR_TEST_PACKAGE: A uiautomator test package
     * upload.</p> </li> <li> <p>XCTEST_TEST_PACKAGE: An XCode test package upload.</p>
     * </li> <li> <p>XCTEST_UI_TEST_PACKAGE: An XCode UI test package upload.</p> </li>
     * </ul>
     */
    inline const UploadType& GetType() const{ return m_type; }

    /**
     * <p>The upload's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>ANDROID_APP: An Android upload.</p> </li> <li> <p>IOS_APP: An iOS upload.</p>
     * </li> <li> <p>WEB_APP: A web appliction upload.</p> </li> <li> <p>EXTERNAL_DATA:
     * An external data upload.</p> </li> <li> <p>APPIUM_JAVA_JUNIT_TEST_PACKAGE: An
     * Appium Java JUnit test package upload.</p> </li> <li>
     * <p>APPIUM_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test package
     * upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_PACKAGE: An Appium Python test
     * package upload.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE: An Appium
     * Java JUnit test package upload.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test package
     * upload.</p> </li> <li> <p>APPIUM_WEB_PYTHON_TEST_PACKAGE: An Appium Python test
     * package upload.</p> </li> <li> <p>CALABASH_TEST_PACKAGE: A Calabash test package
     * upload.</p> </li> <li> <p>INSTRUMENTATION_TEST_PACKAGE: An instrumentation
     * upload.</p> </li> <li> <p>UIAUTOMATION_TEST_PACKAGE: A uiautomation test package
     * upload.</p> </li> <li> <p>UIAUTOMATOR_TEST_PACKAGE: A uiautomator test package
     * upload.</p> </li> <li> <p>XCTEST_TEST_PACKAGE: An XCode test package upload.</p>
     * </li> <li> <p>XCTEST_UI_TEST_PACKAGE: An XCode UI test package upload.</p> </li>
     * </ul>
     */
    inline void SetType(const UploadType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The upload's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>ANDROID_APP: An Android upload.</p> </li> <li> <p>IOS_APP: An iOS upload.</p>
     * </li> <li> <p>WEB_APP: A web appliction upload.</p> </li> <li> <p>EXTERNAL_DATA:
     * An external data upload.</p> </li> <li> <p>APPIUM_JAVA_JUNIT_TEST_PACKAGE: An
     * Appium Java JUnit test package upload.</p> </li> <li>
     * <p>APPIUM_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test package
     * upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_PACKAGE: An Appium Python test
     * package upload.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE: An Appium
     * Java JUnit test package upload.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test package
     * upload.</p> </li> <li> <p>APPIUM_WEB_PYTHON_TEST_PACKAGE: An Appium Python test
     * package upload.</p> </li> <li> <p>CALABASH_TEST_PACKAGE: A Calabash test package
     * upload.</p> </li> <li> <p>INSTRUMENTATION_TEST_PACKAGE: An instrumentation
     * upload.</p> </li> <li> <p>UIAUTOMATION_TEST_PACKAGE: A uiautomation test package
     * upload.</p> </li> <li> <p>UIAUTOMATOR_TEST_PACKAGE: A uiautomator test package
     * upload.</p> </li> <li> <p>XCTEST_TEST_PACKAGE: An XCode test package upload.</p>
     * </li> <li> <p>XCTEST_UI_TEST_PACKAGE: An XCode UI test package upload.</p> </li>
     * </ul>
     */
    inline void SetType(UploadType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The upload's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>ANDROID_APP: An Android upload.</p> </li> <li> <p>IOS_APP: An iOS upload.</p>
     * </li> <li> <p>WEB_APP: A web appliction upload.</p> </li> <li> <p>EXTERNAL_DATA:
     * An external data upload.</p> </li> <li> <p>APPIUM_JAVA_JUNIT_TEST_PACKAGE: An
     * Appium Java JUnit test package upload.</p> </li> <li>
     * <p>APPIUM_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test package
     * upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_PACKAGE: An Appium Python test
     * package upload.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE: An Appium
     * Java JUnit test package upload.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test package
     * upload.</p> </li> <li> <p>APPIUM_WEB_PYTHON_TEST_PACKAGE: An Appium Python test
     * package upload.</p> </li> <li> <p>CALABASH_TEST_PACKAGE: A Calabash test package
     * upload.</p> </li> <li> <p>INSTRUMENTATION_TEST_PACKAGE: An instrumentation
     * upload.</p> </li> <li> <p>UIAUTOMATION_TEST_PACKAGE: A uiautomation test package
     * upload.</p> </li> <li> <p>UIAUTOMATOR_TEST_PACKAGE: A uiautomator test package
     * upload.</p> </li> <li> <p>XCTEST_TEST_PACKAGE: An XCode test package upload.</p>
     * </li> <li> <p>XCTEST_UI_TEST_PACKAGE: An XCode UI test package upload.</p> </li>
     * </ul>
     */
    inline Upload& WithType(const UploadType& value) { SetType(value); return *this;}

    /**
     * <p>The upload's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>ANDROID_APP: An Android upload.</p> </li> <li> <p>IOS_APP: An iOS upload.</p>
     * </li> <li> <p>WEB_APP: A web appliction upload.</p> </li> <li> <p>EXTERNAL_DATA:
     * An external data upload.</p> </li> <li> <p>APPIUM_JAVA_JUNIT_TEST_PACKAGE: An
     * Appium Java JUnit test package upload.</p> </li> <li>
     * <p>APPIUM_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test package
     * upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_PACKAGE: An Appium Python test
     * package upload.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE: An Appium
     * Java JUnit test package upload.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test package
     * upload.</p> </li> <li> <p>APPIUM_WEB_PYTHON_TEST_PACKAGE: An Appium Python test
     * package upload.</p> </li> <li> <p>CALABASH_TEST_PACKAGE: A Calabash test package
     * upload.</p> </li> <li> <p>INSTRUMENTATION_TEST_PACKAGE: An instrumentation
     * upload.</p> </li> <li> <p>UIAUTOMATION_TEST_PACKAGE: A uiautomation test package
     * upload.</p> </li> <li> <p>UIAUTOMATOR_TEST_PACKAGE: A uiautomator test package
     * upload.</p> </li> <li> <p>XCTEST_TEST_PACKAGE: An XCode test package upload.</p>
     * </li> <li> <p>XCTEST_UI_TEST_PACKAGE: An XCode UI test package upload.</p> </li>
     * </ul>
     */
    inline Upload& WithType(UploadType&& value) { SetType(value); return *this;}

    /**
     * <p>The upload's status.</p> <p>Must be one of the following values:</p> <ul>
     * <li> <p>FAILED: A failed status.</p> </li> <li> <p>INITIALIZED: An initialized
     * status.</p> </li> <li> <p>PROCESSING: A processing status.</p> </li> <li>
     * <p>SUCCEEDED: A succeeded status.</p> </li> </ul>
     */
    inline const UploadStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The upload's status.</p> <p>Must be one of the following values:</p> <ul>
     * <li> <p>FAILED: A failed status.</p> </li> <li> <p>INITIALIZED: An initialized
     * status.</p> </li> <li> <p>PROCESSING: A processing status.</p> </li> <li>
     * <p>SUCCEEDED: A succeeded status.</p> </li> </ul>
     */
    inline void SetStatus(const UploadStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The upload's status.</p> <p>Must be one of the following values:</p> <ul>
     * <li> <p>FAILED: A failed status.</p> </li> <li> <p>INITIALIZED: An initialized
     * status.</p> </li> <li> <p>PROCESSING: A processing status.</p> </li> <li>
     * <p>SUCCEEDED: A succeeded status.</p> </li> </ul>
     */
    inline void SetStatus(UploadStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The upload's status.</p> <p>Must be one of the following values:</p> <ul>
     * <li> <p>FAILED: A failed status.</p> </li> <li> <p>INITIALIZED: An initialized
     * status.</p> </li> <li> <p>PROCESSING: A processing status.</p> </li> <li>
     * <p>SUCCEEDED: A succeeded status.</p> </li> </ul>
     */
    inline Upload& WithStatus(const UploadStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The upload's status.</p> <p>Must be one of the following values:</p> <ul>
     * <li> <p>FAILED: A failed status.</p> </li> <li> <p>INITIALIZED: An initialized
     * status.</p> </li> <li> <p>PROCESSING: A processing status.</p> </li> <li>
     * <p>SUCCEEDED: A succeeded status.</p> </li> </ul>
     */
    inline Upload& WithStatus(UploadStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>The pre-signed Amazon S3 URL that was used to store a file through a
     * corresponding PUT request.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The pre-signed Amazon S3 URL that was used to store a file through a
     * corresponding PUT request.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The pre-signed Amazon S3 URL that was used to store a file through a
     * corresponding PUT request.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The pre-signed Amazon S3 URL that was used to store a file through a
     * corresponding PUT request.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The pre-signed Amazon S3 URL that was used to store a file through a
     * corresponding PUT request.</p>
     */
    inline Upload& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The pre-signed Amazon S3 URL that was used to store a file through a
     * corresponding PUT request.</p>
     */
    inline Upload& WithUrl(Aws::String&& value) { SetUrl(value); return *this;}

    /**
     * <p>The pre-signed Amazon S3 URL that was used to store a file through a
     * corresponding PUT request.</p>
     */
    inline Upload& WithUrl(const char* value) { SetUrl(value); return *this;}

    /**
     * <p>The upload's metadata. For example, for Android, this contains information
     * that is parsed from the manifest and is displayed in the AWS Device Farm console
     * after the associated app is uploaded.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The upload's metadata. For example, for Android, this contains information
     * that is parsed from the manifest and is displayed in the AWS Device Farm console
     * after the associated app is uploaded.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The upload's metadata. For example, for Android, this contains information
     * that is parsed from the manifest and is displayed in the AWS Device Farm console
     * after the associated app is uploaded.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The upload's metadata. For example, for Android, this contains information
     * that is parsed from the manifest and is displayed in the AWS Device Farm console
     * after the associated app is uploaded.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>The upload's metadata. For example, for Android, this contains information
     * that is parsed from the manifest and is displayed in the AWS Device Farm console
     * after the associated app is uploaded.</p>
     */
    inline Upload& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The upload's metadata. For example, for Android, this contains information
     * that is parsed from the manifest and is displayed in the AWS Device Farm console
     * after the associated app is uploaded.</p>
     */
    inline Upload& WithMetadata(Aws::String&& value) { SetMetadata(value); return *this;}

    /**
     * <p>The upload's metadata. For example, for Android, this contains information
     * that is parsed from the manifest and is displayed in the AWS Device Farm console
     * after the associated app is uploaded.</p>
     */
    inline Upload& WithMetadata(const char* value) { SetMetadata(value); return *this;}

    /**
     * <p>The upload's content type (for example, "application/octet-stream").</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The upload's content type (for example, "application/octet-stream").</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The upload's content type (for example, "application/octet-stream").</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The upload's content type (for example, "application/octet-stream").</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The upload's content type (for example, "application/octet-stream").</p>
     */
    inline Upload& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The upload's content type (for example, "application/octet-stream").</p>
     */
    inline Upload& WithContentType(Aws::String&& value) { SetContentType(value); return *this;}

    /**
     * <p>The upload's content type (for example, "application/octet-stream").</p>
     */
    inline Upload& WithContentType(const char* value) { SetContentType(value); return *this;}

    /**
     * <p>A message about the upload's result.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message about the upload's result.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message about the upload's result.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message about the upload's result.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message about the upload's result.</p>
     */
    inline Upload& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message about the upload's result.</p>
     */
    inline Upload& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    /**
     * <p>A message about the upload's result.</p>
     */
    inline Upload& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet;
    UploadType m_type;
    bool m_typeHasBeenSet;
    UploadStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_url;
    bool m_urlHasBeenSet;
    Aws::String m_metadata;
    bool m_metadataHasBeenSet;
    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
