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
    AWS_CHIMESDKVOICE_API ExternalSystemsConfiguration() = default;
    AWS_CHIMESDKVOICE_API ExternalSystemsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API ExternalSystemsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The session border controllers.</p>
     */
    inline const Aws::Vector<SessionBorderControllerType>& GetSessionBorderControllerTypes() const { return m_sessionBorderControllerTypes; }
    inline bool SessionBorderControllerTypesHasBeenSet() const { return m_sessionBorderControllerTypesHasBeenSet; }
    template<typename SessionBorderControllerTypesT = Aws::Vector<SessionBorderControllerType>>
    void SetSessionBorderControllerTypes(SessionBorderControllerTypesT&& value) { m_sessionBorderControllerTypesHasBeenSet = true; m_sessionBorderControllerTypes = std::forward<SessionBorderControllerTypesT>(value); }
    template<typename SessionBorderControllerTypesT = Aws::Vector<SessionBorderControllerType>>
    ExternalSystemsConfiguration& WithSessionBorderControllerTypes(SessionBorderControllerTypesT&& value) { SetSessionBorderControllerTypes(std::forward<SessionBorderControllerTypesT>(value)); return *this;}
    inline ExternalSystemsConfiguration& AddSessionBorderControllerTypes(SessionBorderControllerType value) { m_sessionBorderControllerTypesHasBeenSet = true; m_sessionBorderControllerTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The contact center system.</p>
     */
    inline const Aws::Vector<ContactCenterSystemType>& GetContactCenterSystemTypes() const { return m_contactCenterSystemTypes; }
    inline bool ContactCenterSystemTypesHasBeenSet() const { return m_contactCenterSystemTypesHasBeenSet; }
    template<typename ContactCenterSystemTypesT = Aws::Vector<ContactCenterSystemType>>
    void SetContactCenterSystemTypes(ContactCenterSystemTypesT&& value) { m_contactCenterSystemTypesHasBeenSet = true; m_contactCenterSystemTypes = std::forward<ContactCenterSystemTypesT>(value); }
    template<typename ContactCenterSystemTypesT = Aws::Vector<ContactCenterSystemType>>
    ExternalSystemsConfiguration& WithContactCenterSystemTypes(ContactCenterSystemTypesT&& value) { SetContactCenterSystemTypes(std::forward<ContactCenterSystemTypesT>(value)); return *this;}
    inline ExternalSystemsConfiguration& AddContactCenterSystemTypes(ContactCenterSystemType value) { m_contactCenterSystemTypesHasBeenSet = true; m_contactCenterSystemTypes.push_back(value); return *this; }
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
