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
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/amplify/model/Stage.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p> Branch for an Amplify App, which maps to a 3rd party repository branch.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/Branch">AWS API
   * Reference</a></p>
   */
  class AWS_AMPLIFY_API Branch
  {
  public:
    Branch();
    Branch(Aws::Utils::Json::JsonView jsonValue);
    Branch& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> ARN for a branch, part of an Amplify App. </p>
     */
    inline const Aws::String& GetBranchArn() const{ return m_branchArn; }

    /**
     * <p> ARN for a branch, part of an Amplify App. </p>
     */
    inline bool BranchArnHasBeenSet() const { return m_branchArnHasBeenSet; }

    /**
     * <p> ARN for a branch, part of an Amplify App. </p>
     */
    inline void SetBranchArn(const Aws::String& value) { m_branchArnHasBeenSet = true; m_branchArn = value; }

    /**
     * <p> ARN for a branch, part of an Amplify App. </p>
     */
    inline void SetBranchArn(Aws::String&& value) { m_branchArnHasBeenSet = true; m_branchArn = std::move(value); }

    /**
     * <p> ARN for a branch, part of an Amplify App. </p>
     */
    inline void SetBranchArn(const char* value) { m_branchArnHasBeenSet = true; m_branchArn.assign(value); }

    /**
     * <p> ARN for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithBranchArn(const Aws::String& value) { SetBranchArn(value); return *this;}

    /**
     * <p> ARN for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithBranchArn(Aws::String&& value) { SetBranchArn(std::move(value)); return *this;}

    /**
     * <p> ARN for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithBranchArn(const char* value) { SetBranchArn(value); return *this;}


    /**
     * <p> Name for a branch, part of an Amplify App. </p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p> Name for a branch, part of an Amplify App. </p>
     */
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }

    /**
     * <p> Name for a branch, part of an Amplify App. </p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p> Name for a branch, part of an Amplify App. </p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }

    /**
     * <p> Name for a branch, part of an Amplify App. </p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p> Name for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p> Name for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p> Name for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithBranchName(const char* value) { SetBranchName(value); return *this;}


    /**
     * <p> Description for a branch, part of an Amplify App. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> Description for a branch, part of an Amplify App. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> Description for a branch, part of an Amplify App. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> Description for a branch, part of an Amplify App. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> Description for a branch, part of an Amplify App. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> Description for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> Description for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> Description for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> Tag for branch for Amplify App. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> Tag for branch for Amplify App. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> Tag for branch for Amplify App. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> Tag for branch for Amplify App. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> Tag for branch for Amplify App. </p>
     */
    inline Branch& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> Tag for branch for Amplify App. </p>
     */
    inline Branch& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> Tag for branch for Amplify App. </p>
     */
    inline Branch& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> Tag for branch for Amplify App. </p>
     */
    inline Branch& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> Tag for branch for Amplify App. </p>
     */
    inline Branch& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Tag for branch for Amplify App. </p>
     */
    inline Branch& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Tag for branch for Amplify App. </p>
     */
    inline Branch& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Tag for branch for Amplify App. </p>
     */
    inline Branch& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> Tag for branch for Amplify App. </p>
     */
    inline Branch& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p> Stage for a branch, part of an Amplify App. </p>
     */
    inline const Stage& GetStage() const{ return m_stage; }

    /**
     * <p> Stage for a branch, part of an Amplify App. </p>
     */
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }

    /**
     * <p> Stage for a branch, part of an Amplify App. </p>
     */
    inline void SetStage(const Stage& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p> Stage for a branch, part of an Amplify App. </p>
     */
    inline void SetStage(Stage&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }

    /**
     * <p> Stage for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithStage(const Stage& value) { SetStage(value); return *this;}

    /**
     * <p> Stage for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithStage(Stage&& value) { SetStage(std::move(value)); return *this;}


    /**
     * <p> Display name for a branch, will use as the default domain prefix. </p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p> Display name for a branch, will use as the default domain prefix. </p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p> Display name for a branch, will use as the default domain prefix. </p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p> Display name for a branch, will use as the default domain prefix. </p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p> Display name for a branch, will use as the default domain prefix. </p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p> Display name for a branch, will use as the default domain prefix. </p>
     */
    inline Branch& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p> Display name for a branch, will use as the default domain prefix. </p>
     */
    inline Branch& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p> Display name for a branch, will use as the default domain prefix. </p>
     */
    inline Branch& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p> Enables notifications for a branch, part of an Amplify App. </p>
     */
    inline bool GetEnableNotification() const{ return m_enableNotification; }

    /**
     * <p> Enables notifications for a branch, part of an Amplify App. </p>
     */
    inline bool EnableNotificationHasBeenSet() const { return m_enableNotificationHasBeenSet; }

    /**
     * <p> Enables notifications for a branch, part of an Amplify App. </p>
     */
    inline void SetEnableNotification(bool value) { m_enableNotificationHasBeenSet = true; m_enableNotification = value; }

    /**
     * <p> Enables notifications for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithEnableNotification(bool value) { SetEnableNotification(value); return *this;}


    /**
     * <p> Creation date and time for a branch, part of an Amplify App. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p> Creation date and time for a branch, part of an Amplify App. </p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p> Creation date and time for a branch, part of an Amplify App. </p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p> Creation date and time for a branch, part of an Amplify App. </p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p> Creation date and time for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p> Creation date and time for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p> Last updated date and time for a branch, part of an Amplify App. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p> Last updated date and time for a branch, part of an Amplify App. </p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p> Last updated date and time for a branch, part of an Amplify App. </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p> Last updated date and time for a branch, part of an Amplify App. </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p> Last updated date and time for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p> Last updated date and time for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    /**
     * <p> Environment Variables specific to a branch, part of an Amplify App. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }

    /**
     * <p> Environment Variables specific to a branch, part of an Amplify App. </p>
     */
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }

    /**
     * <p> Environment Variables specific to a branch, part of an Amplify App. </p>
     */
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }

    /**
     * <p> Environment Variables specific to a branch, part of an Amplify App. </p>
     */
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }

    /**
     * <p> Environment Variables specific to a branch, part of an Amplify App. </p>
     */
    inline Branch& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}

    /**
     * <p> Environment Variables specific to a branch, part of an Amplify App. </p>
     */
    inline Branch& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}

    /**
     * <p> Environment Variables specific to a branch, part of an Amplify App. </p>
     */
    inline Branch& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }

    /**
     * <p> Environment Variables specific to a branch, part of an Amplify App. </p>
     */
    inline Branch& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> Environment Variables specific to a branch, part of an Amplify App. </p>
     */
    inline Branch& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Environment Variables specific to a branch, part of an Amplify App. </p>
     */
    inline Branch& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Environment Variables specific to a branch, part of an Amplify App. </p>
     */
    inline Branch& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Environment Variables specific to a branch, part of an Amplify App. </p>
     */
    inline Branch& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> Environment Variables specific to a branch, part of an Amplify App. </p>
     */
    inline Branch& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }


    /**
     * <p> Enables auto-building on push for a branch, part of an Amplify App. </p>
     */
    inline bool GetEnableAutoBuild() const{ return m_enableAutoBuild; }

    /**
     * <p> Enables auto-building on push for a branch, part of an Amplify App. </p>
     */
    inline bool EnableAutoBuildHasBeenSet() const { return m_enableAutoBuildHasBeenSet; }

    /**
     * <p> Enables auto-building on push for a branch, part of an Amplify App. </p>
     */
    inline void SetEnableAutoBuild(bool value) { m_enableAutoBuildHasBeenSet = true; m_enableAutoBuild = value; }

    /**
     * <p> Enables auto-building on push for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithEnableAutoBuild(bool value) { SetEnableAutoBuild(value); return *this;}


    /**
     * <p> Custom domains for a branch, part of an Amplify App. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomDomains() const{ return m_customDomains; }

    /**
     * <p> Custom domains for a branch, part of an Amplify App. </p>
     */
    inline bool CustomDomainsHasBeenSet() const { return m_customDomainsHasBeenSet; }

    /**
     * <p> Custom domains for a branch, part of an Amplify App. </p>
     */
    inline void SetCustomDomains(const Aws::Vector<Aws::String>& value) { m_customDomainsHasBeenSet = true; m_customDomains = value; }

    /**
     * <p> Custom domains for a branch, part of an Amplify App. </p>
     */
    inline void SetCustomDomains(Aws::Vector<Aws::String>&& value) { m_customDomainsHasBeenSet = true; m_customDomains = std::move(value); }

    /**
     * <p> Custom domains for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithCustomDomains(const Aws::Vector<Aws::String>& value) { SetCustomDomains(value); return *this;}

    /**
     * <p> Custom domains for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithCustomDomains(Aws::Vector<Aws::String>&& value) { SetCustomDomains(std::move(value)); return *this;}

    /**
     * <p> Custom domains for a branch, part of an Amplify App. </p>
     */
    inline Branch& AddCustomDomains(const Aws::String& value) { m_customDomainsHasBeenSet = true; m_customDomains.push_back(value); return *this; }

    /**
     * <p> Custom domains for a branch, part of an Amplify App. </p>
     */
    inline Branch& AddCustomDomains(Aws::String&& value) { m_customDomainsHasBeenSet = true; m_customDomains.push_back(std::move(value)); return *this; }

    /**
     * <p> Custom domains for a branch, part of an Amplify App. </p>
     */
    inline Branch& AddCustomDomains(const char* value) { m_customDomainsHasBeenSet = true; m_customDomains.push_back(value); return *this; }


    /**
     * <p> Framework for a branch, part of an Amplify App. </p>
     */
    inline const Aws::String& GetFramework() const{ return m_framework; }

    /**
     * <p> Framework for a branch, part of an Amplify App. </p>
     */
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }

    /**
     * <p> Framework for a branch, part of an Amplify App. </p>
     */
    inline void SetFramework(const Aws::String& value) { m_frameworkHasBeenSet = true; m_framework = value; }

    /**
     * <p> Framework for a branch, part of an Amplify App. </p>
     */
    inline void SetFramework(Aws::String&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }

    /**
     * <p> Framework for a branch, part of an Amplify App. </p>
     */
    inline void SetFramework(const char* value) { m_frameworkHasBeenSet = true; m_framework.assign(value); }

    /**
     * <p> Framework for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithFramework(const Aws::String& value) { SetFramework(value); return *this;}

    /**
     * <p> Framework for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithFramework(Aws::String&& value) { SetFramework(std::move(value)); return *this;}

    /**
     * <p> Framework for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithFramework(const char* value) { SetFramework(value); return *this;}


    /**
     * <p> Id of the active job for a branch, part of an Amplify App. </p>
     */
    inline const Aws::String& GetActiveJobId() const{ return m_activeJobId; }

    /**
     * <p> Id of the active job for a branch, part of an Amplify App. </p>
     */
    inline bool ActiveJobIdHasBeenSet() const { return m_activeJobIdHasBeenSet; }

    /**
     * <p> Id of the active job for a branch, part of an Amplify App. </p>
     */
    inline void SetActiveJobId(const Aws::String& value) { m_activeJobIdHasBeenSet = true; m_activeJobId = value; }

    /**
     * <p> Id of the active job for a branch, part of an Amplify App. </p>
     */
    inline void SetActiveJobId(Aws::String&& value) { m_activeJobIdHasBeenSet = true; m_activeJobId = std::move(value); }

    /**
     * <p> Id of the active job for a branch, part of an Amplify App. </p>
     */
    inline void SetActiveJobId(const char* value) { m_activeJobIdHasBeenSet = true; m_activeJobId.assign(value); }

    /**
     * <p> Id of the active job for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithActiveJobId(const Aws::String& value) { SetActiveJobId(value); return *this;}

    /**
     * <p> Id of the active job for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithActiveJobId(Aws::String&& value) { SetActiveJobId(std::move(value)); return *this;}

    /**
     * <p> Id of the active job for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithActiveJobId(const char* value) { SetActiveJobId(value); return *this;}


    /**
     * <p> Total number of Jobs part of an Amplify App. </p>
     */
    inline const Aws::String& GetTotalNumberOfJobs() const{ return m_totalNumberOfJobs; }

    /**
     * <p> Total number of Jobs part of an Amplify App. </p>
     */
    inline bool TotalNumberOfJobsHasBeenSet() const { return m_totalNumberOfJobsHasBeenSet; }

    /**
     * <p> Total number of Jobs part of an Amplify App. </p>
     */
    inline void SetTotalNumberOfJobs(const Aws::String& value) { m_totalNumberOfJobsHasBeenSet = true; m_totalNumberOfJobs = value; }

    /**
     * <p> Total number of Jobs part of an Amplify App. </p>
     */
    inline void SetTotalNumberOfJobs(Aws::String&& value) { m_totalNumberOfJobsHasBeenSet = true; m_totalNumberOfJobs = std::move(value); }

    /**
     * <p> Total number of Jobs part of an Amplify App. </p>
     */
    inline void SetTotalNumberOfJobs(const char* value) { m_totalNumberOfJobsHasBeenSet = true; m_totalNumberOfJobs.assign(value); }

    /**
     * <p> Total number of Jobs part of an Amplify App. </p>
     */
    inline Branch& WithTotalNumberOfJobs(const Aws::String& value) { SetTotalNumberOfJobs(value); return *this;}

    /**
     * <p> Total number of Jobs part of an Amplify App. </p>
     */
    inline Branch& WithTotalNumberOfJobs(Aws::String&& value) { SetTotalNumberOfJobs(std::move(value)); return *this;}

    /**
     * <p> Total number of Jobs part of an Amplify App. </p>
     */
    inline Branch& WithTotalNumberOfJobs(const char* value) { SetTotalNumberOfJobs(value); return *this;}


    /**
     * <p> Enables Basic Authorization for a branch, part of an Amplify App. </p>
     */
    inline bool GetEnableBasicAuth() const{ return m_enableBasicAuth; }

    /**
     * <p> Enables Basic Authorization for a branch, part of an Amplify App. </p>
     */
    inline bool EnableBasicAuthHasBeenSet() const { return m_enableBasicAuthHasBeenSet; }

    /**
     * <p> Enables Basic Authorization for a branch, part of an Amplify App. </p>
     */
    inline void SetEnableBasicAuth(bool value) { m_enableBasicAuthHasBeenSet = true; m_enableBasicAuth = value; }

    /**
     * <p> Enables Basic Authorization for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithEnableBasicAuth(bool value) { SetEnableBasicAuth(value); return *this;}


    /**
     * <p> Thumbnail URL for the branch. </p>
     */
    inline const Aws::String& GetThumbnailUrl() const{ return m_thumbnailUrl; }

    /**
     * <p> Thumbnail URL for the branch. </p>
     */
    inline bool ThumbnailUrlHasBeenSet() const { return m_thumbnailUrlHasBeenSet; }

    /**
     * <p> Thumbnail URL for the branch. </p>
     */
    inline void SetThumbnailUrl(const Aws::String& value) { m_thumbnailUrlHasBeenSet = true; m_thumbnailUrl = value; }

    /**
     * <p> Thumbnail URL for the branch. </p>
     */
    inline void SetThumbnailUrl(Aws::String&& value) { m_thumbnailUrlHasBeenSet = true; m_thumbnailUrl = std::move(value); }

    /**
     * <p> Thumbnail URL for the branch. </p>
     */
    inline void SetThumbnailUrl(const char* value) { m_thumbnailUrlHasBeenSet = true; m_thumbnailUrl.assign(value); }

    /**
     * <p> Thumbnail URL for the branch. </p>
     */
    inline Branch& WithThumbnailUrl(const Aws::String& value) { SetThumbnailUrl(value); return *this;}

    /**
     * <p> Thumbnail URL for the branch. </p>
     */
    inline Branch& WithThumbnailUrl(Aws::String&& value) { SetThumbnailUrl(std::move(value)); return *this;}

    /**
     * <p> Thumbnail URL for the branch. </p>
     */
    inline Branch& WithThumbnailUrl(const char* value) { SetThumbnailUrl(value); return *this;}


    /**
     * <p> Basic Authorization credentials for a branch, part of an Amplify App. </p>
     */
    inline const Aws::String& GetBasicAuthCredentials() const{ return m_basicAuthCredentials; }

    /**
     * <p> Basic Authorization credentials for a branch, part of an Amplify App. </p>
     */
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }

    /**
     * <p> Basic Authorization credentials for a branch, part of an Amplify App. </p>
     */
    inline void SetBasicAuthCredentials(const Aws::String& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = value; }

    /**
     * <p> Basic Authorization credentials for a branch, part of an Amplify App. </p>
     */
    inline void SetBasicAuthCredentials(Aws::String&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::move(value); }

    /**
     * <p> Basic Authorization credentials for a branch, part of an Amplify App. </p>
     */
    inline void SetBasicAuthCredentials(const char* value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials.assign(value); }

    /**
     * <p> Basic Authorization credentials for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithBasicAuthCredentials(const Aws::String& value) { SetBasicAuthCredentials(value); return *this;}

    /**
     * <p> Basic Authorization credentials for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithBasicAuthCredentials(Aws::String&& value) { SetBasicAuthCredentials(std::move(value)); return *this;}

    /**
     * <p> Basic Authorization credentials for a branch, part of an Amplify App. </p>
     */
    inline Branch& WithBasicAuthCredentials(const char* value) { SetBasicAuthCredentials(value); return *this;}


    /**
     * <p> BuildSpec content for branch for Amplify App. </p>
     */
    inline const Aws::String& GetBuildSpec() const{ return m_buildSpec; }

    /**
     * <p> BuildSpec content for branch for Amplify App. </p>
     */
    inline bool BuildSpecHasBeenSet() const { return m_buildSpecHasBeenSet; }

    /**
     * <p> BuildSpec content for branch for Amplify App. </p>
     */
    inline void SetBuildSpec(const Aws::String& value) { m_buildSpecHasBeenSet = true; m_buildSpec = value; }

    /**
     * <p> BuildSpec content for branch for Amplify App. </p>
     */
    inline void SetBuildSpec(Aws::String&& value) { m_buildSpecHasBeenSet = true; m_buildSpec = std::move(value); }

    /**
     * <p> BuildSpec content for branch for Amplify App. </p>
     */
    inline void SetBuildSpec(const char* value) { m_buildSpecHasBeenSet = true; m_buildSpec.assign(value); }

    /**
     * <p> BuildSpec content for branch for Amplify App. </p>
     */
    inline Branch& WithBuildSpec(const Aws::String& value) { SetBuildSpec(value); return *this;}

    /**
     * <p> BuildSpec content for branch for Amplify App. </p>
     */
    inline Branch& WithBuildSpec(Aws::String&& value) { SetBuildSpec(std::move(value)); return *this;}

    /**
     * <p> BuildSpec content for branch for Amplify App. </p>
     */
    inline Branch& WithBuildSpec(const char* value) { SetBuildSpec(value); return *this;}


    /**
     * <p> The content TTL for the website in seconds. </p>
     */
    inline const Aws::String& GetTtl() const{ return m_ttl; }

    /**
     * <p> The content TTL for the website in seconds. </p>
     */
    inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }

    /**
     * <p> The content TTL for the website in seconds. </p>
     */
    inline void SetTtl(const Aws::String& value) { m_ttlHasBeenSet = true; m_ttl = value; }

    /**
     * <p> The content TTL for the website in seconds. </p>
     */
    inline void SetTtl(Aws::String&& value) { m_ttlHasBeenSet = true; m_ttl = std::move(value); }

    /**
     * <p> The content TTL for the website in seconds. </p>
     */
    inline void SetTtl(const char* value) { m_ttlHasBeenSet = true; m_ttl.assign(value); }

    /**
     * <p> The content TTL for the website in seconds. </p>
     */
    inline Branch& WithTtl(const Aws::String& value) { SetTtl(value); return *this;}

    /**
     * <p> The content TTL for the website in seconds. </p>
     */
    inline Branch& WithTtl(Aws::String&& value) { SetTtl(std::move(value)); return *this;}

    /**
     * <p> The content TTL for the website in seconds. </p>
     */
    inline Branch& WithTtl(const char* value) { SetTtl(value); return *this;}


    /**
     * <p> List of custom resources that are linked to this branch. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedResources() const{ return m_associatedResources; }

    /**
     * <p> List of custom resources that are linked to this branch. </p>
     */
    inline bool AssociatedResourcesHasBeenSet() const { return m_associatedResourcesHasBeenSet; }

    /**
     * <p> List of custom resources that are linked to this branch. </p>
     */
    inline void SetAssociatedResources(const Aws::Vector<Aws::String>& value) { m_associatedResourcesHasBeenSet = true; m_associatedResources = value; }

    /**
     * <p> List of custom resources that are linked to this branch. </p>
     */
    inline void SetAssociatedResources(Aws::Vector<Aws::String>&& value) { m_associatedResourcesHasBeenSet = true; m_associatedResources = std::move(value); }

    /**
     * <p> List of custom resources that are linked to this branch. </p>
     */
    inline Branch& WithAssociatedResources(const Aws::Vector<Aws::String>& value) { SetAssociatedResources(value); return *this;}

    /**
     * <p> List of custom resources that are linked to this branch. </p>
     */
    inline Branch& WithAssociatedResources(Aws::Vector<Aws::String>&& value) { SetAssociatedResources(std::move(value)); return *this;}

    /**
     * <p> List of custom resources that are linked to this branch. </p>
     */
    inline Branch& AddAssociatedResources(const Aws::String& value) { m_associatedResourcesHasBeenSet = true; m_associatedResources.push_back(value); return *this; }

    /**
     * <p> List of custom resources that are linked to this branch. </p>
     */
    inline Branch& AddAssociatedResources(Aws::String&& value) { m_associatedResourcesHasBeenSet = true; m_associatedResources.push_back(std::move(value)); return *this; }

    /**
     * <p> List of custom resources that are linked to this branch. </p>
     */
    inline Branch& AddAssociatedResources(const char* value) { m_associatedResourcesHasBeenSet = true; m_associatedResources.push_back(value); return *this; }

  private:

    Aws::String m_branchArn;
    bool m_branchArnHasBeenSet;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Stage m_stage;
    bool m_stageHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    bool m_enableNotification;
    bool m_enableNotificationHasBeenSet;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet;

    bool m_enableAutoBuild;
    bool m_enableAutoBuildHasBeenSet;

    Aws::Vector<Aws::String> m_customDomains;
    bool m_customDomainsHasBeenSet;

    Aws::String m_framework;
    bool m_frameworkHasBeenSet;

    Aws::String m_activeJobId;
    bool m_activeJobIdHasBeenSet;

    Aws::String m_totalNumberOfJobs;
    bool m_totalNumberOfJobsHasBeenSet;

    bool m_enableBasicAuth;
    bool m_enableBasicAuthHasBeenSet;

    Aws::String m_thumbnailUrl;
    bool m_thumbnailUrlHasBeenSet;

    Aws::String m_basicAuthCredentials;
    bool m_basicAuthCredentialsHasBeenSet;

    Aws::String m_buildSpec;
    bool m_buildSpecHasBeenSet;

    Aws::String m_ttl;
    bool m_ttlHasBeenSet;

    Aws::Vector<Aws::String> m_associatedResources;
    bool m_associatedResourcesHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
