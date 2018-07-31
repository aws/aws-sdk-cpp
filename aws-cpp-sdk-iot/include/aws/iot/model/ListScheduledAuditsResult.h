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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ScheduledAuditMetadata.h>
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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API ListScheduledAuditsResult
  {
  public:
    ListScheduledAuditsResult();
    ListScheduledAuditsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListScheduledAuditsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of scheduled audits.</p>
     */
    inline const Aws::Vector<ScheduledAuditMetadata>& GetScheduledAudits() const{ return m_scheduledAudits; }

    /**
     * <p>The list of scheduled audits.</p>
     */
    inline void SetScheduledAudits(const Aws::Vector<ScheduledAuditMetadata>& value) { m_scheduledAudits = value; }

    /**
     * <p>The list of scheduled audits.</p>
     */
    inline void SetScheduledAudits(Aws::Vector<ScheduledAuditMetadata>&& value) { m_scheduledAudits = std::move(value); }

    /**
     * <p>The list of scheduled audits.</p>
     */
    inline ListScheduledAuditsResult& WithScheduledAudits(const Aws::Vector<ScheduledAuditMetadata>& value) { SetScheduledAudits(value); return *this;}

    /**
     * <p>The list of scheduled audits.</p>
     */
    inline ListScheduledAuditsResult& WithScheduledAudits(Aws::Vector<ScheduledAuditMetadata>&& value) { SetScheduledAudits(std::move(value)); return *this;}

    /**
     * <p>The list of scheduled audits.</p>
     */
    inline ListScheduledAuditsResult& AddScheduledAudits(const ScheduledAuditMetadata& value) { m_scheduledAudits.push_back(value); return *this; }

    /**
     * <p>The list of scheduled audits.</p>
     */
    inline ListScheduledAuditsResult& AddScheduledAudits(ScheduledAuditMetadata&& value) { m_scheduledAudits.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListScheduledAuditsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListScheduledAuditsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListScheduledAuditsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ScheduledAuditMetadata> m_scheduledAudits;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
