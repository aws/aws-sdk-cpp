/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class HttpPrefixHeadersResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API HttpPrefixHeadersResult();
    AWS_RESTXMLPROTOCOL_API HttpPrefixHeadersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API HttpPrefixHeadersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::String& GetFoo() const{ return m_foo; }
    inline void SetFoo(const Aws::String& value) { m_foo = value; }
    inline void SetFoo(Aws::String&& value) { m_foo = std::move(value); }
    inline void SetFoo(const char* value) { m_foo.assign(value); }
    inline HttpPrefixHeadersResult& WithFoo(const Aws::String& value) { SetFoo(value); return *this;}
    inline HttpPrefixHeadersResult& WithFoo(Aws::String&& value) { SetFoo(std::move(value)); return *this;}
    inline HttpPrefixHeadersResult& WithFoo(const char* value) { SetFoo(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetFooMap() const{ return m_fooMap; }
    inline void SetFooMap(const Aws::Map<Aws::String, Aws::String>& value) { m_fooMap = value; }
    inline void SetFooMap(Aws::Map<Aws::String, Aws::String>&& value) { m_fooMap = std::move(value); }
    inline HttpPrefixHeadersResult& WithFooMap(const Aws::Map<Aws::String, Aws::String>& value) { SetFooMap(value); return *this;}
    inline HttpPrefixHeadersResult& WithFooMap(Aws::Map<Aws::String, Aws::String>&& value) { SetFooMap(std::move(value)); return *this;}
    inline HttpPrefixHeadersResult& AddFooMap(const Aws::String& key, const Aws::String& value) { m_fooMap.emplace(key, value); return *this; }
    inline HttpPrefixHeadersResult& AddFooMap(Aws::String&& key, const Aws::String& value) { m_fooMap.emplace(std::move(key), value); return *this; }
    inline HttpPrefixHeadersResult& AddFooMap(const Aws::String& key, Aws::String&& value) { m_fooMap.emplace(key, std::move(value)); return *this; }
    inline HttpPrefixHeadersResult& AddFooMap(Aws::String&& key, Aws::String&& value) { m_fooMap.emplace(std::move(key), std::move(value)); return *this; }
    inline HttpPrefixHeadersResult& AddFooMap(const char* key, Aws::String&& value) { m_fooMap.emplace(key, std::move(value)); return *this; }
    inline HttpPrefixHeadersResult& AddFooMap(Aws::String&& key, const char* value) { m_fooMap.emplace(std::move(key), value); return *this; }
    inline HttpPrefixHeadersResult& AddFooMap(const char* key, const char* value) { m_fooMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline HttpPrefixHeadersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline HttpPrefixHeadersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline HttpPrefixHeadersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_foo;

    Aws::Map<Aws::String, Aws::String> m_fooMap;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
