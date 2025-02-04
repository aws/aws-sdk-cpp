/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/StringEnum.h>
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
  class HttpEnumPayloadResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API HttpEnumPayloadResult();
    AWS_RESTXMLPROTOCOL_API HttpEnumPayloadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API HttpEnumPayloadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const StringEnum& GetPayload() const{ return m_payload; }
    inline void SetPayload(const StringEnum& value) { m_payload = value; }
    inline void SetPayload(StringEnum&& value) { m_payload = std::move(value); }
    inline HttpEnumPayloadResult& WithPayload(const StringEnum& value) { SetPayload(value); return *this;}
    inline HttpEnumPayloadResult& WithPayload(StringEnum&& value) { SetPayload(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline HttpEnumPayloadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline HttpEnumPayloadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline HttpEnumPayloadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    StringEnum m_payload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
