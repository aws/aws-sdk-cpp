/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class AWS_CHIME_API DeleteSipRuleRequest : public ChimeRequest
  {
  public:
    DeleteSipRuleRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<DeleteSipRuleRequest> Clone() const
    {
      return Aws::MakeUnique<DeleteSipRuleRequest>(GetServiceRequestName(), *this);
    }

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSipRule"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The SIP rule ID.</p>
     */
    inline const Aws::String& GetSipRuleId() const{ return m_sipRuleId; }

    /**
     * <p>The SIP rule ID.</p>
     */
    inline bool SipRuleIdHasBeenSet() const { return m_sipRuleIdHasBeenSet; }

    /**
     * <p>The SIP rule ID.</p>
     */
    inline void SetSipRuleId(const Aws::String& value) { m_sipRuleIdHasBeenSet = true; m_sipRuleId = value; }

    /**
     * <p>The SIP rule ID.</p>
     */
    inline void SetSipRuleId(Aws::String&& value) { m_sipRuleIdHasBeenSet = true; m_sipRuleId = std::move(value); }

    /**
     * <p>The SIP rule ID.</p>
     */
    inline void SetSipRuleId(const char* value) { m_sipRuleIdHasBeenSet = true; m_sipRuleId.assign(value); }

    /**
     * <p>The SIP rule ID.</p>
     */
    inline DeleteSipRuleRequest& WithSipRuleId(const Aws::String& value) { SetSipRuleId(value); return *this;}

    /**
     * <p>The SIP rule ID.</p>
     */
    inline DeleteSipRuleRequest& WithSipRuleId(Aws::String&& value) { SetSipRuleId(std::move(value)); return *this;}

    /**
     * <p>The SIP rule ID.</p>
     */
    inline DeleteSipRuleRequest& WithSipRuleId(const char* value) { SetSipRuleId(value); return *this;}

  private:

    Aws::String m_sipRuleId;
    bool m_sipRuleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
