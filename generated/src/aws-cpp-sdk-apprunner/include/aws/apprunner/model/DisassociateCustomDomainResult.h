/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/CustomDomain.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apprunner/model/VpcDNSTarget.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppRunner
{
namespace Model
{
  class DisassociateCustomDomainResult
  {
  public:
    AWS_APPRUNNER_API DisassociateCustomDomainResult() = default;
    AWS_APPRUNNER_API DisassociateCustomDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API DisassociateCustomDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The App Runner subdomain of the App Runner service. The disassociated custom
     * domain name was mapped to this target name.</p>
     */
    inline const Aws::String& GetDNSTarget() const { return m_dNSTarget; }
    template<typename DNSTargetT = Aws::String>
    void SetDNSTarget(DNSTargetT&& value) { m_dNSTargetHasBeenSet = true; m_dNSTarget = std::forward<DNSTargetT>(value); }
    template<typename DNSTargetT = Aws::String>
    DisassociateCustomDomainResult& WithDNSTarget(DNSTargetT&& value) { SetDNSTarget(std::forward<DNSTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service that a custom domain
     * name is disassociated from.</p>
     */
    inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
    template<typename ServiceArnT = Aws::String>
    void SetServiceArn(ServiceArnT&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::forward<ServiceArnT>(value); }
    template<typename ServiceArnT = Aws::String>
    DisassociateCustomDomainResult& WithServiceArn(ServiceArnT&& value) { SetServiceArn(std::forward<ServiceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the domain name that's being disassociated.</p>
     */
    inline const CustomDomain& GetCustomDomain() const { return m_customDomain; }
    template<typename CustomDomainT = CustomDomain>
    void SetCustomDomain(CustomDomainT&& value) { m_customDomainHasBeenSet = true; m_customDomain = std::forward<CustomDomainT>(value); }
    template<typename CustomDomainT = CustomDomain>
    DisassociateCustomDomainResult& WithCustomDomain(CustomDomainT&& value) { SetCustomDomain(std::forward<CustomDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>DNS Target records for the custom domains of this Amazon VPC. </p>
     */
    inline const Aws::Vector<VpcDNSTarget>& GetVpcDNSTargets() const { return m_vpcDNSTargets; }
    template<typename VpcDNSTargetsT = Aws::Vector<VpcDNSTarget>>
    void SetVpcDNSTargets(VpcDNSTargetsT&& value) { m_vpcDNSTargetsHasBeenSet = true; m_vpcDNSTargets = std::forward<VpcDNSTargetsT>(value); }
    template<typename VpcDNSTargetsT = Aws::Vector<VpcDNSTarget>>
    DisassociateCustomDomainResult& WithVpcDNSTargets(VpcDNSTargetsT&& value) { SetVpcDNSTargets(std::forward<VpcDNSTargetsT>(value)); return *this;}
    template<typename VpcDNSTargetsT = VpcDNSTarget>
    DisassociateCustomDomainResult& AddVpcDNSTargets(VpcDNSTargetsT&& value) { m_vpcDNSTargetsHasBeenSet = true; m_vpcDNSTargets.emplace_back(std::forward<VpcDNSTargetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisassociateCustomDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dNSTarget;
    bool m_dNSTargetHasBeenSet = false;

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    CustomDomain m_customDomain;
    bool m_customDomainHasBeenSet = false;

    Aws::Vector<VpcDNSTarget> m_vpcDNSTargets;
    bool m_vpcDNSTargetsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
