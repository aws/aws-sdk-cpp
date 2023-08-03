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
    AWS_AMPLIFYUIBUILDER_API ApiConfiguration();
    AWS_AMPLIFYUIBUILDER_API ApiConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ApiConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration for an application using GraphQL APIs.</p>
     */
    inline const GraphQLRenderConfig& GetGraphQLConfig() const{ return m_graphQLConfig; }

    /**
     * <p>The configuration for an application using GraphQL APIs.</p>
     */
    inline bool GraphQLConfigHasBeenSet() const { return m_graphQLConfigHasBeenSet; }

    /**
     * <p>The configuration for an application using GraphQL APIs.</p>
     */
    inline void SetGraphQLConfig(const GraphQLRenderConfig& value) { m_graphQLConfigHasBeenSet = true; m_graphQLConfig = value; }

    /**
     * <p>The configuration for an application using GraphQL APIs.</p>
     */
    inline void SetGraphQLConfig(GraphQLRenderConfig&& value) { m_graphQLConfigHasBeenSet = true; m_graphQLConfig = std::move(value); }

    /**
     * <p>The configuration for an application using GraphQL APIs.</p>
     */
    inline ApiConfiguration& WithGraphQLConfig(const GraphQLRenderConfig& value) { SetGraphQLConfig(value); return *this;}

    /**
     * <p>The configuration for an application using GraphQL APIs.</p>
     */
    inline ApiConfiguration& WithGraphQLConfig(GraphQLRenderConfig&& value) { SetGraphQLConfig(std::move(value)); return *this;}


    /**
     * <p>The configuration for an application using DataStore APIs.</p>
     */
    inline const DataStoreRenderConfig& GetDataStoreConfig() const{ return m_dataStoreConfig; }

    /**
     * <p>The configuration for an application using DataStore APIs.</p>
     */
    inline bool DataStoreConfigHasBeenSet() const { return m_dataStoreConfigHasBeenSet; }

    /**
     * <p>The configuration for an application using DataStore APIs.</p>
     */
    inline void SetDataStoreConfig(const DataStoreRenderConfig& value) { m_dataStoreConfigHasBeenSet = true; m_dataStoreConfig = value; }

    /**
     * <p>The configuration for an application using DataStore APIs.</p>
     */
    inline void SetDataStoreConfig(DataStoreRenderConfig&& value) { m_dataStoreConfigHasBeenSet = true; m_dataStoreConfig = std::move(value); }

    /**
     * <p>The configuration for an application using DataStore APIs.</p>
     */
    inline ApiConfiguration& WithDataStoreConfig(const DataStoreRenderConfig& value) { SetDataStoreConfig(value); return *this;}

    /**
     * <p>The configuration for an application using DataStore APIs.</p>
     */
    inline ApiConfiguration& WithDataStoreConfig(DataStoreRenderConfig&& value) { SetDataStoreConfig(std::move(value)); return *this;}


    /**
     * <p>The configuration for an application with no API being used.</p>
     */
    inline const NoApiRenderConfig& GetNoApiConfig() const{ return m_noApiConfig; }

    /**
     * <p>The configuration for an application with no API being used.</p>
     */
    inline bool NoApiConfigHasBeenSet() const { return m_noApiConfigHasBeenSet; }

    /**
     * <p>The configuration for an application with no API being used.</p>
     */
    inline void SetNoApiConfig(const NoApiRenderConfig& value) { m_noApiConfigHasBeenSet = true; m_noApiConfig = value; }

    /**
     * <p>The configuration for an application with no API being used.</p>
     */
    inline void SetNoApiConfig(NoApiRenderConfig&& value) { m_noApiConfigHasBeenSet = true; m_noApiConfig = std::move(value); }

    /**
     * <p>The configuration for an application with no API being used.</p>
     */
    inline ApiConfiguration& WithNoApiConfig(const NoApiRenderConfig& value) { SetNoApiConfig(value); return *this;}

    /**
     * <p>The configuration for an application with no API being used.</p>
     */
    inline ApiConfiguration& WithNoApiConfig(NoApiRenderConfig&& value) { SetNoApiConfig(std::move(value)); return *this;}

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
