/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/DataSourceConfiguration.h>
#include <aws/lexv2-models/model/BedrockModelSpecification.h>
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
   * <p>Details about the the configuration of the built-in
   * <code>Amazon.QnAIntent</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/QnAIntentConfiguration">AWS
   * API Reference</a></p>
   */
  class QnAIntentConfiguration
  {
  public:
    AWS_LEXMODELSV2_API QnAIntentConfiguration();
    AWS_LEXMODELSV2_API QnAIntentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API QnAIntentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains details about the configuration of the data source used for the
     * <code>AMAZON.QnAIntent</code>.</p>
     */
    inline const DataSourceConfiguration& GetDataSourceConfiguration() const{ return m_dataSourceConfiguration; }

    /**
     * <p>Contains details about the configuration of the data source used for the
     * <code>AMAZON.QnAIntent</code>.</p>
     */
    inline bool DataSourceConfigurationHasBeenSet() const { return m_dataSourceConfigurationHasBeenSet; }

    /**
     * <p>Contains details about the configuration of the data source used for the
     * <code>AMAZON.QnAIntent</code>.</p>
     */
    inline void SetDataSourceConfiguration(const DataSourceConfiguration& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = value; }

    /**
     * <p>Contains details about the configuration of the data source used for the
     * <code>AMAZON.QnAIntent</code>.</p>
     */
    inline void SetDataSourceConfiguration(DataSourceConfiguration&& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = std::move(value); }

    /**
     * <p>Contains details about the configuration of the data source used for the
     * <code>AMAZON.QnAIntent</code>.</p>
     */
    inline QnAIntentConfiguration& WithDataSourceConfiguration(const DataSourceConfiguration& value) { SetDataSourceConfiguration(value); return *this;}

    /**
     * <p>Contains details about the configuration of the data source used for the
     * <code>AMAZON.QnAIntent</code>.</p>
     */
    inline QnAIntentConfiguration& WithDataSourceConfiguration(DataSourceConfiguration&& value) { SetDataSourceConfiguration(std::move(value)); return *this;}


    
    inline const BedrockModelSpecification& GetBedrockModelConfiguration() const{ return m_bedrockModelConfiguration; }

    
    inline bool BedrockModelConfigurationHasBeenSet() const { return m_bedrockModelConfigurationHasBeenSet; }

    
    inline void SetBedrockModelConfiguration(const BedrockModelSpecification& value) { m_bedrockModelConfigurationHasBeenSet = true; m_bedrockModelConfiguration = value; }

    
    inline void SetBedrockModelConfiguration(BedrockModelSpecification&& value) { m_bedrockModelConfigurationHasBeenSet = true; m_bedrockModelConfiguration = std::move(value); }

    
    inline QnAIntentConfiguration& WithBedrockModelConfiguration(const BedrockModelSpecification& value) { SetBedrockModelConfiguration(value); return *this;}

    
    inline QnAIntentConfiguration& WithBedrockModelConfiguration(BedrockModelSpecification&& value) { SetBedrockModelConfiguration(std::move(value)); return *this;}

  private:

    DataSourceConfiguration m_dataSourceConfiguration;
    bool m_dataSourceConfigurationHasBeenSet = false;

    BedrockModelSpecification m_bedrockModelConfiguration;
    bool m_bedrockModelConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
