/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
  class XmlEmptyBlobsResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API XmlEmptyBlobsResult();
    AWS_RESTXMLPROTOCOL_API XmlEmptyBlobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API XmlEmptyBlobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::Utils::ByteBuffer& GetData() const{ return m_data; }
    inline void SetData(const Aws::Utils::ByteBuffer& value) { m_data = value; }
    inline void SetData(Aws::Utils::ByteBuffer&& value) { m_data = std::move(value); }
    inline XmlEmptyBlobsResult& WithData(const Aws::Utils::ByteBuffer& value) { SetData(value); return *this;}
    inline XmlEmptyBlobsResult& WithData(Aws::Utils::ByteBuffer&& value) { SetData(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline XmlEmptyBlobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline XmlEmptyBlobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline XmlEmptyBlobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_data;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
