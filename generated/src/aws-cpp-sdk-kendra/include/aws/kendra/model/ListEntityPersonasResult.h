/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/PersonasSummary.h>
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
namespace kendra
{
namespace Model
{
  class ListEntityPersonasResult
  {
  public:
    AWS_KENDRA_API ListEntityPersonasResult();
    AWS_KENDRA_API ListEntityPersonasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListEntityPersonasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of summary information for one or more users or groups.</p>
     */
    inline const Aws::Vector<PersonasSummary>& GetSummaryItems() const{ return m_summaryItems; }

    /**
     * <p>An array of summary information for one or more users or groups.</p>
     */
    inline void SetSummaryItems(const Aws::Vector<PersonasSummary>& value) { m_summaryItems = value; }

    /**
     * <p>An array of summary information for one or more users or groups.</p>
     */
    inline void SetSummaryItems(Aws::Vector<PersonasSummary>&& value) { m_summaryItems = std::move(value); }

    /**
     * <p>An array of summary information for one or more users or groups.</p>
     */
    inline ListEntityPersonasResult& WithSummaryItems(const Aws::Vector<PersonasSummary>& value) { SetSummaryItems(value); return *this;}

    /**
     * <p>An array of summary information for one or more users or groups.</p>
     */
    inline ListEntityPersonasResult& WithSummaryItems(Aws::Vector<PersonasSummary>&& value) { SetSummaryItems(std::move(value)); return *this;}

    /**
     * <p>An array of summary information for one or more users or groups.</p>
     */
    inline ListEntityPersonasResult& AddSummaryItems(const PersonasSummary& value) { m_summaryItems.push_back(value); return *this; }

    /**
     * <p>An array of summary information for one or more users or groups.</p>
     */
    inline ListEntityPersonasResult& AddSummaryItems(PersonasSummary&& value) { m_summaryItems.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Kendra returns this token, which you can
     * use in a later request to retrieve the next set of users or groups.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token, which you can
     * use in a later request to retrieve the next set of users or groups.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token, which you can
     * use in a later request to retrieve the next set of users or groups.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token, which you can
     * use in a later request to retrieve the next set of users or groups.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token, which you can
     * use in a later request to retrieve the next set of users or groups.</p>
     */
    inline ListEntityPersonasResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token, which you can
     * use in a later request to retrieve the next set of users or groups.</p>
     */
    inline ListEntityPersonasResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token, which you can
     * use in a later request to retrieve the next set of users or groups.</p>
     */
    inline ListEntityPersonasResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PersonasSummary> m_summaryItems;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
