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
  class AWS_IOT_API GetPercentilesResult
  {
  public:
    GetPercentilesResult();
    GetPercentilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPercentilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
