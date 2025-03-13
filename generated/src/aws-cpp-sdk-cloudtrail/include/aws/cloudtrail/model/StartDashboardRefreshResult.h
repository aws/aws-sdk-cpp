/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
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
namespace CloudTrail
{
namespace Model
{
  class StartDashboardRefreshResult
  {
  public:
    AWS_CLOUDTRAIL_API StartDashboardRefreshResult() = default;
    AWS_CLOUDTRAIL_API StartDashboardRefreshResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API StartDashboardRefreshResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The refresh ID for the dashboard. </p>
     */
    inline const Aws::String& GetRefreshId() const { return m_refreshId; }
    template<typename RefreshIdT = Aws::String>
    void SetRefreshId(RefreshIdT&& value) { m_refreshIdHasBeenSet = true; m_refreshId = std::forward<RefreshIdT>(value); }
    template<typename RefreshIdT = Aws::String>
    StartDashboardRefreshResult& WithRefreshId(RefreshIdT&& value) { SetRefreshId(std::forward<RefreshIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartDashboardRefreshResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_refreshId;
    bool m_refreshIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
