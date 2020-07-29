/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/FailedResource.h>
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
  class AWS_RESOURCEGROUPS_API GroupResourcesResult
  {
  public:
    GroupResourcesResult();
    GroupResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GroupResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARNs of the resources that were successfully added to the group by this
     * operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSucceeded() const{ return m_succeeded; }

    /**
     * <p>The ARNs of the resources that were successfully added to the group by this
     * operation.</p>
     */
    inline void SetSucceeded(const Aws::Vector<Aws::String>& value) { m_succeeded = value; }

    /**
     * <p>The ARNs of the resources that were successfully added to the group by this
     * operation.</p>
     */
    inline void SetSucceeded(Aws::Vector<Aws::String>&& value) { m_succeeded = std::move(value); }

    /**
     * <p>The ARNs of the resources that were successfully added to the group by this
     * operation.</p>
     */
    inline GroupResourcesResult& WithSucceeded(const Aws::Vector<Aws::String>& value) { SetSucceeded(value); return *this;}

    /**
     * <p>The ARNs of the resources that were successfully added to the group by this
     * operation.</p>
     */
    inline GroupResourcesResult& WithSucceeded(Aws::Vector<Aws::String>&& value) { SetSucceeded(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the resources that were successfully added to the group by this
     * operation.</p>
     */
    inline GroupResourcesResult& AddSucceeded(const Aws::String& value) { m_succeeded.push_back(value); return *this; }

    /**
     * <p>The ARNs of the resources that were successfully added to the group by this
     * operation.</p>
     */
    inline GroupResourcesResult& AddSucceeded(Aws::String&& value) { m_succeeded.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the resources that were successfully added to the group by this
     * operation.</p>
     */
    inline GroupResourcesResult& AddSucceeded(const char* value) { m_succeeded.push_back(value); return *this; }


    /**
     * <p>The ARNs of the resources that failed to be added to the group by this
     * operation.</p>
     */
    inline const Aws::Vector<FailedResource>& GetFailed() const{ return m_failed; }

    /**
     * <p>The ARNs of the resources that failed to be added to the group by this
     * operation.</p>
     */
    inline void SetFailed(const Aws::Vector<FailedResource>& value) { m_failed = value; }

    /**
     * <p>The ARNs of the resources that failed to be added to the group by this
     * operation.</p>
     */
    inline void SetFailed(Aws::Vector<FailedResource>&& value) { m_failed = std::move(value); }

    /**
     * <p>The ARNs of the resources that failed to be added to the group by this
     * operation.</p>
     */
    inline GroupResourcesResult& WithFailed(const Aws::Vector<FailedResource>& value) { SetFailed(value); return *this;}

    /**
     * <p>The ARNs of the resources that failed to be added to the group by this
     * operation.</p>
     */
    inline GroupResourcesResult& WithFailed(Aws::Vector<FailedResource>&& value) { SetFailed(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the resources that failed to be added to the group by this
     * operation.</p>
     */
    inline GroupResourcesResult& AddFailed(const FailedResource& value) { m_failed.push_back(value); return *this; }

    /**
     * <p>The ARNs of the resources that failed to be added to the group by this
     * operation.</p>
     */
    inline GroupResourcesResult& AddFailed(FailedResource&& value) { m_failed.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_succeeded;

    Aws::Vector<FailedResource> m_failed;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
