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
  class DisassociateTrafficDistributionGroupUserRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DisassociateTrafficDistributionGroupUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateTrafficDistributionGroupUser"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;

    AWS_CONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline const Aws::String& GetTrafficDistributionGroupId() const{ return m_trafficDistributionGroupId; }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline bool TrafficDistributionGroupIdHasBeenSet() const { return m_trafficDistributionGroupIdHasBeenSet; }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline void SetTrafficDistributionGroupId(const Aws::String& value) { m_trafficDistributionGroupIdHasBeenSet = true; m_trafficDistributionGroupId = value; }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline void SetTrafficDistributionGroupId(Aws::String&& value) { m_trafficDistributionGroupIdHasBeenSet = true; m_trafficDistributionGroupId = std::move(value); }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline void SetTrafficDistributionGroupId(const char* value) { m_trafficDistributionGroupIdHasBeenSet = true; m_trafficDistributionGroupId.assign(value); }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline DisassociateTrafficDistributionGroupUserRequest& WithTrafficDistributionGroupId(const Aws::String& value) { SetTrafficDistributionGroupId(value); return *this;}

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline DisassociateTrafficDistributionGroupUserRequest& WithTrafficDistributionGroupId(Aws::String&& value) { SetTrafficDistributionGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline DisassociateTrafficDistributionGroupUserRequest& WithTrafficDistributionGroupId(const char* value) { SetTrafficDistributionGroupId(value); return *this;}


    /**
     * <p>The identifier for the user. This can be the ID or the ARN of the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier for the user. This can be the ID or the ARN of the user.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The identifier for the user. This can be the ID or the ARN of the user.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The identifier for the user. This can be the ID or the ARN of the user.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The identifier for the user. This can be the ID or the ARN of the user.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The identifier for the user. This can be the ID or the ARN of the user.</p>
     */
    inline DisassociateTrafficDistributionGroupUserRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier for the user. This can be the ID or the ARN of the user.</p>
     */
    inline DisassociateTrafficDistributionGroupUserRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the user. This can be the ID or the ARN of the user.</p>
     */
    inline DisassociateTrafficDistributionGroupUserRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline DisassociateTrafficDistributionGroupUserRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline DisassociateTrafficDistributionGroupUserRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline DisassociateTrafficDistributionGroupUserRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

  private:

    Aws::String m_trafficDistributionGroupId;
    bool m_trafficDistributionGroupIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
