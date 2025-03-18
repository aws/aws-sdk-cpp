/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/HoursOfOperationOverride.h>
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
namespace Connect
{
namespace Model
{
  class DescribeHoursOfOperationOverrideResult
  {
  public:
    AWS_CONNECT_API DescribeHoursOfOperationOverrideResult() = default;
    AWS_CONNECT_API DescribeHoursOfOperationOverrideResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeHoursOfOperationOverrideResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the hours of operations override. </p>
     */
    inline const HoursOfOperationOverride& GetHoursOfOperationOverride() const { return m_hoursOfOperationOverride; }
    template<typename HoursOfOperationOverrideT = HoursOfOperationOverride>
    void SetHoursOfOperationOverride(HoursOfOperationOverrideT&& value) { m_hoursOfOperationOverrideHasBeenSet = true; m_hoursOfOperationOverride = std::forward<HoursOfOperationOverrideT>(value); }
    template<typename HoursOfOperationOverrideT = HoursOfOperationOverride>
    DescribeHoursOfOperationOverrideResult& WithHoursOfOperationOverride(HoursOfOperationOverrideT&& value) { SetHoursOfOperationOverride(std::forward<HoursOfOperationOverrideT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeHoursOfOperationOverrideResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    HoursOfOperationOverride m_hoursOfOperationOverride;
    bool m_hoursOfOperationOverrideHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
