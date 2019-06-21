/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a request to the list uploads operation.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListUploadsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API ListUploadsRequest : public DeviceFarmRequest
  {
  public:
    ListUploadsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListUploads"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to list
     * uploads.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to list
     * uploads.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to list
     * uploads.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to list
     * uploads.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to list
     * uploads.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to list
     * uploads.</p>
     */
    inline ListUploadsRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to list
     * uploads.</p>
     */
    inline ListUploadsRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to list
     * uploads.</p>
     */
    inline ListUploadsRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The type of upload.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>ANDROID_APP: An Android upload.</p> </li> <li> <p>IOS_APP: An iOS upload.</p>
     * </li> <li> <p>WEB_APP: A web application upload.</p> </li> <li>
     * <p>EXTERNAL_DATA: An external data upload.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT_TEST_PACKAGE: An Appium Java JUnit test package upload.</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test
     * package upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_PACKAGE: An Appium Python
     * test package upload.</p> </li> <li> <p>APPIUM_NODE_TEST_PACKAGE: An Appium
     * Node.js test package upload.</p> </li> <li> <p>APPIUM_RUBY_TEST_PACKAGE: An
     * Appium Ruby test package upload.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE: An Appium Java JUnit test package upload
     * for a web app.</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE: An Appium
     * Java TestNG test package upload for a web app.</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON_TEST_PACKAGE: An Appium Python test package upload for a
     * web app.</p> </li> <li> <p>APPIUM_WEB_NODE_TEST_PACKAGE: An Appium Node.js test
     * package upload for a web app.</p> </li> <li> <p>APPIUM_WEB_RUBY_TEST_PACKAGE: An
     * Appium Ruby test package upload for a web app.</p> </li> <li>
     * <p>CALABASH_TEST_PACKAGE: A Calabash test package upload.</p> </li> <li>
     * <p>INSTRUMENTATION_TEST_PACKAGE: An instrumentation upload.</p> </li> <li>
     * <p>UIAUTOMATION_TEST_PACKAGE: A uiautomation test package upload.</p> </li> <li>
     * <p>UIAUTOMATOR_TEST_PACKAGE: A uiautomator test package upload.</p> </li> <li>
     * <p>XCTEST_TEST_PACKAGE: An Xcode test package upload.</p> </li> <li>
     * <p>XCTEST_UI_TEST_PACKAGE: An Xcode UI test package upload.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT_TEST_SPEC: An Appium Java JUnit test spec upload.</p> </li>
     * <li> <p>APPIUM_JAVA_TESTNG_TEST_SPEC: An Appium Java TestNG test spec
     * upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_SPEC: An Appium Python test spec
     * upload.</p> </li> <li> <p>APPIUM_NODE_TEST_SPEC: An Appium Node.js test spec
     * upload.</p> </li> <li> <p> APPIUM_RUBY_TEST_SPEC: An Appium Ruby test spec
     * upload.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT_TEST_SPEC: An Appium Java JUnit
     * test spec upload for a web app.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_SPEC: An Appium Java TestNG test spec upload for
     * a web app.</p> </li> <li> <p>APPIUM_WEB_PYTHON_TEST_SPEC: An Appium Python test
     * spec upload for a web app.</p> </li> <li> <p>APPIUM_WEB_NODE_TEST_SPEC: An
     * Appium Node.js test spec upload for a web app.</p> </li> <li>
     * <p>APPIUM_WEB_RUBY_TEST_SPEC: An Appium Ruby test spec upload for a web app.</p>
     * </li> <li> <p>INSTRUMENTATION_TEST_SPEC: An instrumentation test spec
     * upload.</p> </li> <li> <p>XCTEST_UI_TEST_SPEC: An Xcode UI test spec upload.</p>
     * </li> </ul>
     */
    inline const UploadType& GetType() const{ return m_type; }

    /**
     * <p>The type of upload.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>ANDROID_APP: An Android upload.</p> </li> <li> <p>IOS_APP: An iOS upload.</p>
     * </li> <li> <p>WEB_APP: A web application upload.</p> </li> <li>
     * <p>EXTERNAL_DATA: An external data upload.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT_TEST_PACKAGE: An Appium Java JUnit test package upload.</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test
     * package upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_PACKAGE: An Appium Python
     * test package upload.</p> </li> <li> <p>APPIUM_NODE_TEST_PACKAGE: An Appium
     * Node.js test package upload.</p> </li> <li> <p>APPIUM_RUBY_TEST_PACKAGE: An
     * Appium Ruby test package upload.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE: An Appium Java JUnit test package upload
     * for a web app.</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE: An Appium
     * Java TestNG test package upload for a web app.</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON_TEST_PACKAGE: An Appium Python test package upload for a
     * web app.</p> </li> <li> <p>APPIUM_WEB_NODE_TEST_PACKAGE: An Appium Node.js test
     * package upload for a web app.</p> </li> <li> <p>APPIUM_WEB_RUBY_TEST_PACKAGE: An
     * Appium Ruby test package upload for a web app.</p> </li> <li>
     * <p>CALABASH_TEST_PACKAGE: A Calabash test package upload.</p> </li> <li>
     * <p>INSTRUMENTATION_TEST_PACKAGE: An instrumentation upload.</p> </li> <li>
     * <p>UIAUTOMATION_TEST_PACKAGE: A uiautomation test package upload.</p> </li> <li>
     * <p>UIAUTOMATOR_TEST_PACKAGE: A uiautomator test package upload.</p> </li> <li>
     * <p>XCTEST_TEST_PACKAGE: An Xcode test package upload.</p> </li> <li>
     * <p>XCTEST_UI_TEST_PACKAGE: An Xcode UI test package upload.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT_TEST_SPEC: An Appium Java JUnit test spec upload.</p> </li>
     * <li> <p>APPIUM_JAVA_TESTNG_TEST_SPEC: An Appium Java TestNG test spec
     * upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_SPEC: An Appium Python test spec
     * upload.</p> </li> <li> <p>APPIUM_NODE_TEST_SPEC: An Appium Node.js test spec
     * upload.</p> </li> <li> <p> APPIUM_RUBY_TEST_SPEC: An Appium Ruby test spec
     * upload.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT_TEST_SPEC: An Appium Java JUnit
     * test spec upload for a web app.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_SPEC: An Appium Java TestNG test spec upload for
     * a web app.</p> </li> <li> <p>APPIUM_WEB_PYTHON_TEST_SPEC: An Appium Python test
     * spec upload for a web app.</p> </li> <li> <p>APPIUM_WEB_NODE_TEST_SPEC: An
     * Appium Node.js test spec upload for a web app.</p> </li> <li>
     * <p>APPIUM_WEB_RUBY_TEST_SPEC: An Appium Ruby test spec upload for a web app.</p>
     * </li> <li> <p>INSTRUMENTATION_TEST_SPEC: An instrumentation test spec
     * upload.</p> </li> <li> <p>XCTEST_UI_TEST_SPEC: An Xcode UI test spec upload.</p>
     * </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of upload.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>ANDROID_APP: An Android upload.</p> </li> <li> <p>IOS_APP: An iOS upload.</p>
     * </li> <li> <p>WEB_APP: A web application upload.</p> </li> <li>
     * <p>EXTERNAL_DATA: An external data upload.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT_TEST_PACKAGE: An Appium Java JUnit test package upload.</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test
     * package upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_PACKAGE: An Appium Python
     * test package upload.</p> </li> <li> <p>APPIUM_NODE_TEST_PACKAGE: An Appium
     * Node.js test package upload.</p> </li> <li> <p>APPIUM_RUBY_TEST_PACKAGE: An
     * Appium Ruby test package upload.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE: An Appium Java JUnit test package upload
     * for a web app.</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE: An Appium
     * Java TestNG test package upload for a web app.</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON_TEST_PACKAGE: An Appium Python test package upload for a
     * web app.</p> </li> <li> <p>APPIUM_WEB_NODE_TEST_PACKAGE: An Appium Node.js test
     * package upload for a web app.</p> </li> <li> <p>APPIUM_WEB_RUBY_TEST_PACKAGE: An
     * Appium Ruby test package upload for a web app.</p> </li> <li>
     * <p>CALABASH_TEST_PACKAGE: A Calabash test package upload.</p> </li> <li>
     * <p>INSTRUMENTATION_TEST_PACKAGE: An instrumentation upload.</p> </li> <li>
     * <p>UIAUTOMATION_TEST_PACKAGE: A uiautomation test package upload.</p> </li> <li>
     * <p>UIAUTOMATOR_TEST_PACKAGE: A uiautomator test package upload.</p> </li> <li>
     * <p>XCTEST_TEST_PACKAGE: An Xcode test package upload.</p> </li> <li>
     * <p>XCTEST_UI_TEST_PACKAGE: An Xcode UI test package upload.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT_TEST_SPEC: An Appium Java JUnit test spec upload.</p> </li>
     * <li> <p>APPIUM_JAVA_TESTNG_TEST_SPEC: An Appium Java TestNG test spec
     * upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_SPEC: An Appium Python test spec
     * upload.</p> </li> <li> <p>APPIUM_NODE_TEST_SPEC: An Appium Node.js test spec
     * upload.</p> </li> <li> <p> APPIUM_RUBY_TEST_SPEC: An Appium Ruby test spec
     * upload.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT_TEST_SPEC: An Appium Java JUnit
     * test spec upload for a web app.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_SPEC: An Appium Java TestNG test spec upload for
     * a web app.</p> </li> <li> <p>APPIUM_WEB_PYTHON_TEST_SPEC: An Appium Python test
     * spec upload for a web app.</p> </li> <li> <p>APPIUM_WEB_NODE_TEST_SPEC: An
     * Appium Node.js test spec upload for a web app.</p> </li> <li>
     * <p>APPIUM_WEB_RUBY_TEST_SPEC: An Appium Ruby test spec upload for a web app.</p>
     * </li> <li> <p>INSTRUMENTATION_TEST_SPEC: An instrumentation test spec
     * upload.</p> </li> <li> <p>XCTEST_UI_TEST_SPEC: An Xcode UI test spec upload.</p>
     * </li> </ul>
     */
    inline void SetType(const UploadType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of upload.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>ANDROID_APP: An Android upload.</p> </li> <li> <p>IOS_APP: An iOS upload.</p>
     * </li> <li> <p>WEB_APP: A web application upload.</p> </li> <li>
     * <p>EXTERNAL_DATA: An external data upload.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT_TEST_PACKAGE: An Appium Java JUnit test package upload.</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test
     * package upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_PACKAGE: An Appium Python
     * test package upload.</p> </li> <li> <p>APPIUM_NODE_TEST_PACKAGE: An Appium
     * Node.js test package upload.</p> </li> <li> <p>APPIUM_RUBY_TEST_PACKAGE: An
     * Appium Ruby test package upload.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE: An Appium Java JUnit test package upload
     * for a web app.</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE: An Appium
     * Java TestNG test package upload for a web app.</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON_TEST_PACKAGE: An Appium Python test package upload for a
     * web app.</p> </li> <li> <p>APPIUM_WEB_NODE_TEST_PACKAGE: An Appium Node.js test
     * package upload for a web app.</p> </li> <li> <p>APPIUM_WEB_RUBY_TEST_PACKAGE: An
     * Appium Ruby test package upload for a web app.</p> </li> <li>
     * <p>CALABASH_TEST_PACKAGE: A Calabash test package upload.</p> </li> <li>
     * <p>INSTRUMENTATION_TEST_PACKAGE: An instrumentation upload.</p> </li> <li>
     * <p>UIAUTOMATION_TEST_PACKAGE: A uiautomation test package upload.</p> </li> <li>
     * <p>UIAUTOMATOR_TEST_PACKAGE: A uiautomator test package upload.</p> </li> <li>
     * <p>XCTEST_TEST_PACKAGE: An Xcode test package upload.</p> </li> <li>
     * <p>XCTEST_UI_TEST_PACKAGE: An Xcode UI test package upload.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT_TEST_SPEC: An Appium Java JUnit test spec upload.</p> </li>
     * <li> <p>APPIUM_JAVA_TESTNG_TEST_SPEC: An Appium Java TestNG test spec
     * upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_SPEC: An Appium Python test spec
     * upload.</p> </li> <li> <p>APPIUM_NODE_TEST_SPEC: An Appium Node.js test spec
     * upload.</p> </li> <li> <p> APPIUM_RUBY_TEST_SPEC: An Appium Ruby test spec
     * upload.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT_TEST_SPEC: An Appium Java JUnit
     * test spec upload for a web app.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_SPEC: An Appium Java TestNG test spec upload for
     * a web app.</p> </li> <li> <p>APPIUM_WEB_PYTHON_TEST_SPEC: An Appium Python test
     * spec upload for a web app.</p> </li> <li> <p>APPIUM_WEB_NODE_TEST_SPEC: An
     * Appium Node.js test spec upload for a web app.</p> </li> <li>
     * <p>APPIUM_WEB_RUBY_TEST_SPEC: An Appium Ruby test spec upload for a web app.</p>
     * </li> <li> <p>INSTRUMENTATION_TEST_SPEC: An instrumentation test spec
     * upload.</p> </li> <li> <p>XCTEST_UI_TEST_SPEC: An Xcode UI test spec upload.</p>
     * </li> </ul>
     */
    inline void SetType(UploadType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of upload.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>ANDROID_APP: An Android upload.</p> </li> <li> <p>IOS_APP: An iOS upload.</p>
     * </li> <li> <p>WEB_APP: A web application upload.</p> </li> <li>
     * <p>EXTERNAL_DATA: An external data upload.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT_TEST_PACKAGE: An Appium Java JUnit test package upload.</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test
     * package upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_PACKAGE: An Appium Python
     * test package upload.</p> </li> <li> <p>APPIUM_NODE_TEST_PACKAGE: An Appium
     * Node.js test package upload.</p> </li> <li> <p>APPIUM_RUBY_TEST_PACKAGE: An
     * Appium Ruby test package upload.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE: An Appium Java JUnit test package upload
     * for a web app.</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE: An Appium
     * Java TestNG test package upload for a web app.</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON_TEST_PACKAGE: An Appium Python test package upload for a
     * web app.</p> </li> <li> <p>APPIUM_WEB_NODE_TEST_PACKAGE: An Appium Node.js test
     * package upload for a web app.</p> </li> <li> <p>APPIUM_WEB_RUBY_TEST_PACKAGE: An
     * Appium Ruby test package upload for a web app.</p> </li> <li>
     * <p>CALABASH_TEST_PACKAGE: A Calabash test package upload.</p> </li> <li>
     * <p>INSTRUMENTATION_TEST_PACKAGE: An instrumentation upload.</p> </li> <li>
     * <p>UIAUTOMATION_TEST_PACKAGE: A uiautomation test package upload.</p> </li> <li>
     * <p>UIAUTOMATOR_TEST_PACKAGE: A uiautomator test package upload.</p> </li> <li>
     * <p>XCTEST_TEST_PACKAGE: An Xcode test package upload.</p> </li> <li>
     * <p>XCTEST_UI_TEST_PACKAGE: An Xcode UI test package upload.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT_TEST_SPEC: An Appium Java JUnit test spec upload.</p> </li>
     * <li> <p>APPIUM_JAVA_TESTNG_TEST_SPEC: An Appium Java TestNG test spec
     * upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_SPEC: An Appium Python test spec
     * upload.</p> </li> <li> <p>APPIUM_NODE_TEST_SPEC: An Appium Node.js test spec
     * upload.</p> </li> <li> <p> APPIUM_RUBY_TEST_SPEC: An Appium Ruby test spec
     * upload.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT_TEST_SPEC: An Appium Java JUnit
     * test spec upload for a web app.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_SPEC: An Appium Java TestNG test spec upload for
     * a web app.</p> </li> <li> <p>APPIUM_WEB_PYTHON_TEST_SPEC: An Appium Python test
     * spec upload for a web app.</p> </li> <li> <p>APPIUM_WEB_NODE_TEST_SPEC: An
     * Appium Node.js test spec upload for a web app.</p> </li> <li>
     * <p>APPIUM_WEB_RUBY_TEST_SPEC: An Appium Ruby test spec upload for a web app.</p>
     * </li> <li> <p>INSTRUMENTATION_TEST_SPEC: An instrumentation test spec
     * upload.</p> </li> <li> <p>XCTEST_UI_TEST_SPEC: An Xcode UI test spec upload.</p>
     * </li> </ul>
     */
    inline ListUploadsRequest& WithType(const UploadType& value) { SetType(value); return *this;}

    /**
     * <p>The type of upload.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>ANDROID_APP: An Android upload.</p> </li> <li> <p>IOS_APP: An iOS upload.</p>
     * </li> <li> <p>WEB_APP: A web application upload.</p> </li> <li>
     * <p>EXTERNAL_DATA: An external data upload.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT_TEST_PACKAGE: An Appium Java JUnit test package upload.</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG_TEST_PACKAGE: An Appium Java TestNG test
     * package upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_PACKAGE: An Appium Python
     * test package upload.</p> </li> <li> <p>APPIUM_NODE_TEST_PACKAGE: An Appium
     * Node.js test package upload.</p> </li> <li> <p>APPIUM_RUBY_TEST_PACKAGE: An
     * Appium Ruby test package upload.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE: An Appium Java JUnit test package upload
     * for a web app.</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE: An Appium
     * Java TestNG test package upload for a web app.</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON_TEST_PACKAGE: An Appium Python test package upload for a
     * web app.</p> </li> <li> <p>APPIUM_WEB_NODE_TEST_PACKAGE: An Appium Node.js test
     * package upload for a web app.</p> </li> <li> <p>APPIUM_WEB_RUBY_TEST_PACKAGE: An
     * Appium Ruby test package upload for a web app.</p> </li> <li>
     * <p>CALABASH_TEST_PACKAGE: A Calabash test package upload.</p> </li> <li>
     * <p>INSTRUMENTATION_TEST_PACKAGE: An instrumentation upload.</p> </li> <li>
     * <p>UIAUTOMATION_TEST_PACKAGE: A uiautomation test package upload.</p> </li> <li>
     * <p>UIAUTOMATOR_TEST_PACKAGE: A uiautomator test package upload.</p> </li> <li>
     * <p>XCTEST_TEST_PACKAGE: An Xcode test package upload.</p> </li> <li>
     * <p>XCTEST_UI_TEST_PACKAGE: An Xcode UI test package upload.</p> </li> <li>
     * <p>APPIUM_JAVA_JUNIT_TEST_SPEC: An Appium Java JUnit test spec upload.</p> </li>
     * <li> <p>APPIUM_JAVA_TESTNG_TEST_SPEC: An Appium Java TestNG test spec
     * upload.</p> </li> <li> <p>APPIUM_PYTHON_TEST_SPEC: An Appium Python test spec
     * upload.</p> </li> <li> <p>APPIUM_NODE_TEST_SPEC: An Appium Node.js test spec
     * upload.</p> </li> <li> <p> APPIUM_RUBY_TEST_SPEC: An Appium Ruby test spec
     * upload.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT_TEST_SPEC: An Appium Java JUnit
     * test spec upload for a web app.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_SPEC: An Appium Java TestNG test spec upload for
     * a web app.</p> </li> <li> <p>APPIUM_WEB_PYTHON_TEST_SPEC: An Appium Python test
     * spec upload for a web app.</p> </li> <li> <p>APPIUM_WEB_NODE_TEST_SPEC: An
     * Appium Node.js test spec upload for a web app.</p> </li> <li>
     * <p>APPIUM_WEB_RUBY_TEST_SPEC: An Appium Ruby test spec upload for a web app.</p>
     * </li> <li> <p>INSTRUMENTATION_TEST_SPEC: An instrumentation test spec
     * upload.</p> </li> <li> <p>XCTEST_UI_TEST_SPEC: An Xcode UI test spec upload.</p>
     * </li> </ul>
     */
    inline ListUploadsRequest& WithType(UploadType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListUploadsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListUploadsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListUploadsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    UploadType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
