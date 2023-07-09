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
    AWS_APPFABRIC_API BatchGetUserAccessTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetUserAccessTasks"; }

    AWS_APPFABRIC_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline const Aws::String& GetAppBundleIdentifier() const{ return m_appBundleIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline bool AppBundleIdentifierHasBeenSet() const { return m_appBundleIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline void SetAppBundleIdentifier(const Aws::String& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline void SetAppBundleIdentifier(Aws::String&& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline void SetAppBundleIdentifier(const char* value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline BatchGetUserAccessTasksRequest& WithAppBundleIdentifier(const Aws::String& value) { SetAppBundleIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline BatchGetUserAccessTasksRequest& WithAppBundleIdentifier(Aws::String&& value) { SetAppBundleIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline BatchGetUserAccessTasksRequest& WithAppBundleIdentifier(const char* value) { SetAppBundleIdentifier(value); return *this;}


    /**
     * <p>The tasks IDs to use for the request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskIdList() const{ return m_taskIdList; }

    /**
     * <p>The tasks IDs to use for the request.</p>
     */
    inline bool TaskIdListHasBeenSet() const { return m_taskIdListHasBeenSet; }

    /**
     * <p>The tasks IDs to use for the request.</p>
     */
    inline void SetTaskIdList(const Aws::Vector<Aws::String>& value) { m_taskIdListHasBeenSet = true; m_taskIdList = value; }

    /**
     * <p>The tasks IDs to use for the request.</p>
     */
    inline void SetTaskIdList(Aws::Vector<Aws::String>&& value) { m_taskIdListHasBeenSet = true; m_taskIdList = std::move(value); }

    /**
     * <p>The tasks IDs to use for the request.</p>
     */
    inline BatchGetUserAccessTasksRequest& WithTaskIdList(const Aws::Vector<Aws::String>& value) { SetTaskIdList(value); return *this;}

    /**
     * <p>The tasks IDs to use for the request.</p>
     */
    inline BatchGetUserAccessTasksRequest& WithTaskIdList(Aws::Vector<Aws::String>&& value) { SetTaskIdList(std::move(value)); return *this;}

    /**
     * <p>The tasks IDs to use for the request.</p>
     */
    inline BatchGetUserAccessTasksRequest& AddTaskIdList(const Aws::String& value) { m_taskIdListHasBeenSet = true; m_taskIdList.push_back(value); return *this; }

    /**
     * <p>The tasks IDs to use for the request.</p>
     */
    inline BatchGetUserAccessTasksRequest& AddTaskIdList(Aws::String&& value) { m_taskIdListHasBeenSet = true; m_taskIdList.push_back(std::move(value)); return *this; }

    /**
     * <p>The tasks IDs to use for the request.</p>
     */
    inline BatchGetUserAccessTasksRequest& AddTaskIdList(const char* value) { m_taskIdListHasBeenSet = true; m_taskIdList.push_back(value); return *this; }

  private:

    Aws::String m_appBundleIdentifier;
    bool m_appBundleIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_taskIdList;
    bool m_taskIdListHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
