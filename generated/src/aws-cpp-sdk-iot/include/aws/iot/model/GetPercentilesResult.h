/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_IOT_API GetPercentilesResult() = default;
    AWS_IOT_API GetPercentilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetPercentilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The percentile values of the aggregated fields.</p>
     */
    inline const Aws::Vector<PercentPair>& GetPercentiles() const { return m_percentiles; }
    template<typename PercentilesT = Aws::Vector<PercentPair>>
    void SetPercentiles(PercentilesT&& value) { m_percentilesHasBeenSet = true; m_percentiles = std::forward<PercentilesT>(value); }
    template<typename PercentilesT = Aws::Vector<PercentPair>>
    GetPercentilesResult& WithPercentiles(PercentilesT&& value) { SetPercentiles(std::forward<PercentilesT>(value)); return *this;}
    template<typename PercentilesT = PercentPair>
    GetPercentilesResult& AddPercentiles(PercentilesT&& value) { m_percentilesHasBeenSet = true; m_percentiles.emplace_back(std::forward<PercentilesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPercentilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PercentPair> m_percentiles;
    bool m_percentilesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
