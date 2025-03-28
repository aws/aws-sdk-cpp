﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/ResultReuseByAgeConfiguration.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Specifies the query result reuse behavior for the query.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ResultReuseConfiguration">AWS
   * API Reference</a></p>
   */
  class ResultReuseConfiguration
  {
  public:
    AWS_ATHENA_API ResultReuseConfiguration() = default;
    AWS_ATHENA_API ResultReuseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API ResultReuseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether previous query results are reused, and if so, their maximum
     * age.</p>
     */
    inline const ResultReuseByAgeConfiguration& GetResultReuseByAgeConfiguration() const { return m_resultReuseByAgeConfiguration; }
    inline bool ResultReuseByAgeConfigurationHasBeenSet() const { return m_resultReuseByAgeConfigurationHasBeenSet; }
    template<typename ResultReuseByAgeConfigurationT = ResultReuseByAgeConfiguration>
    void SetResultReuseByAgeConfiguration(ResultReuseByAgeConfigurationT&& value) { m_resultReuseByAgeConfigurationHasBeenSet = true; m_resultReuseByAgeConfiguration = std::forward<ResultReuseByAgeConfigurationT>(value); }
    template<typename ResultReuseByAgeConfigurationT = ResultReuseByAgeConfiguration>
    ResultReuseConfiguration& WithResultReuseByAgeConfiguration(ResultReuseByAgeConfigurationT&& value) { SetResultReuseByAgeConfiguration(std::forward<ResultReuseByAgeConfigurationT>(value)); return *this;}
    ///@}
  private:

    ResultReuseByAgeConfiguration m_resultReuseByAgeConfiguration;
    bool m_resultReuseByAgeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
