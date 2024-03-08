/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/RelationalFilterConfiguration.h>
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
   * <p>The configuration details of the Amazon Web Services Glue data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GlueRunConfigurationOutput">AWS
   * API Reference</a></p>
   */
  class GlueRunConfigurationOutput
  {
  public:
    AWS_DATAZONE_API GlueRunConfigurationOutput();
    AWS_DATAZONE_API GlueRunConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GlueRunConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID included in the configuration details of
     * the Amazon Web Services Glue data source. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID included in the configuration details of
     * the Amazon Web Services Glue data source. </p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID included in the configuration details of
     * the Amazon Web Services Glue data source. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID included in the configuration details of
     * the Amazon Web Services Glue data source. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID included in the configuration details of
     * the Amazon Web Services Glue data source. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID included in the configuration details of
     * the Amazon Web Services Glue data source. </p>
     */
    inline GlueRunConfigurationOutput& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID included in the configuration details of
     * the Amazon Web Services Glue data source. </p>
     */
    inline GlueRunConfigurationOutput& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID included in the configuration details of
     * the Amazon Web Services Glue data source. </p>
     */
    inline GlueRunConfigurationOutput& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The data access role included in the configuration details of the Amazon Web
     * Services Glue data source. </p>
     */
    inline const Aws::String& GetDataAccessRole() const{ return m_dataAccessRole; }

    /**
     * <p>The data access role included in the configuration details of the Amazon Web
     * Services Glue data source. </p>
     */
    inline bool DataAccessRoleHasBeenSet() const { return m_dataAccessRoleHasBeenSet; }

    /**
     * <p>The data access role included in the configuration details of the Amazon Web
     * Services Glue data source. </p>
     */
    inline void SetDataAccessRole(const Aws::String& value) { m_dataAccessRoleHasBeenSet = true; m_dataAccessRole = value; }

    /**
     * <p>The data access role included in the configuration details of the Amazon Web
     * Services Glue data source. </p>
     */
    inline void SetDataAccessRole(Aws::String&& value) { m_dataAccessRoleHasBeenSet = true; m_dataAccessRole = std::move(value); }

    /**
     * <p>The data access role included in the configuration details of the Amazon Web
     * Services Glue data source. </p>
     */
    inline void SetDataAccessRole(const char* value) { m_dataAccessRoleHasBeenSet = true; m_dataAccessRole.assign(value); }

    /**
     * <p>The data access role included in the configuration details of the Amazon Web
     * Services Glue data source. </p>
     */
    inline GlueRunConfigurationOutput& WithDataAccessRole(const Aws::String& value) { SetDataAccessRole(value); return *this;}

    /**
     * <p>The data access role included in the configuration details of the Amazon Web
     * Services Glue data source. </p>
     */
    inline GlueRunConfigurationOutput& WithDataAccessRole(Aws::String&& value) { SetDataAccessRole(std::move(value)); return *this;}

    /**
     * <p>The data access role included in the configuration details of the Amazon Web
     * Services Glue data source. </p>
     */
    inline GlueRunConfigurationOutput& WithDataAccessRole(const char* value) { SetDataAccessRole(value); return *this;}


    /**
     * <p>The Amazon Web Services region included in the configuration details of the
     * Amazon Web Services Glue data source. </p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services region included in the configuration details of the
     * Amazon Web Services Glue data source. </p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services region included in the configuration details of the
     * Amazon Web Services Glue data source. </p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services region included in the configuration details of the
     * Amazon Web Services Glue data source. </p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services region included in the configuration details of the
     * Amazon Web Services Glue data source. </p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services region included in the configuration details of the
     * Amazon Web Services Glue data source. </p>
     */
    inline GlueRunConfigurationOutput& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services region included in the configuration details of the
     * Amazon Web Services Glue data source. </p>
     */
    inline GlueRunConfigurationOutput& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services region included in the configuration details of the
     * Amazon Web Services Glue data source. </p>
     */
    inline GlueRunConfigurationOutput& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The relational filter configurations included in the configuration details of
     * the Amazon Web Services Glue data source.</p>
     */
    inline const Aws::Vector<RelationalFilterConfiguration>& GetRelationalFilterConfigurations() const{ return m_relationalFilterConfigurations; }

    /**
     * <p>The relational filter configurations included in the configuration details of
     * the Amazon Web Services Glue data source.</p>
     */
    inline bool RelationalFilterConfigurationsHasBeenSet() const { return m_relationalFilterConfigurationsHasBeenSet; }

    /**
     * <p>The relational filter configurations included in the configuration details of
     * the Amazon Web Services Glue data source.</p>
     */
    inline void SetRelationalFilterConfigurations(const Aws::Vector<RelationalFilterConfiguration>& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations = value; }

    /**
     * <p>The relational filter configurations included in the configuration details of
     * the Amazon Web Services Glue data source.</p>
     */
    inline void SetRelationalFilterConfigurations(Aws::Vector<RelationalFilterConfiguration>&& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations = std::move(value); }

    /**
     * <p>The relational filter configurations included in the configuration details of
     * the Amazon Web Services Glue data source.</p>
     */
    inline GlueRunConfigurationOutput& WithRelationalFilterConfigurations(const Aws::Vector<RelationalFilterConfiguration>& value) { SetRelationalFilterConfigurations(value); return *this;}

    /**
     * <p>The relational filter configurations included in the configuration details of
     * the Amazon Web Services Glue data source.</p>
     */
    inline GlueRunConfigurationOutput& WithRelationalFilterConfigurations(Aws::Vector<RelationalFilterConfiguration>&& value) { SetRelationalFilterConfigurations(std::move(value)); return *this;}

    /**
     * <p>The relational filter configurations included in the configuration details of
     * the Amazon Web Services Glue data source.</p>
     */
    inline GlueRunConfigurationOutput& AddRelationalFilterConfigurations(const RelationalFilterConfiguration& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations.push_back(value); return *this; }

    /**
     * <p>The relational filter configurations included in the configuration details of
     * the Amazon Web Services Glue data source.</p>
     */
    inline GlueRunConfigurationOutput& AddRelationalFilterConfigurations(RelationalFilterConfiguration&& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_dataAccessRole;
    bool m_dataAccessRoleHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Vector<RelationalFilterConfiguration> m_relationalFilterConfigurations;
    bool m_relationalFilterConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
