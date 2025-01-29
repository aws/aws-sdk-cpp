/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/NestedPayload.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace RestXmlProtocol
{
namespace Model
{
  class HttpPayloadWithStructureResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API HttpPayloadWithStructureResult();
    AWS_RESTXMLPROTOCOL_API HttpPayloadWithStructureResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API HttpPayloadWithStructureResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const NestedPayload& GetNested() const{ return m_nested; }
    inline void SetNested(const NestedPayload& value) { m_nested = value; }
    inline void SetNested(NestedPayload&& value) { m_nested = std::move(value); }
    inline HttpPayloadWithStructureResult& WithNested(const NestedPayload& value) { SetNested(value); return *this;}
    inline HttpPayloadWithStructureResult& WithNested(NestedPayload&& value) { SetNested(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline HttpPayloadWithStructureResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline HttpPayloadWithStructureResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline HttpPayloadWithStructureResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    NestedPayload m_nested;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
