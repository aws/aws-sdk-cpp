/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/CrawlerTargets.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/SchemaChangePolicy.h>
#include <aws/glue/model/RecrawlPolicy.h>
#include <aws/glue/model/LineageConfiguration.h>
#include <aws/glue/model/LakeFormationConfiguration.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UpdateCrawlerRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdateCrawlerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCrawler"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name of the new crawler.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateCrawlerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateCrawlerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateCrawlerRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role or Amazon Resource Name (ARN) of an IAM role that is used by the
     * new crawler to access customer resources.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }
    inline UpdateCrawlerRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline UpdateCrawlerRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline UpdateCrawlerRequest& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Glue database where results are stored, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline UpdateCrawlerRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline UpdateCrawlerRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline UpdateCrawlerRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the new crawler.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateCrawlerRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateCrawlerRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateCrawlerRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of targets to crawl.</p>
     */
    inline const CrawlerTargets& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const CrawlerTargets& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(CrawlerTargets&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline UpdateCrawlerRequest& WithTargets(const CrawlerTargets& value) { SetTargets(value); return *this;}
    inline UpdateCrawlerRequest& WithTargets(CrawlerTargets&& value) { SetTargets(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const Aws::String& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(Aws::String&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline void SetSchedule(const char* value) { m_scheduleHasBeenSet = true; m_schedule.assign(value); }
    inline UpdateCrawlerRequest& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}
    inline UpdateCrawlerRequest& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}
    inline UpdateCrawlerRequest& WithSchedule(const char* value) { SetSchedule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom classifiers that the user has registered. By default, all
     * built-in classifiers are included in a crawl, but these custom classifiers
     * always override the default classifiers for a given classification.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClassifiers() const{ return m_classifiers; }
    inline bool ClassifiersHasBeenSet() const { return m_classifiersHasBeenSet; }
    inline void SetClassifiers(const Aws::Vector<Aws::String>& value) { m_classifiersHasBeenSet = true; m_classifiers = value; }
    inline void SetClassifiers(Aws::Vector<Aws::String>&& value) { m_classifiersHasBeenSet = true; m_classifiers = std::move(value); }
    inline UpdateCrawlerRequest& WithClassifiers(const Aws::Vector<Aws::String>& value) { SetClassifiers(value); return *this;}
    inline UpdateCrawlerRequest& WithClassifiers(Aws::Vector<Aws::String>&& value) { SetClassifiers(std::move(value)); return *this;}
    inline UpdateCrawlerRequest& AddClassifiers(const Aws::String& value) { m_classifiersHasBeenSet = true; m_classifiers.push_back(value); return *this; }
    inline UpdateCrawlerRequest& AddClassifiers(Aws::String&& value) { m_classifiersHasBeenSet = true; m_classifiers.push_back(std::move(value)); return *this; }
    inline UpdateCrawlerRequest& AddClassifiers(const char* value) { m_classifiersHasBeenSet = true; m_classifiers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The table prefix used for catalog tables that are created.</p>
     */
    inline const Aws::String& GetTablePrefix() const{ return m_tablePrefix; }
    inline bool TablePrefixHasBeenSet() const { return m_tablePrefixHasBeenSet; }
    inline void SetTablePrefix(const Aws::String& value) { m_tablePrefixHasBeenSet = true; m_tablePrefix = value; }
    inline void SetTablePrefix(Aws::String&& value) { m_tablePrefixHasBeenSet = true; m_tablePrefix = std::move(value); }
    inline void SetTablePrefix(const char* value) { m_tablePrefixHasBeenSet = true; m_tablePrefix.assign(value); }
    inline UpdateCrawlerRequest& WithTablePrefix(const Aws::String& value) { SetTablePrefix(value); return *this;}
    inline UpdateCrawlerRequest& WithTablePrefix(Aws::String&& value) { SetTablePrefix(std::move(value)); return *this;}
    inline UpdateCrawlerRequest& WithTablePrefix(const char* value) { SetTablePrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy for the crawler's update and deletion behavior.</p>
     */
    inline const SchemaChangePolicy& GetSchemaChangePolicy() const{ return m_schemaChangePolicy; }
    inline bool SchemaChangePolicyHasBeenSet() const { return m_schemaChangePolicyHasBeenSet; }
    inline void SetSchemaChangePolicy(const SchemaChangePolicy& value) { m_schemaChangePolicyHasBeenSet = true; m_schemaChangePolicy = value; }
    inline void SetSchemaChangePolicy(SchemaChangePolicy&& value) { m_schemaChangePolicyHasBeenSet = true; m_schemaChangePolicy = std::move(value); }
    inline UpdateCrawlerRequest& WithSchemaChangePolicy(const SchemaChangePolicy& value) { SetSchemaChangePolicy(value); return *this;}
    inline UpdateCrawlerRequest& WithSchemaChangePolicy(SchemaChangePolicy&& value) { SetSchemaChangePolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A policy that specifies whether to crawl the entire dataset again, or to
     * crawl only folders that were added since the last crawler run.</p>
     */
    inline const RecrawlPolicy& GetRecrawlPolicy() const{ return m_recrawlPolicy; }
    inline bool RecrawlPolicyHasBeenSet() const { return m_recrawlPolicyHasBeenSet; }
    inline void SetRecrawlPolicy(const RecrawlPolicy& value) { m_recrawlPolicyHasBeenSet = true; m_recrawlPolicy = value; }
    inline void SetRecrawlPolicy(RecrawlPolicy&& value) { m_recrawlPolicyHasBeenSet = true; m_recrawlPolicy = std::move(value); }
    inline UpdateCrawlerRequest& WithRecrawlPolicy(const RecrawlPolicy& value) { SetRecrawlPolicy(value); return *this;}
    inline UpdateCrawlerRequest& WithRecrawlPolicy(RecrawlPolicy&& value) { SetRecrawlPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies data lineage configuration settings for the crawler.</p>
     */
    inline const LineageConfiguration& GetLineageConfiguration() const{ return m_lineageConfiguration; }
    inline bool LineageConfigurationHasBeenSet() const { return m_lineageConfigurationHasBeenSet; }
    inline void SetLineageConfiguration(const LineageConfiguration& value) { m_lineageConfigurationHasBeenSet = true; m_lineageConfiguration = value; }
    inline void SetLineageConfiguration(LineageConfiguration&& value) { m_lineageConfigurationHasBeenSet = true; m_lineageConfiguration = std::move(value); }
    inline UpdateCrawlerRequest& WithLineageConfiguration(const LineageConfiguration& value) { SetLineageConfiguration(value); return *this;}
    inline UpdateCrawlerRequest& WithLineageConfiguration(LineageConfiguration&& value) { SetLineageConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies Lake Formation configuration settings for the crawler.</p>
     */
    inline const LakeFormationConfiguration& GetLakeFormationConfiguration() const{ return m_lakeFormationConfiguration; }
    inline bool LakeFormationConfigurationHasBeenSet() const { return m_lakeFormationConfigurationHasBeenSet; }
    inline void SetLakeFormationConfiguration(const LakeFormationConfiguration& value) { m_lakeFormationConfigurationHasBeenSet = true; m_lakeFormationConfiguration = value; }
    inline void SetLakeFormationConfiguration(LakeFormationConfiguration&& value) { m_lakeFormationConfigurationHasBeenSet = true; m_lakeFormationConfiguration = std::move(value); }
    inline UpdateCrawlerRequest& WithLakeFormationConfiguration(const LakeFormationConfiguration& value) { SetLakeFormationConfiguration(value); return *this;}
    inline UpdateCrawlerRequest& WithLakeFormationConfiguration(LakeFormationConfiguration&& value) { SetLakeFormationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Crawler configuration information. This versioned JSON string allows users to
     * specify aspects of a crawler's behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/crawler-configuration.html">Setting
     * crawler configuration options</a>.</p>
     */
    inline const Aws::String& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline void SetConfiguration(const char* value) { m_configurationHasBeenSet = true; m_configuration.assign(value); }
    inline UpdateCrawlerRequest& WithConfiguration(const Aws::String& value) { SetConfiguration(value); return *this;}
    inline UpdateCrawlerRequest& WithConfiguration(Aws::String&& value) { SetConfiguration(std::move(value)); return *this;}
    inline UpdateCrawlerRequest& WithConfiguration(const char* value) { SetConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used by
     * this crawler.</p>
     */
    inline const Aws::String& GetCrawlerSecurityConfiguration() const{ return m_crawlerSecurityConfiguration; }
    inline bool CrawlerSecurityConfigurationHasBeenSet() const { return m_crawlerSecurityConfigurationHasBeenSet; }
    inline void SetCrawlerSecurityConfiguration(const Aws::String& value) { m_crawlerSecurityConfigurationHasBeenSet = true; m_crawlerSecurityConfiguration = value; }
    inline void SetCrawlerSecurityConfiguration(Aws::String&& value) { m_crawlerSecurityConfigurationHasBeenSet = true; m_crawlerSecurityConfiguration = std::move(value); }
    inline void SetCrawlerSecurityConfiguration(const char* value) { m_crawlerSecurityConfigurationHasBeenSet = true; m_crawlerSecurityConfiguration.assign(value); }
    inline UpdateCrawlerRequest& WithCrawlerSecurityConfiguration(const Aws::String& value) { SetCrawlerSecurityConfiguration(value); return *this;}
    inline UpdateCrawlerRequest& WithCrawlerSecurityConfiguration(Aws::String&& value) { SetCrawlerSecurityConfiguration(std::move(value)); return *this;}
    inline UpdateCrawlerRequest& WithCrawlerSecurityConfiguration(const char* value) { SetCrawlerSecurityConfiguration(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    CrawlerTargets m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::Vector<Aws::String> m_classifiers;
    bool m_classifiersHasBeenSet = false;

    Aws::String m_tablePrefix;
    bool m_tablePrefixHasBeenSet = false;

    SchemaChangePolicy m_schemaChangePolicy;
    bool m_schemaChangePolicyHasBeenSet = false;

    RecrawlPolicy m_recrawlPolicy;
    bool m_recrawlPolicyHasBeenSet = false;

    LineageConfiguration m_lineageConfiguration;
    bool m_lineageConfigurationHasBeenSet = false;

    LakeFormationConfiguration m_lakeFormationConfiguration;
    bool m_lakeFormationConfigurationHasBeenSet = false;

    Aws::String m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_crawlerSecurityConfiguration;
    bool m_crawlerSecurityConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
