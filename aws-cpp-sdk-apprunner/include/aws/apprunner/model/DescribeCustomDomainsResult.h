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
    AWS_APPRUNNER_API DescribeCustomDomainsResult();
    AWS_APPRUNNER_API DescribeCustomDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API DescribeCustomDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The App Runner subdomain of the App Runner service. The associated custom
     * domain names are mapped to this target name.</p>
     */
    inline const Aws::String& GetDNSTarget() const{ return m_dNSTarget; }

    /**
     * <p>The App Runner subdomain of the App Runner service. The associated custom
     * domain names are mapped to this target name.</p>
     */
    inline void SetDNSTarget(const Aws::String& value) { m_dNSTarget = value; }

    /**
     * <p>The App Runner subdomain of the App Runner service. The associated custom
     * domain names are mapped to this target name.</p>
     */
    inline void SetDNSTarget(Aws::String&& value) { m_dNSTarget = std::move(value); }

    /**
     * <p>The App Runner subdomain of the App Runner service. The associated custom
     * domain names are mapped to this target name.</p>
     */
    inline void SetDNSTarget(const char* value) { m_dNSTarget.assign(value); }

    /**
     * <p>The App Runner subdomain of the App Runner service. The associated custom
     * domain names are mapped to this target name.</p>
     */
    inline DescribeCustomDomainsResult& WithDNSTarget(const Aws::String& value) { SetDNSTarget(value); return *this;}

    /**
     * <p>The App Runner subdomain of the App Runner service. The associated custom
     * domain names are mapped to this target name.</p>
     */
    inline DescribeCustomDomainsResult& WithDNSTarget(Aws::String&& value) { SetDNSTarget(std::move(value)); return *this;}

    /**
     * <p>The App Runner subdomain of the App Runner service. The associated custom
     * domain names are mapped to this target name.</p>
     */
    inline DescribeCustomDomainsResult& WithDNSTarget(const char* value) { SetDNSTarget(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service whose associated
     * custom domain names you want to describe.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service whose associated
     * custom domain names you want to describe.</p>
     */
    inline void SetServiceArn(const Aws::String& value) { m_serviceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service whose associated
     * custom domain names you want to describe.</p>
     */
    inline void SetServiceArn(Aws::String&& value) { m_serviceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service whose associated
     * custom domain names you want to describe.</p>
     */
    inline void SetServiceArn(const char* value) { m_serviceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service whose associated
     * custom domain names you want to describe.</p>
     */
    inline DescribeCustomDomainsResult& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service whose associated
     * custom domain names you want to describe.</p>
     */
    inline DescribeCustomDomainsResult& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service whose associated
     * custom domain names you want to describe.</p>
     */
    inline DescribeCustomDomainsResult& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}


    /**
     * <p>A list of descriptions of custom domain names that are associated with the
     * service. In a paginated request, the request returns up to
     * <code>MaxResults</code> records per call.</p>
     */
    inline const Aws::Vector<CustomDomain>& GetCustomDomains() const{ return m_customDomains; }

    /**
     * <p>A list of descriptions of custom domain names that are associated with the
     * service. In a paginated request, the request returns up to
     * <code>MaxResults</code> records per call.</p>
     */
    inline void SetCustomDomains(const Aws::Vector<CustomDomain>& value) { m_customDomains = value; }

    /**
     * <p>A list of descriptions of custom domain names that are associated with the
     * service. In a paginated request, the request returns up to
     * <code>MaxResults</code> records per call.</p>
     */
    inline void SetCustomDomains(Aws::Vector<CustomDomain>&& value) { m_customDomains = std::move(value); }

    /**
     * <p>A list of descriptions of custom domain names that are associated with the
     * service. In a paginated request, the request returns up to
     * <code>MaxResults</code> records per call.</p>
     */
    inline DescribeCustomDomainsResult& WithCustomDomains(const Aws::Vector<CustomDomain>& value) { SetCustomDomains(value); return *this;}

    /**
     * <p>A list of descriptions of custom domain names that are associated with the
     * service. In a paginated request, the request returns up to
     * <code>MaxResults</code> records per call.</p>
     */
    inline DescribeCustomDomainsResult& WithCustomDomains(Aws::Vector<CustomDomain>&& value) { SetCustomDomains(std::move(value)); return *this;}

    /**
     * <p>A list of descriptions of custom domain names that are associated with the
     * service. In a paginated request, the request returns up to
     * <code>MaxResults</code> records per call.</p>
     */
    inline DescribeCustomDomainsResult& AddCustomDomains(const CustomDomain& value) { m_customDomains.push_back(value); return *this; }

    /**
     * <p>A list of descriptions of custom domain names that are associated with the
     * service. In a paginated request, the request returns up to
     * <code>MaxResults</code> records per call.</p>
     */
    inline DescribeCustomDomainsResult& AddCustomDomains(CustomDomain&& value) { m_customDomains.push_back(std::move(value)); return *this; }


    /**
     * <p>DNS Target records for the custom domains of this Amazon VPC. </p>
     */
    inline const Aws::Vector<VpcDNSTarget>& GetVpcDNSTargets() const{ return m_vpcDNSTargets; }

    /**
     * <p>DNS Target records for the custom domains of this Amazon VPC. </p>
     */
    inline void SetVpcDNSTargets(const Aws::Vector<VpcDNSTarget>& value) { m_vpcDNSTargets = value; }

    /**
     * <p>DNS Target records for the custom domains of this Amazon VPC. </p>
     */
    inline void SetVpcDNSTargets(Aws::Vector<VpcDNSTarget>&& value) { m_vpcDNSTargets = std::move(value); }

    /**
     * <p>DNS Target records for the custom domains of this Amazon VPC. </p>
     */
    inline DescribeCustomDomainsResult& WithVpcDNSTargets(const Aws::Vector<VpcDNSTarget>& value) { SetVpcDNSTargets(value); return *this;}

    /**
     * <p>DNS Target records for the custom domains of this Amazon VPC. </p>
     */
    inline DescribeCustomDomainsResult& WithVpcDNSTargets(Aws::Vector<VpcDNSTarget>&& value) { SetVpcDNSTargets(std::move(value)); return *this;}

    /**
     * <p>DNS Target records for the custom domains of this Amazon VPC. </p>
     */
    inline DescribeCustomDomainsResult& AddVpcDNSTargets(const VpcDNSTarget& value) { m_vpcDNSTargets.push_back(value); return *this; }

    /**
     * <p>DNS Target records for the custom domains of this Amazon VPC. </p>
     */
    inline DescribeCustomDomainsResult& AddVpcDNSTargets(VpcDNSTarget&& value) { m_vpcDNSTargets.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline DescribeCustomDomainsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline DescribeCustomDomainsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline DescribeCustomDomainsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_dNSTarget;

    Aws::String m_serviceArn;

    Aws::Vector<CustomDomain> m_customDomains;

    Aws::Vector<VpcDNSTarget> m_vpcDNSTargets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
