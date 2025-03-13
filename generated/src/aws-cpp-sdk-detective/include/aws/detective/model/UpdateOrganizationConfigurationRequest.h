/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/DetectiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Detective
{
namespace Model
{

  /**
   */
  class UpdateOrganizationConfigurationRequest : public DetectiveRequest
  {
  public:
    AWS_DETECTIVE_API UpdateOrganizationConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOrganizationConfiguration"; }

    AWS_DETECTIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the organization behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const { return m_graphArn; }
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }
    template<typename GraphArnT = Aws::String>
    void SetGraphArn(GraphArnT&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::forward<GraphArnT>(value); }
    template<typename GraphArnT = Aws::String>
    UpdateOrganizationConfigurationRequest& WithGraphArn(GraphArnT&& value) { SetGraphArn(std::forward<GraphArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to automatically enable new organization accounts as member
     * accounts in the organization behavior graph.</p>
     */
    inline bool GetAutoEnable() const { return m_autoEnable; }
    inline bool AutoEnableHasBeenSet() const { return m_autoEnableHasBeenSet; }
    inline void SetAutoEnable(bool value) { m_autoEnableHasBeenSet = true; m_autoEnable = value; }
    inline UpdateOrganizationConfigurationRequest& WithAutoEnable(bool value) { SetAutoEnable(value); return *this;}
    ///@}
  private:

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    bool m_autoEnable{false};
    bool m_autoEnableHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
