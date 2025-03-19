/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
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
namespace Kinesis
{
namespace Model
{
  class DescribeLimitsResult
  {
  public:
    AWS_KINESIS_API DescribeLimitsResult() = default;
    AWS_KINESIS_API DescribeLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESIS_API DescribeLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The maximum number of shards.</p>
     */
    inline int GetShardLimit() const { return m_shardLimit; }
    inline void SetShardLimit(int value) { m_shardLimitHasBeenSet = true; m_shardLimit = value; }
    inline DescribeLimitsResult& WithShardLimit(int value) { SetShardLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of open shards.</p>
     */
    inline int GetOpenShardCount() const { return m_openShardCount; }
    inline void SetOpenShardCount(int value) { m_openShardCountHasBeenSet = true; m_openShardCount = value; }
    inline DescribeLimitsResult& WithOpenShardCount(int value) { SetOpenShardCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the number of data streams with the on-demand capacity mode.</p>
     */
    inline int GetOnDemandStreamCount() const { return m_onDemandStreamCount; }
    inline void SetOnDemandStreamCount(int value) { m_onDemandStreamCountHasBeenSet = true; m_onDemandStreamCount = value; }
    inline DescribeLimitsResult& WithOnDemandStreamCount(int value) { SetOnDemandStreamCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of data streams with the on-demand capacity mode. </p>
     */
    inline int GetOnDemandStreamCountLimit() const { return m_onDemandStreamCountLimit; }
    inline void SetOnDemandStreamCountLimit(int value) { m_onDemandStreamCountLimitHasBeenSet = true; m_onDemandStreamCountLimit = value; }
    inline DescribeLimitsResult& WithOnDemandStreamCountLimit(int value) { SetOnDemandStreamCountLimit(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLimitsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_shardLimit{0};
    bool m_shardLimitHasBeenSet = false;

    int m_openShardCount{0};
    bool m_openShardCountHasBeenSet = false;

    int m_onDemandStreamCount{0};
    bool m_onDemandStreamCountHasBeenSet = false;

    int m_onDemandStreamCountLimit{0};
    bool m_onDemandStreamCountLimitHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
