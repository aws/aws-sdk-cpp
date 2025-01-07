/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/EffectiveHoursOfOperations.h>
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
  class GetEffectiveHoursOfOperationsResult
  {
  public:
    AWS_CONNECT_API GetEffectiveHoursOfOperationsResult();
    AWS_CONNECT_API GetEffectiveHoursOfOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API GetEffectiveHoursOfOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the effective hours of operations</p>
     */
    inline const Aws::Vector<EffectiveHoursOfOperations>& GetEffectiveHoursOfOperationList() const{ return m_effectiveHoursOfOperationList; }
    inline void SetEffectiveHoursOfOperationList(const Aws::Vector<EffectiveHoursOfOperations>& value) { m_effectiveHoursOfOperationList = value; }
    inline void SetEffectiveHoursOfOperationList(Aws::Vector<EffectiveHoursOfOperations>&& value) { m_effectiveHoursOfOperationList = std::move(value); }
    inline GetEffectiveHoursOfOperationsResult& WithEffectiveHoursOfOperationList(const Aws::Vector<EffectiveHoursOfOperations>& value) { SetEffectiveHoursOfOperationList(value); return *this;}
    inline GetEffectiveHoursOfOperationsResult& WithEffectiveHoursOfOperationList(Aws::Vector<EffectiveHoursOfOperations>&& value) { SetEffectiveHoursOfOperationList(std::move(value)); return *this;}
    inline GetEffectiveHoursOfOperationsResult& AddEffectiveHoursOfOperationList(const EffectiveHoursOfOperations& value) { m_effectiveHoursOfOperationList.push_back(value); return *this; }
    inline GetEffectiveHoursOfOperationsResult& AddEffectiveHoursOfOperationList(EffectiveHoursOfOperations&& value) { m_effectiveHoursOfOperationList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time zone for the hours of operation.</p>
     */
    inline const Aws::String& GetTimeZone() const{ return m_timeZone; }
    inline void SetTimeZone(const Aws::String& value) { m_timeZone = value; }
    inline void SetTimeZone(Aws::String&& value) { m_timeZone = std::move(value); }
    inline void SetTimeZone(const char* value) { m_timeZone.assign(value); }
    inline GetEffectiveHoursOfOperationsResult& WithTimeZone(const Aws::String& value) { SetTimeZone(value); return *this;}
    inline GetEffectiveHoursOfOperationsResult& WithTimeZone(Aws::String&& value) { SetTimeZone(std::move(value)); return *this;}
    inline GetEffectiveHoursOfOperationsResult& WithTimeZone(const char* value) { SetTimeZone(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEffectiveHoursOfOperationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEffectiveHoursOfOperationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEffectiveHoursOfOperationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EffectiveHoursOfOperations> m_effectiveHoursOfOperationList;

    Aws::String m_timeZone;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
