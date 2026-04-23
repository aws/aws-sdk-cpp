/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CHIME_API UserSettings
  {
  public:
    UserSettings();
    UserSettings(Aws::Utils::Json::JsonView jsonValue);
    UserSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_telephonyHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
