/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/GroupCount.h>
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
namespace Macie2
{
namespace Model
{
  class GetFindingStatisticsResult
  {
  public:
    AWS_MACIE2_API GetFindingStatisticsResult();
    AWS_MACIE2_API GetFindingStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetFindingStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects, one for each group of findings that matches the filter
     * criteria specified in the request.</p>
     */
    inline const Aws::Vector<GroupCount>& GetCountsByGroup() const{ return m_countsByGroup; }

    /**
     * <p>An array of objects, one for each group of findings that matches the filter
     * criteria specified in the request.</p>
     */
    inline void SetCountsByGroup(const Aws::Vector<GroupCount>& value) { m_countsByGroup = value; }

    /**
     * <p>An array of objects, one for each group of findings that matches the filter
     * criteria specified in the request.</p>
     */
    inline void SetCountsByGroup(Aws::Vector<GroupCount>&& value) { m_countsByGroup = std::move(value); }

    /**
     * <p>An array of objects, one for each group of findings that matches the filter
     * criteria specified in the request.</p>
     */
    inline GetFindingStatisticsResult& WithCountsByGroup(const Aws::Vector<GroupCount>& value) { SetCountsByGroup(value); return *this;}

    /**
     * <p>An array of objects, one for each group of findings that matches the filter
     * criteria specified in the request.</p>
     */
    inline GetFindingStatisticsResult& WithCountsByGroup(Aws::Vector<GroupCount>&& value) { SetCountsByGroup(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each group of findings that matches the filter
     * criteria specified in the request.</p>
     */
    inline GetFindingStatisticsResult& AddCountsByGroup(const GroupCount& value) { m_countsByGroup.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each group of findings that matches the filter
     * criteria specified in the request.</p>
     */
    inline GetFindingStatisticsResult& AddCountsByGroup(GroupCount&& value) { m_countsByGroup.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetFindingStatisticsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetFindingStatisticsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetFindingStatisticsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<GroupCount> m_countsByGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
