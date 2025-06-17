/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/DisassociateConfigurationRequest.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class BatchDisassociateCodeSecurityScanConfigurationRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API BatchDisassociateCodeSecurityScanConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDisassociateCodeSecurityScanConfiguration"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of code repositories to disassociate from the specified scan
     * configuration.</p>
     */
    inline const Aws::Vector<DisassociateConfigurationRequest>& GetDisassociateConfigurationRequests() const { return m_disassociateConfigurationRequests; }
    inline bool DisassociateConfigurationRequestsHasBeenSet() const { return m_disassociateConfigurationRequestsHasBeenSet; }
    template<typename DisassociateConfigurationRequestsT = Aws::Vector<DisassociateConfigurationRequest>>
    void SetDisassociateConfigurationRequests(DisassociateConfigurationRequestsT&& value) { m_disassociateConfigurationRequestsHasBeenSet = true; m_disassociateConfigurationRequests = std::forward<DisassociateConfigurationRequestsT>(value); }
    template<typename DisassociateConfigurationRequestsT = Aws::Vector<DisassociateConfigurationRequest>>
    BatchDisassociateCodeSecurityScanConfigurationRequest& WithDisassociateConfigurationRequests(DisassociateConfigurationRequestsT&& value) { SetDisassociateConfigurationRequests(std::forward<DisassociateConfigurationRequestsT>(value)); return *this;}
    template<typename DisassociateConfigurationRequestsT = DisassociateConfigurationRequest>
    BatchDisassociateCodeSecurityScanConfigurationRequest& AddDisassociateConfigurationRequests(DisassociateConfigurationRequestsT&& value) { m_disassociateConfigurationRequestsHasBeenSet = true; m_disassociateConfigurationRequests.emplace_back(std::forward<DisassociateConfigurationRequestsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DisassociateConfigurationRequest> m_disassociateConfigurationRequests;
    bool m_disassociateConfigurationRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
