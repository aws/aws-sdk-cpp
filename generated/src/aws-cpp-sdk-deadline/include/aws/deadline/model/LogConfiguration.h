/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>Log configuration details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/LogConfiguration">AWS
   * API Reference</a></p>
   */
  class LogConfiguration
  {
  public:
    AWS_DEADLINE_API LogConfiguration() = default;
    AWS_DEADLINE_API LogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API LogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The log drivers for worker related logs.</p>
     */
    inline const Aws::String& GetLogDriver() const { return m_logDriver; }
    inline bool LogDriverHasBeenSet() const { return m_logDriverHasBeenSet; }
    template<typename LogDriverT = Aws::String>
    void SetLogDriver(LogDriverT&& value) { m_logDriverHasBeenSet = true; m_logDriver = std::forward<LogDriverT>(value); }
    template<typename LogDriverT = Aws::String>
    LogConfiguration& WithLogDriver(LogDriverT&& value) { SetLogDriver(std::forward<LogDriverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for a log driver.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Aws::Map<Aws::String, Aws::String>>
    LogConfiguration& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    template<typename OptionsKeyT = Aws::String, typename OptionsValueT = Aws::String>
    LogConfiguration& AddOptions(OptionsKeyT&& key, OptionsValueT&& value) {
      m_optionsHasBeenSet = true; m_options.emplace(std::forward<OptionsKeyT>(key), std::forward<OptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The parameters for the log configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    LogConfiguration& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    LogConfiguration& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The log configuration error details.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    LogConfiguration& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_logDriver;
    bool m_logDriverHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
