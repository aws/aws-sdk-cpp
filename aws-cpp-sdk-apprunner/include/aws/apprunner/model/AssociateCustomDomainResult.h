﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/CustomDomain.h>
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
  class AWS_APPRUNNER_API AssociateCustomDomainResult
  {
  public:
    AssociateCustomDomainResult();
    AssociateCustomDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AssociateCustomDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The App Runner subdomain of the App Runner service. The custom domain name is
     * mapped to this target name.</p>
     */
    inline const Aws::String& GetDNSTarget() const{ return m_dNSTarget; }

    /**
     * <p>The App Runner subdomain of the App Runner service. The custom domain name is
     * mapped to this target name.</p>
     */
    inline void SetDNSTarget(const Aws::String& value) { m_dNSTarget = value; }

    /**
     * <p>The App Runner subdomain of the App Runner service. The custom domain name is
     * mapped to this target name.</p>
     */
    inline void SetDNSTarget(Aws::String&& value) { m_dNSTarget = std::move(value); }

    /**
     * <p>The App Runner subdomain of the App Runner service. The custom domain name is
     * mapped to this target name.</p>
     */
    inline void SetDNSTarget(const char* value) { m_dNSTarget.assign(value); }

    /**
     * <p>The App Runner subdomain of the App Runner service. The custom domain name is
     * mapped to this target name.</p>
     */
    inline AssociateCustomDomainResult& WithDNSTarget(const Aws::String& value) { SetDNSTarget(value); return *this;}

    /**
     * <p>The App Runner subdomain of the App Runner service. The custom domain name is
     * mapped to this target name.</p>
     */
    inline AssociateCustomDomainResult& WithDNSTarget(Aws::String&& value) { SetDNSTarget(std::move(value)); return *this;}

    /**
     * <p>The App Runner subdomain of the App Runner service. The custom domain name is
     * mapped to this target name.</p>
     */
    inline AssociateCustomDomainResult& WithDNSTarget(const char* value) { SetDNSTarget(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service with which a custom
     * domain name is associated.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service with which a custom
     * domain name is associated.</p>
     */
    inline void SetServiceArn(const Aws::String& value) { m_serviceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service with which a custom
     * domain name is associated.</p>
     */
    inline void SetServiceArn(Aws::String&& value) { m_serviceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service with which a custom
     * domain name is associated.</p>
     */
    inline void SetServiceArn(const char* value) { m_serviceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service with which a custom
     * domain name is associated.</p>
     */
    inline AssociateCustomDomainResult& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service with which a custom
     * domain name is associated.</p>
     */
    inline AssociateCustomDomainResult& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service with which a custom
     * domain name is associated.</p>
     */
    inline AssociateCustomDomainResult& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}


    /**
     * <p>A description of the domain name that's being associated.</p>
     */
    inline const CustomDomain& GetCustomDomain() const{ return m_customDomain; }

    /**
     * <p>A description of the domain name that's being associated.</p>
     */
    inline void SetCustomDomain(const CustomDomain& value) { m_customDomain = value; }

    /**
     * <p>A description of the domain name that's being associated.</p>
     */
    inline void SetCustomDomain(CustomDomain&& value) { m_customDomain = std::move(value); }

    /**
     * <p>A description of the domain name that's being associated.</p>
     */
    inline AssociateCustomDomainResult& WithCustomDomain(const CustomDomain& value) { SetCustomDomain(value); return *this;}

    /**
     * <p>A description of the domain name that's being associated.</p>
     */
    inline AssociateCustomDomainResult& WithCustomDomain(CustomDomain&& value) { SetCustomDomain(std::move(value)); return *this;}

  private:

    Aws::String m_dNSTarget;

    Aws::String m_serviceArn;

    CustomDomain m_customDomain;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
