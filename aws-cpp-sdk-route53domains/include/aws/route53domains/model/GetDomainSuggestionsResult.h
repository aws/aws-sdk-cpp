/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetDomainSuggestionsResult
  {
  public:
    AWS_ROUTE53DOMAINS_API GetDomainSuggestionsResult();
    AWS_ROUTE53DOMAINS_API GetDomainSuggestionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API GetDomainSuggestionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
