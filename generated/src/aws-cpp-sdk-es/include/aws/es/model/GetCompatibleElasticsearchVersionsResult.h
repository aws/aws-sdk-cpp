/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetCompatibleElasticsearchVersionsResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API GetCompatibleElasticsearchVersionsResult() = default;
    AWS_ELASTICSEARCHSERVICE_API GetCompatibleElasticsearchVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API GetCompatibleElasticsearchVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A map of compatible Elasticsearch versions returned as part of the <code>
     * <a>GetCompatibleElasticsearchVersions</a> </code> operation. </p>
     */
    inline const Aws::Vector<CompatibleVersionsMap>& GetCompatibleElasticsearchVersions() const { return m_compatibleElasticsearchVersions; }
    template<typename CompatibleElasticsearchVersionsT = Aws::Vector<CompatibleVersionsMap>>
    void SetCompatibleElasticsearchVersions(CompatibleElasticsearchVersionsT&& value) { m_compatibleElasticsearchVersionsHasBeenSet = true; m_compatibleElasticsearchVersions = std::forward<CompatibleElasticsearchVersionsT>(value); }
    template<typename CompatibleElasticsearchVersionsT = Aws::Vector<CompatibleVersionsMap>>
    GetCompatibleElasticsearchVersionsResult& WithCompatibleElasticsearchVersions(CompatibleElasticsearchVersionsT&& value) { SetCompatibleElasticsearchVersions(std::forward<CompatibleElasticsearchVersionsT>(value)); return *this;}
    template<typename CompatibleElasticsearchVersionsT = CompatibleVersionsMap>
    GetCompatibleElasticsearchVersionsResult& AddCompatibleElasticsearchVersions(CompatibleElasticsearchVersionsT&& value) { m_compatibleElasticsearchVersionsHasBeenSet = true; m_compatibleElasticsearchVersions.emplace_back(std::forward<CompatibleElasticsearchVersionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCompatibleElasticsearchVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CompatibleVersionsMap> m_compatibleElasticsearchVersions;
    bool m_compatibleElasticsearchVersionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
