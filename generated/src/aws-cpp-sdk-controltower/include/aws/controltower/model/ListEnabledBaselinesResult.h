/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/EnabledBaselineSummary.h>
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
namespace ControlTower
{
namespace Model
{
  class ListEnabledBaselinesResult
  {
  public:
    AWS_CONTROLTOWER_API ListEnabledBaselinesResult() = default;
    AWS_CONTROLTOWER_API ListEnabledBaselinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API ListEnabledBaselinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Retuens a list of summaries of <code>EnabledBaseline</code> resources.</p>
     */
    inline const Aws::Vector<EnabledBaselineSummary>& GetEnabledBaselines() const { return m_enabledBaselines; }
    template<typename EnabledBaselinesT = Aws::Vector<EnabledBaselineSummary>>
    void SetEnabledBaselines(EnabledBaselinesT&& value) { m_enabledBaselinesHasBeenSet = true; m_enabledBaselines = std::forward<EnabledBaselinesT>(value); }
    template<typename EnabledBaselinesT = Aws::Vector<EnabledBaselineSummary>>
    ListEnabledBaselinesResult& WithEnabledBaselines(EnabledBaselinesT&& value) { SetEnabledBaselines(std::forward<EnabledBaselinesT>(value)); return *this;}
    template<typename EnabledBaselinesT = EnabledBaselineSummary>
    ListEnabledBaselinesResult& AddEnabledBaselines(EnabledBaselinesT&& value) { m_enabledBaselinesHasBeenSet = true; m_enabledBaselines.emplace_back(std::forward<EnabledBaselinesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEnabledBaselinesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEnabledBaselinesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EnabledBaselineSummary> m_enabledBaselines;
    bool m_enabledBaselinesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
