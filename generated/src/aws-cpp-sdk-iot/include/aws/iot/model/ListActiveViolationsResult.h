/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ActiveViolation.h>
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
  class ListActiveViolationsResult
  {
  public:
    AWS_IOT_API ListActiveViolationsResult() = default;
    AWS_IOT_API ListActiveViolationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListActiveViolationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of active violations.</p>
     */
    inline const Aws::Vector<ActiveViolation>& GetActiveViolations() const { return m_activeViolations; }
    template<typename ActiveViolationsT = Aws::Vector<ActiveViolation>>
    void SetActiveViolations(ActiveViolationsT&& value) { m_activeViolationsHasBeenSet = true; m_activeViolations = std::forward<ActiveViolationsT>(value); }
    template<typename ActiveViolationsT = Aws::Vector<ActiveViolation>>
    ListActiveViolationsResult& WithActiveViolations(ActiveViolationsT&& value) { SetActiveViolations(std::forward<ActiveViolationsT>(value)); return *this;}
    template<typename ActiveViolationsT = ActiveViolation>
    ListActiveViolationsResult& AddActiveViolations(ActiveViolationsT&& value) { m_activeViolationsHasBeenSet = true; m_activeViolations.emplace_back(std::forward<ActiveViolationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListActiveViolationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListActiveViolationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ActiveViolation> m_activeViolations;
    bool m_activeViolationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
