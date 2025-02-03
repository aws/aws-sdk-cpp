/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GreetingWithErrorsResult
  {
  public:
    AWS_QUERYPROTOCOL_API GreetingWithErrorsResult();
    AWS_QUERYPROTOCOL_API GreetingWithErrorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_QUERYPROTOCOL_API GreetingWithErrorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::String& GetGreeting() const{ return m_greeting; }
    inline void SetGreeting(const Aws::String& value) { m_greeting = value; }
    inline void SetGreeting(Aws::String&& value) { m_greeting = std::move(value); }
    inline void SetGreeting(const char* value) { m_greeting.assign(value); }
    inline GreetingWithErrorsResult& WithGreeting(const Aws::String& value) { SetGreeting(value); return *this;}
    inline GreetingWithErrorsResult& WithGreeting(Aws::String&& value) { SetGreeting(std::move(value)); return *this;}
    inline GreetingWithErrorsResult& WithGreeting(const char* value) { SetGreeting(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline GreetingWithErrorsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline GreetingWithErrorsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_greeting;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace QueryProtocol
} // namespace Aws
