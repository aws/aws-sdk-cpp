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
    AWS_CONNECT_API DescribeHoursOfOperationResult();
    AWS_CONNECT_API DescribeHoursOfOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeHoursOfOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The hours of operation.</p>
     */
    inline const HoursOfOperation& GetHoursOfOperation() const{ return m_hoursOfOperation; }
    inline void SetHoursOfOperation(const HoursOfOperation& value) { m_hoursOfOperation = value; }
    inline void SetHoursOfOperation(HoursOfOperation&& value) { m_hoursOfOperation = std::move(value); }
    inline DescribeHoursOfOperationResult& WithHoursOfOperation(const HoursOfOperation& value) { SetHoursOfOperation(value); return *this;}
    inline DescribeHoursOfOperationResult& WithHoursOfOperation(HoursOfOperation&& value) { SetHoursOfOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeHoursOfOperationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeHoursOfOperationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeHoursOfOperationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    HoursOfOperation m_hoursOfOperation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
