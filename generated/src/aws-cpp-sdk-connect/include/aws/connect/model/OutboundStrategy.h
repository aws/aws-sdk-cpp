/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/OutboundStrategyType.h>
#include <aws/connect/model/OutboundStrategyConfig.h>
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
   * <p>Information about the outbound strategy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/OutboundStrategy">AWS
   * API Reference</a></p>
   */
  class OutboundStrategy
  {
  public:
    AWS_CONNECT_API OutboundStrategy() = default;
    AWS_CONNECT_API OutboundStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API OutboundStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Type of the outbound strategy.</p>
     */
    inline OutboundStrategyType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(OutboundStrategyType value) { m_typeHasBeenSet = true; m_type = value; }
    inline OutboundStrategy& WithType(OutboundStrategyType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Config of the outbound strategy.</p>
     */
    inline const OutboundStrategyConfig& GetConfig() const { return m_config; }
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
    template<typename ConfigT = OutboundStrategyConfig>
    void SetConfig(ConfigT&& value) { m_configHasBeenSet = true; m_config = std::forward<ConfigT>(value); }
    template<typename ConfigT = OutboundStrategyConfig>
    OutboundStrategy& WithConfig(ConfigT&& value) { SetConfig(std::forward<ConfigT>(value)); return *this;}
    ///@}
  private:

    OutboundStrategyType m_type{OutboundStrategyType::NOT_SET};
    bool m_typeHasBeenSet = false;

    OutboundStrategyConfig m_config;
    bool m_configHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
