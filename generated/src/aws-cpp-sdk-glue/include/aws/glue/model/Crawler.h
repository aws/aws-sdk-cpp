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
    AWS_GLUE_API Crawler();
    AWS_GLUE_API Crawler(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Crawler& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the crawler.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the crawler.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the crawler.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the crawler.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the crawler.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the crawler.</p>
     */
    inline Crawler& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the crawler.</p>
     */
    inline Crawler& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the crawler.</p>
     */
    inline Crawler& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that's used to access customer
     * resources, such as Amazon Simple Storage Service (Amazon S3) data.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that's used to access customer
     * resources, such as Amazon Simple Storage Service (Amazon S3) data.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that's used to access customer
     * resources, such as Amazon Simple Storage Service (Amazon S3) data.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that's used to access customer
     * resources, such as Amazon Simple Storage Service (Amazon S3) data.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that's used to access customer
     * resources, such as Amazon Simple Storage Service (Amazon S3) data.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that's used to access customer
     * resources, such as Amazon Simple Storage Service (Amazon S3) data.</p>
     */
    inline Crawler& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that's used to access customer
     * resources, such as Amazon Simple Storage Service (Amazon S3) data.</p>
     */
    inline Crawler& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that's used to access customer
     * resources, such as Amazon Simple Storage Service (Amazon S3) data.</p>
     */
    inline Crawler& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>A collection of targets to crawl.</p>
     */
    inline const CrawlerTargets& GetTargets() const{ return m_targets; }

    /**
     * <p>A collection of targets to crawl.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>A collection of targets to crawl.</p>
     */
    inline void SetTargets(const CrawlerTargets& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>A collection of targets to crawl.</p>
     */
    inline void SetTargets(CrawlerTargets&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>A collection of targets to crawl.</p>
     */
    inline Crawler& WithTargets(const CrawlerTargets& value) { SetTargets(value); return *this;}

    /**
     * <p>A collection of targets to crawl.</p>
     */
    inline Crawler& WithTargets(CrawlerTargets&& value) { SetTargets(std::move(value)); return *this;}


    /**
     * <p>The name of the database in which the crawler's output is stored.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database in which the crawler's output is stored.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database in which the crawler's output is stored.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database in which the crawler's output is stored.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database in which the crawler's output is stored.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database in which the crawler's output is stored.</p>
     */
    inline Crawler& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database in which the crawler's output is stored.</p>
     */
    inline Crawler& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database in which the crawler's output is stored.</p>
     */
    inline Crawler& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>A description of the crawler.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the crawler.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the crawler.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the crawler.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the crawler.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the crawler.</p>
     */
    inline Crawler& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the crawler.</p>
     */
    inline Crawler& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the crawler.</p>
     */
    inline Crawler& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of UTF-8 strings that specify the custom classifiers that are
     * associated with the crawler.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClassifiers() const{ return m_classifiers; }

    /**
     * <p>A list of UTF-8 strings that specify the custom classifiers that are
     * associated with the crawler.</p>
     */
    inline bool ClassifiersHasBeenSet() const { return m_classifiersHasBeenSet; }

    /**
     * <p>A list of UTF-8 strings that specify the custom classifiers that are
     * associated with the crawler.</p>
     */
    inline void SetClassifiers(const Aws::Vector<Aws::String>& value) { m_classifiersHasBeenSet = true; m_classifiers = value; }

    /**
     * <p>A list of UTF-8 strings that specify the custom classifiers that are
     * associated with the crawler.</p>
     */
    inline void SetClassifiers(Aws::Vector<Aws::String>&& value) { m_classifiersHasBeenSet = true; m_classifiers = std::move(value); }

    /**
     * <p>A list of UTF-8 strings that specify the custom classifiers that are
     * associated with the crawler.</p>
     */
    inline Crawler& WithClassifiers(const Aws::Vector<Aws::String>& value) { SetClassifiers(value); return *this;}

    /**
     * <p>A list of UTF-8 strings that specify the custom classifiers that are
     * associated with the crawler.</p>
     */
    inline Crawler& WithClassifiers(Aws::Vector<Aws::String>&& value) { SetClassifiers(std::move(value)); return *this;}

    /**
     * <p>A list of UTF-8 strings that specify the custom classifiers that are
     * associated with the crawler.</p>
     */
    inline Crawler& AddClassifiers(const Aws::String& value) { m_classifiersHasBeenSet = true; m_classifiers.push_back(value); return *this; }

    /**
     * <p>A list of UTF-8 strings that specify the custom classifiers that are
     * associated with the crawler.</p>
     */
    inline Crawler& AddClassifiers(Aws::String&& value) { m_classifiersHasBeenSet = true; m_classifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of UTF-8 strings that specify the custom classifiers that are
     * associated with the crawler.</p>
     */
    inline Crawler& AddClassifiers(const char* value) { m_classifiersHasBeenSet = true; m_classifiers.push_back(value); return *this; }


    /**
     * <p>A policy that specifies whether to crawl the entire dataset again, or to
     * crawl only folders that were added since the last crawler run.</p>
     */
    inline const RecrawlPolicy& GetRecrawlPolicy() const{ return m_recrawlPolicy; }

    /**
     * <p>A policy that specifies whether to crawl the entire dataset again, or to
     * crawl only folders that were added since the last crawler run.</p>
     */
    inline bool RecrawlPolicyHasBeenSet() const { return m_recrawlPolicyHasBeenSet; }

    /**
     * <p>A policy that specifies whether to crawl the entire dataset again, or to
     * crawl only folders that were added since the last crawler run.</p>
     */
    inline void SetRecrawlPolicy(const RecrawlPolicy& value) { m_recrawlPolicyHasBeenSet = true; m_recrawlPolicy = value; }

    /**
     * <p>A policy that specifies whether to crawl the entire dataset again, or to
     * crawl only folders that were added since the last crawler run.</p>
     */
    inline void SetRecrawlPolicy(RecrawlPolicy&& value) { m_recrawlPolicyHasBeenSet = true; m_recrawlPolicy = std::move(value); }

    /**
     * <p>A policy that specifies whether to crawl the entire dataset again, or to
     * crawl only folders that were added since the last crawler run.</p>
     */
    inline Crawler& WithRecrawlPolicy(const RecrawlPolicy& value) { SetRecrawlPolicy(value); return *this;}

    /**
     * <p>A policy that specifies whether to crawl the entire dataset again, or to
     * crawl only folders that were added since the last crawler run.</p>
     */
    inline Crawler& WithRecrawlPolicy(RecrawlPolicy&& value) { SetRecrawlPolicy(std::move(value)); return *this;}


    /**
     * <p>The policy that specifies update and delete behaviors for the crawler.</p>
     */
    inline const SchemaChangePolicy& GetSchemaChangePolicy() const{ return m_schemaChangePolicy; }

    /**
     * <p>The policy that specifies update and delete behaviors for the crawler.</p>
     */
    inline bool SchemaChangePolicyHasBeenSet() const { return m_schemaChangePolicyHasBeenSet; }

    /**
     * <p>The policy that specifies update and delete behaviors for the crawler.</p>
     */
    inline void SetSchemaChangePolicy(const SchemaChangePolicy& value) { m_schemaChangePolicyHasBeenSet = true; m_schemaChangePolicy = value; }

    /**
     * <p>The policy that specifies update and delete behaviors for the crawler.</p>
     */
    inline void SetSchemaChangePolicy(SchemaChangePolicy&& value) { m_schemaChangePolicyHasBeenSet = true; m_schemaChangePolicy = std::move(value); }

    /**
     * <p>The policy that specifies update and delete behaviors for the crawler.</p>
     */
    inline Crawler& WithSchemaChangePolicy(const SchemaChangePolicy& value) { SetSchemaChangePolicy(value); return *this;}

    /**
     * <p>The policy that specifies update and delete behaviors for the crawler.</p>
     */
    inline Crawler& WithSchemaChangePolicy(SchemaChangePolicy&& value) { SetSchemaChangePolicy(std::move(value)); return *this;}


    /**
     * <p>A configuration that specifies whether data lineage is enabled for the
     * crawler.</p>
     */
    inline const LineageConfiguration& GetLineageConfiguration() const{ return m_lineageConfiguration; }

    /**
     * <p>A configuration that specifies whether data lineage is enabled for the
     * crawler.</p>
     */
    inline bool LineageConfigurationHasBeenSet() const { return m_lineageConfigurationHasBeenSet; }

    /**
     * <p>A configuration that specifies whether data lineage is enabled for the
     * crawler.</p>
     */
    inline void SetLineageConfiguration(const LineageConfiguration& value) { m_lineageConfigurationHasBeenSet = true; m_lineageConfiguration = value; }

    /**
     * <p>A configuration that specifies whether data lineage is enabled for the
     * crawler.</p>
     */
    inline void SetLineageConfiguration(LineageConfiguration&& value) { m_lineageConfigurationHasBeenSet = true; m_lineageConfiguration = std::move(value); }

    /**
     * <p>A configuration that specifies whether data lineage is enabled for the
     * crawler.</p>
     */
    inline Crawler& WithLineageConfiguration(const LineageConfiguration& value) { SetLineageConfiguration(value); return *this;}

    /**
     * <p>A configuration that specifies whether data lineage is enabled for the
     * crawler.</p>
     */
    inline Crawler& WithLineageConfiguration(LineageConfiguration&& value) { SetLineageConfiguration(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the crawler is running, or whether a run is pending.</p>
     */
    inline const CrawlerState& GetState() const{ return m_state; }

    /**
     * <p>Indicates whether the crawler is running, or whether a run is pending.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Indicates whether the crawler is running, or whether a run is pending.</p>
     */
    inline void SetState(const CrawlerState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Indicates whether the crawler is running, or whether a run is pending.</p>
     */
    inline void SetState(CrawlerState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Indicates whether the crawler is running, or whether a run is pending.</p>
     */
    inline Crawler& WithState(const CrawlerState& value) { SetState(value); return *this;}

    /**
     * <p>Indicates whether the crawler is running, or whether a run is pending.</p>
     */
    inline Crawler& WithState(CrawlerState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The prefix added to the names of tables that are created.</p>
     */
    inline const Aws::String& GetTablePrefix() const{ return m_tablePrefix; }

    /**
     * <p>The prefix added to the names of tables that are created.</p>
     */
    inline bool TablePrefixHasBeenSet() const { return m_tablePrefixHasBeenSet; }

    /**
     * <p>The prefix added to the names of tables that are created.</p>
     */
    inline void SetTablePrefix(const Aws::String& value) { m_tablePrefixHasBeenSet = true; m_tablePrefix = value; }

    /**
     * <p>The prefix added to the names of tables that are created.</p>
     */
    inline void SetTablePrefix(Aws::String&& value) { m_tablePrefixHasBeenSet = true; m_tablePrefix = std::move(value); }

    /**
     * <p>The prefix added to the names of tables that are created.</p>
     */
    inline void SetTablePrefix(const char* value) { m_tablePrefixHasBeenSet = true; m_tablePrefix.assign(value); }

    /**
     * <p>The prefix added to the names of tables that are created.</p>
     */
    inline Crawler& WithTablePrefix(const Aws::String& value) { SetTablePrefix(value); return *this;}

    /**
     * <p>The prefix added to the names of tables that are created.</p>
     */
    inline Crawler& WithTablePrefix(Aws::String&& value) { SetTablePrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix added to the names of tables that are created.</p>
     */
    inline Crawler& WithTablePrefix(const char* value) { SetTablePrefix(value); return *this;}


    /**
     * <p>For scheduled crawlers, the schedule when the crawler runs.</p>
     */
    inline const Schedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p>For scheduled crawlers, the schedule when the crawler runs.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>For scheduled crawlers, the schedule when the crawler runs.</p>
     */
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>For scheduled crawlers, the schedule when the crawler runs.</p>
     */
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>For scheduled crawlers, the schedule when the crawler runs.</p>
     */
    inline Crawler& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>For scheduled crawlers, the schedule when the crawler runs.</p>
     */
    inline Crawler& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>If the crawler is running, contains the total time elapsed since the last
     * crawl began.</p>
     */
    inline long long GetCrawlElapsedTime() const{ return m_crawlElapsedTime; }

    /**
     * <p>If the crawler is running, contains the total time elapsed since the last
     * crawl began.</p>
     */
    inline bool CrawlElapsedTimeHasBeenSet() const { return m_crawlElapsedTimeHasBeenSet; }

    /**
     * <p>If the crawler is running, contains the total time elapsed since the last
     * crawl began.</p>
     */
    inline void SetCrawlElapsedTime(long long value) { m_crawlElapsedTimeHasBeenSet = true; m_crawlElapsedTime = value; }

    /**
     * <p>If the crawler is running, contains the total time elapsed since the last
     * crawl began.</p>
     */
    inline Crawler& WithCrawlElapsedTime(long long value) { SetCrawlElapsedTime(value); return *this;}


    /**
     * <p>The time that the crawler was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the crawler was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time that the crawler was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time that the crawler was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time that the crawler was created.</p>
     */
    inline Crawler& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the crawler was created.</p>
     */
    inline Crawler& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time that the crawler was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The time that the crawler was last updated.</p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>The time that the crawler was last updated.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>The time that the crawler was last updated.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>The time that the crawler was last updated.</p>
     */
    inline Crawler& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The time that the crawler was last updated.</p>
     */
    inline Crawler& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>The status of the last crawl, and potentially error information if an error
     * occurred.</p>
     */
    inline const LastCrawlInfo& GetLastCrawl() const{ return m_lastCrawl; }

    /**
     * <p>The status of the last crawl, and potentially error information if an error
     * occurred.</p>
     */
    inline bool LastCrawlHasBeenSet() const { return m_lastCrawlHasBeenSet; }

    /**
     * <p>The status of the last crawl, and potentially error information if an error
     * occurred.</p>
     */
    inline void SetLastCrawl(const LastCrawlInfo& value) { m_lastCrawlHasBeenSet = true; m_lastCrawl = value; }

    /**
     * <p>The status of the last crawl, and potentially error information if an error
     * occurred.</p>
     */
    inline void SetLastCrawl(LastCrawlInfo&& value) { m_lastCrawlHasBeenSet = true; m_lastCrawl = std::move(value); }

    /**
     * <p>The status of the last crawl, and potentially error information if an error
     * occurred.</p>
     */
    inline Crawler& WithLastCrawl(const LastCrawlInfo& value) { SetLastCrawl(value); return *this;}

    /**
     * <p>The status of the last crawl, and potentially error information if an error
     * occurred.</p>
     */
    inline Crawler& WithLastCrawl(LastCrawlInfo&& value) { SetLastCrawl(std::move(value)); return *this;}


    /**
     * <p>The version of the crawler.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The version of the crawler.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the crawler.</p>
     */
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the crawler.</p>
     */
    inline Crawler& WithVersion(long long value) { SetVersion(value); return *this;}


    /**
     * <p>Crawler configuration information. This versioned JSON string allows users to
     * specify aspects of a crawler's behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/crawler-configuration.html">Setting
     * crawler configuration options</a>.</p>
     */
    inline const Aws::String& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Crawler configuration information. This versioned JSON string allows users to
     * specify aspects of a crawler's behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/crawler-configuration.html">Setting
     * crawler configuration options</a>.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>Crawler configuration information. This versioned JSON string allows users to
     * specify aspects of a crawler's behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/crawler-configuration.html">Setting
     * crawler configuration options</a>.</p>
     */
    inline void SetConfiguration(const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>Crawler configuration information. This versioned JSON string allows users to
     * specify aspects of a crawler's behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/crawler-configuration.html">Setting
     * crawler configuration options</a>.</p>
     */
    inline void SetConfiguration(Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>Crawler configuration information. This versioned JSON string allows users to
     * specify aspects of a crawler's behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/crawler-configuration.html">Setting
     * crawler configuration options</a>.</p>
     */
    inline void SetConfiguration(const char* value) { m_configurationHasBeenSet = true; m_configuration.assign(value); }

    /**
     * <p>Crawler configuration information. This versioned JSON string allows users to
     * specify aspects of a crawler's behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/crawler-configuration.html">Setting
     * crawler configuration options</a>.</p>
     */
    inline Crawler& WithConfiguration(const Aws::String& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Crawler configuration information. This versioned JSON string allows users to
     * specify aspects of a crawler's behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/crawler-configuration.html">Setting
     * crawler configuration options</a>.</p>
     */
    inline Crawler& WithConfiguration(Aws::String&& value) { SetConfiguration(std::move(value)); return *this;}

    /**
     * <p>Crawler configuration information. This versioned JSON string allows users to
     * specify aspects of a crawler's behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/crawler-configuration.html">Setting
     * crawler configuration options</a>.</p>
     */
    inline Crawler& WithConfiguration(const char* value) { SetConfiguration(value); return *this;}


    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used by
     * this crawler.</p>
     */
    inline const Aws::String& GetCrawlerSecurityConfiguration() const{ return m_crawlerSecurityConfiguration; }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used by
     * this crawler.</p>
     */
    inline bool CrawlerSecurityConfigurationHasBeenSet() const { return m_crawlerSecurityConfigurationHasBeenSet; }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used by
     * this crawler.</p>
     */
    inline void SetCrawlerSecurityConfiguration(const Aws::String& value) { m_crawlerSecurityConfigurationHasBeenSet = true; m_crawlerSecurityConfiguration = value; }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used by
     * this crawler.</p>
     */
    inline void SetCrawlerSecurityConfiguration(Aws::String&& value) { m_crawlerSecurityConfigurationHasBeenSet = true; m_crawlerSecurityConfiguration = std::move(value); }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used by
     * this crawler.</p>
     */
    inline void SetCrawlerSecurityConfiguration(const char* value) { m_crawlerSecurityConfigurationHasBeenSet = true; m_crawlerSecurityConfiguration.assign(value); }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used by
     * this crawler.</p>
     */
    inline Crawler& WithCrawlerSecurityConfiguration(const Aws::String& value) { SetCrawlerSecurityConfiguration(value); return *this;}

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used by
     * this crawler.</p>
     */
    inline Crawler& WithCrawlerSecurityConfiguration(Aws::String&& value) { SetCrawlerSecurityConfiguration(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used by
     * this crawler.</p>
     */
    inline Crawler& WithCrawlerSecurityConfiguration(const char* value) { SetCrawlerSecurityConfiguration(value); return *this;}


    /**
     * <p>Specifies whether the crawler should use Lake Formation credentials for the
     * crawler instead of the IAM role credentials.</p>
     */
    inline const LakeFormationConfiguration& GetLakeFormationConfiguration() const{ return m_lakeFormationConfiguration; }

    /**
     * <p>Specifies whether the crawler should use Lake Formation credentials for the
     * crawler instead of the IAM role credentials.</p>
     */
    inline bool LakeFormationConfigurationHasBeenSet() const { return m_lakeFormationConfigurationHasBeenSet; }

    /**
     * <p>Specifies whether the crawler should use Lake Formation credentials for the
     * crawler instead of the IAM role credentials.</p>
     */
    inline void SetLakeFormationConfiguration(const LakeFormationConfiguration& value) { m_lakeFormationConfigurationHasBeenSet = true; m_lakeFormationConfiguration = value; }

    /**
     * <p>Specifies whether the crawler should use Lake Formation credentials for the
     * crawler instead of the IAM role credentials.</p>
     */
    inline void SetLakeFormationConfiguration(LakeFormationConfiguration&& value) { m_lakeFormationConfigurationHasBeenSet = true; m_lakeFormationConfiguration = std::move(value); }

    /**
     * <p>Specifies whether the crawler should use Lake Formation credentials for the
     * crawler instead of the IAM role credentials.</p>
     */
    inline Crawler& WithLakeFormationConfiguration(const LakeFormationConfiguration& value) { SetLakeFormationConfiguration(value); return *this;}

    /**
     * <p>Specifies whether the crawler should use Lake Formation credentials for the
     * crawler instead of the IAM role credentials.</p>
     */
    inline Crawler& WithLakeFormationConfiguration(LakeFormationConfiguration&& value) { SetLakeFormationConfiguration(std::move(value)); return *this;}

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

    CrawlerState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_tablePrefix;
    bool m_tablePrefixHasBeenSet = false;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    long long m_crawlElapsedTime;
    bool m_crawlElapsedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    LastCrawlInfo m_lastCrawl;
    bool m_lastCrawlHasBeenSet = false;

    long long m_version;
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
