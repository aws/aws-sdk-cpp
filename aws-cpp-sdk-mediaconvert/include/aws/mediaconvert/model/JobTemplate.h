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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediaconvert/model/JobTemplateSettings.h>
#include <aws/mediaconvert/model/Type.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * A job template is a pre-made set of encoding instructions that you can use to
   * quickly create a job.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/JobTemplate">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API JobTemplate
  {
  public:
    JobTemplate();
    JobTemplate(Aws::Utils::Json::JsonView jsonValue);
    JobTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline JobTemplate& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline JobTemplate& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline JobTemplate& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * An optional category you create to organize your job templates.
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * An optional category you create to organize your job templates.
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * An optional category you create to organize your job templates.
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * An optional category you create to organize your job templates.
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * An optional category you create to organize your job templates.
     */
    inline JobTemplate& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * An optional category you create to organize your job templates.
     */
    inline JobTemplate& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * An optional category you create to organize your job templates.
     */
    inline JobTemplate& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * The timestamp in epoch seconds for Job template creation.
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * The timestamp in epoch seconds for Job template creation.
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * The timestamp in epoch seconds for Job template creation.
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * The timestamp in epoch seconds for Job template creation.
     */
    inline JobTemplate& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * The timestamp in epoch seconds for Job template creation.
     */
    inline JobTemplate& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * An optional description you create for each job template.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * An optional description you create for each job template.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * An optional description you create for each job template.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * An optional description you create for each job template.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * An optional description you create for each job template.
     */
    inline JobTemplate& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * An optional description you create for each job template.
     */
    inline JobTemplate& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * An optional description you create for each job template.
     */
    inline JobTemplate& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The timestamp in epoch seconds when the Job template was last updated.
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * The timestamp in epoch seconds when the Job template was last updated.
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * The timestamp in epoch seconds when the Job template was last updated.
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * The timestamp in epoch seconds when the Job template was last updated.
     */
    inline JobTemplate& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * The timestamp in epoch seconds when the Job template was last updated.
     */
    inline JobTemplate& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * A name you create for each job template. Each name must be unique within your
     * account.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * A name you create for each job template. Each name must be unique within your
     * account.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * A name you create for each job template. Each name must be unique within your
     * account.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * A name you create for each job template. Each name must be unique within your
     * account.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * A name you create for each job template. Each name must be unique within your
     * account.
     */
    inline JobTemplate& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * A name you create for each job template. Each name must be unique within your
     * account.
     */
    inline JobTemplate& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * A name you create for each job template. Each name must be unique within your
     * account.
     */
    inline JobTemplate& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Optional. The queue that jobs created from this template are assigned to. If you
     * don't specify this, jobs will go to the default queue.
     */
    inline const Aws::String& GetQueue() const{ return m_queue; }

    /**
     * Optional. The queue that jobs created from this template are assigned to. If you
     * don't specify this, jobs will go to the default queue.
     */
    inline void SetQueue(const Aws::String& value) { m_queueHasBeenSet = true; m_queue = value; }

    /**
     * Optional. The queue that jobs created from this template are assigned to. If you
     * don't specify this, jobs will go to the default queue.
     */
    inline void SetQueue(Aws::String&& value) { m_queueHasBeenSet = true; m_queue = std::move(value); }

    /**
     * Optional. The queue that jobs created from this template are assigned to. If you
     * don't specify this, jobs will go to the default queue.
     */
    inline void SetQueue(const char* value) { m_queueHasBeenSet = true; m_queue.assign(value); }

    /**
     * Optional. The queue that jobs created from this template are assigned to. If you
     * don't specify this, jobs will go to the default queue.
     */
    inline JobTemplate& WithQueue(const Aws::String& value) { SetQueue(value); return *this;}

    /**
     * Optional. The queue that jobs created from this template are assigned to. If you
     * don't specify this, jobs will go to the default queue.
     */
    inline JobTemplate& WithQueue(Aws::String&& value) { SetQueue(std::move(value)); return *this;}

    /**
     * Optional. The queue that jobs created from this template are assigned to. If you
     * don't specify this, jobs will go to the default queue.
     */
    inline JobTemplate& WithQueue(const char* value) { SetQueue(value); return *this;}


    
    inline const JobTemplateSettings& GetSettings() const{ return m_settings; }

    
    inline void SetSettings(const JobTemplateSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    
    inline void SetSettings(JobTemplateSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    
    inline JobTemplate& WithSettings(const JobTemplateSettings& value) { SetSettings(value); return *this;}

    
    inline JobTemplate& WithSettings(JobTemplateSettings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * A job template can be of two types: system or custom. System or built-in job
     * templates can't be modified or deleted by the user.
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * A job template can be of two types: system or custom. System or built-in job
     * templates can't be modified or deleted by the user.
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * A job template can be of two types: system or custom. System or built-in job
     * templates can't be modified or deleted by the user.
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * A job template can be of two types: system or custom. System or built-in job
     * templates can't be modified or deleted by the user.
     */
    inline JobTemplate& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * A job template can be of two types: system or custom. System or built-in job
     * templates can't be modified or deleted by the user.
     */
    inline JobTemplate& WithType(Type&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_category;
    bool m_categoryHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_queue;
    bool m_queueHasBeenSet;

    JobTemplateSettings m_settings;
    bool m_settingsHasBeenSet;

    Type m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
