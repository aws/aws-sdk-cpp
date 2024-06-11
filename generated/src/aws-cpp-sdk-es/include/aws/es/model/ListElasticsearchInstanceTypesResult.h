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
    AWS_ELASTICSEARCHSERVICE_API ListElasticsearchInstanceTypesResult();
    AWS_ELASTICSEARCHSERVICE_API ListElasticsearchInstanceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API ListElasticsearchInstanceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> List of instance types supported by Amazon Elasticsearch service for given
     * <code> <a>ElasticsearchVersion</a> </code> </p>
     */
    inline const Aws::Vector<ESPartitionInstanceType>& GetElasticsearchInstanceTypes() const{ return m_elasticsearchInstanceTypes; }
    inline void SetElasticsearchInstanceTypes(const Aws::Vector<ESPartitionInstanceType>& value) { m_elasticsearchInstanceTypes = value; }
    inline void SetElasticsearchInstanceTypes(Aws::Vector<ESPartitionInstanceType>&& value) { m_elasticsearchInstanceTypes = std::move(value); }
    inline ListElasticsearchInstanceTypesResult& WithElasticsearchInstanceTypes(const Aws::Vector<ESPartitionInstanceType>& value) { SetElasticsearchInstanceTypes(value); return *this;}
    inline ListElasticsearchInstanceTypesResult& WithElasticsearchInstanceTypes(Aws::Vector<ESPartitionInstanceType>&& value) { SetElasticsearchInstanceTypes(std::move(value)); return *this;}
    inline ListElasticsearchInstanceTypesResult& AddElasticsearchInstanceTypes(const ESPartitionInstanceType& value) { m_elasticsearchInstanceTypes.push_back(value); return *this; }
    inline ListElasticsearchInstanceTypesResult& AddElasticsearchInstanceTypes(ESPartitionInstanceType&& value) { m_elasticsearchInstanceTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>In case if there are more results available NextToken would be present, make
     * further request to the same API with received NextToken to paginate remaining
     * results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListElasticsearchInstanceTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListElasticsearchInstanceTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListElasticsearchInstanceTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListElasticsearchInstanceTypesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListElasticsearchInstanceTypesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListElasticsearchInstanceTypesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ESPartitionInstanceType> m_elasticsearchInstanceTypes;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
