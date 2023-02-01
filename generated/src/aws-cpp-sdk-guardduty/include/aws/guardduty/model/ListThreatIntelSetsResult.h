/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListThreatIntelSetsResult
  {
  public:
    AWS_GUARDDUTY_API ListThreatIntelSetsResult();
    AWS_GUARDDUTY_API ListThreatIntelSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API ListThreatIntelSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListThreatIntelSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListThreatIntelSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListThreatIntelSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_threatIntelSetIds;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
