/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class DeleteJobRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DeleteJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteJob"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the job to be deleted.</p> <p>After a job deletion is completed,
     * you may reuse this jobId when you create a new job. However, this is not
     * recommended, and you must ensure that your devices are not using the jobId to
     * refer to the deleted job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID of the job to be deleted.</p> <p>After a job deletion is completed,
     * you may reuse this jobId when you create a new job. However, this is not
     * recommended, and you must ensure that your devices are not using the jobId to
     * refer to the deleted job.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The ID of the job to be deleted.</p> <p>After a job deletion is completed,
     * you may reuse this jobId when you create a new job. However, this is not
     * recommended, and you must ensure that your devices are not using the jobId to
     * refer to the deleted job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID of the job to be deleted.</p> <p>After a job deletion is completed,
     * you may reuse this jobId when you create a new job. However, this is not
     * recommended, and you must ensure that your devices are not using the jobId to
     * refer to the deleted job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The ID of the job to be deleted.</p> <p>After a job deletion is completed,
     * you may reuse this jobId when you create a new job. However, this is not
     * recommended, and you must ensure that your devices are not using the jobId to
     * refer to the deleted job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID of the job to be deleted.</p> <p>After a job deletion is completed,
     * you may reuse this jobId when you create a new job. However, this is not
     * recommended, and you must ensure that your devices are not using the jobId to
     * refer to the deleted job.</p>
     */
    inline DeleteJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the job to be deleted.</p> <p>After a job deletion is completed,
     * you may reuse this jobId when you create a new job. However, this is not
     * recommended, and you must ensure that your devices are not using the jobId to
     * refer to the deleted job.</p>
     */
    inline DeleteJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job to be deleted.</p> <p>After a job deletion is completed,
     * you may reuse this jobId when you create a new job. However, this is not
     * recommended, and you must ensure that your devices are not using the jobId to
     * refer to the deleted job.</p>
     */
    inline DeleteJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>(Optional) When true, you can delete a job which is "IN_PROGRESS". Otherwise,
     * you can only delete a job which is in a terminal state ("COMPLETED" or
     * "CANCELED") or an exception will occur. The default is false.</p> 
     * <p>Deleting a job which is "IN_PROGRESS", will cause a device which is executing
     * the job to be unable to access job information or update the job execution
     * status. Use caution and ensure that each device executing a job which is deleted
     * is able to recover to a valid state.</p> 
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>(Optional) When true, you can delete a job which is "IN_PROGRESS". Otherwise,
     * you can only delete a job which is in a terminal state ("COMPLETED" or
     * "CANCELED") or an exception will occur. The default is false.</p> 
     * <p>Deleting a job which is "IN_PROGRESS", will cause a device which is executing
     * the job to be unable to access job information or update the job execution
     * status. Use caution and ensure that each device executing a job which is deleted
     * is able to recover to a valid state.</p> 
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>(Optional) When true, you can delete a job which is "IN_PROGRESS". Otherwise,
     * you can only delete a job which is in a terminal state ("COMPLETED" or
     * "CANCELED") or an exception will occur. The default is false.</p> 
     * <p>Deleting a job which is "IN_PROGRESS", will cause a device which is executing
     * the job to be unable to access job information or update the job execution
     * status. Use caution and ensure that each device executing a job which is deleted
     * is able to recover to a valid state.</p> 
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>(Optional) When true, you can delete a job which is "IN_PROGRESS". Otherwise,
     * you can only delete a job which is in a terminal state ("COMPLETED" or
     * "CANCELED") or an exception will occur. The default is false.</p> 
     * <p>Deleting a job which is "IN_PROGRESS", will cause a device which is executing
     * the job to be unable to access job information or update the job execution
     * status. Use caution and ensure that each device executing a job which is deleted
     * is able to recover to a valid state.</p> 
     */
    inline DeleteJobRequest& WithForce(bool value) { SetForce(value); return *this;}


    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline const Aws::String& GetNamespaceId() const{ return m_namespaceId; }

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline bool NamespaceIdHasBeenSet() const { return m_namespaceIdHasBeenSet; }

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline void SetNamespaceId(const Aws::String& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = value; }

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline void SetNamespaceId(Aws::String&& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = std::move(value); }

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline void SetNamespaceId(const char* value) { m_namespaceIdHasBeenSet = true; m_namespaceId.assign(value); }

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline DeleteJobRequest& WithNamespaceId(const Aws::String& value) { SetNamespaceId(value); return *this;}

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline DeleteJobRequest& WithNamespaceId(Aws::String&& value) { SetNamespaceId(std::move(value)); return *this;}

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline DeleteJobRequest& WithNamespaceId(const char* value) { SetNamespaceId(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;

    Aws::String m_namespaceId;
    bool m_namespaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
