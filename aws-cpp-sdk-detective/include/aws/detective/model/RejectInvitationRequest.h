/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/DetectiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Detective
{
namespace Model
{

  /**
   */
  class AWS_DETECTIVE_API RejectInvitationRequest : public DetectiveRequest
  {
  public:
    RejectInvitationRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<RejectInvitationRequest> Clone() const
    {
      return Aws::MakeUnique<RejectInvitationRequest>(GetServiceRequestName(), *this);
    }

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectInvitation"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the behavior graph to reject the invitation to.</p> <p>The member
     * account's current member status in the behavior graph must be
     * <code>INVITED</code>.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }

    /**
     * <p>The ARN of the behavior graph to reject the invitation to.</p> <p>The member
     * account's current member status in the behavior graph must be
     * <code>INVITED</code>.</p>
     */
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }

    /**
     * <p>The ARN of the behavior graph to reject the invitation to.</p> <p>The member
     * account's current member status in the behavior graph must be
     * <code>INVITED</code>.</p>
     */
    inline void SetGraphArn(const Aws::String& value) { m_graphArnHasBeenSet = true; m_graphArn = value; }

    /**
     * <p>The ARN of the behavior graph to reject the invitation to.</p> <p>The member
     * account's current member status in the behavior graph must be
     * <code>INVITED</code>.</p>
     */
    inline void SetGraphArn(Aws::String&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::move(value); }

    /**
     * <p>The ARN of the behavior graph to reject the invitation to.</p> <p>The member
     * account's current member status in the behavior graph must be
     * <code>INVITED</code>.</p>
     */
    inline void SetGraphArn(const char* value) { m_graphArnHasBeenSet = true; m_graphArn.assign(value); }

    /**
     * <p>The ARN of the behavior graph to reject the invitation to.</p> <p>The member
     * account's current member status in the behavior graph must be
     * <code>INVITED</code>.</p>
     */
    inline RejectInvitationRequest& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}

    /**
     * <p>The ARN of the behavior graph to reject the invitation to.</p> <p>The member
     * account's current member status in the behavior graph must be
     * <code>INVITED</code>.</p>
     */
    inline RejectInvitationRequest& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the behavior graph to reject the invitation to.</p> <p>The member
     * account's current member status in the behavior graph must be
     * <code>INVITED</code>.</p>
     */
    inline RejectInvitationRequest& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}

  private:

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
