﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/CrawlerTargets.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/SchemaChangePolicy.h>
#include <aws/glue/model/CrawlerState.h>
#include <aws/glue/model/Schedule.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/LastCrawlInfo.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a crawler program that examines a data source and uses classifiers
   * to try to determine its schema. If successful, the crawler records metadata
   * concerning the data source in the AWS Glue Data Catalog.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Crawler">AWS API
   * Reference</a></p>
   */
  class AWS_GLUE_API Crawler
  {
  public:
    Crawler();
    Crawler(const Aws::Utils::Json::JsonValue& jsonValue);
    Crawler& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The crawler name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The crawler name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The crawler name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The crawler name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The crawler name.</p>
     */
    inline Crawler& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The crawler name.</p>
     */
    inline Crawler& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The crawler name.</p>
     */
    inline Crawler& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The IAM role (or ARN of an IAM role) used to access customer resources, such
     * as data in Amazon S3.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The IAM role (or ARN of an IAM role) used to access customer resources, such
     * as data in Amazon S3.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The IAM role (or ARN of an IAM role) used to access customer resources, such
     * as data in Amazon S3.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The IAM role (or ARN of an IAM role) used to access customer resources, such
     * as data in Amazon S3.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The IAM role (or ARN of an IAM role) used to access customer resources, such
     * as data in Amazon S3.</p>
     */
    inline Crawler& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The IAM role (or ARN of an IAM role) used to access customer resources, such
     * as data in Amazon S3.</p>
     */
    inline Crawler& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role (or ARN of an IAM role) used to access customer resources, such
     * as data in Amazon S3.</p>
     */
    inline Crawler& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>A collection of targets to crawl.</p>
     */
    inline const CrawlerTargets& GetTargets() const{ return m_targets; }

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
     * <p>The database where metadata is written by this crawler.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The database where metadata is written by this crawler.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The database where metadata is written by this crawler.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The database where metadata is written by this crawler.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The database where metadata is written by this crawler.</p>
     */
    inline Crawler& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The database where metadata is written by this crawler.</p>
     */
    inline Crawler& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The database where metadata is written by this crawler.</p>
     */
    inline Crawler& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>A description of the crawler.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

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
     * <p>A list of custom classifiers associated with the crawler.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClassifiers() const{ return m_classifiers; }

    /**
     * <p>A list of custom classifiers associated with the crawler.</p>
     */
    inline void SetClassifiers(const Aws::Vector<Aws::String>& value) { m_classifiersHasBeenSet = true; m_classifiers = value; }

    /**
     * <p>A list of custom classifiers associated with the crawler.</p>
     */
    inline void SetClassifiers(Aws::Vector<Aws::String>&& value) { m_classifiersHasBeenSet = true; m_classifiers = std::move(value); }

    /**
     * <p>A list of custom classifiers associated with the crawler.</p>
     */
    inline Crawler& WithClassifiers(const Aws::Vector<Aws::String>& value) { SetClassifiers(value); return *this;}

    /**
     * <p>A list of custom classifiers associated with the crawler.</p>
     */
    inline Crawler& WithClassifiers(Aws::Vector<Aws::String>&& value) { SetClassifiers(std::move(value)); return *this;}

    /**
     * <p>A list of custom classifiers associated with the crawler.</p>
     */
    inline Crawler& AddClassifiers(const Aws::String& value) { m_classifiersHasBeenSet = true; m_classifiers.push_back(value); return *this; }

    /**
     * <p>A list of custom classifiers associated with the crawler.</p>
     */
    inline Crawler& AddClassifiers(Aws::String&& value) { m_classifiersHasBeenSet = true; m_classifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of custom classifiers associated with the crawler.</p>
     */
    inline Crawler& AddClassifiers(const char* value) { m_classifiersHasBeenSet = true; m_classifiers.push_back(value); return *this; }


    /**
     * <p>Sets the behavior when the crawler finds a changed or deleted object.</p>
     */
    inline const SchemaChangePolicy& GetSchemaChangePolicy() const{ return m_schemaChangePolicy; }

    /**
     * <p>Sets the behavior when the crawler finds a changed or deleted object.</p>
     */
    inline void SetSchemaChangePolicy(const SchemaChangePolicy& value) { m_schemaChangePolicyHasBeenSet = true; m_schemaChangePolicy = value; }

    /**
     * <p>Sets the behavior when the crawler finds a changed or deleted object.</p>
     */
    inline void SetSchemaChangePolicy(SchemaChangePolicy&& value) { m_schemaChangePolicyHasBeenSet = true; m_schemaChangePolicy = std::move(value); }

    /**
     * <p>Sets the behavior when the crawler finds a changed or deleted object.</p>
     */
    inline Crawler& WithSchemaChangePolicy(const SchemaChangePolicy& value) { SetSchemaChangePolicy(value); return *this;}

    /**
     * <p>Sets the behavior when the crawler finds a changed or deleted object.</p>
     */
    inline Crawler& WithSchemaChangePolicy(SchemaChangePolicy&& value) { SetSchemaChangePolicy(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the crawler is running, or whether a run is pending.</p>
     */
    inline const CrawlerState& GetState() const{ return m_state; }

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
    inline void SetCrawlElapsedTime(long long value) { m_crawlElapsedTimeHasBeenSet = true; m_crawlElapsedTime = value; }

    /**
     * <p>If the crawler is running, contains the total time elapsed since the last
     * crawl began.</p>
     */
    inline Crawler& WithCrawlElapsedTime(long long value) { SetCrawlElapsedTime(value); return *this;}


    /**
     * <p>The time when the crawler was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the crawler was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time when the crawler was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time when the crawler was created.</p>
     */
    inline Crawler& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the crawler was created.</p>
     */
    inline Crawler& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time the crawler was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The time the crawler was last updated.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>The time the crawler was last updated.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>The time the crawler was last updated.</p>
     */
    inline Crawler& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The time the crawler was last updated.</p>
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
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the crawler.</p>
     */
    inline Crawler& WithVersion(long long value) { SetVersion(value); return *this;}


    /**
     * <p>Crawler configuration information. This versioned JSON string allows users to
     * specify aspects of a Crawler's behavior.</p> <p>You can use this field to force
     * partitions to inherit metadata such as classification, input format, output
     * format, serde information, and schema from their parent table, rather than
     * detect this information separately for each partition. Use the following JSON
     * string to specify that behavior:</p> <p>Example: <code>'{ "Version": 1.0,
     * "CrawlerOutput": { "Partitions": { "AddOrUpdateBehavior": "InheritFromTable" } }
     * }'</code> </p>
     */
    inline const Aws::String& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Crawler configuration information. This versioned JSON string allows users to
     * specify aspects of a Crawler's behavior.</p> <p>You can use this field to force
     * partitions to inherit metadata such as classification, input format, output
     * format, serde information, and schema from their parent table, rather than
     * detect this information separately for each partition. Use the following JSON
     * string to specify that behavior:</p> <p>Example: <code>'{ "Version": 1.0,
     * "CrawlerOutput": { "Partitions": { "AddOrUpdateBehavior": "InheritFromTable" } }
     * }'</code> </p>
     */
    inline void SetConfiguration(const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>Crawler configuration information. This versioned JSON string allows users to
     * specify aspects of a Crawler's behavior.</p> <p>You can use this field to force
     * partitions to inherit metadata such as classification, input format, output
     * format, serde information, and schema from their parent table, rather than
     * detect this information separately for each partition. Use the following JSON
     * string to specify that behavior:</p> <p>Example: <code>'{ "Version": 1.0,
     * "CrawlerOutput": { "Partitions": { "AddOrUpdateBehavior": "InheritFromTable" } }
     * }'</code> </p>
     */
    inline void SetConfiguration(Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>Crawler configuration information. This versioned JSON string allows users to
     * specify aspects of a Crawler's behavior.</p> <p>You can use this field to force
     * partitions to inherit metadata such as classification, input format, output
     * format, serde information, and schema from their parent table, rather than
     * detect this information separately for each partition. Use the following JSON
     * string to specify that behavior:</p> <p>Example: <code>'{ "Version": 1.0,
     * "CrawlerOutput": { "Partitions": { "AddOrUpdateBehavior": "InheritFromTable" } }
     * }'</code> </p>
     */
    inline void SetConfiguration(const char* value) { m_configurationHasBeenSet = true; m_configuration.assign(value); }

    /**
     * <p>Crawler configuration information. This versioned JSON string allows users to
     * specify aspects of a Crawler's behavior.</p> <p>You can use this field to force
     * partitions to inherit metadata such as classification, input format, output
     * format, serde information, and schema from their parent table, rather than
     * detect this information separately for each partition. Use the following JSON
     * string to specify that behavior:</p> <p>Example: <code>'{ "Version": 1.0,
     * "CrawlerOutput": { "Partitions": { "AddOrUpdateBehavior": "InheritFromTable" } }
     * }'</code> </p>
     */
    inline Crawler& WithConfiguration(const Aws::String& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Crawler configuration information. This versioned JSON string allows users to
     * specify aspects of a Crawler's behavior.</p> <p>You can use this field to force
     * partitions to inherit metadata such as classification, input format, output
     * format, serde information, and schema from their parent table, rather than
     * detect this information separately for each partition. Use the following JSON
     * string to specify that behavior:</p> <p>Example: <code>'{ "Version": 1.0,
     * "CrawlerOutput": { "Partitions": { "AddOrUpdateBehavior": "InheritFromTable" } }
     * }'</code> </p>
     */
    inline Crawler& WithConfiguration(Aws::String&& value) { SetConfiguration(std::move(value)); return *this;}

    /**
     * <p>Crawler configuration information. This versioned JSON string allows users to
     * specify aspects of a Crawler's behavior.</p> <p>You can use this field to force
     * partitions to inherit metadata such as classification, input format, output
     * format, serde information, and schema from their parent table, rather than
     * detect this information separately for each partition. Use the following JSON
     * string to specify that behavior:</p> <p>Example: <code>'{ "Version": 1.0,
     * "CrawlerOutput": { "Partitions": { "AddOrUpdateBehavior": "InheritFromTable" } }
     * }'</code> </p>
     */
    inline Crawler& WithConfiguration(const char* value) { SetConfiguration(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_role;
    bool m_roleHasBeenSet;

    CrawlerTargets m_targets;
    bool m_targetsHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Aws::String> m_classifiers;
    bool m_classifiersHasBeenSet;

    SchemaChangePolicy m_schemaChangePolicy;
    bool m_schemaChangePolicyHasBeenSet;

    CrawlerState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_tablePrefix;
    bool m_tablePrefixHasBeenSet;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet;

    long long m_crawlElapsedTime;
    bool m_crawlElapsedTimeHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet;

    LastCrawlInfo m_lastCrawl;
    bool m_lastCrawlHasBeenSet;

    long long m_version;
    bool m_versionHasBeenSet;

    Aws::String m_configuration;
    bool m_configurationHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
