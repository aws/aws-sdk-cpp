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
  class AssociateCustomDomainResult
  {
  public:
    AWS_APPRUNNER_API AssociateCustomDomainResult();
    AWS_APPRUNNER_API AssociateCustomDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API AssociateCustomDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The App Runner subdomain of the App Runner service. The custom domain name is
     * mapped to this target name.</p>
     */
    inline const Aws::String& GetDNSTarget() const{ return m_dNSTarget; }
    inline void SetDNSTarget(const Aws::String& value) { m_dNSTarget = value; }
    inline void SetDNSTarget(Aws::String&& value) { m_dNSTarget = std::move(value); }
    inline void SetDNSTarget(const char* value) { m_dNSTarget.assign(value); }
    inline AssociateCustomDomainResult& WithDNSTarget(const Aws::String& value) { SetDNSTarget(value); return *this;}
    inline AssociateCustomDomainResult& WithDNSTarget(Aws::String&& value) { SetDNSTarget(std::move(value)); return *this;}
    inline AssociateCustomDomainResult& WithDNSTarget(const char* value) { SetDNSTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service with which a custom
     * domain name is associated.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }
    inline void SetServiceArn(const Aws::String& value) { m_serviceArn = value; }
    inline void SetServiceArn(Aws::String&& value) { m_serviceArn = std::move(value); }
    inline void SetServiceArn(const char* value) { m_serviceArn.assign(value); }
    inline AssociateCustomDomainResult& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}
    inline AssociateCustomDomainResult& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}
    inline AssociateCustomDomainResult& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the domain name that's being associated.</p>
     */
    inline const CustomDomain& GetCustomDomain() const{ return m_customDomain; }
    inline void SetCustomDomain(const CustomDomain& value) { m_customDomain = value; }
    inline void SetCustomDomain(CustomDomain&& value) { m_customDomain = std::move(value); }
    inline AssociateCustomDomainResult& WithCustomDomain(const CustomDomain& value) { SetCustomDomain(value); return *this;}
    inline AssociateCustomDomainResult& WithCustomDomain(CustomDomain&& value) { SetCustomDomain(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>DNS Target records for the custom domains of this Amazon VPC. </p>
     */
    inline const Aws::Vector<VpcDNSTarget>& GetVpcDNSTargets() const{ return m_vpcDNSTargets; }
    inline void SetVpcDNSTargets(const Aws::Vector<VpcDNSTarget>& value) { m_vpcDNSTargets = value; }
    inline void SetVpcDNSTargets(Aws::Vector<VpcDNSTarget>&& value) { m_vpcDNSTargets = std::move(value); }
    inline AssociateCustomDomainResult& WithVpcDNSTargets(const Aws::Vector<VpcDNSTarget>& value) { SetVpcDNSTargets(value); return *this;}
    inline AssociateCustomDomainResult& WithVpcDNSTargets(Aws::Vector<VpcDNSTarget>&& value) { SetVpcDNSTargets(std::move(value)); return *this;}
    inline AssociateCustomDomainResult& AddVpcDNSTargets(const VpcDNSTarget& value) { m_vpcDNSTargets.push_back(value); return *this; }
    inline AssociateCustomDomainResult& AddVpcDNSTargets(VpcDNSTarget&& value) { m_vpcDNSTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateCustomDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateCustomDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateCustomDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_dNSTarget;

    Aws::String m_serviceArn;

    CustomDomain m_customDomain;

    Aws::Vector<VpcDNSTarget> m_vpcDNSTargets;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
