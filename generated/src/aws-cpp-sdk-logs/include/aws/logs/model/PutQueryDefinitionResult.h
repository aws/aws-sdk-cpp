/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class PutQueryDefinitionResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutQueryDefinitionResult();
    AWS_CLOUDWATCHLOGS_API PutQueryDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API PutQueryDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the query definition.</p>
     */
    inline const Aws::String& GetQueryDefinitionId() const{ return m_queryDefinitionId; }

    /**
     * <p>The ID of the query definition.</p>
     */
    inline void SetQueryDefinitionId(const Aws::String& value) { m_queryDefinitionId = value; }

    /**
     * <p>The ID of the query definition.</p>
     */
    inline void SetQueryDefinitionId(Aws::String&& value) { m_queryDefinitionId = std::move(value); }

    /**
     * <p>The ID of the query definition.</p>
     */
    inline void SetQueryDefinitionId(const char* value) { m_queryDefinitionId.assign(value); }

    /**
     * <p>The ID of the query definition.</p>
     */
    inline PutQueryDefinitionResult& WithQueryDefinitionId(const Aws::String& value) { SetQueryDefinitionId(value); return *this;}

    /**
     * <p>The ID of the query definition.</p>
     */
    inline PutQueryDefinitionResult& WithQueryDefinitionId(Aws::String&& value) { SetQueryDefinitionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the query definition.</p>
     */
    inline PutQueryDefinitionResult& WithQueryDefinitionId(const char* value) { SetQueryDefinitionId(value); return *this;}

  private:

    Aws::String m_queryDefinitionId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
