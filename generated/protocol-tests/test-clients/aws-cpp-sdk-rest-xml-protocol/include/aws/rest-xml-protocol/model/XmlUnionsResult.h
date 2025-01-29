/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/XmlUnionShape.h>
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
  class XmlUnionsResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API XmlUnionsResult();
    AWS_RESTXMLPROTOCOL_API XmlUnionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API XmlUnionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const XmlUnionShape& GetUnionValue() const{ return m_unionValue; }
    inline void SetUnionValue(const XmlUnionShape& value) { m_unionValue = value; }
    inline void SetUnionValue(XmlUnionShape&& value) { m_unionValue = std::move(value); }
    inline XmlUnionsResult& WithUnionValue(const XmlUnionShape& value) { SetUnionValue(value); return *this;}
    inline XmlUnionsResult& WithUnionValue(XmlUnionShape&& value) { SetUnionValue(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline XmlUnionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline XmlUnionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline XmlUnionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    XmlUnionShape m_unionValue;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
