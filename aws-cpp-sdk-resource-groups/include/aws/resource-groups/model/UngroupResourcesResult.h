/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/FailedResource.h>
#include <aws/resource-groups/model/PendingResource.h>
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
namespace ResourceGroups
{
namespace Model
{
  class UngroupResourcesResult
  {
  public:
    AWS_RESOURCEGROUPS_API UngroupResourcesResult();
    AWS_RESOURCEGROUPS_API UngroupResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API UngroupResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of resources that were successfully removed from the group by this
     * operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSucceeded() const{ return m_succeeded; }

    /**
     * <p>A list of resources that were successfully removed from the group by this
     * operation.</p>
     */
    inline void SetSucceeded(const Aws::Vector<Aws::String>& value) { m_succeeded = value; }

    /**
     * <p>A list of resources that were successfully removed from the group by this
     * operation.</p>
     */
    inline void SetSucceeded(Aws::Vector<Aws::String>&& value) { m_succeeded = std::move(value); }

    /**
     * <p>A list of resources that were successfully removed from the group by this
     * operation.</p>
     */
    inline UngroupResourcesResult& WithSucceeded(const Aws::Vector<Aws::String>& value) { SetSucceeded(value); return *this;}

    /**
     * <p>A list of resources that were successfully removed from the group by this
     * operation.</p>
     */
    inline UngroupResourcesResult& WithSucceeded(Aws::Vector<Aws::String>&& value) { SetSucceeded(std::move(value)); return *this;}

    /**
     * <p>A list of resources that were successfully removed from the group by this
     * operation.</p>
     */
    inline UngroupResourcesResult& AddSucceeded(const Aws::String& value) { m_succeeded.push_back(value); return *this; }

    /**
     * <p>A list of resources that were successfully removed from the group by this
     * operation.</p>
     */
    inline UngroupResourcesResult& AddSucceeded(Aws::String&& value) { m_succeeded.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of resources that were successfully removed from the group by this
     * operation.</p>
     */
    inline UngroupResourcesResult& AddSucceeded(const char* value) { m_succeeded.push_back(value); return *this; }


    /**
     * <p>A list of any resources that failed to be removed from the group by this
     * operation.</p>
     */
    inline const Aws::Vector<FailedResource>& GetFailed() const{ return m_failed; }

    /**
     * <p>A list of any resources that failed to be removed from the group by this
     * operation.</p>
     */
    inline void SetFailed(const Aws::Vector<FailedResource>& value) { m_failed = value; }

    /**
     * <p>A list of any resources that failed to be removed from the group by this
     * operation.</p>
     */
    inline void SetFailed(Aws::Vector<FailedResource>&& value) { m_failed = std::move(value); }

    /**
     * <p>A list of any resources that failed to be removed from the group by this
     * operation.</p>
     */
    inline UngroupResourcesResult& WithFailed(const Aws::Vector<FailedResource>& value) { SetFailed(value); return *this;}

    /**
     * <p>A list of any resources that failed to be removed from the group by this
     * operation.</p>
     */
    inline UngroupResourcesResult& WithFailed(Aws::Vector<FailedResource>&& value) { SetFailed(std::move(value)); return *this;}

    /**
     * <p>A list of any resources that failed to be removed from the group by this
     * operation.</p>
     */
    inline UngroupResourcesResult& AddFailed(const FailedResource& value) { m_failed.push_back(value); return *this; }

    /**
     * <p>A list of any resources that failed to be removed from the group by this
     * operation.</p>
     */
    inline UngroupResourcesResult& AddFailed(FailedResource&& value) { m_failed.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of any resources that are still in the process of being removed from
     * the group by this operation. These pending removals continue asynchronously. You
     * can check the status of pending removals by using the <code>
     * <a>ListGroupResources</a> </code> operation. After the resource is successfully
     * removed, it no longer appears in the response.</p>
     */
    inline const Aws::Vector<PendingResource>& GetPending() const{ return m_pending; }

    /**
     * <p>A list of any resources that are still in the process of being removed from
     * the group by this operation. These pending removals continue asynchronously. You
     * can check the status of pending removals by using the <code>
     * <a>ListGroupResources</a> </code> operation. After the resource is successfully
     * removed, it no longer appears in the response.</p>
     */
    inline void SetPending(const Aws::Vector<PendingResource>& value) { m_pending = value; }

    /**
     * <p>A list of any resources that are still in the process of being removed from
     * the group by this operation. These pending removals continue asynchronously. You
     * can check the status of pending removals by using the <code>
     * <a>ListGroupResources</a> </code> operation. After the resource is successfully
     * removed, it no longer appears in the response.</p>
     */
    inline void SetPending(Aws::Vector<PendingResource>&& value) { m_pending = std::move(value); }

    /**
     * <p>A list of any resources that are still in the process of being removed from
     * the group by this operation. These pending removals continue asynchronously. You
     * can check the status of pending removals by using the <code>
     * <a>ListGroupResources</a> </code> operation. After the resource is successfully
     * removed, it no longer appears in the response.</p>
     */
    inline UngroupResourcesResult& WithPending(const Aws::Vector<PendingResource>& value) { SetPending(value); return *this;}

    /**
     * <p>A list of any resources that are still in the process of being removed from
     * the group by this operation. These pending removals continue asynchronously. You
     * can check the status of pending removals by using the <code>
     * <a>ListGroupResources</a> </code> operation. After the resource is successfully
     * removed, it no longer appears in the response.</p>
     */
    inline UngroupResourcesResult& WithPending(Aws::Vector<PendingResource>&& value) { SetPending(std::move(value)); return *this;}

    /**
     * <p>A list of any resources that are still in the process of being removed from
     * the group by this operation. These pending removals continue asynchronously. You
     * can check the status of pending removals by using the <code>
     * <a>ListGroupResources</a> </code> operation. After the resource is successfully
     * removed, it no longer appears in the response.</p>
     */
    inline UngroupResourcesResult& AddPending(const PendingResource& value) { m_pending.push_back(value); return *this; }

    /**
     * <p>A list of any resources that are still in the process of being removed from
     * the group by this operation. These pending removals continue asynchronously. You
     * can check the status of pending removals by using the <code>
     * <a>ListGroupResources</a> </code> operation. After the resource is successfully
     * removed, it no longer appears in the response.</p>
     */
    inline UngroupResourcesResult& AddPending(PendingResource&& value) { m_pending.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_succeeded;

    Aws::Vector<FailedResource> m_failed;

    Aws::Vector<PendingResource> m_pending;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
