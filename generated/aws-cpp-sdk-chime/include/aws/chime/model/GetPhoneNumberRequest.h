﻿/**
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
  class AWS_CHIME_API GetPhoneNumberRequest : public ChimeRequest
  {
  public:
    GetPhoneNumberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPhoneNumber"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The phone number ID.</p>
     */
    inline const Aws::String& GetPhoneNumberId() const{ return m_phoneNumberId; }

    /**
     * <p>The phone number ID.</p>
     */
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }

    /**
     * <p>The phone number ID.</p>
     */
    inline void SetPhoneNumberId(const Aws::String& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = value; }

    /**
     * <p>The phone number ID.</p>
     */
    inline void SetPhoneNumberId(Aws::String&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::move(value); }

    /**
     * <p>The phone number ID.</p>
     */
    inline void SetPhoneNumberId(const char* value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId.assign(value); }

    /**
     * <p>The phone number ID.</p>
     */
    inline GetPhoneNumberRequest& WithPhoneNumberId(const Aws::String& value) { SetPhoneNumberId(value); return *this;}

    /**
     * <p>The phone number ID.</p>
     */
    inline GetPhoneNumberRequest& WithPhoneNumberId(Aws::String&& value) { SetPhoneNumberId(std::move(value)); return *this;}

    /**
     * <p>The phone number ID.</p>
     */
    inline GetPhoneNumberRequest& WithPhoneNumberId(const char* value) { SetPhoneNumberId(value); return *this;}

  private:

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
