/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ParticipantRole.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ParticipantCapabilities.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The details to add for the participant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ParticipantDetailsToAdd">AWS
   * API Reference</a></p>
   */
  class ParticipantDetailsToAdd
  {
  public:
    AWS_CONNECT_API ParticipantDetailsToAdd() = default;
    AWS_CONNECT_API ParticipantDetailsToAdd(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ParticipantDetailsToAdd& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The role of the participant being added.</p>
     */
    inline ParticipantRole GetParticipantRole() const { return m_participantRole; }
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }
    inline void SetParticipantRole(ParticipantRole value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }
    inline ParticipantDetailsToAdd& WithParticipantRole(ParticipantRole value) { SetParticipantRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the participant.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    ParticipantDetailsToAdd& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ParticipantCapabilities& GetParticipantCapabilities() const { return m_participantCapabilities; }
    inline bool ParticipantCapabilitiesHasBeenSet() const { return m_participantCapabilitiesHasBeenSet; }
    template<typename ParticipantCapabilitiesT = ParticipantCapabilities>
    void SetParticipantCapabilities(ParticipantCapabilitiesT&& value) { m_participantCapabilitiesHasBeenSet = true; m_participantCapabilities = std::forward<ParticipantCapabilitiesT>(value); }
    template<typename ParticipantCapabilitiesT = ParticipantCapabilities>
    ParticipantDetailsToAdd& WithParticipantCapabilities(ParticipantCapabilitiesT&& value) { SetParticipantCapabilities(std::forward<ParticipantCapabilitiesT>(value)); return *this;}
    ///@}
  private:

    ParticipantRole m_participantRole{ParticipantRole::NOT_SET};
    bool m_participantRoleHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    ParticipantCapabilities m_participantCapabilities;
    bool m_participantCapabilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
