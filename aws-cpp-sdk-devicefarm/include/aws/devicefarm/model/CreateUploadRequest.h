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
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/UploadType.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a request to the create upload operation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateUploadRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API CreateUploadRequest : public DeviceFarmRequest
  {
  public:
    CreateUploadRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ARN of the project for the upload.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }

    /**
     * <p>The ARN of the project for the upload.</p>
     */
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }

    /**
     * <p>The ARN of the project for the upload.</p>
     */
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }

    /**
     * <p>The ARN of the project for the upload.</p>
     */
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }

    /**
     * <p>The ARN of the project for the upload.</p>
     */
    inline CreateUploadRequest& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The ARN of the project for the upload.</p>
     */
    inline CreateUploadRequest& WithProjectArn(Aws::String&& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The ARN of the project for the upload.</p>
     */
    inline CreateUploadRequest& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}

    /**
     * <p>The upload's file name. The name should not contain the '/' character. If
     * uploading an iOS app, the file name needs to end with the <code>.ipa</code>
     * extension. If uploading an Android app, the file name needs to end with the
     * <code>.apk</code> extension. For all others, the file name must end with the
     * <code>.zip</code> file extension.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The upload's file name. The name should not contain the '/' character. If
     * uploading an iOS app, the file name needs to end with the <code>.ipa</code>
     * extension. If uploading an Android app, the file name needs to end with the
     * <code>.apk</code> extension. For all others, the file name must end with the
     * <code>.zip</code> file extension.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The upload's file name. The name should not contain the '/' character. If
     * uploading an iOS app, the file name needs to end with the <code>.ipa</code>
     * extension. If uploading an Android app, the file name needs to end with the
     * <code>.apk</code> extension. For all others, the file name must end with the
     * <code>.zip</code> file extension.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The upload's file name. The name should not contain the '/' character. If
     * uploading an iOS app, the file name needs to end with the <code>.ipa</code>
     * extension. If uploading an Android app, the file name needs to end with the
     * <code>.apk</code> extension. For all others, the file name must end with the
     * <code>.zip</code> file extension.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The upload's file name. The name should not contain the '/' character. If
     * uploading an iOS app, the file name needs to end with the <code>.ipa</code>
     * extension. If uploading an Android app, the file name needs to end with the
     * <code>.apk</code> extension. For all others, the file name must end with the
     * <code>.zip</code> file extension.</p>
     */
    inline CreateUploadRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The upload's file name. The name should not contain the '/' character. If
     * uploading an iOS app, the file name needs to end with the <code>.ipa</code>
     * extension. If uploading an Android app, the file name needs to end with the
     * <code>.apk</code> extension. For all others, the file name must end with the
     * <code>.zip</code> file extension.</p>
     */
    inline CreateUploadRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The upload's file name. The name should not contain the '/' character. If
     * uploading an iOS app, the file name needs to end with the <code>.ipa</code>
     * extension. If uploading an Android app, the file name needs to end with the
     * <code>.apk</code> extension. For all others, the file name must end with the
     * <code>.zip</code> file extension.</p>
     */
    inline CreateUploadRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The upload's upload type.</p> <p>Must be one of the following values:</p>
     * <ul> <li> <p>ANDROID_APP: An Android upload.</p> </li> <li> <p>IOS_APP: An iOS
     * upload.</p> </li> <li> <p>WEB_APP: A web appliction upload.</p> </li> <li>
     * <p>EXTERNAL_DATA: An external data upload.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT_TEST_PACKAGE: An Appium Java JUnit test package upload.</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test
     * package upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_PACKAGE: An Appium Python
     * test package upload.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE: An
     * Appium Java JUnit test package upload.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test package
     * upload.</p> </li> <li> <p>APPIUM_WEB_PYTHON_TEST_PACKAGE: An Appium Python test
     * package upload.</p> </li> <li> <p>CALABASH_TEST_PACKAGE: A Calabash test package
     * upload.</p> </li> <li> <p>INSTRUMENTATION_TEST_PACKAGE: An instrumentation
     * upload.</p> </li> <li> <p>UIAUTOMATION_TEST_PACKAGE: A uiautomation test package
     * upload.</p> </li> <li> <p>UIAUTOMATOR_TEST_PACKAGE: A uiautomator test package
     * upload.</p> </li> <li> <p>XCTEST_TEST_PACKAGE: An XCode test package upload.</p>
     * </li> <li> <p>XCTEST_UI_TEST_PACKAGE: An XCode UI test package upload.</p> </li>
     * </ul> <p> <b>Note</b> If you call <code>CreateUpload</code> with
     * <code>WEB_APP</code> specified, AWS Device Farm throws an
     * <code>ArgumentException</code> error.</p>
     */
    inline const UploadType& GetType() const{ return m_type; }

    /**
     * <p>The upload's upload type.</p> <p>Must be one of the following values:</p>
     * <ul> <li> <p>ANDROID_APP: An Android upload.</p> </li> <li> <p>IOS_APP: An iOS
     * upload.</p> </li> <li> <p>WEB_APP: A web appliction upload.</p> </li> <li>
     * <p>EXTERNAL_DATA: An external data upload.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT_TEST_PACKAGE: An Appium Java JUnit test package upload.</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test
     * package upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_PACKAGE: An Appium Python
     * test package upload.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE: An
     * Appium Java JUnit test package upload.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test package
     * upload.</p> </li> <li> <p>APPIUM_WEB_PYTHON_TEST_PACKAGE: An Appium Python test
     * package upload.</p> </li> <li> <p>CALABASH_TEST_PACKAGE: A Calabash test package
     * upload.</p> </li> <li> <p>INSTRUMENTATION_TEST_PACKAGE: An instrumentation
     * upload.</p> </li> <li> <p>UIAUTOMATION_TEST_PACKAGE: A uiautomation test package
     * upload.</p> </li> <li> <p>UIAUTOMATOR_TEST_PACKAGE: A uiautomator test package
     * upload.</p> </li> <li> <p>XCTEST_TEST_PACKAGE: An XCode test package upload.</p>
     * </li> <li> <p>XCTEST_UI_TEST_PACKAGE: An XCode UI test package upload.</p> </li>
     * </ul> <p> <b>Note</b> If you call <code>CreateUpload</code> with
     * <code>WEB_APP</code> specified, AWS Device Farm throws an
     * <code>ArgumentException</code> error.</p>
     */
    inline void SetType(const UploadType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The upload's upload type.</p> <p>Must be one of the following values:</p>
     * <ul> <li> <p>ANDROID_APP: An Android upload.</p> </li> <li> <p>IOS_APP: An iOS
     * upload.</p> </li> <li> <p>WEB_APP: A web appliction upload.</p> </li> <li>
     * <p>EXTERNAL_DATA: An external data upload.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT_TEST_PACKAGE: An Appium Java JUnit test package upload.</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test
     * package upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_PACKAGE: An Appium Python
     * test package upload.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE: An
     * Appium Java JUnit test package upload.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test package
     * upload.</p> </li> <li> <p>APPIUM_WEB_PYTHON_TEST_PACKAGE: An Appium Python test
     * package upload.</p> </li> <li> <p>CALABASH_TEST_PACKAGE: A Calabash test package
     * upload.</p> </li> <li> <p>INSTRUMENTATION_TEST_PACKAGE: An instrumentation
     * upload.</p> </li> <li> <p>UIAUTOMATION_TEST_PACKAGE: A uiautomation test package
     * upload.</p> </li> <li> <p>UIAUTOMATOR_TEST_PACKAGE: A uiautomator test package
     * upload.</p> </li> <li> <p>XCTEST_TEST_PACKAGE: An XCode test package upload.</p>
     * </li> <li> <p>XCTEST_UI_TEST_PACKAGE: An XCode UI test package upload.</p> </li>
     * </ul> <p> <b>Note</b> If you call <code>CreateUpload</code> with
     * <code>WEB_APP</code> specified, AWS Device Farm throws an
     * <code>ArgumentException</code> error.</p>
     */
    inline void SetType(UploadType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The upload's upload type.</p> <p>Must be one of the following values:</p>
     * <ul> <li> <p>ANDROID_APP: An Android upload.</p> </li> <li> <p>IOS_APP: An iOS
     * upload.</p> </li> <li> <p>WEB_APP: A web appliction upload.</p> </li> <li>
     * <p>EXTERNAL_DATA: An external data upload.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT_TEST_PACKAGE: An Appium Java JUnit test package upload.</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test
     * package upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_PACKAGE: An Appium Python
     * test package upload.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE: An
     * Appium Java JUnit test package upload.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test package
     * upload.</p> </li> <li> <p>APPIUM_WEB_PYTHON_TEST_PACKAGE: An Appium Python test
     * package upload.</p> </li> <li> <p>CALABASH_TEST_PACKAGE: A Calabash test package
     * upload.</p> </li> <li> <p>INSTRUMENTATION_TEST_PACKAGE: An instrumentation
     * upload.</p> </li> <li> <p>UIAUTOMATION_TEST_PACKAGE: A uiautomation test package
     * upload.</p> </li> <li> <p>UIAUTOMATOR_TEST_PACKAGE: A uiautomator test package
     * upload.</p> </li> <li> <p>XCTEST_TEST_PACKAGE: An XCode test package upload.</p>
     * </li> <li> <p>XCTEST_UI_TEST_PACKAGE: An XCode UI test package upload.</p> </li>
     * </ul> <p> <b>Note</b> If you call <code>CreateUpload</code> with
     * <code>WEB_APP</code> specified, AWS Device Farm throws an
     * <code>ArgumentException</code> error.</p>
     */
    inline CreateUploadRequest& WithType(const UploadType& value) { SetType(value); return *this;}

    /**
     * <p>The upload's upload type.</p> <p>Must be one of the following values:</p>
     * <ul> <li> <p>ANDROID_APP: An Android upload.</p> </li> <li> <p>IOS_APP: An iOS
     * upload.</p> </li> <li> <p>WEB_APP: A web appliction upload.</p> </li> <li>
     * <p>EXTERNAL_DATA: An external data upload.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT_TEST_PACKAGE: An Appium Java JUnit test package upload.</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test
     * package upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_PACKAGE: An Appium Python
     * test package upload.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE: An
     * Appium Java JUnit test package upload.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test package
     * upload.</p> </li> <li> <p>APPIUM_WEB_PYTHON_TEST_PACKAGE: An Appium Python test
     * package upload.</p> </li> <li> <p>CALABASH_TEST_PACKAGE: A Calabash test package
     * upload.</p> </li> <li> <p>INSTRUMENTATION_TEST_PACKAGE: An instrumentation
     * upload.</p> </li> <li> <p>UIAUTOMATION_TEST_PACKAGE: A uiautomation test package
     * upload.</p> </li> <li> <p>UIAUTOMATOR_TEST_PACKAGE: A uiautomator test package
     * upload.</p> </li> <li> <p>XCTEST_TEST_PACKAGE: An XCode test package upload.</p>
     * </li> <li> <p>XCTEST_UI_TEST_PACKAGE: An XCode UI test package upload.</p> </li>
     * </ul> <p> <b>Note</b> If you call <code>CreateUpload</code> with
     * <code>WEB_APP</code> specified, AWS Device Farm throws an
     * <code>ArgumentException</code> error.</p>
     */
    inline CreateUploadRequest& WithType(UploadType&& value) { SetType(value); return *this;}

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
    inline CreateUploadRequest& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The upload's content type (for example, "application/octet-stream").</p>
     */
    inline CreateUploadRequest& WithContentType(Aws::String&& value) { SetContentType(value); return *this;}

    /**
     * <p>The upload's content type (for example, "application/octet-stream").</p>
     */
    inline CreateUploadRequest& WithContentType(const char* value) { SetContentType(value); return *this;}

  private:
    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    UploadType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
