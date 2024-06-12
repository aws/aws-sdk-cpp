/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/AppTestRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppTest
{
namespace Model
{

  /**
   */
  class DeleteTestConfigurationRequest : public AppTestRequest
  {
  public:
    AWS_APPTEST_API DeleteTestConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTestConfiguration"; }

    AWS_APPTEST_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The test ID of the test configuration.</p>
     */
    inline const Aws::String& GetTestConfigurationId() const{ return m_testConfigurationId; }
    inline bool TestConfigurationIdHasBeenSet() const { return m_testConfigurationIdHasBeenSet; }
    inline void SetTestConfigurationId(const Aws::String& value) { m_testConfigurationIdHasBeenSet = true; m_testConfigurationId = value; }
    inline void SetTestConfigurationId(Aws::String&& value) { m_testConfigurationIdHasBeenSet = true; m_testConfigurationId = std::move(value); }
    inline void SetTestConfigurationId(const char* value) { m_testConfigurationIdHasBeenSet = true; m_testConfigurationId.assign(value); }
    inline DeleteTestConfigurationRequest& WithTestConfigurationId(const Aws::String& value) { SetTestConfigurationId(value); return *this;}
    inline DeleteTestConfigurationRequest& WithTestConfigurationId(Aws::String&& value) { SetTestConfigurationId(std::move(value)); return *this;}
    inline DeleteTestConfigurationRequest& WithTestConfigurationId(const char* value) { SetTestConfigurationId(value); return *this;}
    ///@}
  private:

    Aws::String m_testConfigurationId;
    bool m_testConfigurationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
