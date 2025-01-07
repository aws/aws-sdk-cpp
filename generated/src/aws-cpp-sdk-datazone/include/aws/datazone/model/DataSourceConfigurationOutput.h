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
    AWS_DATAZONE_API DataSourceConfigurationOutput();
    AWS_DATAZONE_API DataSourceConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DataSourceConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of the Amazon Web Services Glue data source.</p>
     */
    inline const GlueRunConfigurationOutput& GetGlueRunConfiguration() const{ return m_glueRunConfiguration; }
    inline bool GlueRunConfigurationHasBeenSet() const { return m_glueRunConfigurationHasBeenSet; }
    inline void SetGlueRunConfiguration(const GlueRunConfigurationOutput& value) { m_glueRunConfigurationHasBeenSet = true; m_glueRunConfiguration = value; }
    inline void SetGlueRunConfiguration(GlueRunConfigurationOutput&& value) { m_glueRunConfigurationHasBeenSet = true; m_glueRunConfiguration = std::move(value); }
    inline DataSourceConfigurationOutput& WithGlueRunConfiguration(const GlueRunConfigurationOutput& value) { SetGlueRunConfiguration(value); return *this;}
    inline DataSourceConfigurationOutput& WithGlueRunConfiguration(GlueRunConfigurationOutput&& value) { SetGlueRunConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the Amazon Redshift data source.</p>
     */
    inline const RedshiftRunConfigurationOutput& GetRedshiftRunConfiguration() const{ return m_redshiftRunConfiguration; }
    inline bool RedshiftRunConfigurationHasBeenSet() const { return m_redshiftRunConfigurationHasBeenSet; }
    inline void SetRedshiftRunConfiguration(const RedshiftRunConfigurationOutput& value) { m_redshiftRunConfigurationHasBeenSet = true; m_redshiftRunConfiguration = value; }
    inline void SetRedshiftRunConfiguration(RedshiftRunConfigurationOutput&& value) { m_redshiftRunConfigurationHasBeenSet = true; m_redshiftRunConfiguration = std::move(value); }
    inline DataSourceConfigurationOutput& WithRedshiftRunConfiguration(const RedshiftRunConfigurationOutput& value) { SetRedshiftRunConfiguration(value); return *this;}
    inline DataSourceConfigurationOutput& WithRedshiftRunConfiguration(RedshiftRunConfigurationOutput&& value) { SetRedshiftRunConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SageMaker run configuration.</p>
     */
    inline const SageMakerRunConfigurationOutput& GetSageMakerRunConfiguration() const{ return m_sageMakerRunConfiguration; }
    inline bool SageMakerRunConfigurationHasBeenSet() const { return m_sageMakerRunConfigurationHasBeenSet; }
    inline void SetSageMakerRunConfiguration(const SageMakerRunConfigurationOutput& value) { m_sageMakerRunConfigurationHasBeenSet = true; m_sageMakerRunConfiguration = value; }
    inline void SetSageMakerRunConfiguration(SageMakerRunConfigurationOutput&& value) { m_sageMakerRunConfigurationHasBeenSet = true; m_sageMakerRunConfiguration = std::move(value); }
    inline DataSourceConfigurationOutput& WithSageMakerRunConfiguration(const SageMakerRunConfigurationOutput& value) { SetSageMakerRunConfiguration(value); return *this;}
    inline DataSourceConfigurationOutput& WithSageMakerRunConfiguration(SageMakerRunConfigurationOutput&& value) { SetSageMakerRunConfiguration(std::move(value)); return *this;}
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
