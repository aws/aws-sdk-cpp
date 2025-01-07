/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/User.h>
#include <aws/guardduty/model/Session.h>
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
    AWS_GUARDDUTY_API Actor();
    AWS_GUARDDUTY_API Actor(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Actor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ID of the threat actor.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Actor& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Actor& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Actor& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the user credentials used by the threat actor.</p>
     */
    inline const User& GetUser() const{ return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    inline void SetUser(const User& value) { m_userHasBeenSet = true; m_user = value; }
    inline void SetUser(User&& value) { m_userHasBeenSet = true; m_user = std::move(value); }
    inline Actor& WithUser(const User& value) { SetUser(value); return *this;}
    inline Actor& WithUser(User&& value) { SetUser(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the user session where the activity initiated.</p>
     */
    inline const Session& GetSession() const{ return m_session; }
    inline bool SessionHasBeenSet() const { return m_sessionHasBeenSet; }
    inline void SetSession(const Session& value) { m_sessionHasBeenSet = true; m_session = value; }
    inline void SetSession(Session&& value) { m_sessionHasBeenSet = true; m_session = std::move(value); }
    inline Actor& WithSession(const Session& value) { SetSession(value); return *this;}
    inline Actor& WithSession(Session&& value) { SetSession(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    User m_user;
    bool m_userHasBeenSet = false;

    Session m_session;
    bool m_sessionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
