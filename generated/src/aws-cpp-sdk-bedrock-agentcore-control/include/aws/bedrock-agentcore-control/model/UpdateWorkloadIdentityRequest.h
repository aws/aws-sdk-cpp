/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   */
  class UpdateWorkloadIdentityRequest : public BedrockAgentCoreControlRequest
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API UpdateWorkloadIdentityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkloadIdentity"; }

    AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the workload identity to update.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateWorkloadIdentityRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new list of allowed OAuth2 return URLs for resources associated with this
     * workload identity. This list replaces the existing list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedResourceOauth2ReturnUrls() const { return m_allowedResourceOauth2ReturnUrls; }
    inline bool AllowedResourceOauth2ReturnUrlsHasBeenSet() const { return m_allowedResourceOauth2ReturnUrlsHasBeenSet; }
    template<typename AllowedResourceOauth2ReturnUrlsT = Aws::Vector<Aws::String>>
    void SetAllowedResourceOauth2ReturnUrls(AllowedResourceOauth2ReturnUrlsT&& value) { m_allowedResourceOauth2ReturnUrlsHasBeenSet = true; m_allowedResourceOauth2ReturnUrls = std::forward<AllowedResourceOauth2ReturnUrlsT>(value); }
    template<typename AllowedResourceOauth2ReturnUrlsT = Aws::Vector<Aws::String>>
    UpdateWorkloadIdentityRequest& WithAllowedResourceOauth2ReturnUrls(AllowedResourceOauth2ReturnUrlsT&& value) { SetAllowedResourceOauth2ReturnUrls(std::forward<AllowedResourceOauth2ReturnUrlsT>(value)); return *this;}
    template<typename AllowedResourceOauth2ReturnUrlsT = Aws::String>
    UpdateWorkloadIdentityRequest& AddAllowedResourceOauth2ReturnUrls(AllowedResourceOauth2ReturnUrlsT&& value) { m_allowedResourceOauth2ReturnUrlsHasBeenSet = true; m_allowedResourceOauth2ReturnUrls.emplace_back(std::forward<AllowedResourceOauth2ReturnUrlsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedResourceOauth2ReturnUrls;
    bool m_allowedResourceOauth2ReturnUrlsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
