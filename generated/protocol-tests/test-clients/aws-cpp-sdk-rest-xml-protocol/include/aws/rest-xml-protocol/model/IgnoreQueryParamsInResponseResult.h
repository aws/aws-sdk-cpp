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
  class IgnoreQueryParamsInResponseResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API IgnoreQueryParamsInResponseResult();
    AWS_RESTXMLPROTOCOL_API IgnoreQueryParamsInResponseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API IgnoreQueryParamsInResponseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::String& GetBaz() const{ return m_baz; }
    inline void SetBaz(const Aws::String& value) { m_baz = value; }
    inline void SetBaz(Aws::String&& value) { m_baz = std::move(value); }
    inline void SetBaz(const char* value) { m_baz.assign(value); }
    inline IgnoreQueryParamsInResponseResult& WithBaz(const Aws::String& value) { SetBaz(value); return *this;}
    inline IgnoreQueryParamsInResponseResult& WithBaz(Aws::String&& value) { SetBaz(std::move(value)); return *this;}
    inline IgnoreQueryParamsInResponseResult& WithBaz(const char* value) { SetBaz(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline IgnoreQueryParamsInResponseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline IgnoreQueryParamsInResponseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline IgnoreQueryParamsInResponseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_baz;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
