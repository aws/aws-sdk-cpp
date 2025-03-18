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
    AWS_CONNECT_API QuickConnectConfig() = default;
    AWS_CONNECT_API QuickConnectConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API QuickConnectConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of quick connect. In the Amazon Connect admin website, when you
     * create a quick connect, you are prompted to assign one of the following types:
     * Agent (USER), External (PHONE_NUMBER), or Queue (QUEUE). </p>
     */
    inline QuickConnectType GetQuickConnectType() const { return m_quickConnectType; }
    inline bool QuickConnectTypeHasBeenSet() const { return m_quickConnectTypeHasBeenSet; }
    inline void SetQuickConnectType(QuickConnectType value) { m_quickConnectTypeHasBeenSet = true; m_quickConnectType = value; }
    inline QuickConnectConfig& WithQuickConnectType(QuickConnectType value) { SetQuickConnectType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user configuration. This is required only if QuickConnectType is
     * USER.</p>
     */
    inline const UserQuickConnectConfig& GetUserConfig() const { return m_userConfig; }
    inline bool UserConfigHasBeenSet() const { return m_userConfigHasBeenSet; }
    template<typename UserConfigT = UserQuickConnectConfig>
    void SetUserConfig(UserConfigT&& value) { m_userConfigHasBeenSet = true; m_userConfig = std::forward<UserConfigT>(value); }
    template<typename UserConfigT = UserQuickConnectConfig>
    QuickConnectConfig& WithUserConfig(UserConfigT&& value) { SetUserConfig(std::forward<UserConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue configuration. This is required only if QuickConnectType is
     * QUEUE.</p>
     */
    inline const QueueQuickConnectConfig& GetQueueConfig() const { return m_queueConfig; }
    inline bool QueueConfigHasBeenSet() const { return m_queueConfigHasBeenSet; }
    template<typename QueueConfigT = QueueQuickConnectConfig>
    void SetQueueConfig(QueueConfigT&& value) { m_queueConfigHasBeenSet = true; m_queueConfig = std::forward<QueueConfigT>(value); }
    template<typename QueueConfigT = QueueQuickConnectConfig>
    QuickConnectConfig& WithQueueConfig(QueueConfigT&& value) { SetQueueConfig(std::forward<QueueConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone configuration. This is required only if QuickConnectType is
     * PHONE_NUMBER.</p>
     */
    inline const PhoneNumberQuickConnectConfig& GetPhoneConfig() const { return m_phoneConfig; }
    inline bool PhoneConfigHasBeenSet() const { return m_phoneConfigHasBeenSet; }
    template<typename PhoneConfigT = PhoneNumberQuickConnectConfig>
    void SetPhoneConfig(PhoneConfigT&& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = std::forward<PhoneConfigT>(value); }
    template<typename PhoneConfigT = PhoneNumberQuickConnectConfig>
    QuickConnectConfig& WithPhoneConfig(PhoneConfigT&& value) { SetPhoneConfig(std::forward<PhoneConfigT>(value)); return *this;}
    ///@}
  private:

    QuickConnectType m_quickConnectType{QuickConnectType::NOT_SET};
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
