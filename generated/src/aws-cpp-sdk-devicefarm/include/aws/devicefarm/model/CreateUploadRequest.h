/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Represents a request to the create upload operation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateUploadRequest">AWS
   * API Reference</a></p>
   */
  class CreateUploadRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API CreateUploadRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUpload"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the project for the upload.</p>
     */
    inline const Aws::String& GetProjectArn() const { return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    template<typename ProjectArnT = Aws::String>
    void SetProjectArn(ProjectArnT&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::forward<ProjectArnT>(value); }
    template<typename ProjectArnT = Aws::String>
    CreateUploadRequest& WithProjectArn(ProjectArnT&& value) { SetProjectArn(std::forward<ProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload's file name. The name should not contain any forward slashes
     * (<code>/</code>). If you are uploading an iOS app, the file name must end with
     * the <code>.ipa</code> extension. If you are uploading an Android app, the file
     * name must end with the <code>.apk</code> extension. For all others, the file
     * name must end with the <code>.zip</code> file extension.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateUploadRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload's upload type.</p> <p>Must be one of the following values:</p>
     * <ul> <li> <p>ANDROID_APP</p> </li> <li> <p>IOS_APP</p> </li> <li> <p>WEB_APP</p>
     * </li> <li> <p>EXTERNAL_DATA</p> </li> <li> <p>APPIUM_JAVA_JUNIT_TEST_PACKAGE</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG_TEST_PACKAGE</p> </li> <li>
     * <p>APPIUM_PYTHON_TEST_PACKAGE</p> </li> <li> <p>APPIUM_NODE_TEST_PACKAGE</p>
     * </li> <li> <p>APPIUM_RUBY_TEST_PACKAGE</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT_TEST_PACKAGE</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_PACKAGE</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON_TEST_PACKAGE</p> </li> <li>
     * <p>APPIUM_WEB_NODE_TEST_PACKAGE</p> </li> <li>
     * <p>APPIUM_WEB_RUBY_TEST_PACKAGE</p> </li> <li>
     * <p>INSTRUMENTATION_TEST_PACKAGE</p> </li> <li> <p>XCTEST_TEST_PACKAGE</p> </li>
     * <li> <p>XCTEST_UI_TEST_PACKAGE</p> </li> <li> <p>APPIUM_JAVA_JUNIT_TEST_SPEC</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG_TEST_SPEC</p> </li> <li>
     * <p>APPIUM_PYTHON_TEST_SPEC</p> </li> <li> <p>APPIUM_NODE_TEST_SPEC</p> </li>
     * <li> <p>APPIUM_RUBY_TEST_SPEC</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT_TEST_SPEC</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_SPEC</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON_TEST_SPEC</p> </li> <li> <p>APPIUM_WEB_NODE_TEST_SPEC</p>
     * </li> <li> <p>APPIUM_WEB_RUBY_TEST_SPEC</p> </li> <li>
     * <p>INSTRUMENTATION_TEST_SPEC</p> </li> <li> <p>XCTEST_UI_TEST_SPEC</p> </li>
     * </ul> <p> If you call <code>CreateUpload</code> with <code>WEB_APP</code>
     * specified, AWS Device Farm throws an <code>ArgumentException</code> error.</p>
     */
    inline UploadType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(UploadType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateUploadRequest& WithType(UploadType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload's content type (for example,
     * <code>application/octet-stream</code>).</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    CreateUploadRequest& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    UploadType m_type{UploadType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
