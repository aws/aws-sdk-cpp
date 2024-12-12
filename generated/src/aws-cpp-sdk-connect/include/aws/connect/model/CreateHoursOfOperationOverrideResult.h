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
    AWS_CONNECT_API CreateHoursOfOperationOverrideResult();
    AWS_CONNECT_API CreateHoursOfOperationOverrideResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateHoursOfOperationOverrideResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the hours of operation override.</p>
     */
    inline const Aws::String& GetHoursOfOperationOverrideId() const{ return m_hoursOfOperationOverrideId; }
    inline void SetHoursOfOperationOverrideId(const Aws::String& value) { m_hoursOfOperationOverrideId = value; }
    inline void SetHoursOfOperationOverrideId(Aws::String&& value) { m_hoursOfOperationOverrideId = std::move(value); }
    inline void SetHoursOfOperationOverrideId(const char* value) { m_hoursOfOperationOverrideId.assign(value); }
    inline CreateHoursOfOperationOverrideResult& WithHoursOfOperationOverrideId(const Aws::String& value) { SetHoursOfOperationOverrideId(value); return *this;}
    inline CreateHoursOfOperationOverrideResult& WithHoursOfOperationOverrideId(Aws::String&& value) { SetHoursOfOperationOverrideId(std::move(value)); return *this;}
    inline CreateHoursOfOperationOverrideResult& WithHoursOfOperationOverrideId(const char* value) { SetHoursOfOperationOverrideId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateHoursOfOperationOverrideResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateHoursOfOperationOverrideResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateHoursOfOperationOverrideResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_hoursOfOperationOverrideId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
