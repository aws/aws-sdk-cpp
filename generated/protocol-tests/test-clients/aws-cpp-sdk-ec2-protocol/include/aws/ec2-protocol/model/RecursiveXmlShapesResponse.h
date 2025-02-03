/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>
#include <aws/ec2-protocol/model/RecursiveXmlShapesOutputNested1.h>
#include <aws/ec2-protocol/model/ResponseMetadata.h>
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
namespace EC2Protocol
{
namespace Model
{
  class RecursiveXmlShapesResponse
  {
  public:
    AWS_EC2PROTOCOL_API RecursiveXmlShapesResponse();
    AWS_EC2PROTOCOL_API RecursiveXmlShapesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2PROTOCOL_API RecursiveXmlShapesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const RecursiveXmlShapesOutputNested1& GetNested() const{ return m_nested; }
    inline void SetNested(const RecursiveXmlShapesOutputNested1& value) { m_nested = value; }
    inline void SetNested(RecursiveXmlShapesOutputNested1&& value) { m_nested = std::move(value); }
    inline RecursiveXmlShapesResponse& WithNested(const RecursiveXmlShapesOutputNested1& value) { SetNested(value); return *this;}
    inline RecursiveXmlShapesResponse& WithNested(RecursiveXmlShapesOutputNested1&& value) { SetNested(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline RecursiveXmlShapesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline RecursiveXmlShapesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    RecursiveXmlShapesOutputNested1 m_nested;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2Protocol
} // namespace Aws
