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
  class AWS_RESOURCEGROUPS_API UngroupResourcesResult
  {
  public:
    UngroupResourcesResult();
    UngroupResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UngroupResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARNs of the resources that were successfully removed from the group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSucceeded() const{ return m_succeeded; }

    /**
     * <p>The ARNs of the resources that were successfully removed from the group.</p>
     */
    inline void SetSucceeded(const Aws::Vector<Aws::String>& value) { m_succeeded = value; }

    /**
     * <p>The ARNs of the resources that were successfully removed from the group.</p>
     */
    inline void SetSucceeded(Aws::Vector<Aws::String>&& value) { m_succeeded = std::move(value); }

    /**
     * <p>The ARNs of the resources that were successfully removed from the group.</p>
     */
    inline UngroupResourcesResult& WithSucceeded(const Aws::Vector<Aws::String>& value) { SetSucceeded(value); return *this;}

    /**
     * <p>The ARNs of the resources that were successfully removed from the group.</p>
     */
    inline UngroupResourcesResult& WithSucceeded(Aws::Vector<Aws::String>&& value) { SetSucceeded(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the resources that were successfully removed from the group.</p>
     */
    inline UngroupResourcesResult& AddSucceeded(const Aws::String& value) { m_succeeded.push_back(value); return *this; }

    /**
     * <p>The ARNs of the resources that were successfully removed from the group.</p>
     */
    inline UngroupResourcesResult& AddSucceeded(Aws::String&& value) { m_succeeded.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the resources that were successfully removed from the group.</p>
     */
    inline UngroupResourcesResult& AddSucceeded(const char* value) { m_succeeded.push_back(value); return *this; }


    /**
     * <p>The resources that failed to be removed from the group.</p>
     */
    inline const Aws::Vector<FailedResource>& GetFailed() const{ return m_failed; }

    /**
     * <p>The resources that failed to be removed from the group.</p>
     */
    inline void SetFailed(const Aws::Vector<FailedResource>& value) { m_failed = value; }

    /**
     * <p>The resources that failed to be removed from the group.</p>
     */
    inline void SetFailed(Aws::Vector<FailedResource>&& value) { m_failed = std::move(value); }

    /**
     * <p>The resources that failed to be removed from the group.</p>
     */
    inline UngroupResourcesResult& WithFailed(const Aws::Vector<FailedResource>& value) { SetFailed(value); return *this;}

    /**
     * <p>The resources that failed to be removed from the group.</p>
     */
    inline UngroupResourcesResult& WithFailed(Aws::Vector<FailedResource>&& value) { SetFailed(std::move(value)); return *this;}

    /**
     * <p>The resources that failed to be removed from the group.</p>
     */
    inline UngroupResourcesResult& AddFailed(const FailedResource& value) { m_failed.push_back(value); return *this; }

    /**
     * <p>The resources that failed to be removed from the group.</p>
     */
    inline UngroupResourcesResult& AddFailed(FailedResource&& value) { m_failed.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_succeeded;

    Aws::Vector<FailedResource> m_failed;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
