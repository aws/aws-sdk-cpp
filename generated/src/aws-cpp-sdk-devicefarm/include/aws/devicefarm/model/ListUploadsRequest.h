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
   * <p>Represents a request to the list uploads operation.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListUploadsRequest">AWS
   * API Reference</a></p>
   */
  class ListUploadsRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API ListUploadsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListUploads"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to list
     * uploads.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ListUploadsRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of upload.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>ANDROID_APP</p> </li> <li> <p>IOS_APP</p> </li> <li> <p>WEB_APP</p> </li>
     * <li> <p>EXTERNAL_DATA</p> </li> <li> <p>APPIUM_JAVA_JUNIT_TEST_PACKAGE</p> </li>
     * <li> <p>APPIUM_JAVA_TESTNG_TEST_PACKAGE</p> </li> <li>
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
     * <li> <p> APPIUM_RUBY_TEST_SPEC</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT_TEST_SPEC</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG_TEST_SPEC</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON_TEST_SPEC</p> </li> <li> <p>APPIUM_WEB_NODE_TEST_SPEC</p>
     * </li> <li> <p>APPIUM_WEB_RUBY_TEST_SPEC</p> </li> <li>
     * <p>INSTRUMENTATION_TEST_SPEC</p> </li> <li> <p>XCTEST_UI_TEST_SPEC</p> </li>
     * </ul>
     */
    inline UploadType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(UploadType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ListUploadsRequest& WithType(UploadType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListUploadsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    UploadType m_type{UploadType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
