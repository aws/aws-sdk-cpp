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
  class ContentTypeParametersResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API ContentTypeParametersResult();
    AWS_RESTXMLPROTOCOL_API ContentTypeParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API ContentTypeParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ContentTypeParametersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ContentTypeParametersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ContentTypeParametersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
