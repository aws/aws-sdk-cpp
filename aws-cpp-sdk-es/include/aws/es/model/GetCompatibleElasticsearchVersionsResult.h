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
#include <aws/es/model/CompatibleVersionsMap.h>
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
   * <p> Container for response returned by <code>
   * <a>GetCompatibleElasticsearchVersions</a> </code> operation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetCompatibleElasticsearchVersionsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API GetCompatibleElasticsearchVersionsResult
  {
  public:
    GetCompatibleElasticsearchVersionsResult();
    GetCompatibleElasticsearchVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCompatibleElasticsearchVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A map of compatible Elasticsearch versions returned as part of the <code>
     * <a>GetCompatibleElasticsearchVersions</a> </code> operation. </p>
     */
    inline const Aws::Vector<CompatibleVersionsMap>& GetCompatibleElasticsearchVersions() const{ return m_compatibleElasticsearchVersions; }

    /**
     * <p> A map of compatible Elasticsearch versions returned as part of the <code>
     * <a>GetCompatibleElasticsearchVersions</a> </code> operation. </p>
     */
    inline void SetCompatibleElasticsearchVersions(const Aws::Vector<CompatibleVersionsMap>& value) { m_compatibleElasticsearchVersions = value; }

    /**
     * <p> A map of compatible Elasticsearch versions returned as part of the <code>
     * <a>GetCompatibleElasticsearchVersions</a> </code> operation. </p>
     */
    inline void SetCompatibleElasticsearchVersions(Aws::Vector<CompatibleVersionsMap>&& value) { m_compatibleElasticsearchVersions = std::move(value); }

    /**
     * <p> A map of compatible Elasticsearch versions returned as part of the <code>
     * <a>GetCompatibleElasticsearchVersions</a> </code> operation. </p>
     */
    inline GetCompatibleElasticsearchVersionsResult& WithCompatibleElasticsearchVersions(const Aws::Vector<CompatibleVersionsMap>& value) { SetCompatibleElasticsearchVersions(value); return *this;}

    /**
     * <p> A map of compatible Elasticsearch versions returned as part of the <code>
     * <a>GetCompatibleElasticsearchVersions</a> </code> operation. </p>
     */
    inline GetCompatibleElasticsearchVersionsResult& WithCompatibleElasticsearchVersions(Aws::Vector<CompatibleVersionsMap>&& value) { SetCompatibleElasticsearchVersions(std::move(value)); return *this;}

    /**
     * <p> A map of compatible Elasticsearch versions returned as part of the <code>
     * <a>GetCompatibleElasticsearchVersions</a> </code> operation. </p>
     */
    inline GetCompatibleElasticsearchVersionsResult& AddCompatibleElasticsearchVersions(const CompatibleVersionsMap& value) { m_compatibleElasticsearchVersions.push_back(value); return *this; }

    /**
     * <p> A map of compatible Elasticsearch versions returned as part of the <code>
     * <a>GetCompatibleElasticsearchVersions</a> </code> operation. </p>
     */
    inline GetCompatibleElasticsearchVersionsResult& AddCompatibleElasticsearchVersions(CompatibleVersionsMap&& value) { m_compatibleElasticsearchVersions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CompatibleVersionsMap> m_compatibleElasticsearchVersions;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
