/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/FailedCreateStandbyWorkspacesRequest.h>
#include <aws/workspaces/model/PendingCreateStandbyWorkspacesRequest.h>
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
namespace WorkSpaces
{
namespace Model
{
  class CreateStandbyWorkspacesResult
  {
  public:
    AWS_WORKSPACES_API CreateStandbyWorkspacesResult();
    AWS_WORKSPACES_API CreateStandbyWorkspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API CreateStandbyWorkspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the Standby WorkSpace that could not be created. </p>
     */
    inline const Aws::Vector<FailedCreateStandbyWorkspacesRequest>& GetFailedStandbyRequests() const{ return m_failedStandbyRequests; }

    /**
     * <p>Information about the Standby WorkSpace that could not be created. </p>
     */
    inline void SetFailedStandbyRequests(const Aws::Vector<FailedCreateStandbyWorkspacesRequest>& value) { m_failedStandbyRequests = value; }

    /**
     * <p>Information about the Standby WorkSpace that could not be created. </p>
     */
    inline void SetFailedStandbyRequests(Aws::Vector<FailedCreateStandbyWorkspacesRequest>&& value) { m_failedStandbyRequests = std::move(value); }

    /**
     * <p>Information about the Standby WorkSpace that could not be created. </p>
     */
    inline CreateStandbyWorkspacesResult& WithFailedStandbyRequests(const Aws::Vector<FailedCreateStandbyWorkspacesRequest>& value) { SetFailedStandbyRequests(value); return *this;}

    /**
     * <p>Information about the Standby WorkSpace that could not be created. </p>
     */
    inline CreateStandbyWorkspacesResult& WithFailedStandbyRequests(Aws::Vector<FailedCreateStandbyWorkspacesRequest>&& value) { SetFailedStandbyRequests(std::move(value)); return *this;}

    /**
     * <p>Information about the Standby WorkSpace that could not be created. </p>
     */
    inline CreateStandbyWorkspacesResult& AddFailedStandbyRequests(const FailedCreateStandbyWorkspacesRequest& value) { m_failedStandbyRequests.push_back(value); return *this; }

    /**
     * <p>Information about the Standby WorkSpace that could not be created. </p>
     */
    inline CreateStandbyWorkspacesResult& AddFailedStandbyRequests(FailedCreateStandbyWorkspacesRequest&& value) { m_failedStandbyRequests.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the Standby WorkSpace that was created.</p>
     */
    inline const Aws::Vector<PendingCreateStandbyWorkspacesRequest>& GetPendingStandbyRequests() const{ return m_pendingStandbyRequests; }

    /**
     * <p>Information about the Standby WorkSpace that was created.</p>
     */
    inline void SetPendingStandbyRequests(const Aws::Vector<PendingCreateStandbyWorkspacesRequest>& value) { m_pendingStandbyRequests = value; }

    /**
     * <p>Information about the Standby WorkSpace that was created.</p>
     */
    inline void SetPendingStandbyRequests(Aws::Vector<PendingCreateStandbyWorkspacesRequest>&& value) { m_pendingStandbyRequests = std::move(value); }

    /**
     * <p>Information about the Standby WorkSpace that was created.</p>
     */
    inline CreateStandbyWorkspacesResult& WithPendingStandbyRequests(const Aws::Vector<PendingCreateStandbyWorkspacesRequest>& value) { SetPendingStandbyRequests(value); return *this;}

    /**
     * <p>Information about the Standby WorkSpace that was created.</p>
     */
    inline CreateStandbyWorkspacesResult& WithPendingStandbyRequests(Aws::Vector<PendingCreateStandbyWorkspacesRequest>&& value) { SetPendingStandbyRequests(std::move(value)); return *this;}

    /**
     * <p>Information about the Standby WorkSpace that was created.</p>
     */
    inline CreateStandbyWorkspacesResult& AddPendingStandbyRequests(const PendingCreateStandbyWorkspacesRequest& value) { m_pendingStandbyRequests.push_back(value); return *this; }

    /**
     * <p>Information about the Standby WorkSpace that was created.</p>
     */
    inline CreateStandbyWorkspacesResult& AddPendingStandbyRequests(PendingCreateStandbyWorkspacesRequest&& value) { m_pendingStandbyRequests.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FailedCreateStandbyWorkspacesRequest> m_failedStandbyRequests;

    Aws::Vector<PendingCreateStandbyWorkspacesRequest> m_pendingStandbyRequests;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
