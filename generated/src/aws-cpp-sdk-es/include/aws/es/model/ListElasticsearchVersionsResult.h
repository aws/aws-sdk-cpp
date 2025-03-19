/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> Container for the parameters for response received from <code>
   * <a>ListElasticsearchVersions</a> </code> operation. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListElasticsearchVersionsResponse">AWS
   * API Reference</a></p>
   */
  class ListElasticsearchVersionsResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ListElasticsearchVersionsResult() = default;
    AWS_ELASTICSEARCHSERVICE_API ListElasticsearchVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API ListElasticsearchVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<Aws::String>& GetElasticsearchVersions() const { return m_elasticsearchVersions; }
    template<typename ElasticsearchVersionsT = Aws::Vector<Aws::String>>
    void SetElasticsearchVersions(ElasticsearchVersionsT&& value) { m_elasticsearchVersionsHasBeenSet = true; m_elasticsearchVersions = std::forward<ElasticsearchVersionsT>(value); }
    template<typename ElasticsearchVersionsT = Aws::Vector<Aws::String>>
    ListElasticsearchVersionsResult& WithElasticsearchVersions(ElasticsearchVersionsT&& value) { SetElasticsearchVersions(std::forward<ElasticsearchVersionsT>(value)); return *this;}
    template<typename ElasticsearchVersionsT = Aws::String>
    ListElasticsearchVersionsResult& AddElasticsearchVersions(ElasticsearchVersionsT&& value) { m_elasticsearchVersionsHasBeenSet = true; m_elasticsearchVersions.emplace_back(std::forward<ElasticsearchVersionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListElasticsearchVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListElasticsearchVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_elasticsearchVersions;
    bool m_elasticsearchVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
