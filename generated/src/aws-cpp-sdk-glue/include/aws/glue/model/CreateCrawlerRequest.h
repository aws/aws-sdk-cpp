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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CreateCrawlerRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateCrawlerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCrawler"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name of the new crawler.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateCrawlerRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role or Amazon Resource Name (ARN) of an IAM role used by the new
     * crawler to access customer resources.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    CreateCrawlerRequest& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Glue database where results are written, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    CreateCrawlerRequest& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the new crawler.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateCrawlerRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of collection of targets to crawl.</p>
     */
    inline const CrawlerTargets& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = CrawlerTargets>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = CrawlerTargets>
    CreateCrawlerRequest& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline const Aws::String& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Aws::String>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Aws::String>
    CreateCrawlerRequest& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom classifiers that the user has registered. By default, all
     * built-in classifiers are included in a crawl, but these custom classifiers
     * always override the default classifiers for a given classification.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClassifiers() const { return m_classifiers; }
    inline bool ClassifiersHasBeenSet() const { return m_classifiersHasBeenSet; }
    template<typename ClassifiersT = Aws::Vector<Aws::String>>
    void SetClassifiers(ClassifiersT&& value) { m_classifiersHasBeenSet = true; m_classifiers = std::forward<ClassifiersT>(value); }
    template<typename ClassifiersT = Aws::Vector<Aws::String>>
    CreateCrawlerRequest& WithClassifiers(ClassifiersT&& value) { SetClassifiers(std::forward<ClassifiersT>(value)); return *this;}
    template<typename ClassifiersT = Aws::String>
    CreateCrawlerRequest& AddClassifiers(ClassifiersT&& value) { m_classifiersHasBeenSet = true; m_classifiers.emplace_back(std::forward<ClassifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The table prefix used for catalog tables that are created.</p>
     */
    inline const Aws::String& GetTablePrefix() const { return m_tablePrefix; }
    inline bool TablePrefixHasBeenSet() const { return m_tablePrefixHasBeenSet; }
    template<typename TablePrefixT = Aws::String>
    void SetTablePrefix(TablePrefixT&& value) { m_tablePrefixHasBeenSet = true; m_tablePrefix = std::forward<TablePrefixT>(value); }
    template<typename TablePrefixT = Aws::String>
    CreateCrawlerRequest& WithTablePrefix(TablePrefixT&& value) { SetTablePrefix(std::forward<TablePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy for the crawler's update and deletion behavior.</p>
     */
    inline const SchemaChangePolicy& GetSchemaChangePolicy() const { return m_schemaChangePolicy; }
    inline bool SchemaChangePolicyHasBeenSet() const { return m_schemaChangePolicyHasBeenSet; }
    template<typename SchemaChangePolicyT = SchemaChangePolicy>
    void SetSchemaChangePolicy(SchemaChangePolicyT&& value) { m_schemaChangePolicyHasBeenSet = true; m_schemaChangePolicy = std::forward<SchemaChangePolicyT>(value); }
    template<typename SchemaChangePolicyT = SchemaChangePolicy>
    CreateCrawlerRequest& WithSchemaChangePolicy(SchemaChangePolicyT&& value) { SetSchemaChangePolicy(std::forward<SchemaChangePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A policy that specifies whether to crawl the entire dataset again, or to
     * crawl only folders that were added since the last crawler run.</p>
     */
    inline const RecrawlPolicy& GetRecrawlPolicy() const { return m_recrawlPolicy; }
    inline bool RecrawlPolicyHasBeenSet() const { return m_recrawlPolicyHasBeenSet; }
    template<typename RecrawlPolicyT = RecrawlPolicy>
    void SetRecrawlPolicy(RecrawlPolicyT&& value) { m_recrawlPolicyHasBeenSet = true; m_recrawlPolicy = std::forward<RecrawlPolicyT>(value); }
    template<typename RecrawlPolicyT = RecrawlPolicy>
    CreateCrawlerRequest& WithRecrawlPolicy(RecrawlPolicyT&& value) { SetRecrawlPolicy(std::forward<RecrawlPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies data lineage configuration settings for the crawler.</p>
     */
    inline const LineageConfiguration& GetLineageConfiguration() const { return m_lineageConfiguration; }
    inline bool LineageConfigurationHasBeenSet() const { return m_lineageConfigurationHasBeenSet; }
    template<typename LineageConfigurationT = LineageConfiguration>
    void SetLineageConfiguration(LineageConfigurationT&& value) { m_lineageConfigurationHasBeenSet = true; m_lineageConfiguration = std::forward<LineageConfigurationT>(value); }
    template<typename LineageConfigurationT = LineageConfiguration>
    CreateCrawlerRequest& WithLineageConfiguration(LineageConfigurationT&& value) { SetLineageConfiguration(std::forward<LineageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies Lake Formation configuration settings for the crawler.</p>
     */
    inline const LakeFormationConfiguration& GetLakeFormationConfiguration() const { return m_lakeFormationConfiguration; }
    inline bool LakeFormationConfigurationHasBeenSet() const { return m_lakeFormationConfigurationHasBeenSet; }
    template<typename LakeFormationConfigurationT = LakeFormationConfiguration>
    void SetLakeFormationConfiguration(LakeFormationConfigurationT&& value) { m_lakeFormationConfigurationHasBeenSet = true; m_lakeFormationConfiguration = std::forward<LakeFormationConfigurationT>(value); }
    template<typename LakeFormationConfigurationT = LakeFormationConfiguration>
    CreateCrawlerRequest& WithLakeFormationConfiguration(LakeFormationConfigurationT&& value) { SetLakeFormationConfiguration(std::forward<LakeFormationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Crawler configuration information. This versioned JSON string allows users to
     * specify aspects of a crawler's behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/crawler-configuration.html">Setting
     * crawler configuration options</a>.</p>
     */
    inline const Aws::String& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = Aws::String>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = Aws::String>
    CreateCrawlerRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used by
     * this crawler.</p>
     */
    inline const Aws::String& GetCrawlerSecurityConfiguration() const { return m_crawlerSecurityConfiguration; }
    inline bool CrawlerSecurityConfigurationHasBeenSet() const { return m_crawlerSecurityConfigurationHasBeenSet; }
    template<typename CrawlerSecurityConfigurationT = Aws::String>
    void SetCrawlerSecurityConfiguration(CrawlerSecurityConfigurationT&& value) { m_crawlerSecurityConfigurationHasBeenSet = true; m_crawlerSecurityConfiguration = std::forward<CrawlerSecurityConfigurationT>(value); }
    template<typename CrawlerSecurityConfigurationT = Aws::String>
    CreateCrawlerRequest& WithCrawlerSecurityConfiguration(CrawlerSecurityConfigurationT&& value) { SetCrawlerSecurityConfiguration(std::forward<CrawlerSecurityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to use with this crawler request. You may use tags to limit access
     * to the crawler. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateCrawlerRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateCrawlerRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
