/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
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
namespace SupportApp
{
namespace Model
{

  /**
   * <p>The configuration for a Slack workspace that you added to an Amazon Web
   * Services account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-app-2021-08-20/SlackWorkspaceConfiguration">AWS
   * API Reference</a></p>
   */
  class SlackWorkspaceConfiguration
  {
  public:
    AWS_SUPPORTAPP_API SlackWorkspaceConfiguration();
    AWS_SUPPORTAPP_API SlackWorkspaceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORTAPP_API SlackWorkspaceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORTAPP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether to allow member accounts to authorize Slack workspaces. Member
     * accounts must be part of an organization in Organizations.</p>
     */
    inline bool GetAllowOrganizationMemberAccount() const{ return m_allowOrganizationMemberAccount; }

    /**
     * <p>Whether to allow member accounts to authorize Slack workspaces. Member
     * accounts must be part of an organization in Organizations.</p>
     */
    inline bool AllowOrganizationMemberAccountHasBeenSet() const { return m_allowOrganizationMemberAccountHasBeenSet; }

    /**
     * <p>Whether to allow member accounts to authorize Slack workspaces. Member
     * accounts must be part of an organization in Organizations.</p>
     */
    inline void SetAllowOrganizationMemberAccount(bool value) { m_allowOrganizationMemberAccountHasBeenSet = true; m_allowOrganizationMemberAccount = value; }

    /**
     * <p>Whether to allow member accounts to authorize Slack workspaces. Member
     * accounts must be part of an organization in Organizations.</p>
     */
    inline SlackWorkspaceConfiguration& WithAllowOrganizationMemberAccount(bool value) { SetAllowOrganizationMemberAccount(value); return *this;}


    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline const Aws::String& GetTeamId() const{ return m_teamId; }

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline bool TeamIdHasBeenSet() const { return m_teamIdHasBeenSet; }

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline void SetTeamId(const Aws::String& value) { m_teamIdHasBeenSet = true; m_teamId = value; }

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline void SetTeamId(Aws::String&& value) { m_teamIdHasBeenSet = true; m_teamId = std::move(value); }

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline void SetTeamId(const char* value) { m_teamIdHasBeenSet = true; m_teamId.assign(value); }

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline SlackWorkspaceConfiguration& WithTeamId(const Aws::String& value) { SetTeamId(value); return *this;}

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline SlackWorkspaceConfiguration& WithTeamId(Aws::String&& value) { SetTeamId(std::move(value)); return *this;}

    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline SlackWorkspaceConfiguration& WithTeamId(const char* value) { SetTeamId(value); return *this;}


    /**
     * <p>The name of the Slack workspace.</p>
     */
    inline const Aws::String& GetTeamName() const{ return m_teamName; }

    /**
     * <p>The name of the Slack workspace.</p>
     */
    inline bool TeamNameHasBeenSet() const { return m_teamNameHasBeenSet; }

    /**
     * <p>The name of the Slack workspace.</p>
     */
    inline void SetTeamName(const Aws::String& value) { m_teamNameHasBeenSet = true; m_teamName = value; }

    /**
     * <p>The name of the Slack workspace.</p>
     */
    inline void SetTeamName(Aws::String&& value) { m_teamNameHasBeenSet = true; m_teamName = std::move(value); }

    /**
     * <p>The name of the Slack workspace.</p>
     */
    inline void SetTeamName(const char* value) { m_teamNameHasBeenSet = true; m_teamName.assign(value); }

    /**
     * <p>The name of the Slack workspace.</p>
     */
    inline SlackWorkspaceConfiguration& WithTeamName(const Aws::String& value) { SetTeamName(value); return *this;}

    /**
     * <p>The name of the Slack workspace.</p>
     */
    inline SlackWorkspaceConfiguration& WithTeamName(Aws::String&& value) { SetTeamName(std::move(value)); return *this;}

    /**
     * <p>The name of the Slack workspace.</p>
     */
    inline SlackWorkspaceConfiguration& WithTeamName(const char* value) { SetTeamName(value); return *this;}

  private:

    bool m_allowOrganizationMemberAccount;
    bool m_allowOrganizationMemberAccountHasBeenSet = false;

    Aws::String m_teamId;
    bool m_teamIdHasBeenSet = false;

    Aws::String m_teamName;
    bool m_teamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
