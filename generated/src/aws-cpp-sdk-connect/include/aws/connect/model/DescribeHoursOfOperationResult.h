﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/HoursOfOperation.h>
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
  class DescribeHoursOfOperationResult
  {
  public:
    AWS_CONNECT_API DescribeHoursOfOperationResult() = default;
    AWS_CONNECT_API DescribeHoursOfOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeHoursOfOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The hours of operation.</p>
     */
    inline const HoursOfOperation& GetHoursOfOperation() const { return m_hoursOfOperation; }
    template<typename HoursOfOperationT = HoursOfOperation>
    void SetHoursOfOperation(HoursOfOperationT&& value) { m_hoursOfOperationHasBeenSet = true; m_hoursOfOperation = std::forward<HoursOfOperationT>(value); }
    template<typename HoursOfOperationT = HoursOfOperation>
    DescribeHoursOfOperationResult& WithHoursOfOperation(HoursOfOperationT&& value) { SetHoursOfOperation(std::forward<HoursOfOperationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeHoursOfOperationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    HoursOfOperation m_hoursOfOperation;
    bool m_hoursOfOperationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
