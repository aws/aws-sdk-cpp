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
  class AWS_CHIME_API GetPhoneNumberOrderRequest : public ChimeRequest
  {
  public:
    GetPhoneNumberOrderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPhoneNumberOrder"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID for the phone number order.</p>
     */
    inline const Aws::String& GetPhoneNumberOrderId() const{ return m_phoneNumberOrderId; }

    /**
     * <p>The ID for the phone number order.</p>
     */
    inline bool PhoneNumberOrderIdHasBeenSet() const { return m_phoneNumberOrderIdHasBeenSet; }

    /**
     * <p>The ID for the phone number order.</p>
     */
    inline void SetPhoneNumberOrderId(const Aws::String& value) { m_phoneNumberOrderIdHasBeenSet = true; m_phoneNumberOrderId = value; }

    /**
     * <p>The ID for the phone number order.</p>
     */
    inline void SetPhoneNumberOrderId(Aws::String&& value) { m_phoneNumberOrderIdHasBeenSet = true; m_phoneNumberOrderId = std::move(value); }

    /**
     * <p>The ID for the phone number order.</p>
     */
    inline void SetPhoneNumberOrderId(const char* value) { m_phoneNumberOrderIdHasBeenSet = true; m_phoneNumberOrderId.assign(value); }

    /**
     * <p>The ID for the phone number order.</p>
     */
    inline GetPhoneNumberOrderRequest& WithPhoneNumberOrderId(const Aws::String& value) { SetPhoneNumberOrderId(value); return *this;}

    /**
     * <p>The ID for the phone number order.</p>
     */
    inline GetPhoneNumberOrderRequest& WithPhoneNumberOrderId(Aws::String&& value) { SetPhoneNumberOrderId(std::move(value)); return *this;}

    /**
     * <p>The ID for the phone number order.</p>
     */
    inline GetPhoneNumberOrderRequest& WithPhoneNumberOrderId(const char* value) { SetPhoneNumberOrderId(value); return *this;}

  private:

    Aws::String m_phoneNumberOrderId;
    bool m_phoneNumberOrderIdHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
