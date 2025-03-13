/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/InterpolatedAssetPropertyValue.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class GetInterpolatedAssetPropertyValuesResult
  {
  public:
    AWS_IOTSITEWISE_API GetInterpolatedAssetPropertyValuesResult() = default;
    AWS_IOTSITEWISE_API GetInterpolatedAssetPropertyValuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API GetInterpolatedAssetPropertyValuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested interpolated values.</p>
     */
    inline const Aws::Vector<InterpolatedAssetPropertyValue>& GetInterpolatedAssetPropertyValues() const { return m_interpolatedAssetPropertyValues; }
    template<typename InterpolatedAssetPropertyValuesT = Aws::Vector<InterpolatedAssetPropertyValue>>
    void SetInterpolatedAssetPropertyValues(InterpolatedAssetPropertyValuesT&& value) { m_interpolatedAssetPropertyValuesHasBeenSet = true; m_interpolatedAssetPropertyValues = std::forward<InterpolatedAssetPropertyValuesT>(value); }
    template<typename InterpolatedAssetPropertyValuesT = Aws::Vector<InterpolatedAssetPropertyValue>>
    GetInterpolatedAssetPropertyValuesResult& WithInterpolatedAssetPropertyValues(InterpolatedAssetPropertyValuesT&& value) { SetInterpolatedAssetPropertyValues(std::forward<InterpolatedAssetPropertyValuesT>(value)); return *this;}
    template<typename InterpolatedAssetPropertyValuesT = InterpolatedAssetPropertyValue>
    GetInterpolatedAssetPropertyValuesResult& AddInterpolatedAssetPropertyValues(InterpolatedAssetPropertyValuesT&& value) { m_interpolatedAssetPropertyValuesHasBeenSet = true; m_interpolatedAssetPropertyValues.emplace_back(std::forward<InterpolatedAssetPropertyValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetInterpolatedAssetPropertyValuesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInterpolatedAssetPropertyValuesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InterpolatedAssetPropertyValue> m_interpolatedAssetPropertyValues;
    bool m_interpolatedAssetPropertyValuesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
