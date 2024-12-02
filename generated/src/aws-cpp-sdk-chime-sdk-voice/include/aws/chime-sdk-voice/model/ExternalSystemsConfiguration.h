/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-voice/model/SessionBorderControllerType.h>
#include <aws/chime-sdk-voice/model/ContactCenterSystemType.h>
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
   * <p>Contains information about an external systems configuration for a Voice
   * Connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/ExternalSystemsConfiguration">AWS
   * API Reference</a></p>
   */
  class ExternalSystemsConfiguration
  {
  public:
    AWS_CHIMESDKVOICE_API ExternalSystemsConfiguration();
    AWS_CHIMESDKVOICE_API ExternalSystemsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API ExternalSystemsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The session border controllers.</p>
     */
    inline const Aws::Vector<SessionBorderControllerType>& GetSessionBorderControllerTypes() const{ return m_sessionBorderControllerTypes; }
    inline bool SessionBorderControllerTypesHasBeenSet() const { return m_sessionBorderControllerTypesHasBeenSet; }
    inline void SetSessionBorderControllerTypes(const Aws::Vector<SessionBorderControllerType>& value) { m_sessionBorderControllerTypesHasBeenSet = true; m_sessionBorderControllerTypes = value; }
    inline void SetSessionBorderControllerTypes(Aws::Vector<SessionBorderControllerType>&& value) { m_sessionBorderControllerTypesHasBeenSet = true; m_sessionBorderControllerTypes = std::move(value); }
    inline ExternalSystemsConfiguration& WithSessionBorderControllerTypes(const Aws::Vector<SessionBorderControllerType>& value) { SetSessionBorderControllerTypes(value); return *this;}
    inline ExternalSystemsConfiguration& WithSessionBorderControllerTypes(Aws::Vector<SessionBorderControllerType>&& value) { SetSessionBorderControllerTypes(std::move(value)); return *this;}
    inline ExternalSystemsConfiguration& AddSessionBorderControllerTypes(const SessionBorderControllerType& value) { m_sessionBorderControllerTypesHasBeenSet = true; m_sessionBorderControllerTypes.push_back(value); return *this; }
    inline ExternalSystemsConfiguration& AddSessionBorderControllerTypes(SessionBorderControllerType&& value) { m_sessionBorderControllerTypesHasBeenSet = true; m_sessionBorderControllerTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The contact center system.</p>
     */
    inline const Aws::Vector<ContactCenterSystemType>& GetContactCenterSystemTypes() const{ return m_contactCenterSystemTypes; }
    inline bool ContactCenterSystemTypesHasBeenSet() const { return m_contactCenterSystemTypesHasBeenSet; }
    inline void SetContactCenterSystemTypes(const Aws::Vector<ContactCenterSystemType>& value) { m_contactCenterSystemTypesHasBeenSet = true; m_contactCenterSystemTypes = value; }
    inline void SetContactCenterSystemTypes(Aws::Vector<ContactCenterSystemType>&& value) { m_contactCenterSystemTypesHasBeenSet = true; m_contactCenterSystemTypes = std::move(value); }
    inline ExternalSystemsConfiguration& WithContactCenterSystemTypes(const Aws::Vector<ContactCenterSystemType>& value) { SetContactCenterSystemTypes(value); return *this;}
    inline ExternalSystemsConfiguration& WithContactCenterSystemTypes(Aws::Vector<ContactCenterSystemType>&& value) { SetContactCenterSystemTypes(std::move(value)); return *this;}
    inline ExternalSystemsConfiguration& AddContactCenterSystemTypes(const ContactCenterSystemType& value) { m_contactCenterSystemTypesHasBeenSet = true; m_contactCenterSystemTypes.push_back(value); return *this; }
    inline ExternalSystemsConfiguration& AddContactCenterSystemTypes(ContactCenterSystemType&& value) { m_contactCenterSystemTypesHasBeenSet = true; m_contactCenterSystemTypes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SessionBorderControllerType> m_sessionBorderControllerTypes;
    bool m_sessionBorderControllerTypesHasBeenSet = false;

    Aws::Vector<ContactCenterSystemType> m_contactCenterSystemTypes;
    bool m_contactCenterSystemTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
