/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/EndpointConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/SecurityPolicy.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A request to create a new domain name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateDomainNameRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API CreateDomainNameRequest : public APIGatewayRequest
  {
  public:
    CreateDomainNameRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomainName"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>[Required] The name of the <a>DomainName</a> resource.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>[Required] The name of the <a>DomainName</a> resource.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>[Required] The name of the <a>DomainName</a> resource.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>[Required] The name of the <a>DomainName</a> resource.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>[Required] The name of the <a>DomainName</a> resource.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>[Required] The name of the <a>DomainName</a> resource.</p>
     */
    inline CreateDomainNameRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>[Required] The name of the <a>DomainName</a> resource.</p>
     */
    inline CreateDomainNameRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>[Required] The name of the <a>DomainName</a> resource.</p>
     */
    inline CreateDomainNameRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The user-friendly name of the certificate that will be used by edge-optimized
     * endpoint for this domain name.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }

    /**
     * <p>The user-friendly name of the certificate that will be used by edge-optimized
     * endpoint for this domain name.</p>
     */
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }

    /**
     * <p>The user-friendly name of the certificate that will be used by edge-optimized
     * endpoint for this domain name.</p>
     */
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }

    /**
     * <p>The user-friendly name of the certificate that will be used by edge-optimized
     * endpoint for this domain name.</p>
     */
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }

    /**
     * <p>The user-friendly name of the certificate that will be used by edge-optimized
     * endpoint for this domain name.</p>
     */
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }

    /**
     * <p>The user-friendly name of the certificate that will be used by edge-optimized
     * endpoint for this domain name.</p>
     */
    inline CreateDomainNameRequest& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}

    /**
     * <p>The user-friendly name of the certificate that will be used by edge-optimized
     * endpoint for this domain name.</p>
     */
    inline CreateDomainNameRequest& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}

    /**
     * <p>The user-friendly name of the certificate that will be used by edge-optimized
     * endpoint for this domain name.</p>
     */
    inline CreateDomainNameRequest& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}


    /**
     * <p>[Deprecated] The body of the server certificate that will be used by
     * edge-optimized endpoint for this domain name provided by your certificate
     * authority.</p>
     */
    inline const Aws::String& GetCertificateBody() const{ return m_certificateBody; }

    /**
     * <p>[Deprecated] The body of the server certificate that will be used by
     * edge-optimized endpoint for this domain name provided by your certificate
     * authority.</p>
     */
    inline bool CertificateBodyHasBeenSet() const { return m_certificateBodyHasBeenSet; }

    /**
     * <p>[Deprecated] The body of the server certificate that will be used by
     * edge-optimized endpoint for this domain name provided by your certificate
     * authority.</p>
     */
    inline void SetCertificateBody(const Aws::String& value) { m_certificateBodyHasBeenSet = true; m_certificateBody = value; }

    /**
     * <p>[Deprecated] The body of the server certificate that will be used by
     * edge-optimized endpoint for this domain name provided by your certificate
     * authority.</p>
     */
    inline void SetCertificateBody(Aws::String&& value) { m_certificateBodyHasBeenSet = true; m_certificateBody = std::move(value); }

    /**
     * <p>[Deprecated] The body of the server certificate that will be used by
     * edge-optimized endpoint for this domain name provided by your certificate
     * authority.</p>
     */
    inline void SetCertificateBody(const char* value) { m_certificateBodyHasBeenSet = true; m_certificateBody.assign(value); }

    /**
     * <p>[Deprecated] The body of the server certificate that will be used by
     * edge-optimized endpoint for this domain name provided by your certificate
     * authority.</p>
     */
    inline CreateDomainNameRequest& WithCertificateBody(const Aws::String& value) { SetCertificateBody(value); return *this;}

    /**
     * <p>[Deprecated] The body of the server certificate that will be used by
     * edge-optimized endpoint for this domain name provided by your certificate
     * authority.</p>
     */
    inline CreateDomainNameRequest& WithCertificateBody(Aws::String&& value) { SetCertificateBody(std::move(value)); return *this;}

    /**
     * <p>[Deprecated] The body of the server certificate that will be used by
     * edge-optimized endpoint for this domain name provided by your certificate
     * authority.</p>
     */
    inline CreateDomainNameRequest& WithCertificateBody(const char* value) { SetCertificateBody(value); return *this;}


    /**
     * <p>[Deprecated] Your edge-optimized endpoint's domain name certificate's private
     * key.</p>
     */
    inline const Aws::String& GetCertificatePrivateKey() const{ return m_certificatePrivateKey; }

    /**
     * <p>[Deprecated] Your edge-optimized endpoint's domain name certificate's private
     * key.</p>
     */
    inline bool CertificatePrivateKeyHasBeenSet() const { return m_certificatePrivateKeyHasBeenSet; }

    /**
     * <p>[Deprecated] Your edge-optimized endpoint's domain name certificate's private
     * key.</p>
     */
    inline void SetCertificatePrivateKey(const Aws::String& value) { m_certificatePrivateKeyHasBeenSet = true; m_certificatePrivateKey = value; }

    /**
     * <p>[Deprecated] Your edge-optimized endpoint's domain name certificate's private
     * key.</p>
     */
    inline void SetCertificatePrivateKey(Aws::String&& value) { m_certificatePrivateKeyHasBeenSet = true; m_certificatePrivateKey = std::move(value); }

    /**
     * <p>[Deprecated] Your edge-optimized endpoint's domain name certificate's private
     * key.</p>
     */
    inline void SetCertificatePrivateKey(const char* value) { m_certificatePrivateKeyHasBeenSet = true; m_certificatePrivateKey.assign(value); }

    /**
     * <p>[Deprecated] Your edge-optimized endpoint's domain name certificate's private
     * key.</p>
     */
    inline CreateDomainNameRequest& WithCertificatePrivateKey(const Aws::String& value) { SetCertificatePrivateKey(value); return *this;}

    /**
     * <p>[Deprecated] Your edge-optimized endpoint's domain name certificate's private
     * key.</p>
     */
    inline CreateDomainNameRequest& WithCertificatePrivateKey(Aws::String&& value) { SetCertificatePrivateKey(std::move(value)); return *this;}

    /**
     * <p>[Deprecated] Your edge-optimized endpoint's domain name certificate's private
     * key.</p>
     */
    inline CreateDomainNameRequest& WithCertificatePrivateKey(const char* value) { SetCertificatePrivateKey(value); return *this;}


    /**
     * <p>[Deprecated] The intermediate certificates and optionally the root
     * certificate, one after the other without any blank lines, used by an
     * edge-optimized endpoint for this domain name. If you include the root
     * certificate, your certificate chain must start with intermediate certificates
     * and end with the root certificate. Use the intermediate certificates that were
     * provided by your certificate authority. Do not include any intermediaries that
     * are not in the chain of trust path.</p>
     */
    inline const Aws::String& GetCertificateChain() const{ return m_certificateChain; }

    /**
     * <p>[Deprecated] The intermediate certificates and optionally the root
     * certificate, one after the other without any blank lines, used by an
     * edge-optimized endpoint for this domain name. If you include the root
     * certificate, your certificate chain must start with intermediate certificates
     * and end with the root certificate. Use the intermediate certificates that were
     * provided by your certificate authority. Do not include any intermediaries that
     * are not in the chain of trust path.</p>
     */
    inline bool CertificateChainHasBeenSet() const { return m_certificateChainHasBeenSet; }

    /**
     * <p>[Deprecated] The intermediate certificates and optionally the root
     * certificate, one after the other without any blank lines, used by an
     * edge-optimized endpoint for this domain name. If you include the root
     * certificate, your certificate chain must start with intermediate certificates
     * and end with the root certificate. Use the intermediate certificates that were
     * provided by your certificate authority. Do not include any intermediaries that
     * are not in the chain of trust path.</p>
     */
    inline void SetCertificateChain(const Aws::String& value) { m_certificateChainHasBeenSet = true; m_certificateChain = value; }

    /**
     * <p>[Deprecated] The intermediate certificates and optionally the root
     * certificate, one after the other without any blank lines, used by an
     * edge-optimized endpoint for this domain name. If you include the root
     * certificate, your certificate chain must start with intermediate certificates
     * and end with the root certificate. Use the intermediate certificates that were
     * provided by your certificate authority. Do not include any intermediaries that
     * are not in the chain of trust path.</p>
     */
    inline void SetCertificateChain(Aws::String&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::move(value); }

    /**
     * <p>[Deprecated] The intermediate certificates and optionally the root
     * certificate, one after the other without any blank lines, used by an
     * edge-optimized endpoint for this domain name. If you include the root
     * certificate, your certificate chain must start with intermediate certificates
     * and end with the root certificate. Use the intermediate certificates that were
     * provided by your certificate authority. Do not include any intermediaries that
     * are not in the chain of trust path.</p>
     */
    inline void SetCertificateChain(const char* value) { m_certificateChainHasBeenSet = true; m_certificateChain.assign(value); }

    /**
     * <p>[Deprecated] The intermediate certificates and optionally the root
     * certificate, one after the other without any blank lines, used by an
     * edge-optimized endpoint for this domain name. If you include the root
     * certificate, your certificate chain must start with intermediate certificates
     * and end with the root certificate. Use the intermediate certificates that were
     * provided by your certificate authority. Do not include any intermediaries that
     * are not in the chain of trust path.</p>
     */
    inline CreateDomainNameRequest& WithCertificateChain(const Aws::String& value) { SetCertificateChain(value); return *this;}

    /**
     * <p>[Deprecated] The intermediate certificates and optionally the root
     * certificate, one after the other without any blank lines, used by an
     * edge-optimized endpoint for this domain name. If you include the root
     * certificate, your certificate chain must start with intermediate certificates
     * and end with the root certificate. Use the intermediate certificates that were
     * provided by your certificate authority. Do not include any intermediaries that
     * are not in the chain of trust path.</p>
     */
    inline CreateDomainNameRequest& WithCertificateChain(Aws::String&& value) { SetCertificateChain(std::move(value)); return *this;}

    /**
     * <p>[Deprecated] The intermediate certificates and optionally the root
     * certificate, one after the other without any blank lines, used by an
     * edge-optimized endpoint for this domain name. If you include the root
     * certificate, your certificate chain must start with intermediate certificates
     * and end with the root certificate. Use the intermediate certificates that were
     * provided by your certificate authority. Do not include any intermediaries that
     * are not in the chain of trust path.</p>
     */
    inline CreateDomainNameRequest& WithCertificateChain(const char* value) { SetCertificateChain(value); return *this;}


    /**
     * <p>The reference to an AWS-managed certificate that will be used by
     * edge-optimized endpoint for this domain name. AWS Certificate Manager is the
     * only supported source.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The reference to an AWS-managed certificate that will be used by
     * edge-optimized endpoint for this domain name. AWS Certificate Manager is the
     * only supported source.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The reference to an AWS-managed certificate that will be used by
     * edge-optimized endpoint for this domain name. AWS Certificate Manager is the
     * only supported source.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The reference to an AWS-managed certificate that will be used by
     * edge-optimized endpoint for this domain name. AWS Certificate Manager is the
     * only supported source.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The reference to an AWS-managed certificate that will be used by
     * edge-optimized endpoint for this domain name. AWS Certificate Manager is the
     * only supported source.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The reference to an AWS-managed certificate that will be used by
     * edge-optimized endpoint for this domain name. AWS Certificate Manager is the
     * only supported source.</p>
     */
    inline CreateDomainNameRequest& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The reference to an AWS-managed certificate that will be used by
     * edge-optimized endpoint for this domain name. AWS Certificate Manager is the
     * only supported source.</p>
     */
    inline CreateDomainNameRequest& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The reference to an AWS-managed certificate that will be used by
     * edge-optimized endpoint for this domain name. AWS Certificate Manager is the
     * only supported source.</p>
     */
    inline CreateDomainNameRequest& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The user-friendly name of the certificate that will be used by regional
     * endpoint for this domain name.</p>
     */
    inline const Aws::String& GetRegionalCertificateName() const{ return m_regionalCertificateName; }

    /**
     * <p>The user-friendly name of the certificate that will be used by regional
     * endpoint for this domain name.</p>
     */
    inline bool RegionalCertificateNameHasBeenSet() const { return m_regionalCertificateNameHasBeenSet; }

    /**
     * <p>The user-friendly name of the certificate that will be used by regional
     * endpoint for this domain name.</p>
     */
    inline void SetRegionalCertificateName(const Aws::String& value) { m_regionalCertificateNameHasBeenSet = true; m_regionalCertificateName = value; }

    /**
     * <p>The user-friendly name of the certificate that will be used by regional
     * endpoint for this domain name.</p>
     */
    inline void SetRegionalCertificateName(Aws::String&& value) { m_regionalCertificateNameHasBeenSet = true; m_regionalCertificateName = std::move(value); }

    /**
     * <p>The user-friendly name of the certificate that will be used by regional
     * endpoint for this domain name.</p>
     */
    inline void SetRegionalCertificateName(const char* value) { m_regionalCertificateNameHasBeenSet = true; m_regionalCertificateName.assign(value); }

    /**
     * <p>The user-friendly name of the certificate that will be used by regional
     * endpoint for this domain name.</p>
     */
    inline CreateDomainNameRequest& WithRegionalCertificateName(const Aws::String& value) { SetRegionalCertificateName(value); return *this;}

    /**
     * <p>The user-friendly name of the certificate that will be used by regional
     * endpoint for this domain name.</p>
     */
    inline CreateDomainNameRequest& WithRegionalCertificateName(Aws::String&& value) { SetRegionalCertificateName(std::move(value)); return *this;}

    /**
     * <p>The user-friendly name of the certificate that will be used by regional
     * endpoint for this domain name.</p>
     */
    inline CreateDomainNameRequest& WithRegionalCertificateName(const char* value) { SetRegionalCertificateName(value); return *this;}


    /**
     * <p>The reference to an AWS-managed certificate that will be used by regional
     * endpoint for this domain name. AWS Certificate Manager is the only supported
     * source.</p>
     */
    inline const Aws::String& GetRegionalCertificateArn() const{ return m_regionalCertificateArn; }

    /**
     * <p>The reference to an AWS-managed certificate that will be used by regional
     * endpoint for this domain name. AWS Certificate Manager is the only supported
     * source.</p>
     */
    inline bool RegionalCertificateArnHasBeenSet() const { return m_regionalCertificateArnHasBeenSet; }

    /**
     * <p>The reference to an AWS-managed certificate that will be used by regional
     * endpoint for this domain name. AWS Certificate Manager is the only supported
     * source.</p>
     */
    inline void SetRegionalCertificateArn(const Aws::String& value) { m_regionalCertificateArnHasBeenSet = true; m_regionalCertificateArn = value; }

    /**
     * <p>The reference to an AWS-managed certificate that will be used by regional
     * endpoint for this domain name. AWS Certificate Manager is the only supported
     * source.</p>
     */
    inline void SetRegionalCertificateArn(Aws::String&& value) { m_regionalCertificateArnHasBeenSet = true; m_regionalCertificateArn = std::move(value); }

    /**
     * <p>The reference to an AWS-managed certificate that will be used by regional
     * endpoint for this domain name. AWS Certificate Manager is the only supported
     * source.</p>
     */
    inline void SetRegionalCertificateArn(const char* value) { m_regionalCertificateArnHasBeenSet = true; m_regionalCertificateArn.assign(value); }

    /**
     * <p>The reference to an AWS-managed certificate that will be used by regional
     * endpoint for this domain name. AWS Certificate Manager is the only supported
     * source.</p>
     */
    inline CreateDomainNameRequest& WithRegionalCertificateArn(const Aws::String& value) { SetRegionalCertificateArn(value); return *this;}

    /**
     * <p>The reference to an AWS-managed certificate that will be used by regional
     * endpoint for this domain name. AWS Certificate Manager is the only supported
     * source.</p>
     */
    inline CreateDomainNameRequest& WithRegionalCertificateArn(Aws::String&& value) { SetRegionalCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The reference to an AWS-managed certificate that will be used by regional
     * endpoint for this domain name. AWS Certificate Manager is the only supported
     * source.</p>
     */
    inline CreateDomainNameRequest& WithRegionalCertificateArn(const char* value) { SetRegionalCertificateArn(value); return *this;}


    /**
     * <p>The endpoint configuration of this <a>DomainName</a> showing the endpoint
     * types of the domain name. </p>
     */
    inline const EndpointConfiguration& GetEndpointConfiguration() const{ return m_endpointConfiguration; }

    /**
     * <p>The endpoint configuration of this <a>DomainName</a> showing the endpoint
     * types of the domain name. </p>
     */
    inline bool EndpointConfigurationHasBeenSet() const { return m_endpointConfigurationHasBeenSet; }

    /**
     * <p>The endpoint configuration of this <a>DomainName</a> showing the endpoint
     * types of the domain name. </p>
     */
    inline void SetEndpointConfiguration(const EndpointConfiguration& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = value; }

    /**
     * <p>The endpoint configuration of this <a>DomainName</a> showing the endpoint
     * types of the domain name. </p>
     */
    inline void SetEndpointConfiguration(EndpointConfiguration&& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = std::move(value); }

    /**
     * <p>The endpoint configuration of this <a>DomainName</a> showing the endpoint
     * types of the domain name. </p>
     */
    inline CreateDomainNameRequest& WithEndpointConfiguration(const EndpointConfiguration& value) { SetEndpointConfiguration(value); return *this;}

    /**
     * <p>The endpoint configuration of this <a>DomainName</a> showing the endpoint
     * types of the domain name. </p>
     */
    inline CreateDomainNameRequest& WithEndpointConfiguration(EndpointConfiguration&& value) { SetEndpointConfiguration(std::move(value)); return *this;}


    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateDomainNameRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateDomainNameRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateDomainNameRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateDomainNameRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateDomainNameRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateDomainNameRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateDomainNameRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateDomainNameRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateDomainNameRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The Transport Layer Security (TLS) version + cipher suite for this
     * <a>DomainName</a>. The valid values are <code>TLS_1_0</code> and
     * <code>TLS_1_2</code>.</p>
     */
    inline const SecurityPolicy& GetSecurityPolicy() const{ return m_securityPolicy; }

    /**
     * <p>The Transport Layer Security (TLS) version + cipher suite for this
     * <a>DomainName</a>. The valid values are <code>TLS_1_0</code> and
     * <code>TLS_1_2</code>.</p>
     */
    inline bool SecurityPolicyHasBeenSet() const { return m_securityPolicyHasBeenSet; }

    /**
     * <p>The Transport Layer Security (TLS) version + cipher suite for this
     * <a>DomainName</a>. The valid values are <code>TLS_1_0</code> and
     * <code>TLS_1_2</code>.</p>
     */
    inline void SetSecurityPolicy(const SecurityPolicy& value) { m_securityPolicyHasBeenSet = true; m_securityPolicy = value; }

    /**
     * <p>The Transport Layer Security (TLS) version + cipher suite for this
     * <a>DomainName</a>. The valid values are <code>TLS_1_0</code> and
     * <code>TLS_1_2</code>.</p>
     */
    inline void SetSecurityPolicy(SecurityPolicy&& value) { m_securityPolicyHasBeenSet = true; m_securityPolicy = std::move(value); }

    /**
     * <p>The Transport Layer Security (TLS) version + cipher suite for this
     * <a>DomainName</a>. The valid values are <code>TLS_1_0</code> and
     * <code>TLS_1_2</code>.</p>
     */
    inline CreateDomainNameRequest& WithSecurityPolicy(const SecurityPolicy& value) { SetSecurityPolicy(value); return *this;}

    /**
     * <p>The Transport Layer Security (TLS) version + cipher suite for this
     * <a>DomainName</a>. The valid values are <code>TLS_1_0</code> and
     * <code>TLS_1_2</code>.</p>
     */
    inline CreateDomainNameRequest& WithSecurityPolicy(SecurityPolicy&& value) { SetSecurityPolicy(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet;

    Aws::String m_certificateBody;
    bool m_certificateBodyHasBeenSet;

    Aws::String m_certificatePrivateKey;
    bool m_certificatePrivateKeyHasBeenSet;

    Aws::String m_certificateChain;
    bool m_certificateChainHasBeenSet;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;

    Aws::String m_regionalCertificateName;
    bool m_regionalCertificateNameHasBeenSet;

    Aws::String m_regionalCertificateArn;
    bool m_regionalCertificateArnHasBeenSet;

    EndpointConfiguration m_endpointConfiguration;
    bool m_endpointConfigurationHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    SecurityPolicy m_securityPolicy;
    bool m_securityPolicyHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
