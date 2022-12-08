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
  class DeleteJobExecutionRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DeleteJobExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteJobExecution"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the job whose execution on a particular device will be deleted.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID of the job whose execution on a particular device will be deleted.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The ID of the job whose execution on a particular device will be deleted.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID of the job whose execution on a particular device will be deleted.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The ID of the job whose execution on a particular device will be deleted.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID of the job whose execution on a particular device will be deleted.</p>
     */
    inline DeleteJobExecutionRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the job whose execution on a particular device will be deleted.</p>
     */
    inline DeleteJobExecutionRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job whose execution on a particular device will be deleted.</p>
     */
    inline DeleteJobExecutionRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The name of the thing whose job execution will be deleted.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing whose job execution will be deleted.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The name of the thing whose job execution will be deleted.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing whose job execution will be deleted.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The name of the thing whose job execution will be deleted.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the thing whose job execution will be deleted.</p>
     */
    inline DeleteJobExecutionRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing whose job execution will be deleted.</p>
     */
    inline DeleteJobExecutionRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing whose job execution will be deleted.</p>
     */
    inline DeleteJobExecutionRequest& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The ID of the job execution to be deleted. The <code>executionNumber</code>
     * refers to the execution of a particular job on a particular device.</p> <p>Note
     * that once a job execution is deleted, the <code>executionNumber</code> may be
     * reused by IoT, so be sure you get and use the correct value here.</p>
     */
    inline long long GetExecutionNumber() const{ return m_executionNumber; }

    /**
     * <p>The ID of the job execution to be deleted. The <code>executionNumber</code>
     * refers to the execution of a particular job on a particular device.</p> <p>Note
     * that once a job execution is deleted, the <code>executionNumber</code> may be
     * reused by IoT, so be sure you get and use the correct value here.</p>
     */
    inline bool ExecutionNumberHasBeenSet() const { return m_executionNumberHasBeenSet; }

    /**
     * <p>The ID of the job execution to be deleted. The <code>executionNumber</code>
     * refers to the execution of a particular job on a particular device.</p> <p>Note
     * that once a job execution is deleted, the <code>executionNumber</code> may be
     * reused by IoT, so be sure you get and use the correct value here.</p>
     */
    inline void SetExecutionNumber(long long value) { m_executionNumberHasBeenSet = true; m_executionNumber = value; }

    /**
     * <p>The ID of the job execution to be deleted. The <code>executionNumber</code>
     * refers to the execution of a particular job on a particular device.</p> <p>Note
     * that once a job execution is deleted, the <code>executionNumber</code> may be
     * reused by IoT, so be sure you get and use the correct value here.</p>
     */
    inline DeleteJobExecutionRequest& WithExecutionNumber(long long value) { SetExecutionNumber(value); return *this;}


    /**
     * <p>(Optional) When true, you can delete a job execution which is "IN_PROGRESS".
     * Otherwise, you can only delete a job execution which is in a terminal state
     * ("SUCCEEDED", "FAILED", "REJECTED", "REMOVED" or "CANCELED") or an exception
     * will occur. The default is false.</p>  <p>Deleting a job execution which
     * is "IN_PROGRESS", will cause the device to be unable to access job information
     * or update the job execution status. Use caution and ensure that the device is
     * able to recover to a valid state.</p> 
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>(Optional) When true, you can delete a job execution which is "IN_PROGRESS".
     * Otherwise, you can only delete a job execution which is in a terminal state
     * ("SUCCEEDED", "FAILED", "REJECTED", "REMOVED" or "CANCELED") or an exception
     * will occur. The default is false.</p>  <p>Deleting a job execution which
     * is "IN_PROGRESS", will cause the device to be unable to access job information
     * or update the job execution status. Use caution and ensure that the device is
     * able to recover to a valid state.</p> 
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>(Optional) When true, you can delete a job execution which is "IN_PROGRESS".
     * Otherwise, you can only delete a job execution which is in a terminal state
     * ("SUCCEEDED", "FAILED", "REJECTED", "REMOVED" or "CANCELED") or an exception
     * will occur. The default is false.</p>  <p>Deleting a job execution which
     * is "IN_PROGRESS", will cause the device to be unable to access job information
     * or update the job execution status. Use caution and ensure that the device is
     * able to recover to a valid state.</p> 
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>(Optional) When true, you can delete a job execution which is "IN_PROGRESS".
     * Otherwise, you can only delete a job execution which is in a terminal state
     * ("SUCCEEDED", "FAILED", "REJECTED", "REMOVED" or "CANCELED") or an exception
     * will occur. The default is false.</p>  <p>Deleting a job execution which
     * is "IN_PROGRESS", will cause the device to be unable to access job information
     * or update the job execution status. Use caution and ensure that the device is
     * able to recover to a valid state.</p> 
     */
    inline DeleteJobExecutionRequest& WithForce(bool value) { SetForce(value); return *this;}


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
    inline DeleteJobExecutionRequest& WithNamespaceId(const Aws::String& value) { SetNamespaceId(value); return *this;}

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline DeleteJobExecutionRequest& WithNamespaceId(Aws::String&& value) { SetNamespaceId(std::move(value)); return *this;}

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline DeleteJobExecutionRequest& WithNamespaceId(const char* value) { SetNamespaceId(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    long long m_executionNumber;
    bool m_executionNumberHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;

    Aws::String m_namespaceId;
    bool m_namespaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
