/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53domains/model/DomainSuggestion.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{
  class AWS_ROUTE53DOMAINS_API GetDomainSuggestionsResult
  {
  public:
    GetDomainSuggestionsResult();
    GetDomainSuggestionsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDomainSuggestionsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::Vector<DomainSuggestion>& GetSuggestionsList() const{ return m_suggestionsList; }

    
    inline void SetSuggestionsList(const Aws::Vector<DomainSuggestion>& value) { m_suggestionsList = value; }

    
    inline void SetSuggestionsList(Aws::Vector<DomainSuggestion>&& value) { m_suggestionsList = value; }

    
    inline GetDomainSuggestionsResult& WithSuggestionsList(const Aws::Vector<DomainSuggestion>& value) { SetSuggestionsList(value); return *this;}

    
    inline GetDomainSuggestionsResult& WithSuggestionsList(Aws::Vector<DomainSuggestion>&& value) { SetSuggestionsList(value); return *this;}

    
    inline GetDomainSuggestionsResult& AddSuggestionsList(const DomainSuggestion& value) { m_suggestionsList.push_back(value); return *this; }

    
    inline GetDomainSuggestionsResult& AddSuggestionsList(DomainSuggestion&& value) { m_suggestionsList.push_back(value); return *this; }

  private:
    Aws::Vector<DomainSuggestion> m_suggestionsList;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
