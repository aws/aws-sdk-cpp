﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/TLSSecurityPolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Options to configure endpoint for the Elasticsearch domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DomainEndpointOptions">AWS
   * API Reference</a></p>
   */
  class DomainEndpointOptions
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DomainEndpointOptions();
    AWS_ELASTICSEARCHSERVICE_API DomainEndpointOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API DomainEndpointOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify if only HTTPS endpoint should be enabled for the Elasticsearch
     * domain.</p>
     */
    inline bool GetEnforceHTTPS() const{ return m_enforceHTTPS; }
    inline bool EnforceHTTPSHasBeenSet() const { return m_enforceHTTPSHasBeenSet; }
    inline void SetEnforceHTTPS(bool value) { m_enforceHTTPSHasBeenSet = true; m_enforceHTTPS = value; }
    inline DomainEndpointOptions& WithEnforceHTTPS(bool value) { SetEnforceHTTPS(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the TLS security policy that needs to be applied to the HTTPS
     * endpoint of Elasticsearch domain. <br/> It can be one of the following values:
     * <ul> <li><b>Policy-Min-TLS-1-0-2019-07: </b> TLS security policy that supports
     * TLS version 1.0 to TLS version 1.2</li> <li><b>Policy-Min-TLS-1-2-2019-07: </b>
     * TLS security policy that supports only TLS version 1.2</li>
     * <li><b>Policy-Min-TLS-1-2-PFS-2023-10: </b> TLS security policy that supports
     * TLS version 1.2 to TLS version 1.3 with perfect forward secrecy cipher
     * suites</li> </ul> </p>
     */
    inline const TLSSecurityPolicy& GetTLSSecurityPolicy() const{ return m_tLSSecurityPolicy; }
    inline bool TLSSecurityPolicyHasBeenSet() const { return m_tLSSecurityPolicyHasBeenSet; }
    inline void SetTLSSecurityPolicy(const TLSSecurityPolicy& value) { m_tLSSecurityPolicyHasBeenSet = true; m_tLSSecurityPolicy = value; }
    inline void SetTLSSecurityPolicy(TLSSecurityPolicy&& value) { m_tLSSecurityPolicyHasBeenSet = true; m_tLSSecurityPolicy = std::move(value); }
    inline DomainEndpointOptions& WithTLSSecurityPolicy(const TLSSecurityPolicy& value) { SetTLSSecurityPolicy(value); return *this;}
    inline DomainEndpointOptions& WithTLSSecurityPolicy(TLSSecurityPolicy&& value) { SetTLSSecurityPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify if custom endpoint should be enabled for the Elasticsearch
     * domain.</p>
     */
    inline bool GetCustomEndpointEnabled() const{ return m_customEndpointEnabled; }
    inline bool CustomEndpointEnabledHasBeenSet() const { return m_customEndpointEnabledHasBeenSet; }
    inline void SetCustomEndpointEnabled(bool value) { m_customEndpointEnabledHasBeenSet = true; m_customEndpointEnabled = value; }
    inline DomainEndpointOptions& WithCustomEndpointEnabled(bool value) { SetCustomEndpointEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the fully qualified domain for your custom endpoint.</p>
     */
    inline const Aws::String& GetCustomEndpoint() const{ return m_customEndpoint; }
    inline bool CustomEndpointHasBeenSet() const { return m_customEndpointHasBeenSet; }
    inline void SetCustomEndpoint(const Aws::String& value) { m_customEndpointHasBeenSet = true; m_customEndpoint = value; }
    inline void SetCustomEndpoint(Aws::String&& value) { m_customEndpointHasBeenSet = true; m_customEndpoint = std::move(value); }
    inline void SetCustomEndpoint(const char* value) { m_customEndpointHasBeenSet = true; m_customEndpoint.assign(value); }
    inline DomainEndpointOptions& WithCustomEndpoint(const Aws::String& value) { SetCustomEndpoint(value); return *this;}
    inline DomainEndpointOptions& WithCustomEndpoint(Aws::String&& value) { SetCustomEndpoint(std::move(value)); return *this;}
    inline DomainEndpointOptions& WithCustomEndpoint(const char* value) { SetCustomEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify ACM certificate ARN for your custom endpoint.</p>
     */
    inline const Aws::String& GetCustomEndpointCertificateArn() const{ return m_customEndpointCertificateArn; }
    inline bool CustomEndpointCertificateArnHasBeenSet() const { return m_customEndpointCertificateArnHasBeenSet; }
    inline void SetCustomEndpointCertificateArn(const Aws::String& value) { m_customEndpointCertificateArnHasBeenSet = true; m_customEndpointCertificateArn = value; }
    inline void SetCustomEndpointCertificateArn(Aws::String&& value) { m_customEndpointCertificateArnHasBeenSet = true; m_customEndpointCertificateArn = std::move(value); }
    inline void SetCustomEndpointCertificateArn(const char* value) { m_customEndpointCertificateArnHasBeenSet = true; m_customEndpointCertificateArn.assign(value); }
    inline DomainEndpointOptions& WithCustomEndpointCertificateArn(const Aws::String& value) { SetCustomEndpointCertificateArn(value); return *this;}
    inline DomainEndpointOptions& WithCustomEndpointCertificateArn(Aws::String&& value) { SetCustomEndpointCertificateArn(std::move(value)); return *this;}
    inline DomainEndpointOptions& WithCustomEndpointCertificateArn(const char* value) { SetCustomEndpointCertificateArn(value); return *this;}
    ///@}
  private:

    bool m_enforceHTTPS;
    bool m_enforceHTTPSHasBeenSet = false;

    TLSSecurityPolicy m_tLSSecurityPolicy;
    bool m_tLSSecurityPolicyHasBeenSet = false;

    bool m_customEndpointEnabled;
    bool m_customEndpointEnabledHasBeenSet = false;

    Aws::String m_customEndpoint;
    bool m_customEndpointHasBeenSet = false;

    Aws::String m_customEndpointCertificateArn;
    bool m_customEndpointCertificateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
