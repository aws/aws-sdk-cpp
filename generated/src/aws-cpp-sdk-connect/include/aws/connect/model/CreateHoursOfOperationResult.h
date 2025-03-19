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
  class CreateHoursOfOperationResult
  {
  public:
    AWS_CONNECT_API CreateHoursOfOperationResult() = default;
    AWS_CONNECT_API CreateHoursOfOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateHoursOfOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationId() const { return m_hoursOfOperationId; }
    template<typename HoursOfOperationIdT = Aws::String>
    void SetHoursOfOperationId(HoursOfOperationIdT&& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = std::forward<HoursOfOperationIdT>(value); }
    template<typename HoursOfOperationIdT = Aws::String>
    CreateHoursOfOperationResult& WithHoursOfOperationId(HoursOfOperationIdT&& value) { SetHoursOfOperationId(std::forward<HoursOfOperationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationArn() const { return m_hoursOfOperationArn; }
    template<typename HoursOfOperationArnT = Aws::String>
    void SetHoursOfOperationArn(HoursOfOperationArnT&& value) { m_hoursOfOperationArnHasBeenSet = true; m_hoursOfOperationArn = std::forward<HoursOfOperationArnT>(value); }
    template<typename HoursOfOperationArnT = Aws::String>
    CreateHoursOfOperationResult& WithHoursOfOperationArn(HoursOfOperationArnT&& value) { SetHoursOfOperationArn(std::forward<HoursOfOperationArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateHoursOfOperationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hoursOfOperationId;
    bool m_hoursOfOperationIdHasBeenSet = false;

    Aws::String m_hoursOfOperationArn;
    bool m_hoursOfOperationArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
