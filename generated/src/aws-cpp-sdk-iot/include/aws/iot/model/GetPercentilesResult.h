/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/PercentPair.h>
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
namespace IoT
{
namespace Model
{
  class GetPercentilesResult
  {
  public:
    AWS_IOT_API GetPercentilesResult();
    AWS_IOT_API GetPercentilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetPercentilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The percentile values of the aggregated fields.</p>
     */
    inline const Aws::Vector<PercentPair>& GetPercentiles() const{ return m_percentiles; }

    /**
     * <p>The percentile values of the aggregated fields.</p>
     */
    inline void SetPercentiles(const Aws::Vector<PercentPair>& value) { m_percentiles = value; }

    /**
     * <p>The percentile values of the aggregated fields.</p>
     */
    inline void SetPercentiles(Aws::Vector<PercentPair>&& value) { m_percentiles = std::move(value); }

    /**
     * <p>The percentile values of the aggregated fields.</p>
     */
    inline GetPercentilesResult& WithPercentiles(const Aws::Vector<PercentPair>& value) { SetPercentiles(value); return *this;}

    /**
     * <p>The percentile values of the aggregated fields.</p>
     */
    inline GetPercentilesResult& WithPercentiles(Aws::Vector<PercentPair>&& value) { SetPercentiles(std::move(value)); return *this;}

    /**
     * <p>The percentile values of the aggregated fields.</p>
     */
    inline GetPercentilesResult& AddPercentiles(const PercentPair& value) { m_percentiles.push_back(value); return *this; }

    /**
     * <p>The percentile values of the aggregated fields.</p>
     */
    inline GetPercentilesResult& AddPercentiles(PercentPair&& value) { m_percentiles.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PercentPair> m_percentiles;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
