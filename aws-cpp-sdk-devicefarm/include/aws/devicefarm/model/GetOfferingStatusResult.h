/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/OfferingStatus.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Returns the status result for a device offering.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetOfferingStatusResult">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API GetOfferingStatusResult
  {
  public:
    GetOfferingStatusResult();
    GetOfferingStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetOfferingStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When specified, gets the offering status for the current period.</p>
     */
    inline const Aws::Map<Aws::String, OfferingStatus>& GetCurrent() const{ return m_current; }

    /**
     * <p>When specified, gets the offering status for the current period.</p>
     */
    inline void SetCurrent(const Aws::Map<Aws::String, OfferingStatus>& value) { m_current = value; }

    /**
     * <p>When specified, gets the offering status for the current period.</p>
     */
    inline void SetCurrent(Aws::Map<Aws::String, OfferingStatus>&& value) { m_current = std::move(value); }

    /**
     * <p>When specified, gets the offering status for the current period.</p>
     */
    inline GetOfferingStatusResult& WithCurrent(const Aws::Map<Aws::String, OfferingStatus>& value) { SetCurrent(value); return *this;}

    /**
     * <p>When specified, gets the offering status for the current period.</p>
     */
    inline GetOfferingStatusResult& WithCurrent(Aws::Map<Aws::String, OfferingStatus>&& value) { SetCurrent(std::move(value)); return *this;}

    /**
     * <p>When specified, gets the offering status for the current period.</p>
     */
    inline GetOfferingStatusResult& AddCurrent(const Aws::String& key, const OfferingStatus& value) { m_current.emplace(key, value); return *this; }

    /**
     * <p>When specified, gets the offering status for the current period.</p>
     */
    inline GetOfferingStatusResult& AddCurrent(Aws::String&& key, const OfferingStatus& value) { m_current.emplace(std::move(key), value); return *this; }

    /**
     * <p>When specified, gets the offering status for the current period.</p>
     */
    inline GetOfferingStatusResult& AddCurrent(const Aws::String& key, OfferingStatus&& value) { m_current.emplace(key, std::move(value)); return *this; }

    /**
     * <p>When specified, gets the offering status for the current period.</p>
     */
    inline GetOfferingStatusResult& AddCurrent(Aws::String&& key, OfferingStatus&& value) { m_current.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>When specified, gets the offering status for the current period.</p>
     */
    inline GetOfferingStatusResult& AddCurrent(const char* key, OfferingStatus&& value) { m_current.emplace(key, std::move(value)); return *this; }

    /**
     * <p>When specified, gets the offering status for the current period.</p>
     */
    inline GetOfferingStatusResult& AddCurrent(const char* key, const OfferingStatus& value) { m_current.emplace(key, value); return *this; }


    /**
     * <p>When specified, gets the offering status for the next period.</p>
     */
    inline const Aws::Map<Aws::String, OfferingStatus>& GetNextPeriod() const{ return m_nextPeriod; }

    /**
     * <p>When specified, gets the offering status for the next period.</p>
     */
    inline void SetNextPeriod(const Aws::Map<Aws::String, OfferingStatus>& value) { m_nextPeriod = value; }

    /**
     * <p>When specified, gets the offering status for the next period.</p>
     */
    inline void SetNextPeriod(Aws::Map<Aws::String, OfferingStatus>&& value) { m_nextPeriod = std::move(value); }

    /**
     * <p>When specified, gets the offering status for the next period.</p>
     */
    inline GetOfferingStatusResult& WithNextPeriod(const Aws::Map<Aws::String, OfferingStatus>& value) { SetNextPeriod(value); return *this;}

    /**
     * <p>When specified, gets the offering status for the next period.</p>
     */
    inline GetOfferingStatusResult& WithNextPeriod(Aws::Map<Aws::String, OfferingStatus>&& value) { SetNextPeriod(std::move(value)); return *this;}

    /**
     * <p>When specified, gets the offering status for the next period.</p>
     */
    inline GetOfferingStatusResult& AddNextPeriod(const Aws::String& key, const OfferingStatus& value) { m_nextPeriod.emplace(key, value); return *this; }

    /**
     * <p>When specified, gets the offering status for the next period.</p>
     */
    inline GetOfferingStatusResult& AddNextPeriod(Aws::String&& key, const OfferingStatus& value) { m_nextPeriod.emplace(std::move(key), value); return *this; }

    /**
     * <p>When specified, gets the offering status for the next period.</p>
     */
    inline GetOfferingStatusResult& AddNextPeriod(const Aws::String& key, OfferingStatus&& value) { m_nextPeriod.emplace(key, std::move(value)); return *this; }

    /**
     * <p>When specified, gets the offering status for the next period.</p>
     */
    inline GetOfferingStatusResult& AddNextPeriod(Aws::String&& key, OfferingStatus&& value) { m_nextPeriod.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>When specified, gets the offering status for the next period.</p>
     */
    inline GetOfferingStatusResult& AddNextPeriod(const char* key, OfferingStatus&& value) { m_nextPeriod.emplace(key, std::move(value)); return *this; }

    /**
     * <p>When specified, gets the offering status for the next period.</p>
     */
    inline GetOfferingStatusResult& AddNextPeriod(const char* key, const OfferingStatus& value) { m_nextPeriod.emplace(key, value); return *this; }


    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline GetOfferingStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline GetOfferingStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline GetOfferingStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Map<Aws::String, OfferingStatus> m_current;

    Aws::Map<Aws::String, OfferingStatus> m_nextPeriod;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
