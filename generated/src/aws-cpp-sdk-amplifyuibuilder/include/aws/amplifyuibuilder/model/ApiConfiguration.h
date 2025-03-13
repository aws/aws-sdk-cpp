/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/GraphQLRenderConfig.h>
#include <aws/amplifyuibuilder/model/DataStoreRenderConfig.h>
#include <aws/amplifyuibuilder/model/NoApiRenderConfig.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the API configuration for a code generation job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ApiConfiguration">AWS
   * API Reference</a></p>
   */
  class ApiConfiguration
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ApiConfiguration() = default;
    AWS_AMPLIFYUIBUILDER_API ApiConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ApiConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for an application using GraphQL APIs.</p>
     */
    inline const GraphQLRenderConfig& GetGraphQLConfig() const { return m_graphQLConfig; }
    inline bool GraphQLConfigHasBeenSet() const { return m_graphQLConfigHasBeenSet; }
    template<typename GraphQLConfigT = GraphQLRenderConfig>
    void SetGraphQLConfig(GraphQLConfigT&& value) { m_graphQLConfigHasBeenSet = true; m_graphQLConfig = std::forward<GraphQLConfigT>(value); }
    template<typename GraphQLConfigT = GraphQLRenderConfig>
    ApiConfiguration& WithGraphQLConfig(GraphQLConfigT&& value) { SetGraphQLConfig(std::forward<GraphQLConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for an application using DataStore APIs.</p>
     */
    inline const DataStoreRenderConfig& GetDataStoreConfig() const { return m_dataStoreConfig; }
    inline bool DataStoreConfigHasBeenSet() const { return m_dataStoreConfigHasBeenSet; }
    template<typename DataStoreConfigT = DataStoreRenderConfig>
    void SetDataStoreConfig(DataStoreConfigT&& value) { m_dataStoreConfigHasBeenSet = true; m_dataStoreConfig = std::forward<DataStoreConfigT>(value); }
    template<typename DataStoreConfigT = DataStoreRenderConfig>
    ApiConfiguration& WithDataStoreConfig(DataStoreConfigT&& value) { SetDataStoreConfig(std::forward<DataStoreConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for an application with no API being used.</p>
     */
    inline const NoApiRenderConfig& GetNoApiConfig() const { return m_noApiConfig; }
    inline bool NoApiConfigHasBeenSet() const { return m_noApiConfigHasBeenSet; }
    template<typename NoApiConfigT = NoApiRenderConfig>
    void SetNoApiConfig(NoApiConfigT&& value) { m_noApiConfigHasBeenSet = true; m_noApiConfig = std::forward<NoApiConfigT>(value); }
    template<typename NoApiConfigT = NoApiRenderConfig>
    ApiConfiguration& WithNoApiConfig(NoApiConfigT&& value) { SetNoApiConfig(std::forward<NoApiConfigT>(value)); return *this;}
    ///@}
  private:

    GraphQLRenderConfig m_graphQLConfig;
    bool m_graphQLConfigHasBeenSet = false;

    DataStoreRenderConfig m_dataStoreConfig;
    bool m_dataStoreConfigHasBeenSet = false;

    NoApiRenderConfig m_noApiConfig;
    bool m_noApiConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
