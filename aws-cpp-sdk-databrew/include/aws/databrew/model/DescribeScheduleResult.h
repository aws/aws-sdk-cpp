/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GlueDataBrew
{
namespace Model
{
  class DescribeScheduleResult
  {
  public:
    AWS_GLUEDATABREW_API DescribeScheduleResult();
    AWS_GLUEDATABREW_API DescribeScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API DescribeScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date and time that the schedule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time that the schedule was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDate = value; }

    /**
     * <p>The date and time that the schedule was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDate = std::move(value); }

    /**
     * <p>The date and time that the schedule was created.</p>
     */
    inline DescribeScheduleResult& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time that the schedule was created.</p>
     */
    inline DescribeScheduleResult& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>The identifier (user name) of the user who created the schedule. </p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The identifier (user name) of the user who created the schedule. </p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The identifier (user name) of the user who created the schedule. </p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The identifier (user name) of the user who created the schedule. </p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The identifier (user name) of the user who created the schedule. </p>
     */
    inline DescribeScheduleResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The identifier (user name) of the user who created the schedule. </p>
     */
    inline DescribeScheduleResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The identifier (user name) of the user who created the schedule. </p>
     */
    inline DescribeScheduleResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The name or names of one or more jobs to be run by using the schedule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobNames() const{ return m_jobNames; }

    /**
     * <p>The name or names of one or more jobs to be run by using the schedule.</p>
     */
    inline void SetJobNames(const Aws::Vector<Aws::String>& value) { m_jobNames = value; }

    /**
     * <p>The name or names of one or more jobs to be run by using the schedule.</p>
     */
    inline void SetJobNames(Aws::Vector<Aws::String>&& value) { m_jobNames = std::move(value); }

    /**
     * <p>The name or names of one or more jobs to be run by using the schedule.</p>
     */
    inline DescribeScheduleResult& WithJobNames(const Aws::Vector<Aws::String>& value) { SetJobNames(value); return *this;}

    /**
     * <p>The name or names of one or more jobs to be run by using the schedule.</p>
     */
    inline DescribeScheduleResult& WithJobNames(Aws::Vector<Aws::String>&& value) { SetJobNames(std::move(value)); return *this;}

    /**
     * <p>The name or names of one or more jobs to be run by using the schedule.</p>
     */
    inline DescribeScheduleResult& AddJobNames(const Aws::String& value) { m_jobNames.push_back(value); return *this; }

    /**
     * <p>The name or names of one or more jobs to be run by using the schedule.</p>
     */
    inline DescribeScheduleResult& AddJobNames(Aws::String&& value) { m_jobNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The name or names of one or more jobs to be run by using the schedule.</p>
     */
    inline DescribeScheduleResult& AddJobNames(const char* value) { m_jobNames.push_back(value); return *this; }


    /**
     * <p>The identifier (user name) of the user who last modified the schedule.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * <p>The identifier (user name) of the user who last modified the schedule.</p>
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedBy = value; }

    /**
     * <p>The identifier (user name) of the user who last modified the schedule.</p>
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedBy = std::move(value); }

    /**
     * <p>The identifier (user name) of the user who last modified the schedule.</p>
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedBy.assign(value); }

    /**
     * <p>The identifier (user name) of the user who last modified the schedule.</p>
     */
    inline DescribeScheduleResult& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>The identifier (user name) of the user who last modified the schedule.</p>
     */
    inline DescribeScheduleResult& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * <p>The identifier (user name) of the user who last modified the schedule.</p>
     */
    inline DescribeScheduleResult& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * <p>The date and time that the schedule was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date and time that the schedule was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }

    /**
     * <p>The date and time that the schedule was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date and time that the schedule was last modified.</p>
     */
    inline DescribeScheduleResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date and time that the schedule was last modified.</p>
     */
    inline DescribeScheduleResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline DescribeScheduleResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline DescribeScheduleResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline DescribeScheduleResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The date or dates and time or times when the jobs are to be run for the
     * schedule. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/jobs.cron.html">Cron
     * expressions</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline const Aws::String& GetCronExpression() const{ return m_cronExpression; }

    /**
     * <p>The date or dates and time or times when the jobs are to be run for the
     * schedule. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/jobs.cron.html">Cron
     * expressions</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline void SetCronExpression(const Aws::String& value) { m_cronExpression = value; }

    /**
     * <p>The date or dates and time or times when the jobs are to be run for the
     * schedule. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/jobs.cron.html">Cron
     * expressions</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline void SetCronExpression(Aws::String&& value) { m_cronExpression = std::move(value); }

    /**
     * <p>The date or dates and time or times when the jobs are to be run for the
     * schedule. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/jobs.cron.html">Cron
     * expressions</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline void SetCronExpression(const char* value) { m_cronExpression.assign(value); }

    /**
     * <p>The date or dates and time or times when the jobs are to be run for the
     * schedule. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/jobs.cron.html">Cron
     * expressions</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline DescribeScheduleResult& WithCronExpression(const Aws::String& value) { SetCronExpression(value); return *this;}

    /**
     * <p>The date or dates and time or times when the jobs are to be run for the
     * schedule. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/jobs.cron.html">Cron
     * expressions</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline DescribeScheduleResult& WithCronExpression(Aws::String&& value) { SetCronExpression(std::move(value)); return *this;}

    /**
     * <p>The date or dates and time or times when the jobs are to be run for the
     * schedule. For more information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/jobs.cron.html">Cron
     * expressions</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline DescribeScheduleResult& WithCronExpression(const char* value) { SetCronExpression(value); return *this;}


    /**
     * <p>Metadata tags associated with this schedule.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata tags associated with this schedule.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Metadata tags associated with this schedule.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Metadata tags associated with this schedule.</p>
     */
    inline DescribeScheduleResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata tags associated with this schedule.</p>
     */
    inline DescribeScheduleResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata tags associated with this schedule.</p>
     */
    inline DescribeScheduleResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata tags associated with this schedule.</p>
     */
    inline DescribeScheduleResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags associated with this schedule.</p>
     */
    inline DescribeScheduleResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags associated with this schedule.</p>
     */
    inline DescribeScheduleResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata tags associated with this schedule.</p>
     */
    inline DescribeScheduleResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags associated with this schedule.</p>
     */
    inline DescribeScheduleResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags associated with this schedule.</p>
     */
    inline DescribeScheduleResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The name of the schedule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the schedule.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the schedule.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the schedule.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the schedule.</p>
     */
    inline DescribeScheduleResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the schedule.</p>
     */
    inline DescribeScheduleResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the schedule.</p>
     */
    inline DescribeScheduleResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::Utils::DateTime m_createDate;

    Aws::String m_createdBy;

    Aws::Vector<Aws::String> m_jobNames;

    Aws::String m_lastModifiedBy;

    Aws::Utils::DateTime m_lastModifiedDate;

    Aws::String m_resourceArn;

    Aws::String m_cronExpression;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_name;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
