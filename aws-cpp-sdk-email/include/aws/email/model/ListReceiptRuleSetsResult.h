/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/email/model/ReceiptRuleSetMetadata.h>

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
namespace SES
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_SES_API ListReceiptRuleSetsResult
  {
  public:
    ListReceiptRuleSetsResult();
    ListReceiptRuleSetsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListReceiptRuleSetsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const Aws::Vector<ReceiptRuleSetMetadata>& GetRuleSets() const{ return m_ruleSets; }
    
    inline void SetRuleSets(const Aws::Vector<ReceiptRuleSetMetadata>& value) { m_ruleSets = value; }

    
    inline ListReceiptRuleSetsResult&  WithRuleSets(const Aws::Vector<ReceiptRuleSetMetadata>& value) { SetRuleSets(value); return *this;}

    
    inline ListReceiptRuleSetsResult& AddRuleSets(const ReceiptRuleSetMetadata& value) { m_ruleSets.push_back(value); return *this; }

    
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    
    inline ListReceiptRuleSetsResult&  WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    
    inline ListReceiptRuleSetsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListReceiptRuleSetsResult&  WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListReceiptRuleSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline ListReceiptRuleSetsResult&  WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<ReceiptRuleSetMetadata> m_ruleSets;
    Aws::String m_nextPageToken;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws