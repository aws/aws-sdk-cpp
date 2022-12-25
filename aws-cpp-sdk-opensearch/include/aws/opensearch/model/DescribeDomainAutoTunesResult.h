/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/AutoTune.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>The result of a <code>DescribeDomainAutoTunes</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainAutoTunesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeDomainAutoTunesResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeDomainAutoTunesResult();
    AWS_OPENSEARCHSERVICE_API DescribeDomainAutoTunesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribeDomainAutoTunesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of setting adjustments that Auto-Tune has made to the domain.</p>
     */
    inline const Aws::Vector<AutoTune>& GetAutoTunes() const{ return m_autoTunes; }

    /**
     * <p>The list of setting adjustments that Auto-Tune has made to the domain.</p>
     */
    inline void SetAutoTunes(const Aws::Vector<AutoTune>& value) { m_autoTunes = value; }

    /**
     * <p>The list of setting adjustments that Auto-Tune has made to the domain.</p>
     */
    inline void SetAutoTunes(Aws::Vector<AutoTune>&& value) { m_autoTunes = std::move(value); }

    /**
     * <p>The list of setting adjustments that Auto-Tune has made to the domain.</p>
     */
    inline DescribeDomainAutoTunesResult& WithAutoTunes(const Aws::Vector<AutoTune>& value) { SetAutoTunes(value); return *this;}

    /**
     * <p>The list of setting adjustments that Auto-Tune has made to the domain.</p>
     */
    inline DescribeDomainAutoTunesResult& WithAutoTunes(Aws::Vector<AutoTune>&& value) { SetAutoTunes(std::move(value)); return *this;}

    /**
     * <p>The list of setting adjustments that Auto-Tune has made to the domain.</p>
     */
    inline DescribeDomainAutoTunesResult& AddAutoTunes(const AutoTune& value) { m_autoTunes.push_back(value); return *this; }

    /**
     * <p>The list of setting adjustments that Auto-Tune has made to the domain.</p>
     */
    inline DescribeDomainAutoTunesResult& AddAutoTunes(AutoTune&& value) { m_autoTunes.push_back(std::move(value)); return *this; }


    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline DescribeDomainAutoTunesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline DescribeDomainAutoTunesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline DescribeDomainAutoTunesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AutoTune> m_autoTunes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
