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
namespace Connect
{
namespace Model
{

  /**
   */
  class DescribePhoneNumberRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DescribePhoneNumberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePhoneNumber"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberId() const{ return m_phoneNumberId; }

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline void SetPhoneNumberId(const Aws::String& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = value; }

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline void SetPhoneNumberId(Aws::String&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::move(value); }

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline void SetPhoneNumberId(const char* value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId.assign(value); }

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline DescribePhoneNumberRequest& WithPhoneNumberId(const Aws::String& value) { SetPhoneNumberId(value); return *this;}

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline DescribePhoneNumberRequest& WithPhoneNumberId(Aws::String&& value) { SetPhoneNumberId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline DescribePhoneNumberRequest& WithPhoneNumberId(const char* value) { SetPhoneNumberId(value); return *this;}

  private:

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
