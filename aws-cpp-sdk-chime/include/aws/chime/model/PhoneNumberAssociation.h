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
#include <aws/chime/model/PhoneNumberAssociationName.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The phone number associations, such as Amazon Chime account ID, Amazon Chime
   * user ID, or Amazon Chime Voice Connector ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PhoneNumberAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API PhoneNumberAssociation
  {
  public:
    PhoneNumberAssociation();
    PhoneNumberAssociation(Aws::Utils::Json::JsonView jsonValue);
    PhoneNumberAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains the ID for the entity specified in Name.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Contains the ID for the entity specified in Name.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Contains the ID for the entity specified in Name.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Contains the ID for the entity specified in Name.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Contains the ID for the entity specified in Name.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Contains the ID for the entity specified in Name.</p>
     */
    inline PhoneNumberAssociation& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Contains the ID for the entity specified in Name.</p>
     */
    inline PhoneNumberAssociation& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Contains the ID for the entity specified in Name.</p>
     */
    inline PhoneNumberAssociation& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>Defines the association with an Amazon Chime account ID, user ID, or Amazon
     * Chime Voice Connector ID.</p>
     */
    inline const PhoneNumberAssociationName& GetName() const{ return m_name; }

    /**
     * <p>Defines the association with an Amazon Chime account ID, user ID, or Amazon
     * Chime Voice Connector ID.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Defines the association with an Amazon Chime account ID, user ID, or Amazon
     * Chime Voice Connector ID.</p>
     */
    inline void SetName(const PhoneNumberAssociationName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Defines the association with an Amazon Chime account ID, user ID, or Amazon
     * Chime Voice Connector ID.</p>
     */
    inline void SetName(PhoneNumberAssociationName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Defines the association with an Amazon Chime account ID, user ID, or Amazon
     * Chime Voice Connector ID.</p>
     */
    inline PhoneNumberAssociation& WithName(const PhoneNumberAssociationName& value) { SetName(value); return *this;}

    /**
     * <p>Defines the association with an Amazon Chime account ID, user ID, or Amazon
     * Chime Voice Connector ID.</p>
     */
    inline PhoneNumberAssociation& WithName(PhoneNumberAssociationName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The timestamp of the phone number association, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetAssociatedTimestamp() const{ return m_associatedTimestamp; }

    /**
     * <p>The timestamp of the phone number association, in ISO 8601 format.</p>
     */
    inline bool AssociatedTimestampHasBeenSet() const { return m_associatedTimestampHasBeenSet; }

    /**
     * <p>The timestamp of the phone number association, in ISO 8601 format.</p>
     */
    inline void SetAssociatedTimestamp(const Aws::Utils::DateTime& value) { m_associatedTimestampHasBeenSet = true; m_associatedTimestamp = value; }

    /**
     * <p>The timestamp of the phone number association, in ISO 8601 format.</p>
     */
    inline void SetAssociatedTimestamp(Aws::Utils::DateTime&& value) { m_associatedTimestampHasBeenSet = true; m_associatedTimestamp = std::move(value); }

    /**
     * <p>The timestamp of the phone number association, in ISO 8601 format.</p>
     */
    inline PhoneNumberAssociation& WithAssociatedTimestamp(const Aws::Utils::DateTime& value) { SetAssociatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the phone number association, in ISO 8601 format.</p>
     */
    inline PhoneNumberAssociation& WithAssociatedTimestamp(Aws::Utils::DateTime&& value) { SetAssociatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet;

    PhoneNumberAssociationName m_name;
    bool m_nameHasBeenSet;

    Aws::Utils::DateTime m_associatedTimestamp;
    bool m_associatedTimestampHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
