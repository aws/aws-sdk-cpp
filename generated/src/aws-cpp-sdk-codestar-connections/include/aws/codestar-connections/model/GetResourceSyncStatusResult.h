/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/model/Revision.h>
#include <aws/codestar-connections/model/ResourceSyncAttempt.h>
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
namespace CodeStarconnections
{
namespace Model
{
  class GetResourceSyncStatusResult
  {
  public:
    AWS_CODESTARCONNECTIONS_API GetResourceSyncStatusResult();
    AWS_CODESTARCONNECTIONS_API GetResourceSyncStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARCONNECTIONS_API GetResourceSyncStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The desired state of the Amazon Web Services resource for the sync status
     * with the Git repository.</p>
     */
    inline const Revision& GetDesiredState() const{ return m_desiredState; }

    /**
     * <p>The desired state of the Amazon Web Services resource for the sync status
     * with the Git repository.</p>
     */
    inline void SetDesiredState(const Revision& value) { m_desiredState = value; }

    /**
     * <p>The desired state of the Amazon Web Services resource for the sync status
     * with the Git repository.</p>
     */
    inline void SetDesiredState(Revision&& value) { m_desiredState = std::move(value); }

    /**
     * <p>The desired state of the Amazon Web Services resource for the sync status
     * with the Git repository.</p>
     */
    inline GetResourceSyncStatusResult& WithDesiredState(const Revision& value) { SetDesiredState(value); return *this;}

    /**
     * <p>The desired state of the Amazon Web Services resource for the sync status
     * with the Git repository.</p>
     */
    inline GetResourceSyncStatusResult& WithDesiredState(Revision&& value) { SetDesiredState(std::move(value)); return *this;}


    /**
     * <p>The latest successful sync for the sync status with the Git repository.</p>
     */
    inline const ResourceSyncAttempt& GetLatestSuccessfulSync() const{ return m_latestSuccessfulSync; }

    /**
     * <p>The latest successful sync for the sync status with the Git repository.</p>
     */
    inline void SetLatestSuccessfulSync(const ResourceSyncAttempt& value) { m_latestSuccessfulSync = value; }

    /**
     * <p>The latest successful sync for the sync status with the Git repository.</p>
     */
    inline void SetLatestSuccessfulSync(ResourceSyncAttempt&& value) { m_latestSuccessfulSync = std::move(value); }

    /**
     * <p>The latest successful sync for the sync status with the Git repository.</p>
     */
    inline GetResourceSyncStatusResult& WithLatestSuccessfulSync(const ResourceSyncAttempt& value) { SetLatestSuccessfulSync(value); return *this;}

    /**
     * <p>The latest successful sync for the sync status with the Git repository.</p>
     */
    inline GetResourceSyncStatusResult& WithLatestSuccessfulSync(ResourceSyncAttempt&& value) { SetLatestSuccessfulSync(std::move(value)); return *this;}


    /**
     * <p>The latest sync for the sync status with the Git repository, whether
     * successful or not.</p>
     */
    inline const ResourceSyncAttempt& GetLatestSync() const{ return m_latestSync; }

    /**
     * <p>The latest sync for the sync status with the Git repository, whether
     * successful or not.</p>
     */
    inline void SetLatestSync(const ResourceSyncAttempt& value) { m_latestSync = value; }

    /**
     * <p>The latest sync for the sync status with the Git repository, whether
     * successful or not.</p>
     */
    inline void SetLatestSync(ResourceSyncAttempt&& value) { m_latestSync = std::move(value); }

    /**
     * <p>The latest sync for the sync status with the Git repository, whether
     * successful or not.</p>
     */
    inline GetResourceSyncStatusResult& WithLatestSync(const ResourceSyncAttempt& value) { SetLatestSync(value); return *this;}

    /**
     * <p>The latest sync for the sync status with the Git repository, whether
     * successful or not.</p>
     */
    inline GetResourceSyncStatusResult& WithLatestSync(ResourceSyncAttempt&& value) { SetLatestSync(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetResourceSyncStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetResourceSyncStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetResourceSyncStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Revision m_desiredState;

    ResourceSyncAttempt m_latestSuccessfulSync;

    ResourceSyncAttempt m_latestSync;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
