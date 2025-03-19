/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
  class CreateHoursOfOperationOverrideResult
  {
  public:
    AWS_CONNECT_API CreateHoursOfOperationOverrideResult() = default;
    AWS_CONNECT_API CreateHoursOfOperationOverrideResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateHoursOfOperationOverrideResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the hours of operation override.</p>
     */
    inline const Aws::String& GetHoursOfOperationOverrideId() const { return m_hoursOfOperationOverrideId; }
    template<typename HoursOfOperationOverrideIdT = Aws::String>
    void SetHoursOfOperationOverrideId(HoursOfOperationOverrideIdT&& value) { m_hoursOfOperationOverrideIdHasBeenSet = true; m_hoursOfOperationOverrideId = std::forward<HoursOfOperationOverrideIdT>(value); }
    template<typename HoursOfOperationOverrideIdT = Aws::String>
    CreateHoursOfOperationOverrideResult& WithHoursOfOperationOverrideId(HoursOfOperationOverrideIdT&& value) { SetHoursOfOperationOverrideId(std::forward<HoursOfOperationOverrideIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateHoursOfOperationOverrideResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hoursOfOperationOverrideId;
    bool m_hoursOfOperationOverrideIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
