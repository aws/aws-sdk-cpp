/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connect/model/HoursOfOperationOverride.h>
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
  class ListHoursOfOperationOverridesResult
  {
  public:
    AWS_CONNECT_API ListHoursOfOperationOverridesResult();
    AWS_CONNECT_API ListHoursOfOperationOverridesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListHoursOfOperationOverridesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListHoursOfOperationOverridesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListHoursOfOperationOverridesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListHoursOfOperationOverridesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the hours of operation override.</p>
     */
    inline const Aws::Vector<HoursOfOperationOverride>& GetHoursOfOperationOverrideList() const{ return m_hoursOfOperationOverrideList; }
    inline void SetHoursOfOperationOverrideList(const Aws::Vector<HoursOfOperationOverride>& value) { m_hoursOfOperationOverrideList = value; }
    inline void SetHoursOfOperationOverrideList(Aws::Vector<HoursOfOperationOverride>&& value) { m_hoursOfOperationOverrideList = std::move(value); }
    inline ListHoursOfOperationOverridesResult& WithHoursOfOperationOverrideList(const Aws::Vector<HoursOfOperationOverride>& value) { SetHoursOfOperationOverrideList(value); return *this;}
    inline ListHoursOfOperationOverridesResult& WithHoursOfOperationOverrideList(Aws::Vector<HoursOfOperationOverride>&& value) { SetHoursOfOperationOverrideList(std::move(value)); return *this;}
    inline ListHoursOfOperationOverridesResult& AddHoursOfOperationOverrideList(const HoursOfOperationOverride& value) { m_hoursOfOperationOverrideList.push_back(value); return *this; }
    inline ListHoursOfOperationOverridesResult& AddHoursOfOperationOverrideList(HoursOfOperationOverride&& value) { m_hoursOfOperationOverrideList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The AWS Region where this resource was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const{ return m_lastModifiedRegion; }
    inline void SetLastModifiedRegion(const Aws::String& value) { m_lastModifiedRegion = value; }
    inline void SetLastModifiedRegion(Aws::String&& value) { m_lastModifiedRegion = std::move(value); }
    inline void SetLastModifiedRegion(const char* value) { m_lastModifiedRegion.assign(value); }
    inline ListHoursOfOperationOverridesResult& WithLastModifiedRegion(const Aws::String& value) { SetLastModifiedRegion(value); return *this;}
    inline ListHoursOfOperationOverridesResult& WithLastModifiedRegion(Aws::String&& value) { SetLastModifiedRegion(std::move(value)); return *this;}
    inline ListHoursOfOperationOverridesResult& WithLastModifiedRegion(const char* value) { SetLastModifiedRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline ListHoursOfOperationOverridesResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline ListHoursOfOperationOverridesResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListHoursOfOperationOverridesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListHoursOfOperationOverridesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListHoursOfOperationOverridesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<HoursOfOperationOverride> m_hoursOfOperationOverrideList;

    Aws::String m_lastModifiedRegion;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
