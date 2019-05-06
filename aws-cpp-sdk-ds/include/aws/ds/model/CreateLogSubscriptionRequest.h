/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DIRECTORYSERVICE_API CreateLogSubscriptionRequest : public DirectoryServiceRequest
  {
  public:
    CreateLogSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLogSubscription"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifier (ID) of the directory to which you want to subscribe and receive
     * real-time logs to your specified CloudWatch log group.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>Identifier (ID) of the directory to which you want to subscribe and receive
     * real-time logs to your specified CloudWatch log group.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>Identifier (ID) of the directory to which you want to subscribe and receive
     * real-time logs to your specified CloudWatch log group.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>Identifier (ID) of the directory to which you want to subscribe and receive
     * real-time logs to your specified CloudWatch log group.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>Identifier (ID) of the directory to which you want to subscribe and receive
     * real-time logs to your specified CloudWatch log group.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>Identifier (ID) of the directory to which you want to subscribe and receive
     * real-time logs to your specified CloudWatch log group.</p>
     */
    inline CreateLogSubscriptionRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>Identifier (ID) of the directory to which you want to subscribe and receive
     * real-time logs to your specified CloudWatch log group.</p>
     */
    inline CreateLogSubscriptionRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Identifier (ID) of the directory to which you want to subscribe and receive
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
    bool m_directoryIdHasBeenSet;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
