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
    AWS_MACIE2_API GetFindingStatisticsResult() = default;
    AWS_MACIE2_API GetFindingStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetFindingStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects, one for each group of findings that matches the filter
     * criteria specified in the request.</p>
     */
    inline const Aws::Vector<GroupCount>& GetCountsByGroup() const { return m_countsByGroup; }
    template<typename CountsByGroupT = Aws::Vector<GroupCount>>
    void SetCountsByGroup(CountsByGroupT&& value) { m_countsByGroupHasBeenSet = true; m_countsByGroup = std::forward<CountsByGroupT>(value); }
    template<typename CountsByGroupT = Aws::Vector<GroupCount>>
    GetFindingStatisticsResult& WithCountsByGroup(CountsByGroupT&& value) { SetCountsByGroup(std::forward<CountsByGroupT>(value)); return *this;}
    template<typename CountsByGroupT = GroupCount>
    GetFindingStatisticsResult& AddCountsByGroup(CountsByGroupT&& value) { m_countsByGroupHasBeenSet = true; m_countsByGroup.emplace_back(std::forward<CountsByGroupT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFindingStatisticsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GroupCount> m_countsByGroup;
    bool m_countsByGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
