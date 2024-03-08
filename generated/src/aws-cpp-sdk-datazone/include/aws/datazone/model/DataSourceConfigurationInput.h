/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/GlueRunConfigurationInput.h>
#include <aws/datazone/model/RedshiftRunConfigurationInput.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DataSourceConfigurationInput">AWS
   * API Reference</a></p>
   */
  class DataSourceConfigurationInput
  {
  public:
    AWS_DATAZONE_API DataSourceConfigurationInput();
    AWS_DATAZONE_API DataSourceConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DataSourceConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration of the Amazon Web Services Glue data source.</p>
     */
    inline const GlueRunConfigurationInput& GetGlueRunConfiguration() const{ return m_glueRunConfiguration; }

    /**
     * <p>The configuration of the Amazon Web Services Glue data source.</p>
     */
    inline bool GlueRunConfigurationHasBeenSet() const { return m_glueRunConfigurationHasBeenSet; }

    /**
     * <p>The configuration of the Amazon Web Services Glue data source.</p>
     */
    inline void SetGlueRunConfiguration(const GlueRunConfigurationInput& value) { m_glueRunConfigurationHasBeenSet = true; m_glueRunConfiguration = value; }

    /**
     * <p>The configuration of the Amazon Web Services Glue data source.</p>
     */
    inline void SetGlueRunConfiguration(GlueRunConfigurationInput&& value) { m_glueRunConfigurationHasBeenSet = true; m_glueRunConfiguration = std::move(value); }

    /**
     * <p>The configuration of the Amazon Web Services Glue data source.</p>
     */
    inline DataSourceConfigurationInput& WithGlueRunConfiguration(const GlueRunConfigurationInput& value) { SetGlueRunConfiguration(value); return *this;}

    /**
     * <p>The configuration of the Amazon Web Services Glue data source.</p>
     */
    inline DataSourceConfigurationInput& WithGlueRunConfiguration(GlueRunConfigurationInput&& value) { SetGlueRunConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration of the Amazon Redshift data source.</p>
     */
    inline const RedshiftRunConfigurationInput& GetRedshiftRunConfiguration() const{ return m_redshiftRunConfiguration; }

    /**
     * <p>The configuration of the Amazon Redshift data source.</p>
     */
    inline bool RedshiftRunConfigurationHasBeenSet() const { return m_redshiftRunConfigurationHasBeenSet; }

    /**
     * <p>The configuration of the Amazon Redshift data source.</p>
     */
    inline void SetRedshiftRunConfiguration(const RedshiftRunConfigurationInput& value) { m_redshiftRunConfigurationHasBeenSet = true; m_redshiftRunConfiguration = value; }

    /**
     * <p>The configuration of the Amazon Redshift data source.</p>
     */
    inline void SetRedshiftRunConfiguration(RedshiftRunConfigurationInput&& value) { m_redshiftRunConfigurationHasBeenSet = true; m_redshiftRunConfiguration = std::move(value); }

    /**
     * <p>The configuration of the Amazon Redshift data source.</p>
     */
    inline DataSourceConfigurationInput& WithRedshiftRunConfiguration(const RedshiftRunConfigurationInput& value) { SetRedshiftRunConfiguration(value); return *this;}

    /**
     * <p>The configuration of the Amazon Redshift data source.</p>
     */
    inline DataSourceConfigurationInput& WithRedshiftRunConfiguration(RedshiftRunConfigurationInput&& value) { SetRedshiftRunConfiguration(std::move(value)); return *this;}

  private:

    GlueRunConfigurationInput m_glueRunConfiguration;
    bool m_glueRunConfigurationHasBeenSet = false;

    RedshiftRunConfigurationInput m_redshiftRunConfiguration;
    bool m_redshiftRunConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
