/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/QInConnectAssistantConfiguration.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>The configuration details of the Qinconnect intent.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/QInConnectIntentConfiguration">AWS
   * API Reference</a></p>
   */
  class QInConnectIntentConfiguration
  {
  public:
    AWS_LEXMODELSV2_API QInConnectIntentConfiguration() = default;
    AWS_LEXMODELSV2_API QInConnectIntentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API QInConnectIntentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Qinconnect assistant configuration details of the Qinconnect intent.</p>
     */
    inline const QInConnectAssistantConfiguration& GetQInConnectAssistantConfiguration() const { return m_qInConnectAssistantConfiguration; }
    inline bool QInConnectAssistantConfigurationHasBeenSet() const { return m_qInConnectAssistantConfigurationHasBeenSet; }
    template<typename QInConnectAssistantConfigurationT = QInConnectAssistantConfiguration>
    void SetQInConnectAssistantConfiguration(QInConnectAssistantConfigurationT&& value) { m_qInConnectAssistantConfigurationHasBeenSet = true; m_qInConnectAssistantConfiguration = std::forward<QInConnectAssistantConfigurationT>(value); }
    template<typename QInConnectAssistantConfigurationT = QInConnectAssistantConfiguration>
    QInConnectIntentConfiguration& WithQInConnectAssistantConfiguration(QInConnectAssistantConfigurationT&& value) { SetQInConnectAssistantConfiguration(std::forward<QInConnectAssistantConfigurationT>(value)); return *this;}
    ///@}
  private:

    QInConnectAssistantConfiguration m_qInConnectAssistantConfiguration;
    bool m_qInConnectAssistantConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
