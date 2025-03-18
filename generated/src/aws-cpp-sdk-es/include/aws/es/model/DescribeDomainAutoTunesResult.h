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
    AWS_ELASTICSEARCHSERVICE_API DescribeDomainAutoTunesResult() = default;
    AWS_ELASTICSEARCHSERVICE_API DescribeDomainAutoTunesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DescribeDomainAutoTunesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the list of setting adjustments that Auto-Tune has made to the
     * domain. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline const Aws::Vector<AutoTune>& GetAutoTunes() const { return m_autoTunes; }
    template<typename AutoTunesT = Aws::Vector<AutoTune>>
    void SetAutoTunes(AutoTunesT&& value) { m_autoTunesHasBeenSet = true; m_autoTunes = std::forward<AutoTunesT>(value); }
    template<typename AutoTunesT = Aws::Vector<AutoTune>>
    DescribeDomainAutoTunesResult& WithAutoTunes(AutoTunesT&& value) { SetAutoTunes(std::forward<AutoTunesT>(value)); return *this;}
    template<typename AutoTunesT = AutoTune>
    DescribeDomainAutoTunesResult& AddAutoTunes(AutoTunesT&& value) { m_autoTunesHasBeenSet = true; m_autoTunes.emplace_back(std::forward<AutoTunesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDomainAutoTunesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDomainAutoTunesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AutoTune> m_autoTunes;
    bool m_autoTunesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
