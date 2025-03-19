/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apprunner/model/CustomDomain.h>
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
  class DescribeCustomDomainsResult
  {
  public:
    AWS_APPRUNNER_API DescribeCustomDomainsResult() = default;
    AWS_APPRUNNER_API DescribeCustomDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API DescribeCustomDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The App Runner subdomain of the App Runner service. The associated custom
     * domain names are mapped to this target name.</p>
     */
    inline const Aws::String& GetDNSTarget() const { return m_dNSTarget; }
    template<typename DNSTargetT = Aws::String>
    void SetDNSTarget(DNSTargetT&& value) { m_dNSTargetHasBeenSet = true; m_dNSTarget = std::forward<DNSTargetT>(value); }
    template<typename DNSTargetT = Aws::String>
    DescribeCustomDomainsResult& WithDNSTarget(DNSTargetT&& value) { SetDNSTarget(std::forward<DNSTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service whose associated
     * custom domain names you want to describe.</p>
     */
    inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
    template<typename ServiceArnT = Aws::String>
    void SetServiceArn(ServiceArnT&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::forward<ServiceArnT>(value); }
    template<typename ServiceArnT = Aws::String>
    DescribeCustomDomainsResult& WithServiceArn(ServiceArnT&& value) { SetServiceArn(std::forward<ServiceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of descriptions of custom domain names that are associated with the
     * service. In a paginated request, the request returns up to
     * <code>MaxResults</code> records per call.</p>
     */
    inline const Aws::Vector<CustomDomain>& GetCustomDomains() const { return m_customDomains; }
    template<typename CustomDomainsT = Aws::Vector<CustomDomain>>
    void SetCustomDomains(CustomDomainsT&& value) { m_customDomainsHasBeenSet = true; m_customDomains = std::forward<CustomDomainsT>(value); }
    template<typename CustomDomainsT = Aws::Vector<CustomDomain>>
    DescribeCustomDomainsResult& WithCustomDomains(CustomDomainsT&& value) { SetCustomDomains(std::forward<CustomDomainsT>(value)); return *this;}
    template<typename CustomDomainsT = CustomDomain>
    DescribeCustomDomainsResult& AddCustomDomains(CustomDomainsT&& value) { m_customDomainsHasBeenSet = true; m_customDomains.emplace_back(std::forward<CustomDomainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>DNS Target records for the custom domains of this Amazon VPC. </p>
     */
    inline const Aws::Vector<VpcDNSTarget>& GetVpcDNSTargets() const { return m_vpcDNSTargets; }
    template<typename VpcDNSTargetsT = Aws::Vector<VpcDNSTarget>>
    void SetVpcDNSTargets(VpcDNSTargetsT&& value) { m_vpcDNSTargetsHasBeenSet = true; m_vpcDNSTargets = std::forward<VpcDNSTargetsT>(value); }
    template<typename VpcDNSTargetsT = Aws::Vector<VpcDNSTarget>>
    DescribeCustomDomainsResult& WithVpcDNSTargets(VpcDNSTargetsT&& value) { SetVpcDNSTargets(std::forward<VpcDNSTargetsT>(value)); return *this;}
    template<typename VpcDNSTargetsT = VpcDNSTarget>
    DescribeCustomDomainsResult& AddVpcDNSTargets(VpcDNSTargetsT&& value) { m_vpcDNSTargetsHasBeenSet = true; m_vpcDNSTargets.emplace_back(std::forward<VpcDNSTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeCustomDomainsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCustomDomainsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dNSTarget;
    bool m_dNSTargetHasBeenSet = false;

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::Vector<CustomDomain> m_customDomains;
    bool m_customDomainsHasBeenSet = false;

    Aws::Vector<VpcDNSTarget> m_vpcDNSTargets;
    bool m_vpcDNSTargetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
