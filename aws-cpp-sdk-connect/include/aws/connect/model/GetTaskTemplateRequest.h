/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Connect
{
namespace Model
{

  /**
   */
  class GetTaskTemplateRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API GetTaskTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTaskTemplate"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;

    AWS_CONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline GetTaskTemplateRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline GetTaskTemplateRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline GetTaskTemplateRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline const Aws::String& GetTaskTemplateId() const{ return m_taskTemplateId; }

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline bool TaskTemplateIdHasBeenSet() const { return m_taskTemplateIdHasBeenSet; }

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline void SetTaskTemplateId(const Aws::String& value) { m_taskTemplateIdHasBeenSet = true; m_taskTemplateId = value; }

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline void SetTaskTemplateId(Aws::String&& value) { m_taskTemplateIdHasBeenSet = true; m_taskTemplateId = std::move(value); }

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline void SetTaskTemplateId(const char* value) { m_taskTemplateIdHasBeenSet = true; m_taskTemplateId.assign(value); }

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline GetTaskTemplateRequest& WithTaskTemplateId(const Aws::String& value) { SetTaskTemplateId(value); return *this;}

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline GetTaskTemplateRequest& WithTaskTemplateId(Aws::String&& value) { SetTaskTemplateId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline GetTaskTemplateRequest& WithTaskTemplateId(const char* value) { SetTaskTemplateId(value); return *this;}


    /**
     * <p>The system generated version of a task template that is associated with a
     * task, when the task is created.</p>
     */
    inline const Aws::String& GetSnapshotVersion() const{ return m_snapshotVersion; }

    /**
     * <p>The system generated version of a task template that is associated with a
     * task, when the task is created.</p>
     */
    inline bool SnapshotVersionHasBeenSet() const { return m_snapshotVersionHasBeenSet; }

    /**
     * <p>The system generated version of a task template that is associated with a
     * task, when the task is created.</p>
     */
    inline void SetSnapshotVersion(const Aws::String& value) { m_snapshotVersionHasBeenSet = true; m_snapshotVersion = value; }

    /**
     * <p>The system generated version of a task template that is associated with a
     * task, when the task is created.</p>
     */
    inline void SetSnapshotVersion(Aws::String&& value) { m_snapshotVersionHasBeenSet = true; m_snapshotVersion = std::move(value); }

    /**
     * <p>The system generated version of a task template that is associated with a
     * task, when the task is created.</p>
     */
    inline void SetSnapshotVersion(const char* value) { m_snapshotVersionHasBeenSet = true; m_snapshotVersion.assign(value); }

    /**
     * <p>The system generated version of a task template that is associated with a
     * task, when the task is created.</p>
     */
    inline GetTaskTemplateRequest& WithSnapshotVersion(const Aws::String& value) { SetSnapshotVersion(value); return *this;}

    /**
     * <p>The system generated version of a task template that is associated with a
     * task, when the task is created.</p>
     */
    inline GetTaskTemplateRequest& WithSnapshotVersion(Aws::String&& value) { SetSnapshotVersion(std::move(value)); return *this;}

    /**
     * <p>The system generated version of a task template that is associated with a
     * task, when the task is created.</p>
     */
    inline GetTaskTemplateRequest& WithSnapshotVersion(const char* value) { SetSnapshotVersion(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_taskTemplateId;
    bool m_taskTemplateIdHasBeenSet = false;

    Aws::String m_snapshotVersion;
    bool m_snapshotVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
