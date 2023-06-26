/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ParticipantRole.h>
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
    AWS_CONNECT_API ParticipantDetailsToAdd();
    AWS_CONNECT_API ParticipantDetailsToAdd(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ParticipantDetailsToAdd& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The role of the participant being added.</p>
     */
    inline const ParticipantRole& GetParticipantRole() const{ return m_participantRole; }

    /**
     * <p>The role of the participant being added.</p>
     */
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }

    /**
     * <p>The role of the participant being added.</p>
     */
    inline void SetParticipantRole(const ParticipantRole& value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }

    /**
     * <p>The role of the participant being added.</p>
     */
    inline void SetParticipantRole(ParticipantRole&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::move(value); }

    /**
     * <p>The role of the participant being added.</p>
     */
    inline ParticipantDetailsToAdd& WithParticipantRole(const ParticipantRole& value) { SetParticipantRole(value); return *this;}

    /**
     * <p>The role of the participant being added.</p>
     */
    inline ParticipantDetailsToAdd& WithParticipantRole(ParticipantRole&& value) { SetParticipantRole(std::move(value)); return *this;}


    /**
     * <p>The display name of the participant.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the participant.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the participant.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the participant.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the participant.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the participant.</p>
     */
    inline ParticipantDetailsToAdd& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the participant.</p>
     */
    inline ParticipantDetailsToAdd& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the participant.</p>
     */
    inline ParticipantDetailsToAdd& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

  private:

    ParticipantRole m_participantRole;
    bool m_participantRoleHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
