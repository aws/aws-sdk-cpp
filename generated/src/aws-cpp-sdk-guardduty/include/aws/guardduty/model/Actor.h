/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/User.h>
#include <aws/guardduty/model/Session.h>
#include <aws/guardduty/model/ActorProcess.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about the actors involved in an attack sequence.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Actor">AWS API
   * Reference</a></p>
   */
  class Actor
  {
  public:
    AWS_GUARDDUTY_API Actor() = default;
    AWS_GUARDDUTY_API Actor(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Actor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ID of the threat actor.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Actor& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the user credentials used by the threat actor.</p>
     */
    inline const User& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = User>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = User>
    Actor& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the user session where the activity initiated.</p>
     */
    inline const Session& GetSession() const { return m_session; }
    inline bool SessionHasBeenSet() const { return m_sessionHasBeenSet; }
    template<typename SessionT = Session>
    void SetSession(SessionT&& value) { m_sessionHasBeenSet = true; m_session = std::forward<SessionT>(value); }
    template<typename SessionT = Session>
    Actor& WithSession(SessionT&& value) { SetSession(std::forward<SessionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the process associated with the threat actor. This
     * includes details such as process name, path, execution time, and unique
     * identifiers that help track the actor's activities within the system.</p>
     */
    inline const ActorProcess& GetProcess() const { return m_process; }
    inline bool ProcessHasBeenSet() const { return m_processHasBeenSet; }
    template<typename ProcessT = ActorProcess>
    void SetProcess(ProcessT&& value) { m_processHasBeenSet = true; m_process = std::forward<ProcessT>(value); }
    template<typename ProcessT = ActorProcess>
    Actor& WithProcess(ProcessT&& value) { SetProcess(std::forward<ProcessT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    User m_user;
    bool m_userHasBeenSet = false;

    Session m_session;
    bool m_sessionHasBeenSet = false;

    ActorProcess m_process;
    bool m_processHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
