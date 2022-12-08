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
  class GroupResourcesResult
  {
  public:
    AWS_RESOURCEGROUPS_API GroupResourcesResult();
    AWS_RESOURCEGROUPS_API GroupResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API GroupResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of ARNs of resources that were successfully added to the group by this
     * operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSucceeded() const{ return m_succeeded; }

    /**
     * <p>A list of ARNs of resources that were successfully added to the group by this
     * operation.</p>
     */
    inline void SetSucceeded(const Aws::Vector<Aws::String>& value) { m_succeeded = value; }

    /**
     * <p>A list of ARNs of resources that were successfully added to the group by this
     * operation.</p>
     */
    inline void SetSucceeded(Aws::Vector<Aws::String>&& value) { m_succeeded = std::move(value); }

    /**
     * <p>A list of ARNs of resources that were successfully added to the group by this
     * operation.</p>
     */
    inline GroupResourcesResult& WithSucceeded(const Aws::Vector<Aws::String>& value) { SetSucceeded(value); return *this;}

    /**
     * <p>A list of ARNs of resources that were successfully added to the group by this
     * operation.</p>
     */
    inline GroupResourcesResult& WithSucceeded(Aws::Vector<Aws::String>&& value) { SetSucceeded(std::move(value)); return *this;}

    /**
     * <p>A list of ARNs of resources that were successfully added to the group by this
     * operation.</p>
     */
    inline GroupResourcesResult& AddSucceeded(const Aws::String& value) { m_succeeded.push_back(value); return *this; }

    /**
     * <p>A list of ARNs of resources that were successfully added to the group by this
     * operation.</p>
     */
    inline GroupResourcesResult& AddSucceeded(Aws::String&& value) { m_succeeded.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of ARNs of resources that were successfully added to the group by this
     * operation.</p>
     */
    inline GroupResourcesResult& AddSucceeded(const char* value) { m_succeeded.push_back(value); return *this; }


    /**
     * <p>A list of ARNs of any resources that failed to be added to the group by this
     * operation.</p>
     */
    inline const Aws::Vector<FailedResource>& GetFailed() const{ return m_failed; }

    /**
     * <p>A list of ARNs of any resources that failed to be added to the group by this
     * operation.</p>
     */
    inline void SetFailed(const Aws::Vector<FailedResource>& value) { m_failed = value; }

    /**
     * <p>A list of ARNs of any resources that failed to be added to the group by this
     * operation.</p>
     */
    inline void SetFailed(Aws::Vector<FailedResource>&& value) { m_failed = std::move(value); }

    /**
     * <p>A list of ARNs of any resources that failed to be added to the group by this
     * operation.</p>
     */
    inline GroupResourcesResult& WithFailed(const Aws::Vector<FailedResource>& value) { SetFailed(value); return *this;}

    /**
     * <p>A list of ARNs of any resources that failed to be added to the group by this
     * operation.</p>
     */
    inline GroupResourcesResult& WithFailed(Aws::Vector<FailedResource>&& value) { SetFailed(std::move(value)); return *this;}

    /**
     * <p>A list of ARNs of any resources that failed to be added to the group by this
     * operation.</p>
     */
    inline GroupResourcesResult& AddFailed(const FailedResource& value) { m_failed.push_back(value); return *this; }

    /**
     * <p>A list of ARNs of any resources that failed to be added to the group by this
     * operation.</p>
     */
    inline GroupResourcesResult& AddFailed(FailedResource&& value) { m_failed.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of ARNs of any resources that are still in the process of being added
     * to the group by this operation. These pending additions continue asynchronously.
     * You can check the status of pending additions by using the <code>
     * <a>ListGroupResources</a> </code> operation, and checking the
     * <code>Resources</code> array in the response and the <code>Status</code> field
     * of each object in that array. </p>
     */
    inline const Aws::Vector<PendingResource>& GetPending() const{ return m_pending; }

    /**
     * <p>A list of ARNs of any resources that are still in the process of being added
     * to the group by this operation. These pending additions continue asynchronously.
     * You can check the status of pending additions by using the <code>
     * <a>ListGroupResources</a> </code> operation, and checking the
     * <code>Resources</code> array in the response and the <code>Status</code> field
     * of each object in that array. </p>
     */
    inline void SetPending(const Aws::Vector<PendingResource>& value) { m_pending = value; }

    /**
     * <p>A list of ARNs of any resources that are still in the process of being added
     * to the group by this operation. These pending additions continue asynchronously.
     * You can check the status of pending additions by using the <code>
     * <a>ListGroupResources</a> </code> operation, and checking the
     * <code>Resources</code> array in the response and the <code>Status</code> field
     * of each object in that array. </p>
     */
    inline void SetPending(Aws::Vector<PendingResource>&& value) { m_pending = std::move(value); }

    /**
     * <p>A list of ARNs of any resources that are still in the process of being added
     * to the group by this operation. These pending additions continue asynchronously.
     * You can check the status of pending additions by using the <code>
     * <a>ListGroupResources</a> </code> operation, and checking the
     * <code>Resources</code> array in the response and the <code>Status</code> field
     * of each object in that array. </p>
     */
    inline GroupResourcesResult& WithPending(const Aws::Vector<PendingResource>& value) { SetPending(value); return *this;}

    /**
     * <p>A list of ARNs of any resources that are still in the process of being added
     * to the group by this operation. These pending additions continue asynchronously.
     * You can check the status of pending additions by using the <code>
     * <a>ListGroupResources</a> </code> operation, and checking the
     * <code>Resources</code> array in the response and the <code>Status</code> field
     * of each object in that array. </p>
     */
    inline GroupResourcesResult& WithPending(Aws::Vector<PendingResource>&& value) { SetPending(std::move(value)); return *this;}

    /**
     * <p>A list of ARNs of any resources that are still in the process of being added
     * to the group by this operation. These pending additions continue asynchronously.
     * You can check the status of pending additions by using the <code>
     * <a>ListGroupResources</a> </code> operation, and checking the
     * <code>Resources</code> array in the response and the <code>Status</code> field
     * of each object in that array. </p>
     */
    inline GroupResourcesResult& AddPending(const PendingResource& value) { m_pending.push_back(value); return *this; }

    /**
     * <p>A list of ARNs of any resources that are still in the process of being added
     * to the group by this operation. These pending additions continue asynchronously.
     * You can check the status of pending additions by using the <code>
     * <a>ListGroupResources</a> </code> operation, and checking the
     * <code>Resources</code> array in the response and the <code>Status</code> field
     * of each object in that array. </p>
     */
    inline GroupResourcesResult& AddPending(PendingResource&& value) { m_pending.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_succeeded;

    Aws::Vector<FailedResource> m_failed;

    Aws::Vector<PendingResource> m_pending;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
