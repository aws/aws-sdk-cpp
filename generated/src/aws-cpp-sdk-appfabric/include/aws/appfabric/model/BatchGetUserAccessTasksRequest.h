/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/AppFabricRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace AppFabric
{
namespace Model
{

  /**
   */
  class BatchGetUserAccessTasksRequest : public AppFabricRequest
  {
  public:
    AWS_APPFABRIC_API BatchGetUserAccessTasksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetUserAccessTasks"; }

    AWS_APPFABRIC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline const Aws::String& GetAppBundleIdentifier() const { return m_appBundleIdentifier; }
    inline bool AppBundleIdentifierHasBeenSet() const { return m_appBundleIdentifierHasBeenSet; }
    template<typename AppBundleIdentifierT = Aws::String>
    void SetAppBundleIdentifier(AppBundleIdentifierT&& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = std::forward<AppBundleIdentifierT>(value); }
    template<typename AppBundleIdentifierT = Aws::String>
    BatchGetUserAccessTasksRequest& WithAppBundleIdentifier(AppBundleIdentifierT&& value) { SetAppBundleIdentifier(std::forward<AppBundleIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tasks IDs to use for the request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskIdList() const { return m_taskIdList; }
    inline bool TaskIdListHasBeenSet() const { return m_taskIdListHasBeenSet; }
    template<typename TaskIdListT = Aws::Vector<Aws::String>>
    void SetTaskIdList(TaskIdListT&& value) { m_taskIdListHasBeenSet = true; m_taskIdList = std::forward<TaskIdListT>(value); }
    template<typename TaskIdListT = Aws::Vector<Aws::String>>
    BatchGetUserAccessTasksRequest& WithTaskIdList(TaskIdListT&& value) { SetTaskIdList(std::forward<TaskIdListT>(value)); return *this;}
    template<typename TaskIdListT = Aws::String>
    BatchGetUserAccessTasksRequest& AddTaskIdList(TaskIdListT&& value) { m_taskIdListHasBeenSet = true; m_taskIdList.emplace_back(std::forward<TaskIdListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_appBundleIdentifier;
    bool m_appBundleIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_taskIdList;
    bool m_taskIdListHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
