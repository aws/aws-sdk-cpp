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
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchInstanceTypeLimitsResult();
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchInstanceTypeLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchInstanceTypeLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Map<Aws::String, Limits>& GetLimitsByRole() const{ return m_limitsByRole; }

    
    inline void SetLimitsByRole(const Aws::Map<Aws::String, Limits>& value) { m_limitsByRole = value; }

    
    inline void SetLimitsByRole(Aws::Map<Aws::String, Limits>&& value) { m_limitsByRole = std::move(value); }

    
    inline DescribeElasticsearchInstanceTypeLimitsResult& WithLimitsByRole(const Aws::Map<Aws::String, Limits>& value) { SetLimitsByRole(value); return *this;}

    
    inline DescribeElasticsearchInstanceTypeLimitsResult& WithLimitsByRole(Aws::Map<Aws::String, Limits>&& value) { SetLimitsByRole(std::move(value)); return *this;}

    
    inline DescribeElasticsearchInstanceTypeLimitsResult& AddLimitsByRole(const Aws::String& key, const Limits& value) { m_limitsByRole.emplace(key, value); return *this; }

    
    inline DescribeElasticsearchInstanceTypeLimitsResult& AddLimitsByRole(Aws::String&& key, const Limits& value) { m_limitsByRole.emplace(std::move(key), value); return *this; }

    
    inline DescribeElasticsearchInstanceTypeLimitsResult& AddLimitsByRole(const Aws::String& key, Limits&& value) { m_limitsByRole.emplace(key, std::move(value)); return *this; }

    
    inline DescribeElasticsearchInstanceTypeLimitsResult& AddLimitsByRole(Aws::String&& key, Limits&& value) { m_limitsByRole.emplace(std::move(key), std::move(value)); return *this; }

    
    inline DescribeElasticsearchInstanceTypeLimitsResult& AddLimitsByRole(const char* key, Limits&& value) { m_limitsByRole.emplace(key, std::move(value)); return *this; }

    
    inline DescribeElasticsearchInstanceTypeLimitsResult& AddLimitsByRole(const char* key, const Limits& value) { m_limitsByRole.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Limits> m_limitsByRole;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
