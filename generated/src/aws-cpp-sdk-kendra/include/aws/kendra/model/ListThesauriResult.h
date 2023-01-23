/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/ThesaurusSummary.h>
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
  class ListThesauriResult
  {
  public:
    AWS_KENDRA_API ListThesauriResult();
    AWS_KENDRA_API ListThesauriResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListThesauriResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of thesauri. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of thesauri. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of thesauri. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of thesauri. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of thesauri. </p>
     */
    inline ListThesauriResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of thesauri. </p>
     */
    inline ListThesauriResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of thesauri. </p>
     */
    inline ListThesauriResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of summary information for a thesaurus or multiple thesauri.</p>
     */
    inline const Aws::Vector<ThesaurusSummary>& GetThesaurusSummaryItems() const{ return m_thesaurusSummaryItems; }

    /**
     * <p>An array of summary information for a thesaurus or multiple thesauri.</p>
     */
    inline void SetThesaurusSummaryItems(const Aws::Vector<ThesaurusSummary>& value) { m_thesaurusSummaryItems = value; }

    /**
     * <p>An array of summary information for a thesaurus or multiple thesauri.</p>
     */
    inline void SetThesaurusSummaryItems(Aws::Vector<ThesaurusSummary>&& value) { m_thesaurusSummaryItems = std::move(value); }

    /**
     * <p>An array of summary information for a thesaurus or multiple thesauri.</p>
     */
    inline ListThesauriResult& WithThesaurusSummaryItems(const Aws::Vector<ThesaurusSummary>& value) { SetThesaurusSummaryItems(value); return *this;}

    /**
     * <p>An array of summary information for a thesaurus or multiple thesauri.</p>
     */
    inline ListThesauriResult& WithThesaurusSummaryItems(Aws::Vector<ThesaurusSummary>&& value) { SetThesaurusSummaryItems(std::move(value)); return *this;}

    /**
     * <p>An array of summary information for a thesaurus or multiple thesauri.</p>
     */
    inline ListThesauriResult& AddThesaurusSummaryItems(const ThesaurusSummary& value) { m_thesaurusSummaryItems.push_back(value); return *this; }

    /**
     * <p>An array of summary information for a thesaurus or multiple thesauri.</p>
     */
    inline ListThesauriResult& AddThesaurusSummaryItems(ThesaurusSummary&& value) { m_thesaurusSummaryItems.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ThesaurusSummary> m_thesaurusSummaryItems;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
