/*
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
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/CrawlerTargets.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/SchemaChangePolicy.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API UpdateCrawlerRequest : public GlueRequest
  {
  public:
    UpdateCrawlerRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCrawler"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of the new <code>Crawler</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the new <code>Crawler</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the new <code>Crawler</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the new <code>Crawler</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the new <code>Crawler</code>.</p>
     */
    inline UpdateCrawlerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the new <code>Crawler</code>.</p>
     */
    inline UpdateCrawlerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the new <code>Crawler</code>.</p>
     */
    inline UpdateCrawlerRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The AWS ARN of the IAM role used by the new <code>Crawler</code> to access
     * customer resources.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The AWS ARN of the IAM role used by the new <code>Crawler</code> to access
     * customer resources.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The AWS ARN of the IAM role used by the new <code>Crawler</code> to access
     * customer resources.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The AWS ARN of the IAM role used by the new <code>Crawler</code> to access
     * customer resources.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The AWS ARN of the IAM role used by the new <code>Crawler</code> to access
     * customer resources.</p>
     */
    inline UpdateCrawlerRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The AWS ARN of the IAM role used by the new <code>Crawler</code> to access
     * customer resources.</p>
     */
    inline UpdateCrawlerRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The AWS ARN of the IAM role used by the new <code>Crawler</code> to access
     * customer resources.</p>
     */
    inline UpdateCrawlerRequest& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The Glue <code>Database</code> where results will be stored, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The Glue <code>Database</code> where results will be stored, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The Glue <code>Database</code> where results will be stored, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The Glue <code>Database</code> where results will be stored, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The Glue <code>Database</code> where results will be stored, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline UpdateCrawlerRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The Glue <code>Database</code> where results will be stored, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline UpdateCrawlerRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The Glue <code>Database</code> where results will be stored, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline UpdateCrawlerRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>A description of the new <code>Crawler</code>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the new <code>Crawler</code>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the new <code>Crawler</code>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the new <code>Crawler</code>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the new <code>Crawler</code>.</p>
     */
    inline UpdateCrawlerRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the new <code>Crawler</code>.</p>
     */
    inline UpdateCrawlerRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the new <code>Crawler</code>.</p>
     */
    inline UpdateCrawlerRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of collection of targets to crawl.</p>
     */
    inline const CrawlerTargets& GetTargets() const{ return m_targets; }

    /**
     * <p>A list of collection of targets to crawl.</p>
     */
    inline void SetTargets(const CrawlerTargets& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>A list of collection of targets to crawl.</p>
     */
    inline void SetTargets(CrawlerTargets&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>A list of collection of targets to crawl.</p>
     */
    inline UpdateCrawlerRequest& WithTargets(const CrawlerTargets& value) { SetTargets(value); return *this;}

    /**
     * <p>A list of collection of targets to crawl.</p>
     */
    inline UpdateCrawlerRequest& WithTargets(CrawlerTargets&& value) { SetTargets(std::move(value)); return *this;}


    /**
     * <p>A cron expression that can be used as a Cloudwatch event (see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">CloudWatch
     * Schedule Expression Syntax</a>. For example, to run every day at 12:15 UTC,
     * specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }

    /**
     * <p>A cron expression that can be used as a Cloudwatch event (see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">CloudWatch
     * Schedule Expression Syntax</a>. For example, to run every day at 12:15 UTC,
     * specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline void SetSchedule(const Aws::String& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>A cron expression that can be used as a Cloudwatch event (see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">CloudWatch
     * Schedule Expression Syntax</a>. For example, to run every day at 12:15 UTC,
     * specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline void SetSchedule(Aws::String&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>A cron expression that can be used as a Cloudwatch event (see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">CloudWatch
     * Schedule Expression Syntax</a>. For example, to run every day at 12:15 UTC,
     * specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline void SetSchedule(const char* value) { m_scheduleHasBeenSet = true; m_schedule.assign(value); }

    /**
     * <p>A cron expression that can be used as a Cloudwatch event (see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">CloudWatch
     * Schedule Expression Syntax</a>. For example, to run every day at 12:15 UTC,
     * specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline UpdateCrawlerRequest& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}

    /**
     * <p>A cron expression that can be used as a Cloudwatch event (see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">CloudWatch
     * Schedule Expression Syntax</a>. For example, to run every day at 12:15 UTC,
     * specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline UpdateCrawlerRequest& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}

    /**
     * <p>A cron expression that can be used as a Cloudwatch event (see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">CloudWatch
     * Schedule Expression Syntax</a>. For example, to run every day at 12:15 UTC,
     * specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline UpdateCrawlerRequest& WithSchedule(const char* value) { SetSchedule(value); return *this;}


    /**
     * <p>A list of custom <code>Classifier</code> names that the user has registered.
     * By default, all AWS classifiers are included in a crawl, but these custom
     * classifiers always override the default classifiers for a given
     * classification.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClassifiers() const{ return m_classifiers; }

    /**
     * <p>A list of custom <code>Classifier</code> names that the user has registered.
     * By default, all AWS classifiers are included in a crawl, but these custom
     * classifiers always override the default classifiers for a given
     * classification.</p>
     */
    inline void SetClassifiers(const Aws::Vector<Aws::String>& value) { m_classifiersHasBeenSet = true; m_classifiers = value; }

    /**
     * <p>A list of custom <code>Classifier</code> names that the user has registered.
     * By default, all AWS classifiers are included in a crawl, but these custom
     * classifiers always override the default classifiers for a given
     * classification.</p>
     */
    inline void SetClassifiers(Aws::Vector<Aws::String>&& value) { m_classifiersHasBeenSet = true; m_classifiers = std::move(value); }

    /**
     * <p>A list of custom <code>Classifier</code> names that the user has registered.
     * By default, all AWS classifiers are included in a crawl, but these custom
     * classifiers always override the default classifiers for a given
     * classification.</p>
     */
    inline UpdateCrawlerRequest& WithClassifiers(const Aws::Vector<Aws::String>& value) { SetClassifiers(value); return *this;}

    /**
     * <p>A list of custom <code>Classifier</code> names that the user has registered.
     * By default, all AWS classifiers are included in a crawl, but these custom
     * classifiers always override the default classifiers for a given
     * classification.</p>
     */
    inline UpdateCrawlerRequest& WithClassifiers(Aws::Vector<Aws::String>&& value) { SetClassifiers(std::move(value)); return *this;}

    /**
     * <p>A list of custom <code>Classifier</code> names that the user has registered.
     * By default, all AWS classifiers are included in a crawl, but these custom
     * classifiers always override the default classifiers for a given
     * classification.</p>
     */
    inline UpdateCrawlerRequest& AddClassifiers(const Aws::String& value) { m_classifiersHasBeenSet = true; m_classifiers.push_back(value); return *this; }

    /**
     * <p>A list of custom <code>Classifier</code> names that the user has registered.
     * By default, all AWS classifiers are included in a crawl, but these custom
     * classifiers always override the default classifiers for a given
     * classification.</p>
     */
    inline UpdateCrawlerRequest& AddClassifiers(Aws::String&& value) { m_classifiersHasBeenSet = true; m_classifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of custom <code>Classifier</code> names that the user has registered.
     * By default, all AWS classifiers are included in a crawl, but these custom
     * classifiers always override the default classifiers for a given
     * classification.</p>
     */
    inline UpdateCrawlerRequest& AddClassifiers(const char* value) { m_classifiersHasBeenSet = true; m_classifiers.push_back(value); return *this; }


    /**
     * <p>The table prefix used for catalog tables created.</p>
     */
    inline const Aws::String& GetTablePrefix() const{ return m_tablePrefix; }

    /**
     * <p>The table prefix used for catalog tables created.</p>
     */
    inline void SetTablePrefix(const Aws::String& value) { m_tablePrefixHasBeenSet = true; m_tablePrefix = value; }

    /**
     * <p>The table prefix used for catalog tables created.</p>
     */
    inline void SetTablePrefix(Aws::String&& value) { m_tablePrefixHasBeenSet = true; m_tablePrefix = std::move(value); }

    /**
     * <p>The table prefix used for catalog tables created.</p>
     */
    inline void SetTablePrefix(const char* value) { m_tablePrefixHasBeenSet = true; m_tablePrefix.assign(value); }

    /**
     * <p>The table prefix used for catalog tables created.</p>
     */
    inline UpdateCrawlerRequest& WithTablePrefix(const Aws::String& value) { SetTablePrefix(value); return *this;}

    /**
     * <p>The table prefix used for catalog tables created.</p>
     */
    inline UpdateCrawlerRequest& WithTablePrefix(Aws::String&& value) { SetTablePrefix(std::move(value)); return *this;}

    /**
     * <p>The table prefix used for catalog tables created.</p>
     */
    inline UpdateCrawlerRequest& WithTablePrefix(const char* value) { SetTablePrefix(value); return *this;}


    /**
     * <p>Policy for the crawler's update and deletion behavior.</p>
     */
    inline const SchemaChangePolicy& GetSchemaChangePolicy() const{ return m_schemaChangePolicy; }

    /**
     * <p>Policy for the crawler's update and deletion behavior.</p>
     */
    inline void SetSchemaChangePolicy(const SchemaChangePolicy& value) { m_schemaChangePolicyHasBeenSet = true; m_schemaChangePolicy = value; }

    /**
     * <p>Policy for the crawler's update and deletion behavior.</p>
     */
    inline void SetSchemaChangePolicy(SchemaChangePolicy&& value) { m_schemaChangePolicyHasBeenSet = true; m_schemaChangePolicy = std::move(value); }

    /**
     * <p>Policy for the crawler's update and deletion behavior.</p>
     */
    inline UpdateCrawlerRequest& WithSchemaChangePolicy(const SchemaChangePolicy& value) { SetSchemaChangePolicy(value); return *this;}

    /**
     * <p>Policy for the crawler's update and deletion behavior.</p>
     */
    inline UpdateCrawlerRequest& WithSchemaChangePolicy(SchemaChangePolicy&& value) { SetSchemaChangePolicy(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_role;
    bool m_roleHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    CrawlerTargets m_targets;
    bool m_targetsHasBeenSet;

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet;

    Aws::Vector<Aws::String> m_classifiers;
    bool m_classifiersHasBeenSet;

    Aws::String m_tablePrefix;
    bool m_tablePrefixHasBeenSet;

    SchemaChangePolicy m_schemaChangePolicy;
    bool m_schemaChangePolicyHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
