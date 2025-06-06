﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/ESPartitionInstanceType.h>
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
   * <p> Container for the parameters returned by <code>
   * <a>ListElasticsearchInstanceTypes</a> </code> operation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListElasticsearchInstanceTypesResponse">AWS
   * API Reference</a></p>
   */
  class ListElasticsearchInstanceTypesResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ListElasticsearchInstanceTypesResult() = default;
    AWS_ELASTICSEARCHSERVICE_API ListElasticsearchInstanceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API ListElasticsearchInstanceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> List of instance types supported by Amazon Elasticsearch service for given
     * <code> <a>ElasticsearchVersion</a> </code> </p>
     */
    inline const Aws::Vector<ESPartitionInstanceType>& GetElasticsearchInstanceTypes() const { return m_elasticsearchInstanceTypes; }
    template<typename ElasticsearchInstanceTypesT = Aws::Vector<ESPartitionInstanceType>>
    void SetElasticsearchInstanceTypes(ElasticsearchInstanceTypesT&& value) { m_elasticsearchInstanceTypesHasBeenSet = true; m_elasticsearchInstanceTypes = std::forward<ElasticsearchInstanceTypesT>(value); }
    template<typename ElasticsearchInstanceTypesT = Aws::Vector<ESPartitionInstanceType>>
    ListElasticsearchInstanceTypesResult& WithElasticsearchInstanceTypes(ElasticsearchInstanceTypesT&& value) { SetElasticsearchInstanceTypes(std::forward<ElasticsearchInstanceTypesT>(value)); return *this;}
    inline ListElasticsearchInstanceTypesResult& AddElasticsearchInstanceTypes(ESPartitionInstanceType value) { m_elasticsearchInstanceTypesHasBeenSet = true; m_elasticsearchInstanceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>In case if there are more results available NextToken would be present, make
     * further request to the same API with received NextToken to paginate remaining
     * results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListElasticsearchInstanceTypesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListElasticsearchInstanceTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ESPartitionInstanceType> m_elasticsearchInstanceTypes;
    bool m_elasticsearchInstanceTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
