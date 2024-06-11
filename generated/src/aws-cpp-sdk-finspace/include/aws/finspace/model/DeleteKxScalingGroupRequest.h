/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace finspace
{
namespace Model
{

  /**
   */
  class DeleteKxScalingGroupRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API DeleteKxScalingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteKxScalingGroup"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;

    AWS_FINSPACE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>A unique identifier for the kdb environment, from where you want to delete
     * the dataview. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline DeleteKxScalingGroupRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline DeleteKxScalingGroupRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline DeleteKxScalingGroupRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline const Aws::String& GetScalingGroupName() const{ return m_scalingGroupName; }
    inline bool ScalingGroupNameHasBeenSet() const { return m_scalingGroupNameHasBeenSet; }
    inline void SetScalingGroupName(const Aws::String& value) { m_scalingGroupNameHasBeenSet = true; m_scalingGroupName = value; }
    inline void SetScalingGroupName(Aws::String&& value) { m_scalingGroupNameHasBeenSet = true; m_scalingGroupName = std::move(value); }
    inline void SetScalingGroupName(const char* value) { m_scalingGroupNameHasBeenSet = true; m_scalingGroupName.assign(value); }
    inline DeleteKxScalingGroupRequest& WithScalingGroupName(const Aws::String& value) { SetScalingGroupName(value); return *this;}
    inline DeleteKxScalingGroupRequest& WithScalingGroupName(Aws::String&& value) { SetScalingGroupName(std::move(value)); return *this;}
    inline DeleteKxScalingGroupRequest& WithScalingGroupName(const char* value) { SetScalingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline DeleteKxScalingGroupRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline DeleteKxScalingGroupRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline DeleteKxScalingGroupRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_scalingGroupName;
    bool m_scalingGroupNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
