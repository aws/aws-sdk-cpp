/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/TelephonySettings.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>Settings associated with an Amazon Chime user, including inbound and outbound
   * calling and text messaging.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UserSettings">AWS
   * API Reference</a></p>
   */
  class UserSettings
  {
  public:
    AWS_CHIME_API UserSettings();
    AWS_CHIME_API UserSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API UserSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The telephony settings associated with the user.</p>
     */
    inline const TelephonySettings& GetTelephony() const{ return m_telephony; }

    /**
     * <p>The telephony settings associated with the user.</p>
     */
    inline bool TelephonyHasBeenSet() const { return m_telephonyHasBeenSet; }

    /**
     * <p>The telephony settings associated with the user.</p>
     */
    inline void SetTelephony(const TelephonySettings& value) { m_telephonyHasBeenSet = true; m_telephony = value; }

    /**
     * <p>The telephony settings associated with the user.</p>
     */
    inline void SetTelephony(TelephonySettings&& value) { m_telephonyHasBeenSet = true; m_telephony = std::move(value); }

    /**
     * <p>The telephony settings associated with the user.</p>
     */
    inline UserSettings& WithTelephony(const TelephonySettings& value) { SetTelephony(value); return *this;}

    /**
     * <p>The telephony settings associated with the user.</p>
     */
    inline UserSettings& WithTelephony(TelephonySettings&& value) { SetTelephony(std::move(value)); return *this;}

  private:

    TelephonySettings m_telephony;
    bool m_telephonyHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
