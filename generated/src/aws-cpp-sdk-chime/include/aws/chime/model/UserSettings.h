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
    AWS_CHIME_API UserSettings() = default;
    AWS_CHIME_API UserSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API UserSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The telephony settings associated with the user.</p>
     */
    inline const TelephonySettings& GetTelephony() const { return m_telephony; }
    inline bool TelephonyHasBeenSet() const { return m_telephonyHasBeenSet; }
    template<typename TelephonyT = TelephonySettings>
    void SetTelephony(TelephonyT&& value) { m_telephonyHasBeenSet = true; m_telephony = std::forward<TelephonyT>(value); }
    template<typename TelephonyT = TelephonySettings>
    UserSettings& WithTelephony(TelephonyT&& value) { SetTelephony(std::forward<TelephonyT>(value)); return *this;}
    ///@}
  private:

    TelephonySettings m_telephony;
    bool m_telephonyHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
