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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/OrderedPhoneNumberStatus.h>
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
   * <p>A phone number for which an order has been placed.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/OrderedPhoneNumber">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API OrderedPhoneNumber
  {
  public:
    OrderedPhoneNumber();
    OrderedPhoneNumber(Aws::Utils::Json::JsonView jsonValue);
    OrderedPhoneNumber& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The phone number, in E.164 format.</p>
     */
    inline const Aws::String& GetE164PhoneNumber() const{ return m_e164PhoneNumber; }

    /**
     * <p>The phone number, in E.164 format.</p>
     */
    inline bool E164PhoneNumberHasBeenSet() const { return m_e164PhoneNumberHasBeenSet; }

    /**
     * <p>The phone number, in E.164 format.</p>
     */
    inline void SetE164PhoneNumber(const Aws::String& value) { m_e164PhoneNumberHasBeenSet = true; m_e164PhoneNumber = value; }

    /**
     * <p>The phone number, in E.164 format.</p>
     */
    inline void SetE164PhoneNumber(Aws::String&& value) { m_e164PhoneNumberHasBeenSet = true; m_e164PhoneNumber = std::move(value); }

    /**
     * <p>The phone number, in E.164 format.</p>
     */
    inline void SetE164PhoneNumber(const char* value) { m_e164PhoneNumberHasBeenSet = true; m_e164PhoneNumber.assign(value); }

    /**
     * <p>The phone number, in E.164 format.</p>
     */
    inline OrderedPhoneNumber& WithE164PhoneNumber(const Aws::String& value) { SetE164PhoneNumber(value); return *this;}

    /**
     * <p>The phone number, in E.164 format.</p>
     */
    inline OrderedPhoneNumber& WithE164PhoneNumber(Aws::String&& value) { SetE164PhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number, in E.164 format.</p>
     */
    inline OrderedPhoneNumber& WithE164PhoneNumber(const char* value) { SetE164PhoneNumber(value); return *this;}


    /**
     * <p>The phone number status.</p>
     */
    inline const OrderedPhoneNumberStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The phone number status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The phone number status.</p>
     */
    inline void SetStatus(const OrderedPhoneNumberStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The phone number status.</p>
     */
    inline void SetStatus(OrderedPhoneNumberStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The phone number status.</p>
     */
    inline OrderedPhoneNumber& WithStatus(const OrderedPhoneNumberStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The phone number status.</p>
     */
    inline OrderedPhoneNumber& WithStatus(OrderedPhoneNumberStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_e164PhoneNumber;
    bool m_e164PhoneNumberHasBeenSet;

    OrderedPhoneNumberStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
