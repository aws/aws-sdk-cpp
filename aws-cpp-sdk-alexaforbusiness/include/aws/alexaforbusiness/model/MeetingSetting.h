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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/RequirePin.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The values that indicate whether a pin is always required (YES), never
   * required (NO), or OPTIONAL.</p> <ul> <li> <p>If YES, Alexa will always ask for a
   * meeting pin.</p> </li> <li> <p>If NO, Alexa will never ask for a meeting
   * pin.</p> </li> <li> <p>If OPTIONAL, Alexa will ask if you have a meeting pin and
   * if the customer responds with yes, it will ask for the meeting pin.</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/MeetingSetting">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API MeetingSetting
  {
  public:
    MeetingSetting();
    MeetingSetting(Aws::Utils::Json::JsonView jsonValue);
    MeetingSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The values that indicate whether the pin is always required.</p>
     */
    inline const RequirePin& GetRequirePin() const{ return m_requirePin; }

    /**
     * <p>The values that indicate whether the pin is always required.</p>
     */
    inline bool RequirePinHasBeenSet() const { return m_requirePinHasBeenSet; }

    /**
     * <p>The values that indicate whether the pin is always required.</p>
     */
    inline void SetRequirePin(const RequirePin& value) { m_requirePinHasBeenSet = true; m_requirePin = value; }

    /**
     * <p>The values that indicate whether the pin is always required.</p>
     */
    inline void SetRequirePin(RequirePin&& value) { m_requirePinHasBeenSet = true; m_requirePin = std::move(value); }

    /**
     * <p>The values that indicate whether the pin is always required.</p>
     */
    inline MeetingSetting& WithRequirePin(const RequirePin& value) { SetRequirePin(value); return *this;}

    /**
     * <p>The values that indicate whether the pin is always required.</p>
     */
    inline MeetingSetting& WithRequirePin(RequirePin&& value) { SetRequirePin(std::move(value)); return *this;}

  private:

    RequirePin m_requirePin;
    bool m_requirePinHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
