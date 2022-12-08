/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/AccountAttributeName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>Displays the attributes associated with a single Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/AccountAttribute">AWS
   * API Reference</a></p>
   */
  class AccountAttribute
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API AccountAttribute();
    AWS_PINPOINTSMSVOICEV2_API AccountAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API AccountAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the account attribute.</p>
     */
    inline const AccountAttributeName& GetName() const{ return m_name; }

    /**
     * <p>The name of the account attribute.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the account attribute.</p>
     */
    inline void SetName(const AccountAttributeName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the account attribute.</p>
     */
    inline void SetName(AccountAttributeName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the account attribute.</p>
     */
    inline AccountAttribute& WithName(const AccountAttributeName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the account attribute.</p>
     */
    inline AccountAttribute& WithName(AccountAttributeName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value associated with the account attribute name.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value associated with the account attribute name.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value associated with the account attribute name.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value associated with the account attribute name.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value associated with the account attribute name.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value associated with the account attribute name.</p>
     */
    inline AccountAttribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value associated with the account attribute name.</p>
     */
    inline AccountAttribute& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value associated with the account attribute name.</p>
     */
    inline AccountAttribute& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    AccountAttributeName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
