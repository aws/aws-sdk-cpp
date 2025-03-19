/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/PhoneNumberAssociationName.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>The phone number associations, such as an Amazon Chime SDK account ID, user
   * ID, Voice Connector ID, or Voice Connector group ID.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/PhoneNumberAssociation">AWS
   * API Reference</a></p>
   */
  class PhoneNumberAssociation
  {
  public:
    AWS_CHIMESDKVOICE_API PhoneNumberAssociation() = default;
    AWS_CHIMESDKVOICE_API PhoneNumberAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API PhoneNumberAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the ID for the entity specified in Name.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    PhoneNumberAssociation& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the association with an Amazon Chime SDK account ID, user ID, Voice
     * Connector ID, or Voice Connector group ID.</p>
     */
    inline PhoneNumberAssociationName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(PhoneNumberAssociationName value) { m_nameHasBeenSet = true; m_name = value; }
    inline PhoneNumberAssociation& WithName(PhoneNumberAssociationName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the phone number association, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetAssociatedTimestamp() const { return m_associatedTimestamp; }
    inline bool AssociatedTimestampHasBeenSet() const { return m_associatedTimestampHasBeenSet; }
    template<typename AssociatedTimestampT = Aws::Utils::DateTime>
    void SetAssociatedTimestamp(AssociatedTimestampT&& value) { m_associatedTimestampHasBeenSet = true; m_associatedTimestamp = std::forward<AssociatedTimestampT>(value); }
    template<typename AssociatedTimestampT = Aws::Utils::DateTime>
    PhoneNumberAssociation& WithAssociatedTimestamp(AssociatedTimestampT&& value) { SetAssociatedTimestamp(std::forward<AssociatedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    PhoneNumberAssociationName m_name{PhoneNumberAssociationName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_associatedTimestamp{};
    bool m_associatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
