/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/DataSourceVpcConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/SlackEntity.h>
#include <aws/kendra/model/DataSourceToIndexFieldMapping.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information to connect to Slack as your data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SlackConfiguration">AWS
   * API Reference</a></p>
   */
  class SlackConfiguration
  {
  public:
    AWS_KENDRA_API SlackConfiguration();
    AWS_KENDRA_API SlackConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SlackConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the team in the Slack workspace. For example,
     * <i>T0123456789</i>.</p> <p>You can find your team ID in the URL of the main page
     * of your Slack workspace. When you log in to Slack via a browser, you are
     * directed to the URL of the main page. For example,
     * <i>https://app.slack.com/client/<b>T0123456789</b>/...</i>.</p>
     */
    inline const Aws::String& GetTeamId() const{ return m_teamId; }

    /**
     * <p>The identifier of the team in the Slack workspace. For example,
     * <i>T0123456789</i>.</p> <p>You can find your team ID in the URL of the main page
     * of your Slack workspace. When you log in to Slack via a browser, you are
     * directed to the URL of the main page. For example,
     * <i>https://app.slack.com/client/<b>T0123456789</b>/...</i>.</p>
     */
    inline bool TeamIdHasBeenSet() const { return m_teamIdHasBeenSet; }

    /**
     * <p>The identifier of the team in the Slack workspace. For example,
     * <i>T0123456789</i>.</p> <p>You can find your team ID in the URL of the main page
     * of your Slack workspace. When you log in to Slack via a browser, you are
     * directed to the URL of the main page. For example,
     * <i>https://app.slack.com/client/<b>T0123456789</b>/...</i>.</p>
     */
    inline void SetTeamId(const Aws::String& value) { m_teamIdHasBeenSet = true; m_teamId = value; }

    /**
     * <p>The identifier of the team in the Slack workspace. For example,
     * <i>T0123456789</i>.</p> <p>You can find your team ID in the URL of the main page
     * of your Slack workspace. When you log in to Slack via a browser, you are
     * directed to the URL of the main page. For example,
     * <i>https://app.slack.com/client/<b>T0123456789</b>/...</i>.</p>
     */
    inline void SetTeamId(Aws::String&& value) { m_teamIdHasBeenSet = true; m_teamId = std::move(value); }

    /**
     * <p>The identifier of the team in the Slack workspace. For example,
     * <i>T0123456789</i>.</p> <p>You can find your team ID in the URL of the main page
     * of your Slack workspace. When you log in to Slack via a browser, you are
     * directed to the URL of the main page. For example,
     * <i>https://app.slack.com/client/<b>T0123456789</b>/...</i>.</p>
     */
    inline void SetTeamId(const char* value) { m_teamIdHasBeenSet = true; m_teamId.assign(value); }

    /**
     * <p>The identifier of the team in the Slack workspace. For example,
     * <i>T0123456789</i>.</p> <p>You can find your team ID in the URL of the main page
     * of your Slack workspace. When you log in to Slack via a browser, you are
     * directed to the URL of the main page. For example,
     * <i>https://app.slack.com/client/<b>T0123456789</b>/...</i>.</p>
     */
    inline SlackConfiguration& WithTeamId(const Aws::String& value) { SetTeamId(value); return *this;}

    /**
     * <p>The identifier of the team in the Slack workspace. For example,
     * <i>T0123456789</i>.</p> <p>You can find your team ID in the URL of the main page
     * of your Slack workspace. When you log in to Slack via a browser, you are
     * directed to the URL of the main page. For example,
     * <i>https://app.slack.com/client/<b>T0123456789</b>/...</i>.</p>
     */
    inline SlackConfiguration& WithTeamId(Aws::String&& value) { SetTeamId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the team in the Slack workspace. For example,
     * <i>T0123456789</i>.</p> <p>You can find your team ID in the URL of the main page
     * of your Slack workspace. When you log in to Slack via a browser, you are
     * directed to the URL of the main page. For example,
     * <i>https://app.slack.com/client/<b>T0123456789</b>/...</i>.</p>
     */
    inline SlackConfiguration& WithTeamId(const char* value) { SetTeamId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your Slack workspace team. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li>
     * <p>slackToken—The user or bot token created in Slack. For more information on
     * creating a token in Slack, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-slack.html#slack-authentication">Authentication
     * for a Slack data source</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your Slack workspace team. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li>
     * <p>slackToken—The user or bot token created in Slack. For more information on
     * creating a token in Slack, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-slack.html#slack-authentication">Authentication
     * for a Slack data source</a>.</p> </li> </ul>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your Slack workspace team. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li>
     * <p>slackToken—The user or bot token created in Slack. For more information on
     * creating a token in Slack, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-slack.html#slack-authentication">Authentication
     * for a Slack data source</a>.</p> </li> </ul>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your Slack workspace team. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li>
     * <p>slackToken—The user or bot token created in Slack. For more information on
     * creating a token in Slack, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-slack.html#slack-authentication">Authentication
     * for a Slack data source</a>.</p> </li> </ul>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your Slack workspace team. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li>
     * <p>slackToken—The user or bot token created in Slack. For more information on
     * creating a token in Slack, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-slack.html#slack-authentication">Authentication
     * for a Slack data source</a>.</p> </li> </ul>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your Slack workspace team. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li>
     * <p>slackToken—The user or bot token created in Slack. For more information on
     * creating a token in Slack, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-slack.html#slack-authentication">Authentication
     * for a Slack data source</a>.</p> </li> </ul>
     */
    inline SlackConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your Slack workspace team. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li>
     * <p>slackToken—The user or bot token created in Slack. For more information on
     * creating a token in Slack, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-slack.html#slack-authentication">Authentication
     * for a Slack data source</a>.</p> </li> </ul>
     */
    inline SlackConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your Slack workspace team. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li>
     * <p>slackToken—The user or bot token created in Slack. For more information on
     * creating a token in Slack, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-slack.html#slack-authentication">Authentication
     * for a Slack data source</a>.</p> </li> </ul>
     */
    inline SlackConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Slack. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Slack. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Slack. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline void SetVpcConfiguration(const DataSourceVpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Slack. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline void SetVpcConfiguration(DataSourceVpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Slack. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline SlackConfiguration& WithVpcConfiguration(const DataSourceVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Slack. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline SlackConfiguration& WithVpcConfiguration(DataSourceVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specify whether to index public channels, private channels, group messages,
     * and direct messages. You can specify one or more of these options.</p>
     */
    inline const Aws::Vector<SlackEntity>& GetSlackEntityList() const{ return m_slackEntityList; }

    /**
     * <p>Specify whether to index public channels, private channels, group messages,
     * and direct messages. You can specify one or more of these options.</p>
     */
    inline bool SlackEntityListHasBeenSet() const { return m_slackEntityListHasBeenSet; }

    /**
     * <p>Specify whether to index public channels, private channels, group messages,
     * and direct messages. You can specify one or more of these options.</p>
     */
    inline void SetSlackEntityList(const Aws::Vector<SlackEntity>& value) { m_slackEntityListHasBeenSet = true; m_slackEntityList = value; }

    /**
     * <p>Specify whether to index public channels, private channels, group messages,
     * and direct messages. You can specify one or more of these options.</p>
     */
    inline void SetSlackEntityList(Aws::Vector<SlackEntity>&& value) { m_slackEntityListHasBeenSet = true; m_slackEntityList = std::move(value); }

    /**
     * <p>Specify whether to index public channels, private channels, group messages,
     * and direct messages. You can specify one or more of these options.</p>
     */
    inline SlackConfiguration& WithSlackEntityList(const Aws::Vector<SlackEntity>& value) { SetSlackEntityList(value); return *this;}

    /**
     * <p>Specify whether to index public channels, private channels, group messages,
     * and direct messages. You can specify one or more of these options.</p>
     */
    inline SlackConfiguration& WithSlackEntityList(Aws::Vector<SlackEntity>&& value) { SetSlackEntityList(std::move(value)); return *this;}

    /**
     * <p>Specify whether to index public channels, private channels, group messages,
     * and direct messages. You can specify one or more of these options.</p>
     */
    inline SlackConfiguration& AddSlackEntityList(const SlackEntity& value) { m_slackEntityListHasBeenSet = true; m_slackEntityList.push_back(value); return *this; }

    /**
     * <p>Specify whether to index public channels, private channels, group messages,
     * and direct messages. You can specify one or more of these options.</p>
     */
    inline SlackConfiguration& AddSlackEntityList(SlackEntity&& value) { m_slackEntityListHasBeenSet = true; m_slackEntityList.push_back(std::move(value)); return *this; }


    /**
     * <p> <code>TRUE</code> to use the Slack change log to determine which documents
     * require updating in the index. Depending on the Slack change log's size, it may
     * take longer for Amazon Kendra to use the change log than to scan all of your
     * documents in Slack.</p>
     */
    inline bool GetUseChangeLog() const{ return m_useChangeLog; }

    /**
     * <p> <code>TRUE</code> to use the Slack change log to determine which documents
     * require updating in the index. Depending on the Slack change log's size, it may
     * take longer for Amazon Kendra to use the change log than to scan all of your
     * documents in Slack.</p>
     */
    inline bool UseChangeLogHasBeenSet() const { return m_useChangeLogHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to use the Slack change log to determine which documents
     * require updating in the index. Depending on the Slack change log's size, it may
     * take longer for Amazon Kendra to use the change log than to scan all of your
     * documents in Slack.</p>
     */
    inline void SetUseChangeLog(bool value) { m_useChangeLogHasBeenSet = true; m_useChangeLog = value; }

    /**
     * <p> <code>TRUE</code> to use the Slack change log to determine which documents
     * require updating in the index. Depending on the Slack change log's size, it may
     * take longer for Amazon Kendra to use the change log than to scan all of your
     * documents in Slack.</p>
     */
    inline SlackConfiguration& WithUseChangeLog(bool value) { SetUseChangeLog(value); return *this;}


    /**
     * <p> <code>TRUE</code> to index bot messages from your Slack workspace team.</p>
     */
    inline bool GetCrawlBotMessage() const{ return m_crawlBotMessage; }

    /**
     * <p> <code>TRUE</code> to index bot messages from your Slack workspace team.</p>
     */
    inline bool CrawlBotMessageHasBeenSet() const { return m_crawlBotMessageHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to index bot messages from your Slack workspace team.</p>
     */
    inline void SetCrawlBotMessage(bool value) { m_crawlBotMessageHasBeenSet = true; m_crawlBotMessage = value; }

    /**
     * <p> <code>TRUE</code> to index bot messages from your Slack workspace team.</p>
     */
    inline SlackConfiguration& WithCrawlBotMessage(bool value) { SetCrawlBotMessage(value); return *this;}


    /**
     * <p> <code>TRUE</code> to exclude archived messages to index from your Slack
     * workspace team.</p>
     */
    inline bool GetExcludeArchived() const{ return m_excludeArchived; }

    /**
     * <p> <code>TRUE</code> to exclude archived messages to index from your Slack
     * workspace team.</p>
     */
    inline bool ExcludeArchivedHasBeenSet() const { return m_excludeArchivedHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to exclude archived messages to index from your Slack
     * workspace team.</p>
     */
    inline void SetExcludeArchived(bool value) { m_excludeArchivedHasBeenSet = true; m_excludeArchived = value; }

    /**
     * <p> <code>TRUE</code> to exclude archived messages to index from your Slack
     * workspace team.</p>
     */
    inline SlackConfiguration& WithExcludeArchived(bool value) { SetExcludeArchived(value); return *this;}


    /**
     * <p>The date to start crawling your data from your Slack workspace team. The date
     * must follow this format: <code>yyyy-mm-dd</code>.</p>
     */
    inline const Aws::String& GetSinceCrawlDate() const{ return m_sinceCrawlDate; }

    /**
     * <p>The date to start crawling your data from your Slack workspace team. The date
     * must follow this format: <code>yyyy-mm-dd</code>.</p>
     */
    inline bool SinceCrawlDateHasBeenSet() const { return m_sinceCrawlDateHasBeenSet; }

    /**
     * <p>The date to start crawling your data from your Slack workspace team. The date
     * must follow this format: <code>yyyy-mm-dd</code>.</p>
     */
    inline void SetSinceCrawlDate(const Aws::String& value) { m_sinceCrawlDateHasBeenSet = true; m_sinceCrawlDate = value; }

    /**
     * <p>The date to start crawling your data from your Slack workspace team. The date
     * must follow this format: <code>yyyy-mm-dd</code>.</p>
     */
    inline void SetSinceCrawlDate(Aws::String&& value) { m_sinceCrawlDateHasBeenSet = true; m_sinceCrawlDate = std::move(value); }

    /**
     * <p>The date to start crawling your data from your Slack workspace team. The date
     * must follow this format: <code>yyyy-mm-dd</code>.</p>
     */
    inline void SetSinceCrawlDate(const char* value) { m_sinceCrawlDateHasBeenSet = true; m_sinceCrawlDate.assign(value); }

    /**
     * <p>The date to start crawling your data from your Slack workspace team. The date
     * must follow this format: <code>yyyy-mm-dd</code>.</p>
     */
    inline SlackConfiguration& WithSinceCrawlDate(const Aws::String& value) { SetSinceCrawlDate(value); return *this;}

    /**
     * <p>The date to start crawling your data from your Slack workspace team. The date
     * must follow this format: <code>yyyy-mm-dd</code>.</p>
     */
    inline SlackConfiguration& WithSinceCrawlDate(Aws::String&& value) { SetSinceCrawlDate(std::move(value)); return *this;}

    /**
     * <p>The date to start crawling your data from your Slack workspace team. The date
     * must follow this format: <code>yyyy-mm-dd</code>.</p>
     */
    inline SlackConfiguration& WithSinceCrawlDate(const char* value) { SetSinceCrawlDate(value); return *this;}


    /**
     * <p>The number of hours for change log to look back from when you last
     * synchronized your data. You can look back up to 7 days or 168 hours.</p>
     * <p>Change log updates your index only if new content was added since you last
     * synced your data. Updated or deleted content from before you last synced does
     * not get updated in your index. To capture updated or deleted content before you
     * last synced, set the <code>LookBackPeriod</code> to the number of hours you want
     * change log to look back.</p>
     */
    inline int GetLookBackPeriod() const{ return m_lookBackPeriod; }

    /**
     * <p>The number of hours for change log to look back from when you last
     * synchronized your data. You can look back up to 7 days or 168 hours.</p>
     * <p>Change log updates your index only if new content was added since you last
     * synced your data. Updated or deleted content from before you last synced does
     * not get updated in your index. To capture updated or deleted content before you
     * last synced, set the <code>LookBackPeriod</code> to the number of hours you want
     * change log to look back.</p>
     */
    inline bool LookBackPeriodHasBeenSet() const { return m_lookBackPeriodHasBeenSet; }

    /**
     * <p>The number of hours for change log to look back from when you last
     * synchronized your data. You can look back up to 7 days or 168 hours.</p>
     * <p>Change log updates your index only if new content was added since you last
     * synced your data. Updated or deleted content from before you last synced does
     * not get updated in your index. To capture updated or deleted content before you
     * last synced, set the <code>LookBackPeriod</code> to the number of hours you want
     * change log to look back.</p>
     */
    inline void SetLookBackPeriod(int value) { m_lookBackPeriodHasBeenSet = true; m_lookBackPeriod = value; }

    /**
     * <p>The number of hours for change log to look back from when you last
     * synchronized your data. You can look back up to 7 days or 168 hours.</p>
     * <p>Change log updates your index only if new content was added since you last
     * synced your data. Updated or deleted content from before you last synced does
     * not get updated in your index. To capture updated or deleted content before you
     * last synced, set the <code>LookBackPeriod</code> to the number of hours you want
     * change log to look back.</p>
     */
    inline SlackConfiguration& WithLookBackPeriod(int value) { SetLookBackPeriod(value); return *this;}


    /**
     * <p>The list of private channel names from your Slack workspace team. You use
     * this if you want to index specific private channels, not all private channels.
     * You can also use regular expression patterns to filter private channels.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrivateChannelFilter() const{ return m_privateChannelFilter; }

    /**
     * <p>The list of private channel names from your Slack workspace team. You use
     * this if you want to index specific private channels, not all private channels.
     * You can also use regular expression patterns to filter private channels.</p>
     */
    inline bool PrivateChannelFilterHasBeenSet() const { return m_privateChannelFilterHasBeenSet; }

    /**
     * <p>The list of private channel names from your Slack workspace team. You use
     * this if you want to index specific private channels, not all private channels.
     * You can also use regular expression patterns to filter private channels.</p>
     */
    inline void SetPrivateChannelFilter(const Aws::Vector<Aws::String>& value) { m_privateChannelFilterHasBeenSet = true; m_privateChannelFilter = value; }

    /**
     * <p>The list of private channel names from your Slack workspace team. You use
     * this if you want to index specific private channels, not all private channels.
     * You can also use regular expression patterns to filter private channels.</p>
     */
    inline void SetPrivateChannelFilter(Aws::Vector<Aws::String>&& value) { m_privateChannelFilterHasBeenSet = true; m_privateChannelFilter = std::move(value); }

    /**
     * <p>The list of private channel names from your Slack workspace team. You use
     * this if you want to index specific private channels, not all private channels.
     * You can also use regular expression patterns to filter private channels.</p>
     */
    inline SlackConfiguration& WithPrivateChannelFilter(const Aws::Vector<Aws::String>& value) { SetPrivateChannelFilter(value); return *this;}

    /**
     * <p>The list of private channel names from your Slack workspace team. You use
     * this if you want to index specific private channels, not all private channels.
     * You can also use regular expression patterns to filter private channels.</p>
     */
    inline SlackConfiguration& WithPrivateChannelFilter(Aws::Vector<Aws::String>&& value) { SetPrivateChannelFilter(std::move(value)); return *this;}

    /**
     * <p>The list of private channel names from your Slack workspace team. You use
     * this if you want to index specific private channels, not all private channels.
     * You can also use regular expression patterns to filter private channels.</p>
     */
    inline SlackConfiguration& AddPrivateChannelFilter(const Aws::String& value) { m_privateChannelFilterHasBeenSet = true; m_privateChannelFilter.push_back(value); return *this; }

    /**
     * <p>The list of private channel names from your Slack workspace team. You use
     * this if you want to index specific private channels, not all private channels.
     * You can also use regular expression patterns to filter private channels.</p>
     */
    inline SlackConfiguration& AddPrivateChannelFilter(Aws::String&& value) { m_privateChannelFilterHasBeenSet = true; m_privateChannelFilter.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of private channel names from your Slack workspace team. You use
     * this if you want to index specific private channels, not all private channels.
     * You can also use regular expression patterns to filter private channels.</p>
     */
    inline SlackConfiguration& AddPrivateChannelFilter(const char* value) { m_privateChannelFilterHasBeenSet = true; m_privateChannelFilter.push_back(value); return *this; }


    /**
     * <p>The list of public channel names to index from your Slack workspace team. You
     * use this if you want to index specific public channels, not all public channels.
     * You can also use regular expression patterns to filter public channels.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPublicChannelFilter() const{ return m_publicChannelFilter; }

    /**
     * <p>The list of public channel names to index from your Slack workspace team. You
     * use this if you want to index specific public channels, not all public channels.
     * You can also use regular expression patterns to filter public channels.</p>
     */
    inline bool PublicChannelFilterHasBeenSet() const { return m_publicChannelFilterHasBeenSet; }

    /**
     * <p>The list of public channel names to index from your Slack workspace team. You
     * use this if you want to index specific public channels, not all public channels.
     * You can also use regular expression patterns to filter public channels.</p>
     */
    inline void SetPublicChannelFilter(const Aws::Vector<Aws::String>& value) { m_publicChannelFilterHasBeenSet = true; m_publicChannelFilter = value; }

    /**
     * <p>The list of public channel names to index from your Slack workspace team. You
     * use this if you want to index specific public channels, not all public channels.
     * You can also use regular expression patterns to filter public channels.</p>
     */
    inline void SetPublicChannelFilter(Aws::Vector<Aws::String>&& value) { m_publicChannelFilterHasBeenSet = true; m_publicChannelFilter = std::move(value); }

    /**
     * <p>The list of public channel names to index from your Slack workspace team. You
     * use this if you want to index specific public channels, not all public channels.
     * You can also use regular expression patterns to filter public channels.</p>
     */
    inline SlackConfiguration& WithPublicChannelFilter(const Aws::Vector<Aws::String>& value) { SetPublicChannelFilter(value); return *this;}

    /**
     * <p>The list of public channel names to index from your Slack workspace team. You
     * use this if you want to index specific public channels, not all public channels.
     * You can also use regular expression patterns to filter public channels.</p>
     */
    inline SlackConfiguration& WithPublicChannelFilter(Aws::Vector<Aws::String>&& value) { SetPublicChannelFilter(std::move(value)); return *this;}

    /**
     * <p>The list of public channel names to index from your Slack workspace team. You
     * use this if you want to index specific public channels, not all public channels.
     * You can also use regular expression patterns to filter public channels.</p>
     */
    inline SlackConfiguration& AddPublicChannelFilter(const Aws::String& value) { m_publicChannelFilterHasBeenSet = true; m_publicChannelFilter.push_back(value); return *this; }

    /**
     * <p>The list of public channel names to index from your Slack workspace team. You
     * use this if you want to index specific public channels, not all public channels.
     * You can also use regular expression patterns to filter public channels.</p>
     */
    inline SlackConfiguration& AddPublicChannelFilter(Aws::String&& value) { m_publicChannelFilterHasBeenSet = true; m_publicChannelFilter.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of public channel names to index from your Slack workspace team. You
     * use this if you want to index specific public channels, not all public channels.
     * You can also use regular expression patterns to filter public channels.</p>
     */
    inline SlackConfiguration& AddPublicChannelFilter(const char* value) { m_publicChannelFilterHasBeenSet = true; m_publicChannelFilter.push_back(value); return *this; }


    /**
     * <p>A list of regular expression patterns to include certain attached files in
     * your Slack workspace team. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const{ return m_inclusionPatterns; }

    /**
     * <p>A list of regular expression patterns to include certain attached files in
     * your Slack workspace team. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the file isn't included in the index.</p>
     */
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to include certain attached files in
     * your Slack workspace team. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the file isn't included in the index.</p>
     */
    inline void SetInclusionPatterns(const Aws::Vector<Aws::String>& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = value; }

    /**
     * <p>A list of regular expression patterns to include certain attached files in
     * your Slack workspace team. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the file isn't included in the index.</p>
     */
    inline void SetInclusionPatterns(Aws::Vector<Aws::String>&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to include certain attached files in
     * your Slack workspace team. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the file isn't included in the index.</p>
     */
    inline SlackConfiguration& WithInclusionPatterns(const Aws::Vector<Aws::String>& value) { SetInclusionPatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain attached files in
     * your Slack workspace team. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the file isn't included in the index.</p>
     */
    inline SlackConfiguration& WithInclusionPatterns(Aws::Vector<Aws::String>&& value) { SetInclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain attached files in
     * your Slack workspace team. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the file isn't included in the index.</p>
     */
    inline SlackConfiguration& AddInclusionPatterns(const Aws::String& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain attached files in
     * your Slack workspace team. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the file isn't included in the index.</p>
     */
    inline SlackConfiguration& AddInclusionPatterns(Aws::String&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain attached files in
     * your Slack workspace team. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the file isn't included in the index.</p>
     */
    inline SlackConfiguration& AddInclusionPatterns(const char* value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }


    /**
     * <p>A list of regular expression patterns to exclude certain attached files in
     * your Slack workspace team. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const{ return m_exclusionPatterns; }

    /**
     * <p>A list of regular expression patterns to exclude certain attached files in
     * your Slack workspace team. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to exclude certain attached files in
     * your Slack workspace team. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline void SetExclusionPatterns(const Aws::Vector<Aws::String>& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = value; }

    /**
     * <p>A list of regular expression patterns to exclude certain attached files in
     * your Slack workspace team. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline void SetExclusionPatterns(Aws::Vector<Aws::String>&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to exclude certain attached files in
     * your Slack workspace team. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline SlackConfiguration& WithExclusionPatterns(const Aws::Vector<Aws::String>& value) { SetExclusionPatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain attached files in
     * your Slack workspace team. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline SlackConfiguration& WithExclusionPatterns(Aws::Vector<Aws::String>&& value) { SetExclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain attached files in
     * your Slack workspace team. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline SlackConfiguration& AddExclusionPatterns(const Aws::String& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain attached files in
     * your Slack workspace team. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline SlackConfiguration& AddExclusionPatterns(Aws::String&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain attached files in
     * your Slack workspace team. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline SlackConfiguration& AddExclusionPatterns(const char* value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }


    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Slack
     * data source attributes or field names to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Slack fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Slack data source field names must exist in your
     * Slack custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const{ return m_fieldMappings; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Slack
     * data source attributes or field names to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Slack fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Slack data source field names must exist in your
     * Slack custom metadata.</p>
     */
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Slack
     * data source attributes or field names to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Slack fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Slack data source field names must exist in your
     * Slack custom metadata.</p>
     */
    inline void SetFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = value; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Slack
     * data source attributes or field names to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Slack fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Slack data source field names must exist in your
     * Slack custom metadata.</p>
     */
    inline void SetFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::move(value); }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Slack
     * data source attributes or field names to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Slack fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Slack data source field names must exist in your
     * Slack custom metadata.</p>
     */
    inline SlackConfiguration& WithFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetFieldMappings(value); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Slack
     * data source attributes or field names to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Slack fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Slack data source field names must exist in your
     * Slack custom metadata.</p>
     */
    inline SlackConfiguration& WithFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetFieldMappings(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Slack
     * data source attributes or field names to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Slack fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Slack data source field names must exist in your
     * Slack custom metadata.</p>
     */
    inline SlackConfiguration& AddFieldMappings(const DataSourceToIndexFieldMapping& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Slack
     * data source attributes or field names to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Slack fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Slack data source field names must exist in your
     * Slack custom metadata.</p>
     */
    inline SlackConfiguration& AddFieldMappings(DataSourceToIndexFieldMapping&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_teamId;
    bool m_teamIdHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    DataSourceVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    Aws::Vector<SlackEntity> m_slackEntityList;
    bool m_slackEntityListHasBeenSet = false;

    bool m_useChangeLog;
    bool m_useChangeLogHasBeenSet = false;

    bool m_crawlBotMessage;
    bool m_crawlBotMessageHasBeenSet = false;

    bool m_excludeArchived;
    bool m_excludeArchivedHasBeenSet = false;

    Aws::String m_sinceCrawlDate;
    bool m_sinceCrawlDateHasBeenSet = false;

    int m_lookBackPeriod;
    bool m_lookBackPeriodHasBeenSet = false;

    Aws::Vector<Aws::String> m_privateChannelFilter;
    bool m_privateChannelFilterHasBeenSet = false;

    Aws::Vector<Aws::String> m_publicChannelFilter;
    bool m_publicChannelFilterHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionPatterns;
    bool m_inclusionPatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionPatterns;
    bool m_exclusionPatternsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_fieldMappings;
    bool m_fieldMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
