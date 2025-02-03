/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
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
  class XmlAttributesResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API XmlAttributesResult();
    AWS_RESTXMLPROTOCOL_API XmlAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API XmlAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::String& GetFoo() const{ return m_foo; }
    inline void SetFoo(const Aws::String& value) { m_foo = value; }
    inline void SetFoo(Aws::String&& value) { m_foo = std::move(value); }
    inline void SetFoo(const char* value) { m_foo.assign(value); }
    inline XmlAttributesResult& WithFoo(const Aws::String& value) { SetFoo(value); return *this;}
    inline XmlAttributesResult& WithFoo(Aws::String&& value) { SetFoo(std::move(value)); return *this;}
    inline XmlAttributesResult& WithFoo(const char* value) { SetFoo(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetAttr() const{ return m_attr; }
    inline void SetAttr(const Aws::String& value) { m_attr = value; }
    inline void SetAttr(Aws::String&& value) { m_attr = std::move(value); }
    inline void SetAttr(const char* value) { m_attr.assign(value); }
    inline XmlAttributesResult& WithAttr(const Aws::String& value) { SetAttr(value); return *this;}
    inline XmlAttributesResult& WithAttr(Aws::String&& value) { SetAttr(std::move(value)); return *this;}
    inline XmlAttributesResult& WithAttr(const char* value) { SetAttr(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline XmlAttributesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline XmlAttributesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline XmlAttributesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_foo;

    Aws::String m_attr;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
