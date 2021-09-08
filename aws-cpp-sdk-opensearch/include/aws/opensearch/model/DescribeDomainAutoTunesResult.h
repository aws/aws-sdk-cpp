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
   * <p>The result of a <code>DescribeDomainAutoTunes</code> request. See <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
   * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
   * information. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainAutoTunesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API DescribeDomainAutoTunesResult
  {
  public:
    DescribeDomainAutoTunesResult();
    DescribeDomainAutoTunesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDomainAutoTunesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of setting adjustments that Auto-Tune has made to the domain. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline const Aws::Vector<AutoTune>& GetAutoTunes() const{ return m_autoTunes; }

    /**
     * <p>The list of setting adjustments that Auto-Tune has made to the domain. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline void SetAutoTunes(const Aws::Vector<AutoTune>& value) { m_autoTunes = value; }

    /**
     * <p>The list of setting adjustments that Auto-Tune has made to the domain. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline void SetAutoTunes(Aws::Vector<AutoTune>&& value) { m_autoTunes = std::move(value); }

    /**
     * <p>The list of setting adjustments that Auto-Tune has made to the domain. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline DescribeDomainAutoTunesResult& WithAutoTunes(const Aws::Vector<AutoTune>& value) { SetAutoTunes(value); return *this;}

    /**
     * <p>The list of setting adjustments that Auto-Tune has made to the domain. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline DescribeDomainAutoTunesResult& WithAutoTunes(Aws::Vector<AutoTune>&& value) { SetAutoTunes(std::move(value)); return *this;}

    /**
     * <p>The list of setting adjustments that Auto-Tune has made to the domain. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline DescribeDomainAutoTunesResult& AddAutoTunes(const AutoTune& value) { m_autoTunes.push_back(value); return *this; }

    /**
     * <p>The list of setting adjustments that Auto-Tune has made to the domain. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline DescribeDomainAutoTunesResult& AddAutoTunes(AutoTune&& value) { m_autoTunes.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeDomainAutoTunesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeDomainAutoTunesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeDomainAutoTunesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AutoTune> m_autoTunes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
