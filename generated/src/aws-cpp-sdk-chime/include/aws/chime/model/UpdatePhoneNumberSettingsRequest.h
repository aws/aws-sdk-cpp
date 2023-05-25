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
  class UpdatePhoneNumberSettingsRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API UpdatePhoneNumberSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePhoneNumberSettings"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline const Aws::String& GetCallingName() const{ return m_callingName; }

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline bool CallingNameHasBeenSet() const { return m_callingNameHasBeenSet; }

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline void SetCallingName(const Aws::String& value) { m_callingNameHasBeenSet = true; m_callingName = value; }

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline void SetCallingName(Aws::String&& value) { m_callingNameHasBeenSet = true; m_callingName = std::move(value); }

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline void SetCallingName(const char* value) { m_callingNameHasBeenSet = true; m_callingName.assign(value); }

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline UpdatePhoneNumberSettingsRequest& WithCallingName(const Aws::String& value) { SetCallingName(value); return *this;}

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline UpdatePhoneNumberSettingsRequest& WithCallingName(Aws::String&& value) { SetCallingName(std::move(value)); return *this;}

    /**
     * <p>The default outbound calling name for the account.</p>
     */
    inline UpdatePhoneNumberSettingsRequest& WithCallingName(const char* value) { SetCallingName(value); return *this;}

  private:

    Aws::String m_callingName;
    bool m_callingNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
