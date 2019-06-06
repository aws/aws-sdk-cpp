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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace GuardDuty
{
namespace Model
{
  class AWS_GUARDDUTY_API ListThreatIntelSetsResult
  {
  public:
    ListThreatIntelSetsResult();
    ListThreatIntelSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListThreatIntelSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The IDs of the ThreatIntelSet resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThreatIntelSetIds() const{ return m_threatIntelSetIds; }

    /**
     * <p>The IDs of the ThreatIntelSet resources.</p>
     */
    inline void SetThreatIntelSetIds(const Aws::Vector<Aws::String>& value) { m_threatIntelSetIds = value; }

    /**
     * <p>The IDs of the ThreatIntelSet resources.</p>
     */
    inline void SetThreatIntelSetIds(Aws::Vector<Aws::String>&& value) { m_threatIntelSetIds = std::move(value); }

    /**
     * <p>The IDs of the ThreatIntelSet resources.</p>
     */
    inline ListThreatIntelSetsResult& WithThreatIntelSetIds(const Aws::Vector<Aws::String>& value) { SetThreatIntelSetIds(value); return *this;}

    /**
     * <p>The IDs of the ThreatIntelSet resources.</p>
     */
    inline ListThreatIntelSetsResult& WithThreatIntelSetIds(Aws::Vector<Aws::String>&& value) { SetThreatIntelSetIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the ThreatIntelSet resources.</p>
     */
    inline ListThreatIntelSetsResult& AddThreatIntelSetIds(const Aws::String& value) { m_threatIntelSetIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the ThreatIntelSet resources.</p>
     */
    inline ListThreatIntelSetsResult& AddThreatIntelSetIds(Aws::String&& value) { m_threatIntelSetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the ThreatIntelSet resources.</p>
     */
    inline ListThreatIntelSetsResult& AddThreatIntelSetIds(const char* value) { m_threatIntelSetIds.push_back(value); return *this; }


    /**
     * <p>Pagination parameter to be used on the next list operation to retrieve more
     * items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination parameter to be used on the next list operation to retrieve more
     * items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination parameter to be used on the next list operation to retrieve more
     * items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination parameter to be used on the next list operation to retrieve more
     * items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination parameter to be used on the next list operation to retrieve more
     * items.</p>
     */
    inline ListThreatIntelSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination parameter to be used on the next list operation to retrieve more
     * items.</p>
     */
    inline ListThreatIntelSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination parameter to be used on the next list operation to retrieve more
     * items.</p>
     */
    inline ListThreatIntelSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_threatIntelSetIds;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
