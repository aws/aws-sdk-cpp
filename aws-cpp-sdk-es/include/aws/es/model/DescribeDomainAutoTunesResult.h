/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/AutoTune.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>The result of <code>DescribeDomainAutoTunes</code> request. See the <a
   * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
   * target="_blank">Developer Guide</a> for more information. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeDomainAutoTunesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeDomainAutoTunesResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DescribeDomainAutoTunesResult();
    AWS_ELASTICSEARCHSERVICE_API DescribeDomainAutoTunesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DescribeDomainAutoTunesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the list of setting adjustments that Auto-Tune has made to the
     * domain. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline const Aws::Vector<AutoTune>& GetAutoTunes() const{ return m_autoTunes; }

    /**
     * <p>Specifies the list of setting adjustments that Auto-Tune has made to the
     * domain. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline void SetAutoTunes(const Aws::Vector<AutoTune>& value) { m_autoTunes = value; }

    /**
     * <p>Specifies the list of setting adjustments that Auto-Tune has made to the
     * domain. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline void SetAutoTunes(Aws::Vector<AutoTune>&& value) { m_autoTunes = std::move(value); }

    /**
     * <p>Specifies the list of setting adjustments that Auto-Tune has made to the
     * domain. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline DescribeDomainAutoTunesResult& WithAutoTunes(const Aws::Vector<AutoTune>& value) { SetAutoTunes(value); return *this;}

    /**
     * <p>Specifies the list of setting adjustments that Auto-Tune has made to the
     * domain. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline DescribeDomainAutoTunesResult& WithAutoTunes(Aws::Vector<AutoTune>&& value) { SetAutoTunes(std::move(value)); return *this;}

    /**
     * <p>Specifies the list of setting adjustments that Auto-Tune has made to the
     * domain. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline DescribeDomainAutoTunesResult& AddAutoTunes(const AutoTune& value) { m_autoTunes.push_back(value); return *this; }

    /**
     * <p>Specifies the list of setting adjustments that Auto-Tune has made to the
     * domain. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline DescribeDomainAutoTunesResult& AddAutoTunes(AutoTune&& value) { m_autoTunes.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specifies an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Specifies an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Specifies an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Specifies an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeDomainAutoTunesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specifies an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeDomainAutoTunesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specifies an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeDomainAutoTunesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AutoTune> m_autoTunes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
