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
#include <aws/shield/Shield_EXPORTS.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>Contact information that the DRT can use to contact you during a suspected
   * attack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/EmergencyContact">AWS
   * API Reference</a></p>
   */
  class AWS_SHIELD_API EmergencyContact
  {
  public:
    EmergencyContact();
    EmergencyContact(Aws::Utils::Json::JsonView jsonValue);
    EmergencyContact& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An email address that the DRT can use to contact you during a suspected
     * attack.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>An email address that the DRT can use to contact you during a suspected
     * attack.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>An email address that the DRT can use to contact you during a suspected
     * attack.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>An email address that the DRT can use to contact you during a suspected
     * attack.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>An email address that the DRT can use to contact you during a suspected
     * attack.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>An email address that the DRT can use to contact you during a suspected
     * attack.</p>
     */
    inline EmergencyContact& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>An email address that the DRT can use to contact you during a suspected
     * attack.</p>
     */
    inline EmergencyContact& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>An email address that the DRT can use to contact you during a suspected
     * attack.</p>
     */
    inline EmergencyContact& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}

  private:

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
