/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
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
namespace chatbot
{
namespace Model
{

  /**
   * <p>A Microsoft Teams team that is authorized with AWS Chatbot.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/ConfiguredTeam">AWS
   * API Reference</a></p>
   */
  class ConfiguredTeam
  {
  public:
    AWS_CHATBOT_API ConfiguredTeam();
    AWS_CHATBOT_API ConfiguredTeam(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API ConfiguredTeam& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Microsoft Teams tenant.</p>
     */
    inline const Aws::String& GetTenantId() const{ return m_tenantId; }
    inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
    inline void SetTenantId(const Aws::String& value) { m_tenantIdHasBeenSet = true; m_tenantId = value; }
    inline void SetTenantId(Aws::String&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::move(value); }
    inline void SetTenantId(const char* value) { m_tenantIdHasBeenSet = true; m_tenantId.assign(value); }
    inline ConfiguredTeam& WithTenantId(const Aws::String& value) { SetTenantId(value); return *this;}
    inline ConfiguredTeam& WithTenantId(Aws::String&& value) { SetTenantId(std::move(value)); return *this;}
    inline ConfiguredTeam& WithTenantId(const char* value) { SetTenantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Microsoft Teams authorized with AWS Chatbot.</p> <p>To get the
     * team ID, you must perform the initial authorization flow with Microsoft Teams in
     * the AWS Chatbot console. Then you can copy and paste the team ID from the
     * console. For more information, see <a
     * href="https://docs.aws.amazon.com/chatbot/latest/adminguide/teams-setup.html#teams-client-setup">Step
     * 1: Configure a Microsoft Teams client</a> in the <i> AWS Chatbot Administrator
     * Guide</i>. </p>
     */
    inline const Aws::String& GetTeamId() const{ return m_teamId; }
    inline bool TeamIdHasBeenSet() const { return m_teamIdHasBeenSet; }
    inline void SetTeamId(const Aws::String& value) { m_teamIdHasBeenSet = true; m_teamId = value; }
    inline void SetTeamId(Aws::String&& value) { m_teamIdHasBeenSet = true; m_teamId = std::move(value); }
    inline void SetTeamId(const char* value) { m_teamIdHasBeenSet = true; m_teamId.assign(value); }
    inline ConfiguredTeam& WithTeamId(const Aws::String& value) { SetTeamId(value); return *this;}
    inline ConfiguredTeam& WithTeamId(Aws::String&& value) { SetTeamId(std::move(value)); return *this;}
    inline ConfiguredTeam& WithTeamId(const char* value) { SetTeamId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Microsoft Teams Team.</p>
     */
    inline const Aws::String& GetTeamName() const{ return m_teamName; }
    inline bool TeamNameHasBeenSet() const { return m_teamNameHasBeenSet; }
    inline void SetTeamName(const Aws::String& value) { m_teamNameHasBeenSet = true; m_teamName = value; }
    inline void SetTeamName(Aws::String&& value) { m_teamNameHasBeenSet = true; m_teamName = std::move(value); }
    inline void SetTeamName(const char* value) { m_teamNameHasBeenSet = true; m_teamName.assign(value); }
    inline ConfiguredTeam& WithTeamName(const Aws::String& value) { SetTeamName(value); return *this;}
    inline ConfiguredTeam& WithTeamName(Aws::String&& value) { SetTeamName(std::move(value)); return *this;}
    inline ConfiguredTeam& WithTeamName(const char* value) { SetTeamName(value); return *this;}
    ///@}
  private:

    Aws::String m_tenantId;
    bool m_tenantIdHasBeenSet = false;

    Aws::String m_teamId;
    bool m_teamIdHasBeenSet = false;

    Aws::String m_teamName;
    bool m_teamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
