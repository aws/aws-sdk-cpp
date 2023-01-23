/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/QuickConnectType.h>
#include <aws/connect/model/UserQuickConnectConfig.h>
#include <aws/connect/model/QueueQuickConnectConfig.h>
#include <aws/connect/model/PhoneNumberQuickConnectConfig.h>
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
   * <p>Contains configuration settings for a quick connect.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/QuickConnectConfig">AWS
   * API Reference</a></p>
   */
  class QuickConnectConfig
  {
  public:
    AWS_CONNECT_API QuickConnectConfig();
    AWS_CONNECT_API QuickConnectConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API QuickConnectConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE). </p>
     */
    inline const QuickConnectType& GetQuickConnectType() const{ return m_quickConnectType; }

    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE). </p>
     */
    inline bool QuickConnectTypeHasBeenSet() const { return m_quickConnectTypeHasBeenSet; }

    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE). </p>
     */
    inline void SetQuickConnectType(const QuickConnectType& value) { m_quickConnectTypeHasBeenSet = true; m_quickConnectType = value; }

    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE). </p>
     */
    inline void SetQuickConnectType(QuickConnectType&& value) { m_quickConnectTypeHasBeenSet = true; m_quickConnectType = std::move(value); }

    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE). </p>
     */
    inline QuickConnectConfig& WithQuickConnectType(const QuickConnectType& value) { SetQuickConnectType(value); return *this;}

    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE). </p>
     */
    inline QuickConnectConfig& WithQuickConnectType(QuickConnectType&& value) { SetQuickConnectType(std::move(value)); return *this;}


    /**
     * <p>The user configuration. This is required only if QuickConnectType is
     * USER.</p>
     */
    inline const UserQuickConnectConfig& GetUserConfig() const{ return m_userConfig; }

    /**
     * <p>The user configuration. This is required only if QuickConnectType is
     * USER.</p>
     */
    inline bool UserConfigHasBeenSet() const { return m_userConfigHasBeenSet; }

    /**
     * <p>The user configuration. This is required only if QuickConnectType is
     * USER.</p>
     */
    inline void SetUserConfig(const UserQuickConnectConfig& value) { m_userConfigHasBeenSet = true; m_userConfig = value; }

    /**
     * <p>The user configuration. This is required only if QuickConnectType is
     * USER.</p>
     */
    inline void SetUserConfig(UserQuickConnectConfig&& value) { m_userConfigHasBeenSet = true; m_userConfig = std::move(value); }

    /**
     * <p>The user configuration. This is required only if QuickConnectType is
     * USER.</p>
     */
    inline QuickConnectConfig& WithUserConfig(const UserQuickConnectConfig& value) { SetUserConfig(value); return *this;}

    /**
     * <p>The user configuration. This is required only if QuickConnectType is
     * USER.</p>
     */
    inline QuickConnectConfig& WithUserConfig(UserQuickConnectConfig&& value) { SetUserConfig(std::move(value)); return *this;}


    /**
     * <p>The queue configuration. This is required only if QuickConnectType is
     * QUEUE.</p>
     */
    inline const QueueQuickConnectConfig& GetQueueConfig() const{ return m_queueConfig; }

    /**
     * <p>The queue configuration. This is required only if QuickConnectType is
     * QUEUE.</p>
     */
    inline bool QueueConfigHasBeenSet() const { return m_queueConfigHasBeenSet; }

    /**
     * <p>The queue configuration. This is required only if QuickConnectType is
     * QUEUE.</p>
     */
    inline void SetQueueConfig(const QueueQuickConnectConfig& value) { m_queueConfigHasBeenSet = true; m_queueConfig = value; }

    /**
     * <p>The queue configuration. This is required only if QuickConnectType is
     * QUEUE.</p>
     */
    inline void SetQueueConfig(QueueQuickConnectConfig&& value) { m_queueConfigHasBeenSet = true; m_queueConfig = std::move(value); }

    /**
     * <p>The queue configuration. This is required only if QuickConnectType is
     * QUEUE.</p>
     */
    inline QuickConnectConfig& WithQueueConfig(const QueueQuickConnectConfig& value) { SetQueueConfig(value); return *this;}

    /**
     * <p>The queue configuration. This is required only if QuickConnectType is
     * QUEUE.</p>
     */
    inline QuickConnectConfig& WithQueueConfig(QueueQuickConnectConfig&& value) { SetQueueConfig(std::move(value)); return *this;}


    /**
     * <p>The phone configuration. This is required only if QuickConnectType is
     * PHONE_NUMBER.</p>
     */
    inline const PhoneNumberQuickConnectConfig& GetPhoneConfig() const{ return m_phoneConfig; }

    /**
     * <p>The phone configuration. This is required only if QuickConnectType is
     * PHONE_NUMBER.</p>
     */
    inline bool PhoneConfigHasBeenSet() const { return m_phoneConfigHasBeenSet; }

    /**
     * <p>The phone configuration. This is required only if QuickConnectType is
     * PHONE_NUMBER.</p>
     */
    inline void SetPhoneConfig(const PhoneNumberQuickConnectConfig& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = value; }

    /**
     * <p>The phone configuration. This is required only if QuickConnectType is
     * PHONE_NUMBER.</p>
     */
    inline void SetPhoneConfig(PhoneNumberQuickConnectConfig&& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = std::move(value); }

    /**
     * <p>The phone configuration. This is required only if QuickConnectType is
     * PHONE_NUMBER.</p>
     */
    inline QuickConnectConfig& WithPhoneConfig(const PhoneNumberQuickConnectConfig& value) { SetPhoneConfig(value); return *this;}

    /**
     * <p>The phone configuration. This is required only if QuickConnectType is
     * PHONE_NUMBER.</p>
     */
    inline QuickConnectConfig& WithPhoneConfig(PhoneNumberQuickConnectConfig&& value) { SetPhoneConfig(std::move(value)); return *this;}

  private:

    QuickConnectType m_quickConnectType;
    bool m_quickConnectTypeHasBeenSet = false;

    UserQuickConnectConfig m_userConfig;
    bool m_userConfigHasBeenSet = false;

    QueueQuickConnectConfig m_queueConfig;
    bool m_queueConfigHasBeenSet = false;

    PhoneNumberQuickConnectConfig m_phoneConfig;
    bool m_phoneConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
