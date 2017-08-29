/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>

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
    GetDomainSuggestionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDomainSuggestionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of possible domain names. If you specified <code>true</code> for
     * <code>OnlyAvailable</code> in the request, the list contains only domains that
     * are available for registration.</p>
     */
    inline const Aws::Vector<DomainSuggestion>& GetSuggestionsList() const{ return m_suggestionsList; }

    /**
     * <p>A list of possible domain names. If you specified <code>true</code> for
     * <code>OnlyAvailable</code> in the request, the list contains only domains that
     * are available for registration.</p>
     */
    inline void SetSuggestionsList(const Aws::Vector<DomainSuggestion>& value) { m_suggestionsList = value; }

    /**
     * <p>A list of possible domain names. If you specified <code>true</code> for
     * <code>OnlyAvailable</code> in the request, the list contains only domains that
     * are available for registration.</p>
     */
    inline void SetSuggestionsList(Aws::Vector<DomainSuggestion>&& value) { m_suggestionsList = std::move(value); }

    /**
     * <p>A list of possible domain names. If you specified <code>true</code> for
     * <code>OnlyAvailable</code> in the request, the list contains only domains that
     * are available for registration.</p>
     */
    inline GetDomainSuggestionsResult& WithSuggestionsList(const Aws::Vector<DomainSuggestion>& value) { SetSuggestionsList(value); return *this;}

    /**
     * <p>A list of possible domain names. If you specified <code>true</code> for
     * <code>OnlyAvailable</code> in the request, the list contains only domains that
     * are available for registration.</p>
     */
    inline GetDomainSuggestionsResult& WithSuggestionsList(Aws::Vector<DomainSuggestion>&& value) { SetSuggestionsList(std::move(value)); return *this;}

    /**
     * <p>A list of possible domain names. If you specified <code>true</code> for
     * <code>OnlyAvailable</code> in the request, the list contains only domains that
     * are available for registration.</p>
     */
    inline GetDomainSuggestionsResult& AddSuggestionsList(const DomainSuggestion& value) { m_suggestionsList.push_back(value); return *this; }

    /**
     * <p>A list of possible domain names. If you specified <code>true</code> for
     * <code>OnlyAvailable</code> in the request, the list contains only domains that
     * are available for registration.</p>
     */
    inline GetDomainSuggestionsResult& AddSuggestionsList(DomainSuggestion&& value) { m_suggestionsList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DomainSuggestion> m_suggestionsList;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
