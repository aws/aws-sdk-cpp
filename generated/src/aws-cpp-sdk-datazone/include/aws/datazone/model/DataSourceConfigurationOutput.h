/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/GlueRunConfigurationOutput.h>
#include <aws/datazone/model/RedshiftRunConfigurationOutput.h>
#include <aws/datazone/model/SageMakerRunConfigurationOutput.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The configuration of the data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DataSourceConfigurationOutput">AWS
   * API Reference</a></p>
   */
  class DataSourceConfigurationOutput
  {
  public:
    AWS_DATAZONE_API DataSourceConfigurationOutput() = default;
    AWS_DATAZONE_API DataSourceConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DataSourceConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of the Amazon Web Services Glue data source.</p>
     */
    inline const GlueRunConfigurationOutput& GetGlueRunConfiguration() const { return m_glueRunConfiguration; }
    inline bool GlueRunConfigurationHasBeenSet() const { return m_glueRunConfigurationHasBeenSet; }
    template<typename GlueRunConfigurationT = GlueRunConfigurationOutput>
    void SetGlueRunConfiguration(GlueRunConfigurationT&& value) { m_glueRunConfigurationHasBeenSet = true; m_glueRunConfiguration = std::forward<GlueRunConfigurationT>(value); }
    template<typename GlueRunConfigurationT = GlueRunConfigurationOutput>
    DataSourceConfigurationOutput& WithGlueRunConfiguration(GlueRunConfigurationT&& value) { SetGlueRunConfiguration(std::forward<GlueRunConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the Amazon Redshift data source.</p>
     */
    inline const RedshiftRunConfigurationOutput& GetRedshiftRunConfiguration() const { return m_redshiftRunConfiguration; }
    inline bool RedshiftRunConfigurationHasBeenSet() const { return m_redshiftRunConfigurationHasBeenSet; }
    template<typename RedshiftRunConfigurationT = RedshiftRunConfigurationOutput>
    void SetRedshiftRunConfiguration(RedshiftRunConfigurationT&& value) { m_redshiftRunConfigurationHasBeenSet = true; m_redshiftRunConfiguration = std::forward<RedshiftRunConfigurationT>(value); }
    template<typename RedshiftRunConfigurationT = RedshiftRunConfigurationOutput>
    DataSourceConfigurationOutput& WithRedshiftRunConfiguration(RedshiftRunConfigurationT&& value) { SetRedshiftRunConfiguration(std::forward<RedshiftRunConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SageMaker run configuration.</p>
     */
    inline const SageMakerRunConfigurationOutput& GetSageMakerRunConfiguration() const { return m_sageMakerRunConfiguration; }
    inline bool SageMakerRunConfigurationHasBeenSet() const { return m_sageMakerRunConfigurationHasBeenSet; }
    template<typename SageMakerRunConfigurationT = SageMakerRunConfigurationOutput>
    void SetSageMakerRunConfiguration(SageMakerRunConfigurationT&& value) { m_sageMakerRunConfigurationHasBeenSet = true; m_sageMakerRunConfiguration = std::forward<SageMakerRunConfigurationT>(value); }
    template<typename SageMakerRunConfigurationT = SageMakerRunConfigurationOutput>
    DataSourceConfigurationOutput& WithSageMakerRunConfiguration(SageMakerRunConfigurationT&& value) { SetSageMakerRunConfiguration(std::forward<SageMakerRunConfigurationT>(value)); return *this;}
    ///@}
  private:

    GlueRunConfigurationOutput m_glueRunConfiguration;
    bool m_glueRunConfigurationHasBeenSet = false;

    RedshiftRunConfigurationOutput m_redshiftRunConfiguration;
    bool m_redshiftRunConfigurationHasBeenSet = false;

    SageMakerRunConfigurationOutput m_sageMakerRunConfiguration;
    bool m_sageMakerRunConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
