/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
  class ModifyInstanceConnectEndpointResponse
  {
  public:
    AWS_EC2_API ModifyInstanceConnectEndpointResponse() = default;
    AWS_EC2_API ModifyInstanceConnectEndpointResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyInstanceConnectEndpointResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The return value of the request. Returns <code>true</code> if the specified
     * product code is owned by the requester and associated with the specified
     * instance.</p>
     */
    inline bool GetReturn() const { return m_return; }
    inline void SetReturn(bool value) { m_returnHasBeenSet = true; m_return = value; }
    inline ModifyInstanceConnectEndpointResponse& WithReturn(bool value) { SetReturn(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyInstanceConnectEndpointResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    bool m_return{false};
    bool m_returnHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
