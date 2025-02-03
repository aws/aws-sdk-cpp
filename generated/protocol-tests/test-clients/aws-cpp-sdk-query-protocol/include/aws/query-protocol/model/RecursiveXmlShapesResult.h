/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/query-protocol/model/RecursiveXmlShapesOutputNested1.h>
#include <aws/query-protocol/model/ResponseMetadata.h>
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
namespace QueryProtocol
{
namespace Model
{
  class RecursiveXmlShapesResult
  {
  public:
    AWS_QUERYPROTOCOL_API RecursiveXmlShapesResult();
    AWS_QUERYPROTOCOL_API RecursiveXmlShapesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_QUERYPROTOCOL_API RecursiveXmlShapesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const RecursiveXmlShapesOutputNested1& GetNested() const{ return m_nested; }
    inline void SetNested(const RecursiveXmlShapesOutputNested1& value) { m_nested = value; }
    inline void SetNested(RecursiveXmlShapesOutputNested1&& value) { m_nested = std::move(value); }
    inline RecursiveXmlShapesResult& WithNested(const RecursiveXmlShapesOutputNested1& value) { SetNested(value); return *this;}
    inline RecursiveXmlShapesResult& WithNested(RecursiveXmlShapesOutputNested1&& value) { SetNested(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline RecursiveXmlShapesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline RecursiveXmlShapesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    RecursiveXmlShapesOutputNested1 m_nested;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace QueryProtocol
} // namespace Aws
