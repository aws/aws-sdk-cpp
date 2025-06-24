/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/AssociateConfigurationRequest.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class BatchAssociateCodeSecurityScanConfigurationRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API BatchAssociateCodeSecurityScanConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchAssociateCodeSecurityScanConfiguration"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of code repositories to associate with the specified scan
     * configuration.</p>
     */
    inline const Aws::Vector<AssociateConfigurationRequest>& GetAssociateConfigurationRequests() const { return m_associateConfigurationRequests; }
    inline bool AssociateConfigurationRequestsHasBeenSet() const { return m_associateConfigurationRequestsHasBeenSet; }
    template<typename AssociateConfigurationRequestsT = Aws::Vector<AssociateConfigurationRequest>>
    void SetAssociateConfigurationRequests(AssociateConfigurationRequestsT&& value) { m_associateConfigurationRequestsHasBeenSet = true; m_associateConfigurationRequests = std::forward<AssociateConfigurationRequestsT>(value); }
    template<typename AssociateConfigurationRequestsT = Aws::Vector<AssociateConfigurationRequest>>
    BatchAssociateCodeSecurityScanConfigurationRequest& WithAssociateConfigurationRequests(AssociateConfigurationRequestsT&& value) { SetAssociateConfigurationRequests(std::forward<AssociateConfigurationRequestsT>(value)); return *this;}
    template<typename AssociateConfigurationRequestsT = AssociateConfigurationRequest>
    BatchAssociateCodeSecurityScanConfigurationRequest& AddAssociateConfigurationRequests(AssociateConfigurationRequestsT&& value) { m_associateConfigurationRequestsHasBeenSet = true; m_associateConfigurationRequests.emplace_back(std::forward<AssociateConfigurationRequestsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AssociateConfigurationRequest> m_associateConfigurationRequests;
    bool m_associateConfigurationRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
