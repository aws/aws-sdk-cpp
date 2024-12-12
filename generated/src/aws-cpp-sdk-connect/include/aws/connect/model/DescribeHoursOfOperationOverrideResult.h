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
    AWS_CONNECT_API DescribeHoursOfOperationOverrideResult();
    AWS_CONNECT_API DescribeHoursOfOperationOverrideResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeHoursOfOperationOverrideResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the hours of operations override. </p>
     */
    inline const HoursOfOperationOverride& GetHoursOfOperationOverride() const{ return m_hoursOfOperationOverride; }
    inline void SetHoursOfOperationOverride(const HoursOfOperationOverride& value) { m_hoursOfOperationOverride = value; }
    inline void SetHoursOfOperationOverride(HoursOfOperationOverride&& value) { m_hoursOfOperationOverride = std::move(value); }
    inline DescribeHoursOfOperationOverrideResult& WithHoursOfOperationOverride(const HoursOfOperationOverride& value) { SetHoursOfOperationOverride(value); return *this;}
    inline DescribeHoursOfOperationOverrideResult& WithHoursOfOperationOverride(HoursOfOperationOverride&& value) { SetHoursOfOperationOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeHoursOfOperationOverrideResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeHoursOfOperationOverrideResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeHoursOfOperationOverrideResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    HoursOfOperationOverride m_hoursOfOperationOverride;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
