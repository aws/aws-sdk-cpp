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
  class RestorePhoneNumberRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API RestorePhoneNumberRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestorePhoneNumber"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberId() const { return m_phoneNumberId; }
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }
    template<typename PhoneNumberIdT = Aws::String>
    void SetPhoneNumberId(PhoneNumberIdT&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::forward<PhoneNumberIdT>(value); }
    template<typename PhoneNumberIdT = Aws::String>
    RestorePhoneNumberRequest& WithPhoneNumberId(PhoneNumberIdT&& value) { SetPhoneNumberId(std::forward<PhoneNumberIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
