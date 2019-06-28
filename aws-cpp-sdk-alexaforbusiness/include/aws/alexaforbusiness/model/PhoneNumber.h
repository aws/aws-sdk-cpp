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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/PhoneNumberType.h>
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
   * <p>The phone number for the contact containing the raw number and phone number
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/PhoneNumber">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API PhoneNumber
  {
  public:
    PhoneNumber();
    PhoneNumber(Aws::Utils::Json::JsonView jsonValue);
    PhoneNumber& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The raw value of the phone number.</p>
     */
    inline const Aws::String& GetNumber() const{ return m_number; }

    /**
     * <p>The raw value of the phone number.</p>
     */
    inline bool NumberHasBeenSet() const { return m_numberHasBeenSet; }

    /**
     * <p>The raw value of the phone number.</p>
     */
    inline void SetNumber(const Aws::String& value) { m_numberHasBeenSet = true; m_number = value; }

    /**
     * <p>The raw value of the phone number.</p>
     */
    inline void SetNumber(Aws::String&& value) { m_numberHasBeenSet = true; m_number = std::move(value); }

    /**
     * <p>The raw value of the phone number.</p>
     */
    inline void SetNumber(const char* value) { m_numberHasBeenSet = true; m_number.assign(value); }

    /**
     * <p>The raw value of the phone number.</p>
     */
    inline PhoneNumber& WithNumber(const Aws::String& value) { SetNumber(value); return *this;}

    /**
     * <p>The raw value of the phone number.</p>
     */
    inline PhoneNumber& WithNumber(Aws::String&& value) { SetNumber(std::move(value)); return *this;}

    /**
     * <p>The raw value of the phone number.</p>
     */
    inline PhoneNumber& WithNumber(const char* value) { SetNumber(value); return *this;}


    /**
     * <p>The type of the phone number.</p>
     */
    inline const PhoneNumberType& GetType() const{ return m_type; }

    /**
     * <p>The type of the phone number.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the phone number.</p>
     */
    inline void SetType(const PhoneNumberType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the phone number.</p>
     */
    inline void SetType(PhoneNumberType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the phone number.</p>
     */
    inline PhoneNumber& WithType(const PhoneNumberType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the phone number.</p>
     */
    inline PhoneNumber& WithType(PhoneNumberType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_number;
    bool m_numberHasBeenSet;

    PhoneNumberType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
