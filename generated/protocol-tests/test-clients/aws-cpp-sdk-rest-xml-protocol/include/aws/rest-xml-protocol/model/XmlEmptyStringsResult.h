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
  class XmlEmptyStringsResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API XmlEmptyStringsResult();
    AWS_RESTXMLPROTOCOL_API XmlEmptyStringsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API XmlEmptyStringsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::String& GetEmptyString() const{ return m_emptyString; }
    inline void SetEmptyString(const Aws::String& value) { m_emptyString = value; }
    inline void SetEmptyString(Aws::String&& value) { m_emptyString = std::move(value); }
    inline void SetEmptyString(const char* value) { m_emptyString.assign(value); }
    inline XmlEmptyStringsResult& WithEmptyString(const Aws::String& value) { SetEmptyString(value); return *this;}
    inline XmlEmptyStringsResult& WithEmptyString(Aws::String&& value) { SetEmptyString(std::move(value)); return *this;}
    inline XmlEmptyStringsResult& WithEmptyString(const char* value) { SetEmptyString(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline XmlEmptyStringsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline XmlEmptyStringsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline XmlEmptyStringsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_emptyString;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
