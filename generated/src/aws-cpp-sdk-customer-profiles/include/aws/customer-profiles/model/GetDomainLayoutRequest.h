/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class GetDomainLayoutRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API GetDomainLayoutRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDomainLayout"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    GetDomainLayoutRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the layout.</p>
     */
    inline const Aws::String& GetLayoutDefinitionName() const { return m_layoutDefinitionName; }
    inline bool LayoutDefinitionNameHasBeenSet() const { return m_layoutDefinitionNameHasBeenSet; }
    template<typename LayoutDefinitionNameT = Aws::String>
    void SetLayoutDefinitionName(LayoutDefinitionNameT&& value) { m_layoutDefinitionNameHasBeenSet = true; m_layoutDefinitionName = std::forward<LayoutDefinitionNameT>(value); }
    template<typename LayoutDefinitionNameT = Aws::String>
    GetDomainLayoutRequest& WithLayoutDefinitionName(LayoutDefinitionNameT&& value) { SetLayoutDefinitionName(std::forward<LayoutDefinitionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_layoutDefinitionName;
    bool m_layoutDefinitionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
