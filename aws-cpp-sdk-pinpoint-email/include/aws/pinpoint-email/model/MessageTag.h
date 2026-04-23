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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>Contains the name and value of a tag that you apply to an email. You can use
   * message tags when you publish email sending events. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/MessageTag">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API MessageTag
  {
  public:
    MessageTag();
    MessageTag(Aws::Utils::Json::JsonView jsonValue);
    MessageTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the message tag. The message tag name has to meet the following
     * criteria:</p> <ul> <li> <p>It can only contain ASCII letters (a–z, A–Z), numbers
     * (0–9), underscores (_), or dashes (-).</p> </li> <li> <p>It can contain no more
     * than 256 characters.</p> </li> </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the message tag. The message tag name has to meet the following
     * criteria:</p> <ul> <li> <p>It can only contain ASCII letters (a–z, A–Z), numbers
     * (0–9), underscores (_), or dashes (-).</p> </li> <li> <p>It can contain no more
     * than 256 characters.</p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the message tag. The message tag name has to meet the following
     * criteria:</p> <ul> <li> <p>It can only contain ASCII letters (a–z, A–Z), numbers
     * (0–9), underscores (_), or dashes (-).</p> </li> <li> <p>It can contain no more
     * than 256 characters.</p> </li> </ul>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the message tag. The message tag name has to meet the following
     * criteria:</p> <ul> <li> <p>It can only contain ASCII letters (a–z, A–Z), numbers
     * (0–9), underscores (_), or dashes (-).</p> </li> <li> <p>It can contain no more
     * than 256 characters.</p> </li> </ul>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the message tag. The message tag name has to meet the following
     * criteria:</p> <ul> <li> <p>It can only contain ASCII letters (a–z, A–Z), numbers
     * (0–9), underscores (_), or dashes (-).</p> </li> <li> <p>It can contain no more
     * than 256 characters.</p> </li> </ul>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the message tag. The message tag name has to meet the following
     * criteria:</p> <ul> <li> <p>It can only contain ASCII letters (a–z, A–Z), numbers
     * (0–9), underscores (_), or dashes (-).</p> </li> <li> <p>It can contain no more
     * than 256 characters.</p> </li> </ul>
     */
    inline MessageTag& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the message tag. The message tag name has to meet the following
     * criteria:</p> <ul> <li> <p>It can only contain ASCII letters (a–z, A–Z), numbers
     * (0–9), underscores (_), or dashes (-).</p> </li> <li> <p>It can contain no more
     * than 256 characters.</p> </li> </ul>
     */
    inline MessageTag& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the message tag. The message tag name has to meet the following
     * criteria:</p> <ul> <li> <p>It can only contain ASCII letters (a–z, A–Z), numbers
     * (0–9), underscores (_), or dashes (-).</p> </li> <li> <p>It can contain no more
     * than 256 characters.</p> </li> </ul>
     */
    inline MessageTag& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of the message tag. The message tag value has to meet the following
     * criteria:</p> <ul> <li> <p>It can only contain ASCII letters (a–z, A–Z), numbers
     * (0–9), underscores (_), or dashes (-).</p> </li> <li> <p>It can contain no more
     * than 256 characters.</p> </li> </ul>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the message tag. The message tag value has to meet the following
     * criteria:</p> <ul> <li> <p>It can only contain ASCII letters (a–z, A–Z), numbers
     * (0–9), underscores (_), or dashes (-).</p> </li> <li> <p>It can contain no more
     * than 256 characters.</p> </li> </ul>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the message tag. The message tag value has to meet the following
     * criteria:</p> <ul> <li> <p>It can only contain ASCII letters (a–z, A–Z), numbers
     * (0–9), underscores (_), or dashes (-).</p> </li> <li> <p>It can contain no more
     * than 256 characters.</p> </li> </ul>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the message tag. The message tag value has to meet the following
     * criteria:</p> <ul> <li> <p>It can only contain ASCII letters (a–z, A–Z), numbers
     * (0–9), underscores (_), or dashes (-).</p> </li> <li> <p>It can contain no more
     * than 256 characters.</p> </li> </ul>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the message tag. The message tag value has to meet the following
     * criteria:</p> <ul> <li> <p>It can only contain ASCII letters (a–z, A–Z), numbers
     * (0–9), underscores (_), or dashes (-).</p> </li> <li> <p>It can contain no more
     * than 256 characters.</p> </li> </ul>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the message tag. The message tag value has to meet the following
     * criteria:</p> <ul> <li> <p>It can only contain ASCII letters (a–z, A–Z), numbers
     * (0–9), underscores (_), or dashes (-).</p> </li> <li> <p>It can contain no more
     * than 256 characters.</p> </li> </ul>
     */
    inline MessageTag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the message tag. The message tag value has to meet the following
     * criteria:</p> <ul> <li> <p>It can only contain ASCII letters (a–z, A–Z), numbers
     * (0–9), underscores (_), or dashes (-).</p> </li> <li> <p>It can contain no more
     * than 256 characters.</p> </li> </ul>
     */
    inline MessageTag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the message tag. The message tag value has to meet the following
     * criteria:</p> <ul> <li> <p>It can only contain ASCII letters (a–z, A–Z), numbers
     * (0–9), underscores (_), or dashes (-).</p> </li> <li> <p>It can contain no more
     * than 256 characters.</p> </li> </ul>
     */
    inline MessageTag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
