/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/CrawlerTargets.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/RecrawlPolicy.h>
#include <aws/glue/model/SchemaChangePolicy.h>
#include <aws/glue/model/LineageConfiguration.h>
#include <aws/glue/model/CrawlerState.h>
#include <aws/glue/model/Schedule.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/LastCrawlInfo.h>
#include <aws/glue/model/LakeFormationConfiguration.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a crawler program that examines a data source and uses classifiers
   * to try to determine its schema. If successful, the crawler records metadata
   * concerning the data source in the Glue Data Catalog.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Crawler">AWS API
   * Reference</a></p>
   */
  class Crawler
  {
  public:
    AWS_GLUE_API Crawler() = default;
    AWS_GLUE_API Crawler(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Crawler& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the crawler.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Crawler& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that's used to access customer
     * resources, such as Amazon Simple Storage Service (Amazon S3) data.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    Crawler& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of targets to crawl.</p>
     */
    inline const CrawlerTargets& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = CrawlerTargets>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = CrawlerTargets>
    Crawler& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database in which the crawler's output is stored.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    Crawler& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the crawler.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Crawler& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of UTF-8 strings that specify the custom classifiers that are
     * associated with the crawler.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClassifiers() const { return m_classifiers; }
    inline bool ClassifiersHasBeenSet() const { return m_classifiersHasBeenSet; }
    template<typename ClassifiersT = Aws::Vector<Aws::String>>
    void SetClassifiers(ClassifiersT&& value) { m_classifiersHasBeenSet = true; m_classifiers = std::forward<ClassifiersT>(value); }
    template<typename ClassifiersT = Aws::Vector<Aws::String>>
    Crawler& WithClassifiers(ClassifiersT&& value) { SetClassifiers(std::forward<ClassifiersT>(value)); return *this;}
    template<typename ClassifiersT = Aws::String>
    Crawler& AddClassifiers(ClassifiersT&& value) { m_classifiersHasBeenSet = true; m_classifiers.emplace_back(std::forward<ClassifiersT>(value)); return *this; }
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
    Crawler& WithRecrawlPolicy(RecrawlPolicyT&& value) { SetRecrawlPolicy(std::forward<RecrawlPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy that specifies update and delete behaviors for the crawler.</p>
     */
    inline const SchemaChangePolicy& GetSchemaChangePolicy() const { return m_schemaChangePolicy; }
    inline bool SchemaChangePolicyHasBeenSet() const { return m_schemaChangePolicyHasBeenSet; }
    template<typename SchemaChangePolicyT = SchemaChangePolicy>
    void SetSchemaChangePolicy(SchemaChangePolicyT&& value) { m_schemaChangePolicyHasBeenSet = true; m_schemaChangePolicy = std::forward<SchemaChangePolicyT>(value); }
    template<typename SchemaChangePolicyT = SchemaChangePolicy>
    Crawler& WithSchemaChangePolicy(SchemaChangePolicyT&& value) { SetSchemaChangePolicy(std::forward<SchemaChangePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A configuration that specifies whether data lineage is enabled for the
     * crawler.</p>
     */
    inline const LineageConfiguration& GetLineageConfiguration() const { return m_lineageConfiguration; }
    inline bool LineageConfigurationHasBeenSet() const { return m_lineageConfigurationHasBeenSet; }
    template<typename LineageConfigurationT = LineageConfiguration>
    void SetLineageConfiguration(LineageConfigurationT&& value) { m_lineageConfigurationHasBeenSet = true; m_lineageConfiguration = std::forward<LineageConfigurationT>(value); }
    template<typename LineageConfigurationT = LineageConfiguration>
    Crawler& WithLineageConfiguration(LineageConfigurationT&& value) { SetLineageConfiguration(std::forward<LineageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the crawler is running, or whether a run is pending.</p>
     */
    inline CrawlerState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CrawlerState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Crawler& WithState(CrawlerState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix added to the names of tables that are created.</p>
     */
    inline const Aws::String& GetTablePrefix() const { return m_tablePrefix; }
    inline bool TablePrefixHasBeenSet() const { return m_tablePrefixHasBeenSet; }
    template<typename TablePrefixT = Aws::String>
    void SetTablePrefix(TablePrefixT&& value) { m_tablePrefixHasBeenSet = true; m_tablePrefix = std::forward<TablePrefixT>(value); }
    template<typename TablePrefixT = Aws::String>
    Crawler& WithTablePrefix(TablePrefixT&& value) { SetTablePrefix(std::forward<TablePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For scheduled crawlers, the schedule when the crawler runs.</p>
     */
    inline const Schedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Schedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Schedule>
    Crawler& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the crawler is running, contains the total time elapsed since the last
     * crawl began.</p>
     */
    inline long long GetCrawlElapsedTime() const { return m_crawlElapsedTime; }
    inline bool CrawlElapsedTimeHasBeenSet() const { return m_crawlElapsedTimeHasBeenSet; }
    inline void SetCrawlElapsedTime(long long value) { m_crawlElapsedTimeHasBeenSet = true; m_crawlElapsedTime = value; }
    inline Crawler& WithCrawlElapsedTime(long long value) { SetCrawlElapsedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the crawler was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Crawler& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the crawler was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    Crawler& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last crawl, and potentially error information if an error
     * occurred.</p>
     */
    inline const LastCrawlInfo& GetLastCrawl() const { return m_lastCrawl; }
    inline bool LastCrawlHasBeenSet() const { return m_lastCrawlHasBeenSet; }
    template<typename LastCrawlT = LastCrawlInfo>
    void SetLastCrawl(LastCrawlT&& value) { m_lastCrawlHasBeenSet = true; m_lastCrawl = std::forward<LastCrawlT>(value); }
    template<typename LastCrawlT = LastCrawlInfo>
    Crawler& WithLastCrawl(LastCrawlT&& value) { SetLastCrawl(std::forward<LastCrawlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the crawler.</p>
     */
    inline long long GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline Crawler& WithVersion(long long value) { SetVersion(value); return *this;}
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
    Crawler& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
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
    Crawler& WithCrawlerSecurityConfiguration(CrawlerSecurityConfigurationT&& value) { SetCrawlerSecurityConfiguration(std::forward<CrawlerSecurityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the crawler should use Lake Formation credentials for the
     * crawler instead of the IAM role credentials.</p>
     */
    inline const LakeFormationConfiguration& GetLakeFormationConfiguration() const { return m_lakeFormationConfiguration; }
    inline bool LakeFormationConfigurationHasBeenSet() const { return m_lakeFormationConfigurationHasBeenSet; }
    template<typename LakeFormationConfigurationT = LakeFormationConfiguration>
    void SetLakeFormationConfiguration(LakeFormationConfigurationT&& value) { m_lakeFormationConfigurationHasBeenSet = true; m_lakeFormationConfiguration = std::forward<LakeFormationConfigurationT>(value); }
    template<typename LakeFormationConfigurationT = LakeFormationConfiguration>
    Crawler& WithLakeFormationConfiguration(LakeFormationConfigurationT&& value) { SetLakeFormationConfiguration(std::forward<LakeFormationConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    CrawlerTargets m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_classifiers;
    bool m_classifiersHasBeenSet = false;

    RecrawlPolicy m_recrawlPolicy;
    bool m_recrawlPolicyHasBeenSet = false;

    SchemaChangePolicy m_schemaChangePolicy;
    bool m_schemaChangePolicyHasBeenSet = false;

    LineageConfiguration m_lineageConfiguration;
    bool m_lineageConfigurationHasBeenSet = false;

    CrawlerState m_state{CrawlerState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_tablePrefix;
    bool m_tablePrefixHasBeenSet = false;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    long long m_crawlElapsedTime{0};
    bool m_crawlElapsedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;

    LastCrawlInfo m_lastCrawl;
    bool m_lastCrawlHasBeenSet = false;

    long long m_version{0};
    bool m_versionHasBeenSet = false;

    Aws::String m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_crawlerSecurityConfiguration;
    bool m_crawlerSecurityConfigurationHasBeenSet = false;

    LakeFormationConfiguration m_lakeFormationConfiguration;
    bool m_lakeFormationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
