/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/LambdaConfig.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>The integration data source configuration for the handler.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/Integration">AWS
   * API Reference</a></p>
   */
  class Integration
  {
  public:
    AWS_APPSYNC_API Integration() = default;
    AWS_APPSYNC_API Integration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Integration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the data source that has been configured on the API.</p>
     */
    inline const Aws::String& GetDataSourceName() const { return m_dataSourceName; }
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }
    template<typename DataSourceNameT = Aws::String>
    void SetDataSourceName(DataSourceNameT&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::forward<DataSourceNameT>(value); }
    template<typename DataSourceNameT = Aws::String>
    Integration& WithDataSourceName(DataSourceNameT&& value) { SetDataSourceName(std::forward<DataSourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a Lambda data source.</p>
     */
    inline const LambdaConfig& GetLambdaConfig() const { return m_lambdaConfig; }
    inline bool LambdaConfigHasBeenSet() const { return m_lambdaConfigHasBeenSet; }
    template<typename LambdaConfigT = LambdaConfig>
    void SetLambdaConfig(LambdaConfigT&& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = std::forward<LambdaConfigT>(value); }
    template<typename LambdaConfigT = LambdaConfig>
    Integration& WithLambdaConfig(LambdaConfigT&& value) { SetLambdaConfig(std::forward<LambdaConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataSourceName;
    bool m_dataSourceNameHasBeenSet = false;

    LambdaConfig m_lambdaConfig;
    bool m_lambdaConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
