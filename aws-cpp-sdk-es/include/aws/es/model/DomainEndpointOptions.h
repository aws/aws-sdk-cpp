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
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/TLSSecurityPolicy.h>
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
  class AWS_ELASTICSEARCHSERVICE_API DomainEndpointOptions
  {
  public:
    DomainEndpointOptions();
    DomainEndpointOptions(Aws::Utils::Json::JsonView jsonValue);
    DomainEndpointOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify if only HTTPS endpoint should be enabled for the Elasticsearch
     * domain.</p>
     */
    inline bool GetEnforceHTTPS() const{ return m_enforceHTTPS; }

    /**
     * <p>Specify if only HTTPS endpoint should be enabled for the Elasticsearch
     * domain.</p>
     */
    inline bool EnforceHTTPSHasBeenSet() const { return m_enforceHTTPSHasBeenSet; }

    /**
     * <p>Specify if only HTTPS endpoint should be enabled for the Elasticsearch
     * domain.</p>
     */
    inline void SetEnforceHTTPS(bool value) { m_enforceHTTPSHasBeenSet = true; m_enforceHTTPS = value; }

    /**
     * <p>Specify if only HTTPS endpoint should be enabled for the Elasticsearch
     * domain.</p>
     */
    inline DomainEndpointOptions& WithEnforceHTTPS(bool value) { SetEnforceHTTPS(value); return *this;}


    /**
     * <p>Specify the TLS security policy that needs to be applied to the HTTPS
     * endpoint of Elasticsearch domain. <br/> It can be one of the following values:
     * <ul> <li><b>Policy-Min-TLS-1-0-2019-07: </b> TLS security policy which supports
     * TLSv1.0 and higher.</li> <li><b>Policy-Min-TLS-1-2-2019-07: </b> TLS security
     * policy which supports only TLSv1.2</li> </ul> </p>
     */
    inline const TLSSecurityPolicy& GetTLSSecurityPolicy() const{ return m_tLSSecurityPolicy; }

    /**
     * <p>Specify the TLS security policy that needs to be applied to the HTTPS
     * endpoint of Elasticsearch domain. <br/> It can be one of the following values:
     * <ul> <li><b>Policy-Min-TLS-1-0-2019-07: </b> TLS security policy which supports
     * TLSv1.0 and higher.</li> <li><b>Policy-Min-TLS-1-2-2019-07: </b> TLS security
     * policy which supports only TLSv1.2</li> </ul> </p>
     */
    inline bool TLSSecurityPolicyHasBeenSet() const { return m_tLSSecurityPolicyHasBeenSet; }

    /**
     * <p>Specify the TLS security policy that needs to be applied to the HTTPS
     * endpoint of Elasticsearch domain. <br/> It can be one of the following values:
     * <ul> <li><b>Policy-Min-TLS-1-0-2019-07: </b> TLS security policy which supports
     * TLSv1.0 and higher.</li> <li><b>Policy-Min-TLS-1-2-2019-07: </b> TLS security
     * policy which supports only TLSv1.2</li> </ul> </p>
     */
    inline void SetTLSSecurityPolicy(const TLSSecurityPolicy& value) { m_tLSSecurityPolicyHasBeenSet = true; m_tLSSecurityPolicy = value; }

    /**
     * <p>Specify the TLS security policy that needs to be applied to the HTTPS
     * endpoint of Elasticsearch domain. <br/> It can be one of the following values:
     * <ul> <li><b>Policy-Min-TLS-1-0-2019-07: </b> TLS security policy which supports
     * TLSv1.0 and higher.</li> <li><b>Policy-Min-TLS-1-2-2019-07: </b> TLS security
     * policy which supports only TLSv1.2</li> </ul> </p>
     */
    inline void SetTLSSecurityPolicy(TLSSecurityPolicy&& value) { m_tLSSecurityPolicyHasBeenSet = true; m_tLSSecurityPolicy = std::move(value); }

    /**
     * <p>Specify the TLS security policy that needs to be applied to the HTTPS
     * endpoint of Elasticsearch domain. <br/> It can be one of the following values:
     * <ul> <li><b>Policy-Min-TLS-1-0-2019-07: </b> TLS security policy which supports
     * TLSv1.0 and higher.</li> <li><b>Policy-Min-TLS-1-2-2019-07: </b> TLS security
     * policy which supports only TLSv1.2</li> </ul> </p>
     */
    inline DomainEndpointOptions& WithTLSSecurityPolicy(const TLSSecurityPolicy& value) { SetTLSSecurityPolicy(value); return *this;}

    /**
     * <p>Specify the TLS security policy that needs to be applied to the HTTPS
     * endpoint of Elasticsearch domain. <br/> It can be one of the following values:
     * <ul> <li><b>Policy-Min-TLS-1-0-2019-07: </b> TLS security policy which supports
     * TLSv1.0 and higher.</li> <li><b>Policy-Min-TLS-1-2-2019-07: </b> TLS security
     * policy which supports only TLSv1.2</li> </ul> </p>
     */
    inline DomainEndpointOptions& WithTLSSecurityPolicy(TLSSecurityPolicy&& value) { SetTLSSecurityPolicy(std::move(value)); return *this;}

  private:

    bool m_enforceHTTPS;
    bool m_enforceHTTPSHasBeenSet;

    TLSSecurityPolicy m_tLSSecurityPolicy;
    bool m_tLSSecurityPolicyHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
