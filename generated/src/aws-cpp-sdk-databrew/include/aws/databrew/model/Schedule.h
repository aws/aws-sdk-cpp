/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents one or more dates and times when a job is to run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/Schedule">AWS
   * API Reference</a></p>
   */
  class Schedule
  {
  public:
    AWS_GLUEDATABREW_API Schedule();
    AWS_GLUEDATABREW_API Schedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Schedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Amazon Web Services account that owns the schedule.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the schedule.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the schedule.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the schedule.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the schedule.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the schedule.</p>
     */
    inline Schedule& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the schedule.</p>
     */
    inline Schedule& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the schedule.</p>
     */
    inline Schedule& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the schedule.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the schedule.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the schedule.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the schedule.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the schedule.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the schedule.</p>
     */
    inline Schedule& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the schedule.</p>
     */
    inline Schedule& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the schedule.</p>
     */
    inline Schedule& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The date and time that the schedule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time that the schedule was created.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date and time that the schedule was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time that the schedule was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time that the schedule was created.</p>
     */
    inline Schedule& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time that the schedule was created.</p>
     */
    inline Schedule& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>A list of jobs to be run, according to the schedule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobNames() const{ return m_jobNames; }

    /**
     * <p>A list of jobs to be run, according to the schedule.</p>
     */
    inline bool JobNamesHasBeenSet() const { return m_jobNamesHasBeenSet; }

    /**
     * <p>A list of jobs to be run, according to the schedule.</p>
     */
    inline void SetJobNames(const Aws::Vector<Aws::String>& value) { m_jobNamesHasBeenSet = true; m_jobNames = value; }

    /**
     * <p>A list of jobs to be run, according to the schedule.</p>
     */
    inline void SetJobNames(Aws::Vector<Aws::String>&& value) { m_jobNamesHasBeenSet = true; m_jobNames = std::move(value); }

    /**
     * <p>A list of jobs to be run, according to the schedule.</p>
     */
    inline Schedule& WithJobNames(const Aws::Vector<Aws::String>& value) { SetJobNames(value); return *this;}

    /**
     * <p>A list of jobs to be run, according to the schedule.</p>
     */
    inline Schedule& WithJobNames(Aws::Vector<Aws::String>&& value) { SetJobNames(std::move(value)); return *this;}

    /**
     * <p>A list of jobs to be run, according to the schedule.</p>
     */
    inline Schedule& AddJobNames(const Aws::String& value) { m_jobNamesHasBeenSet = true; m_jobNames.push_back(value); return *this; }

    /**
     * <p>A list of jobs to be run, according to the schedule.</p>
     */
    inline Schedule& AddJobNames(Aws::String&& value) { m_jobNamesHasBeenSet = true; m_jobNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of jobs to be run, according to the schedule.</p>
     */
    inline Schedule& AddJobNames(const char* value) { m_jobNamesHasBeenSet = true; m_jobNames.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the
     * schedule.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the
     * schedule.</p>
     */
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the
     * schedule.</p>
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the
     * schedule.</p>
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the
     * schedule.</p>
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the
     * schedule.</p>
     */
    inline Schedule& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the
     * schedule.</p>
     */
    inline Schedule& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the
     * schedule.</p>
     */
    inline Schedule& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * <p>The date and time when the schedule was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date and time when the schedule was last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date and time when the schedule was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date and time when the schedule was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date and time when the schedule was last modified.</p>
     */
    inline Schedule& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date and time when the schedule was last modified.</p>
     */
    inline Schedule& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline Schedule& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline Schedule& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline Schedule& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The dates and times when the job is to run. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/jobs.cron.html">Cron
     * expressions</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline const Aws::String& GetCronExpression() const{ return m_cronExpression; }

    /**
     * <p>The dates and times when the job is to run. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/jobs.cron.html">Cron
     * expressions</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline bool CronExpressionHasBeenSet() const { return m_cronExpressionHasBeenSet; }

    /**
     * <p>The dates and times when the job is to run. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/jobs.cron.html">Cron
     * expressions</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline void SetCronExpression(const Aws::String& value) { m_cronExpressionHasBeenSet = true; m_cronExpression = value; }

    /**
     * <p>The dates and times when the job is to run. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/jobs.cron.html">Cron
     * expressions</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline void SetCronExpression(Aws::String&& value) { m_cronExpressionHasBeenSet = true; m_cronExpression = std::move(value); }

    /**
     * <p>The dates and times when the job is to run. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/jobs.cron.html">Cron
     * expressions</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline void SetCronExpression(const char* value) { m_cronExpressionHasBeenSet = true; m_cronExpression.assign(value); }

    /**
     * <p>The dates and times when the job is to run. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/jobs.cron.html">Cron
     * expressions</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline Schedule& WithCronExpression(const Aws::String& value) { SetCronExpression(value); return *this;}

    /**
     * <p>The dates and times when the job is to run. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/jobs.cron.html">Cron
     * expressions</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline Schedule& WithCronExpression(Aws::String&& value) { SetCronExpression(std::move(value)); return *this;}

    /**
     * <p>The dates and times when the job is to run. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/jobs.cron.html">Cron
     * expressions</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline Schedule& WithCronExpression(const char* value) { SetCronExpression(value); return *this;}


    /**
     * <p>Metadata tags that have been applied to the schedule.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata tags that have been applied to the schedule.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata tags that have been applied to the schedule.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata tags that have been applied to the schedule.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata tags that have been applied to the schedule.</p>
     */
    inline Schedule& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata tags that have been applied to the schedule.</p>
     */
    inline Schedule& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata tags that have been applied to the schedule.</p>
     */
    inline Schedule& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the schedule.</p>
     */
    inline Schedule& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the schedule.</p>
     */
    inline Schedule& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the schedule.</p>
     */
    inline Schedule& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the schedule.</p>
     */
    inline Schedule& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the schedule.</p>
     */
    inline Schedule& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the schedule.</p>
     */
    inline Schedule& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The name of the schedule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the schedule.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the schedule.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the schedule.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the schedule.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the schedule.</p>
     */
    inline Schedule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the schedule.</p>
     */
    inline Schedule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the schedule.</p>
     */
    inline Schedule& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::Vector<Aws::String> m_jobNames;
    bool m_jobNamesHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_cronExpression;
    bool m_cronExpressionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
