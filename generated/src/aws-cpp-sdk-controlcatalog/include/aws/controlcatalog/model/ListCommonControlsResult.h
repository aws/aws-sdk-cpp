/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controlcatalog/model/CommonControlSummary.h>
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
namespace ControlCatalog
{
namespace Model
{
  class ListCommonControlsResult
  {
  public:
    AWS_CONTROLCATALOG_API ListCommonControlsResult() = default;
    AWS_CONTROLCATALOG_API ListCommonControlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLCATALOG_API ListCommonControlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of common controls that the <code>ListCommonControls</code> API
     * returns.</p>
     */
    inline const Aws::Vector<CommonControlSummary>& GetCommonControls() const { return m_commonControls; }
    template<typename CommonControlsT = Aws::Vector<CommonControlSummary>>
    void SetCommonControls(CommonControlsT&& value) { m_commonControlsHasBeenSet = true; m_commonControls = std::forward<CommonControlsT>(value); }
    template<typename CommonControlsT = Aws::Vector<CommonControlSummary>>
    ListCommonControlsResult& WithCommonControls(CommonControlsT&& value) { SetCommonControls(std::forward<CommonControlsT>(value)); return *this;}
    template<typename CommonControlsT = CommonControlSummary>
    ListCommonControlsResult& AddCommonControls(CommonControlsT&& value) { m_commonControlsHasBeenSet = true; m_commonControls.emplace_back(std::forward<CommonControlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCommonControlsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCommonControlsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CommonControlSummary> m_commonControls;
    bool m_commonControlsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
