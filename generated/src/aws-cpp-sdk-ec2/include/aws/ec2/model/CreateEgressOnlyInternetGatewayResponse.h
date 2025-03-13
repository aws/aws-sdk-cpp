/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/EgressOnlyInternetGateway.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class CreateEgressOnlyInternetGatewayResponse
  {
  public:
    AWS_EC2_API CreateEgressOnlyInternetGatewayResponse() = default;
    AWS_EC2_API CreateEgressOnlyInternetGatewayResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateEgressOnlyInternetGatewayResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateEgressOnlyInternetGatewayResponse& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the egress-only internet gateway.</p>
     */
    inline const EgressOnlyInternetGateway& GetEgressOnlyInternetGateway() const { return m_egressOnlyInternetGateway; }
    template<typename EgressOnlyInternetGatewayT = EgressOnlyInternetGateway>
    void SetEgressOnlyInternetGateway(EgressOnlyInternetGatewayT&& value) { m_egressOnlyInternetGatewayHasBeenSet = true; m_egressOnlyInternetGateway = std::forward<EgressOnlyInternetGatewayT>(value); }
    template<typename EgressOnlyInternetGatewayT = EgressOnlyInternetGateway>
    CreateEgressOnlyInternetGatewayResponse& WithEgressOnlyInternetGateway(EgressOnlyInternetGatewayT&& value) { SetEgressOnlyInternetGateway(std::forward<EgressOnlyInternetGatewayT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateEgressOnlyInternetGatewayResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    EgressOnlyInternetGateway m_egressOnlyInternetGateway;
    bool m_egressOnlyInternetGatewayHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
