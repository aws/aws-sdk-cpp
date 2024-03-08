/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/GlueRunConfigurationOutput.h>
#include <aws/datazone/model/RedshiftRunConfigurationOutput.h>
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


    /**
     * <p>The configuration of the Amazon Web Services Glue data source.</p>
     */
    inline const GlueRunConfigurationOutput& GetGlueRunConfiguration() const{ return m_glueRunConfiguration; }

    /**
     * <p>The configuration of the Amazon Web Services Glue data source.</p>
     */
    inline bool GlueRunConfigurationHasBeenSet() const { return m_glueRunConfigurationHasBeenSet; }

    /**
     * <p>The configuration of the Amazon Web Services Glue data source.</p>
     */
    inline void SetGlueRunConfiguration(const GlueRunConfigurationOutput& value) { m_glueRunConfigurationHasBeenSet = true; m_glueRunConfiguration = value; }

    /**
     * <p>The configuration of the Amazon Web Services Glue data source.</p>
     */
    inline void SetGlueRunConfiguration(GlueRunConfigurationOutput&& value) { m_glueRunConfigurationHasBeenSet = true; m_glueRunConfiguration = std::move(value); }

    /**
     * <p>The configuration of the Amazon Web Services Glue data source.</p>
     */
    inline DataSourceConfigurationOutput& WithGlueRunConfiguration(const GlueRunConfigurationOutput& value) { SetGlueRunConfiguration(value); return *this;}

    /**
     * <p>The configuration of the Amazon Web Services Glue data source.</p>
     */
    inline DataSourceConfigurationOutput& WithGlueRunConfiguration(GlueRunConfigurationOutput&& value) { SetGlueRunConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration of the Amazon Redshift data source.</p>
     */
    inline const RedshiftRunConfigurationOutput& GetRedshiftRunConfiguration() const{ return m_redshiftRunConfiguration; }

    /**
     * <p>The configuration of the Amazon Redshift data source.</p>
     */
    inline bool RedshiftRunConfigurationHasBeenSet() const { return m_redshiftRunConfigurationHasBeenSet; }

    /**
     * <p>The configuration of the Amazon Redshift data source.</p>
     */
    inline void SetRedshiftRunConfiguration(const RedshiftRunConfigurationOutput& value) { m_redshiftRunConfigurationHasBeenSet = true; m_redshiftRunConfiguration = value; }

    /**
     * <p>The configuration of the Amazon Redshift data source.</p>
     */
    inline void SetRedshiftRunConfiguration(RedshiftRunConfigurationOutput&& value) { m_redshiftRunConfigurationHasBeenSet = true; m_redshiftRunConfiguration = std::move(value); }

    /**
     * <p>The configuration of the Amazon Redshift data source.</p>
     */
    inline DataSourceConfigurationOutput& WithRedshiftRunConfiguration(const RedshiftRunConfigurationOutput& value) { SetRedshiftRunConfiguration(value); return *this;}

    /**
     * <p>The configuration of the Amazon Redshift data source.</p>
     */
    inline DataSourceConfigurationOutput& WithRedshiftRunConfiguration(RedshiftRunConfigurationOutput&& value) { SetRedshiftRunConfiguration(std::move(value)); return *this;}

  private:

    GlueRunConfigurationOutput m_glueRunConfiguration;
    bool m_glueRunConfigurationHasBeenSet = false;

    RedshiftRunConfigurationOutput m_redshiftRunConfiguration;
    bool m_redshiftRunConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
