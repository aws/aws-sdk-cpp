/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class CreateLogSubscriptionRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API CreateLogSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLogSubscription"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifier of the directory to which you want to subscribe and receive
     * real-time logs to your specified CloudWatch log group.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>Identifier of the directory to which you want to subscribe and receive
     * real-time logs to your specified CloudWatch log group.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>Identifier of the directory to which you want to subscribe and receive
     * real-time logs to your specified CloudWatch log group.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>Identifier of the directory to which you want to subscribe and receive
     * real-time logs to your specified CloudWatch log group.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>Identifier of the directory to which you want to subscribe and receive
     * real-time logs to your specified CloudWatch log group.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>Identifier of the directory to which you want to subscribe and receive
     * real-time logs to your specified CloudWatch log group.</p>
     */
    inline CreateLogSubscriptionRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>Identifier of the directory to which you want to subscribe and receive
     * real-time logs to your specified CloudWatch log group.</p>
     */
    inline CreateLogSubscriptionRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the directory to which you want to subscribe and receive
     * real-time logs to your specified CloudWatch log group.</p>
     */
    inline CreateLogSubscriptionRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The name of the CloudWatch log group where the real-time domain controller
     * logs are forwarded.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the CloudWatch log group where the real-time domain controller
     * logs are forwarded.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the CloudWatch log group where the real-time domain controller
     * logs are forwarded.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the CloudWatch log group where the real-time domain controller
     * logs are forwarded.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the CloudWatch log group where the real-time domain controller
     * logs are forwarded.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the CloudWatch log group where the real-time domain controller
     * logs are forwarded.</p>
     */
    inline CreateLogSubscriptionRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the CloudWatch log group where the real-time domain controller
     * logs are forwarded.</p>
     */
    inline CreateLogSubscriptionRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch log group where the real-time domain controller
     * logs are forwarded.</p>
     */
    inline CreateLogSubscriptionRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
