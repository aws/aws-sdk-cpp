/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/Limits.h>
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
   * <p> Container for the parameters received from <code>
   * <a>DescribeElasticsearchInstanceTypeLimits</a> </code> operation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchInstanceTypeLimitsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeElasticsearchInstanceTypeLimitsResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchInstanceTypeLimitsResult() = default;
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchInstanceTypeLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchInstanceTypeLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Map<Aws::String, Limits>& GetLimitsByRole() const { return m_limitsByRole; }
    template<typename LimitsByRoleT = Aws::Map<Aws::String, Limits>>
    void SetLimitsByRole(LimitsByRoleT&& value) { m_limitsByRoleHasBeenSet = true; m_limitsByRole = std::forward<LimitsByRoleT>(value); }
    template<typename LimitsByRoleT = Aws::Map<Aws::String, Limits>>
    DescribeElasticsearchInstanceTypeLimitsResult& WithLimitsByRole(LimitsByRoleT&& value) { SetLimitsByRole(std::forward<LimitsByRoleT>(value)); return *this;}
    template<typename LimitsByRoleKeyT = Aws::String, typename LimitsByRoleValueT = Limits>
    DescribeElasticsearchInstanceTypeLimitsResult& AddLimitsByRole(LimitsByRoleKeyT&& key, LimitsByRoleValueT&& value) {
      m_limitsByRoleHasBeenSet = true; m_limitsByRole.emplace(std::forward<LimitsByRoleKeyT>(key), std::forward<LimitsByRoleValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeElasticsearchInstanceTypeLimitsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Limits> m_limitsByRole;
    bool m_limitsByRoleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
