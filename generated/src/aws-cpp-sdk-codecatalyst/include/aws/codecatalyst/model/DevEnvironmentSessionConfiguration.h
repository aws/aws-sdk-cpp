/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/model/DevEnvironmentSessionType.h>
#include <aws/codecatalyst/model/ExecuteCommandSessionConfiguration.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about the configuration of a Dev Environment
   * session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/DevEnvironmentSessionConfiguration">AWS
   * API Reference</a></p>
   */
  class DevEnvironmentSessionConfiguration
  {
  public:
    AWS_CODECATALYST_API DevEnvironmentSessionConfiguration() = default;
    AWS_CODECATALYST_API DevEnvironmentSessionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API DevEnvironmentSessionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the session.</p>
     */
    inline DevEnvironmentSessionType GetSessionType() const { return m_sessionType; }
    inline bool SessionTypeHasBeenSet() const { return m_sessionTypeHasBeenSet; }
    inline void SetSessionType(DevEnvironmentSessionType value) { m_sessionTypeHasBeenSet = true; m_sessionType = value; }
    inline DevEnvironmentSessionConfiguration& WithSessionType(DevEnvironmentSessionType value) { SetSessionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about optional commands that will be run on the Dev Environment
     * when the SSH session begins.</p>
     */
    inline const ExecuteCommandSessionConfiguration& GetExecuteCommandSessionConfiguration() const { return m_executeCommandSessionConfiguration; }
    inline bool ExecuteCommandSessionConfigurationHasBeenSet() const { return m_executeCommandSessionConfigurationHasBeenSet; }
    template<typename ExecuteCommandSessionConfigurationT = ExecuteCommandSessionConfiguration>
    void SetExecuteCommandSessionConfiguration(ExecuteCommandSessionConfigurationT&& value) { m_executeCommandSessionConfigurationHasBeenSet = true; m_executeCommandSessionConfiguration = std::forward<ExecuteCommandSessionConfigurationT>(value); }
    template<typename ExecuteCommandSessionConfigurationT = ExecuteCommandSessionConfiguration>
    DevEnvironmentSessionConfiguration& WithExecuteCommandSessionConfiguration(ExecuteCommandSessionConfigurationT&& value) { SetExecuteCommandSessionConfiguration(std::forward<ExecuteCommandSessionConfigurationT>(value)); return *this;}
    ///@}
  private:

    DevEnvironmentSessionType m_sessionType{DevEnvironmentSessionType::NOT_SET};
    bool m_sessionTypeHasBeenSet = false;

    ExecuteCommandSessionConfiguration m_executeCommandSessionConfiguration;
    bool m_executeCommandSessionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
