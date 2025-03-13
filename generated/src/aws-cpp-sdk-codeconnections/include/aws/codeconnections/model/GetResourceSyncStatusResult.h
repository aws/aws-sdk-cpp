/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/codeconnections/model/Revision.h>
#include <aws/codeconnections/model/ResourceSyncAttempt.h>
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
namespace CodeConnections
{
namespace Model
{
  class GetResourceSyncStatusResult
  {
  public:
    AWS_CODECONNECTIONS_API GetResourceSyncStatusResult() = default;
    AWS_CODECONNECTIONS_API GetResourceSyncStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECONNECTIONS_API GetResourceSyncStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The desired state of the Amazon Web Services resource for the sync status
     * with the Git repository.</p>
     */
    inline const Revision& GetDesiredState() const { return m_desiredState; }
    template<typename DesiredStateT = Revision>
    void SetDesiredState(DesiredStateT&& value) { m_desiredStateHasBeenSet = true; m_desiredState = std::forward<DesiredStateT>(value); }
    template<typename DesiredStateT = Revision>
    GetResourceSyncStatusResult& WithDesiredState(DesiredStateT&& value) { SetDesiredState(std::forward<DesiredStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest successful sync for the sync status with the Git repository.</p>
     */
    inline const ResourceSyncAttempt& GetLatestSuccessfulSync() const { return m_latestSuccessfulSync; }
    template<typename LatestSuccessfulSyncT = ResourceSyncAttempt>
    void SetLatestSuccessfulSync(LatestSuccessfulSyncT&& value) { m_latestSuccessfulSyncHasBeenSet = true; m_latestSuccessfulSync = std::forward<LatestSuccessfulSyncT>(value); }
    template<typename LatestSuccessfulSyncT = ResourceSyncAttempt>
    GetResourceSyncStatusResult& WithLatestSuccessfulSync(LatestSuccessfulSyncT&& value) { SetLatestSuccessfulSync(std::forward<LatestSuccessfulSyncT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest sync for the sync status with the Git repository, whether
     * successful or not.</p>
     */
    inline const ResourceSyncAttempt& GetLatestSync() const { return m_latestSync; }
    template<typename LatestSyncT = ResourceSyncAttempt>
    void SetLatestSync(LatestSyncT&& value) { m_latestSyncHasBeenSet = true; m_latestSync = std::forward<LatestSyncT>(value); }
    template<typename LatestSyncT = ResourceSyncAttempt>
    GetResourceSyncStatusResult& WithLatestSync(LatestSyncT&& value) { SetLatestSync(std::forward<LatestSyncT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourceSyncStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Revision m_desiredState;
    bool m_desiredStateHasBeenSet = false;

    ResourceSyncAttempt m_latestSuccessfulSync;
    bool m_latestSuccessfulSyncHasBeenSet = false;

    ResourceSyncAttempt m_latestSync;
    bool m_latestSyncHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
