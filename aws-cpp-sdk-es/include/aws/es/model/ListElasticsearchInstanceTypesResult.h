/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ELASTICSEARCHSERVICE_API ListElasticsearchInstanceTypesResult
  {
  public:
    ListElasticsearchInstanceTypesResult();
    ListElasticsearchInstanceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListElasticsearchInstanceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> List of instance types supported by Amazon Elasticsearch service for given
     * <code> <a>ElasticsearchVersion</a> </code> </p>
     */
    inline const Aws::Vector<ESPartitionInstanceType>& GetElasticsearchInstanceTypes() const{ return m_elasticsearchInstanceTypes; }

    /**
     * <p> List of instance types supported by Amazon Elasticsearch service for given
     * <code> <a>ElasticsearchVersion</a> </code> </p>
     */
    inline void SetElasticsearchInstanceTypes(const Aws::Vector<ESPartitionInstanceType>& value) { m_elasticsearchInstanceTypes = value; }

    /**
     * <p> List of instance types supported by Amazon Elasticsearch service for given
     * <code> <a>ElasticsearchVersion</a> </code> </p>
     */
    inline void SetElasticsearchInstanceTypes(Aws::Vector<ESPartitionInstanceType>&& value) { m_elasticsearchInstanceTypes = std::move(value); }

    /**
     * <p> List of instance types supported by Amazon Elasticsearch service for given
     * <code> <a>ElasticsearchVersion</a> </code> </p>
     */
    inline ListElasticsearchInstanceTypesResult& WithElasticsearchInstanceTypes(const Aws::Vector<ESPartitionInstanceType>& value) { SetElasticsearchInstanceTypes(value); return *this;}

    /**
     * <p> List of instance types supported by Amazon Elasticsearch service for given
     * <code> <a>ElasticsearchVersion</a> </code> </p>
     */
    inline ListElasticsearchInstanceTypesResult& WithElasticsearchInstanceTypes(Aws::Vector<ESPartitionInstanceType>&& value) { SetElasticsearchInstanceTypes(std::move(value)); return *this;}

    /**
     * <p> List of instance types supported by Amazon Elasticsearch service for given
     * <code> <a>ElasticsearchVersion</a> </code> </p>
     */
    inline ListElasticsearchInstanceTypesResult& AddElasticsearchInstanceTypes(const ESPartitionInstanceType& value) { m_elasticsearchInstanceTypes.push_back(value); return *this; }

    /**
     * <p> List of instance types supported by Amazon Elasticsearch service for given
     * <code> <a>ElasticsearchVersion</a> </code> </p>
     */
    inline ListElasticsearchInstanceTypesResult& AddElasticsearchInstanceTypes(ESPartitionInstanceType&& value) { m_elasticsearchInstanceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>In case if there are more results available NextToken would be present, make
     * further request to the same API with received NextToken to paginate remaining
     * results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>In case if there are more results available NextToken would be present, make
     * further request to the same API with received NextToken to paginate remaining
     * results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>In case if there are more results available NextToken would be present, make
     * further request to the same API with received NextToken to paginate remaining
     * results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>In case if there are more results available NextToken would be present, make
     * further request to the same API with received NextToken to paginate remaining
     * results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>In case if there are more results available NextToken would be present, make
     * further request to the same API with received NextToken to paginate remaining
     * results. </p>
     */
    inline ListElasticsearchInstanceTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>In case if there are more results available NextToken would be present, make
     * further request to the same API with received NextToken to paginate remaining
     * results. </p>
     */
    inline ListElasticsearchInstanceTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>In case if there are more results available NextToken would be present, make
     * further request to the same API with received NextToken to paginate remaining
     * results. </p>
     */
    inline ListElasticsearchInstanceTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ESPartitionInstanceType> m_elasticsearchInstanceTypes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
