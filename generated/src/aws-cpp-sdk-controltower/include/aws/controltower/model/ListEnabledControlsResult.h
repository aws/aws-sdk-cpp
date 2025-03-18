/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/EnabledControlSummary.h>
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
  class ListEnabledControlsResult
  {
  public:
    AWS_CONTROLTOWER_API ListEnabledControlsResult() = default;
    AWS_CONTROLTOWER_API ListEnabledControlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API ListEnabledControlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists the controls enabled by Amazon Web Services Control Tower on the
     * specified organizational unit and the accounts it contains.</p>
     */
    inline const Aws::Vector<EnabledControlSummary>& GetEnabledControls() const { return m_enabledControls; }
    template<typename EnabledControlsT = Aws::Vector<EnabledControlSummary>>
    void SetEnabledControls(EnabledControlsT&& value) { m_enabledControlsHasBeenSet = true; m_enabledControls = std::forward<EnabledControlsT>(value); }
    template<typename EnabledControlsT = Aws::Vector<EnabledControlSummary>>
    ListEnabledControlsResult& WithEnabledControls(EnabledControlsT&& value) { SetEnabledControls(std::forward<EnabledControlsT>(value)); return *this;}
    template<typename EnabledControlsT = EnabledControlSummary>
    ListEnabledControlsResult& AddEnabledControls(EnabledControlsT&& value) { m_enabledControlsHasBeenSet = true; m_enabledControls.emplace_back(std::forward<EnabledControlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Retrieves the next page of results. If the string is empty, the response is
     * the end of the results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEnabledControlsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEnabledControlsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EnabledControlSummary> m_enabledControls;
    bool m_enabledControlsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
