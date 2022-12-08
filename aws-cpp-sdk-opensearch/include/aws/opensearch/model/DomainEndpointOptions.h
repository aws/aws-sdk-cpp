/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/TLSSecurityPolicy.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Options to configure a custom endpoint for an OpenSearch Service
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DomainEndpointOptions">AWS
   * API Reference</a></p>
   */
  class DomainEndpointOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API DomainEndpointOptions();
    AWS_OPENSEARCHSERVICE_API DomainEndpointOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DomainEndpointOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>True to require that all traffic to the domain arrive over HTTPS.</p>
     */
    inline bool GetEnforceHTTPS() const{ return m_enforceHTTPS; }

    /**
     * <p>True to require that all traffic to the domain arrive over HTTPS.</p>
     */
    inline bool EnforceHTTPSHasBeenSet() const { return m_enforceHTTPSHasBeenSet; }

    /**
     * <p>True to require that all traffic to the domain arrive over HTTPS.</p>
     */
    inline void SetEnforceHTTPS(bool value) { m_enforceHTTPSHasBeenSet = true; m_enforceHTTPS = value; }

    /**
     * <p>True to require that all traffic to the domain arrive over HTTPS.</p>
     */
    inline DomainEndpointOptions& WithEnforceHTTPS(bool value) { SetEnforceHTTPS(value); return *this;}


    /**
     * <p>Specify the TLS security policy to apply to the HTTPS endpoint of the
     * domain.</p> <p> Can be one of the following values:</p> <ul> <li> <p>
     * <b>Policy-Min-TLS-1-0-2019-07:</b> TLS security policy which supports TLS
     * version 1.0 and higher.</p> </li> <li> <p> <b>Policy-Min-TLS-1-2-2019-07:</b>
     * TLS security policy which supports only TLS version 1.2 </p> </li> </ul>
     */
    inline const TLSSecurityPolicy& GetTLSSecurityPolicy() const{ return m_tLSSecurityPolicy; }

    /**
     * <p>Specify the TLS security policy to apply to the HTTPS endpoint of the
     * domain.</p> <p> Can be one of the following values:</p> <ul> <li> <p>
     * <b>Policy-Min-TLS-1-0-2019-07:</b> TLS security policy which supports TLS
     * version 1.0 and higher.</p> </li> <li> <p> <b>Policy-Min-TLS-1-2-2019-07:</b>
     * TLS security policy which supports only TLS version 1.2 </p> </li> </ul>
     */
    inline bool TLSSecurityPolicyHasBeenSet() const { return m_tLSSecurityPolicyHasBeenSet; }

    /**
     * <p>Specify the TLS security policy to apply to the HTTPS endpoint of the
     * domain.</p> <p> Can be one of the following values:</p> <ul> <li> <p>
     * <b>Policy-Min-TLS-1-0-2019-07:</b> TLS security policy which supports TLS
     * version 1.0 and higher.</p> </li> <li> <p> <b>Policy-Min-TLS-1-2-2019-07:</b>
     * TLS security policy which supports only TLS version 1.2 </p> </li> </ul>
     */
    inline void SetTLSSecurityPolicy(const TLSSecurityPolicy& value) { m_tLSSecurityPolicyHasBeenSet = true; m_tLSSecurityPolicy = value; }

    /**
     * <p>Specify the TLS security policy to apply to the HTTPS endpoint of the
     * domain.</p> <p> Can be one of the following values:</p> <ul> <li> <p>
     * <b>Policy-Min-TLS-1-0-2019-07:</b> TLS security policy which supports TLS
     * version 1.0 and higher.</p> </li> <li> <p> <b>Policy-Min-TLS-1-2-2019-07:</b>
     * TLS security policy which supports only TLS version 1.2 </p> </li> </ul>
     */
    inline void SetTLSSecurityPolicy(TLSSecurityPolicy&& value) { m_tLSSecurityPolicyHasBeenSet = true; m_tLSSecurityPolicy = std::move(value); }

    /**
     * <p>Specify the TLS security policy to apply to the HTTPS endpoint of the
     * domain.</p> <p> Can be one of the following values:</p> <ul> <li> <p>
     * <b>Policy-Min-TLS-1-0-2019-07:</b> TLS security policy which supports TLS
     * version 1.0 and higher.</p> </li> <li> <p> <b>Policy-Min-TLS-1-2-2019-07:</b>
     * TLS security policy which supports only TLS version 1.2 </p> </li> </ul>
     */
    inline DomainEndpointOptions& WithTLSSecurityPolicy(const TLSSecurityPolicy& value) { SetTLSSecurityPolicy(value); return *this;}

    /**
     * <p>Specify the TLS security policy to apply to the HTTPS endpoint of the
     * domain.</p> <p> Can be one of the following values:</p> <ul> <li> <p>
     * <b>Policy-Min-TLS-1-0-2019-07:</b> TLS security policy which supports TLS
     * version 1.0 and higher.</p> </li> <li> <p> <b>Policy-Min-TLS-1-2-2019-07:</b>
     * TLS security policy which supports only TLS version 1.2 </p> </li> </ul>
     */
    inline DomainEndpointOptions& WithTLSSecurityPolicy(TLSSecurityPolicy&& value) { SetTLSSecurityPolicy(std::move(value)); return *this;}


    /**
     * <p>Whether to enable a custom endpoint for the domain.</p>
     */
    inline bool GetCustomEndpointEnabled() const{ return m_customEndpointEnabled; }

    /**
     * <p>Whether to enable a custom endpoint for the domain.</p>
     */
    inline bool CustomEndpointEnabledHasBeenSet() const { return m_customEndpointEnabledHasBeenSet; }

    /**
     * <p>Whether to enable a custom endpoint for the domain.</p>
     */
    inline void SetCustomEndpointEnabled(bool value) { m_customEndpointEnabledHasBeenSet = true; m_customEndpointEnabled = value; }

    /**
     * <p>Whether to enable a custom endpoint for the domain.</p>
     */
    inline DomainEndpointOptions& WithCustomEndpointEnabled(bool value) { SetCustomEndpointEnabled(value); return *this;}


    /**
     * <p>The fully qualified URL for the custom endpoint.</p>
     */
    inline const Aws::String& GetCustomEndpoint() const{ return m_customEndpoint; }

    /**
     * <p>The fully qualified URL for the custom endpoint.</p>
     */
    inline bool CustomEndpointHasBeenSet() const { return m_customEndpointHasBeenSet; }

    /**
     * <p>The fully qualified URL for the custom endpoint.</p>
     */
    inline void SetCustomEndpoint(const Aws::String& value) { m_customEndpointHasBeenSet = true; m_customEndpoint = value; }

    /**
     * <p>The fully qualified URL for the custom endpoint.</p>
     */
    inline void SetCustomEndpoint(Aws::String&& value) { m_customEndpointHasBeenSet = true; m_customEndpoint = std::move(value); }

    /**
     * <p>The fully qualified URL for the custom endpoint.</p>
     */
    inline void SetCustomEndpoint(const char* value) { m_customEndpointHasBeenSet = true; m_customEndpoint.assign(value); }

    /**
     * <p>The fully qualified URL for the custom endpoint.</p>
     */
    inline DomainEndpointOptions& WithCustomEndpoint(const Aws::String& value) { SetCustomEndpoint(value); return *this;}

    /**
     * <p>The fully qualified URL for the custom endpoint.</p>
     */
    inline DomainEndpointOptions& WithCustomEndpoint(Aws::String&& value) { SetCustomEndpoint(std::move(value)); return *this;}

    /**
     * <p>The fully qualified URL for the custom endpoint.</p>
     */
    inline DomainEndpointOptions& WithCustomEndpoint(const char* value) { SetCustomEndpoint(value); return *this;}


    /**
     * <p>The ARN for your security certificate, managed in Amazon Web Services
     * Certificate Manager (ACM).</p>
     */
    inline const Aws::String& GetCustomEndpointCertificateArn() const{ return m_customEndpointCertificateArn; }

    /**
     * <p>The ARN for your security certificate, managed in Amazon Web Services
     * Certificate Manager (ACM).</p>
     */
    inline bool CustomEndpointCertificateArnHasBeenSet() const { return m_customEndpointCertificateArnHasBeenSet; }

    /**
     * <p>The ARN for your security certificate, managed in Amazon Web Services
     * Certificate Manager (ACM).</p>
     */
    inline void SetCustomEndpointCertificateArn(const Aws::String& value) { m_customEndpointCertificateArnHasBeenSet = true; m_customEndpointCertificateArn = value; }

    /**
     * <p>The ARN for your security certificate, managed in Amazon Web Services
     * Certificate Manager (ACM).</p>
     */
    inline void SetCustomEndpointCertificateArn(Aws::String&& value) { m_customEndpointCertificateArnHasBeenSet = true; m_customEndpointCertificateArn = std::move(value); }

    /**
     * <p>The ARN for your security certificate, managed in Amazon Web Services
     * Certificate Manager (ACM).</p>
     */
    inline void SetCustomEndpointCertificateArn(const char* value) { m_customEndpointCertificateArnHasBeenSet = true; m_customEndpointCertificateArn.assign(value); }

    /**
     * <p>The ARN for your security certificate, managed in Amazon Web Services
     * Certificate Manager (ACM).</p>
     */
    inline DomainEndpointOptions& WithCustomEndpointCertificateArn(const Aws::String& value) { SetCustomEndpointCertificateArn(value); return *this;}

    /**
     * <p>The ARN for your security certificate, managed in Amazon Web Services
     * Certificate Manager (ACM).</p>
     */
    inline DomainEndpointOptions& WithCustomEndpointCertificateArn(Aws::String&& value) { SetCustomEndpointCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for your security certificate, managed in Amazon Web Services
     * Certificate Manager (ACM).</p>
     */
    inline DomainEndpointOptions& WithCustomEndpointCertificateArn(const char* value) { SetCustomEndpointCertificateArn(value); return *this;}

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
} // namespace OpenSearchService
} // namespace Aws
