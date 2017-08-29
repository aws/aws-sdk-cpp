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
  class AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchInstanceTypeLimitsResult
  {
  public:
    DescribeElasticsearchInstanceTypeLimitsResult();
    DescribeElasticsearchInstanceTypeLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeElasticsearchInstanceTypeLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
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
