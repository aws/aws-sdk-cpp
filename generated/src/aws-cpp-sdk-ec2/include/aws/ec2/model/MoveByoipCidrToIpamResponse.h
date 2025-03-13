/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ByoipCidr.h>
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
  class MoveByoipCidrToIpamResponse
  {
  public:
    AWS_EC2_API MoveByoipCidrToIpamResponse() = default;
    AWS_EC2_API MoveByoipCidrToIpamResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API MoveByoipCidrToIpamResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The BYOIP CIDR.</p>
     */
    inline const ByoipCidr& GetByoipCidr() const { return m_byoipCidr; }
    template<typename ByoipCidrT = ByoipCidr>
    void SetByoipCidr(ByoipCidrT&& value) { m_byoipCidrHasBeenSet = true; m_byoipCidr = std::forward<ByoipCidrT>(value); }
    template<typename ByoipCidrT = ByoipCidr>
    MoveByoipCidrToIpamResponse& WithByoipCidr(ByoipCidrT&& value) { SetByoipCidr(std::forward<ByoipCidrT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    MoveByoipCidrToIpamResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ByoipCidr m_byoipCidr;
    bool m_byoipCidrHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
