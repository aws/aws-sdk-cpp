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
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mobile/model/ProjectState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mobile/model/Resource.h>
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
namespace Mobile
{
namespace Model
{

  /**
   * <p> Detailed information about an AWS Mobile Hub project. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ProjectDetails">AWS
   * API Reference</a></p>
   */
  class AWS_MOBILE_API ProjectDetails
  {
  public:
    ProjectDetails();
    ProjectDetails(Aws::Utils::Json::JsonView jsonValue);
    ProjectDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline ProjectDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline ProjectDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline ProjectDetails& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }

    
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }

    
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }

    
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }

    
    inline ProjectDetails& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    
    inline ProjectDetails& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    
    inline ProjectDetails& WithProjectId(const char* value) { SetProjectId(value); return *this;}


    
    inline const Aws::String& GetRegion() const{ return m_region; }

    
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    
    inline ProjectDetails& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    
    inline ProjectDetails& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    
    inline ProjectDetails& WithRegion(const char* value) { SetRegion(value); return *this;}


    
    inline const ProjectState& GetState() const{ return m_state; }

    
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    
    inline void SetState(const ProjectState& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(ProjectState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    
    inline ProjectDetails& WithState(const ProjectState& value) { SetState(value); return *this;}

    
    inline ProjectDetails& WithState(ProjectState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p> Date the project was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p> Date the project was created. </p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p> Date the project was created. </p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p> Date the project was created. </p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p> Date the project was created. </p>
     */
    inline ProjectDetails& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p> Date the project was created. </p>
     */
    inline ProjectDetails& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p> Date of the last modification of the project. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p> Date of the last modification of the project. </p>
     */
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }

    /**
     * <p> Date of the last modification of the project. </p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }

    /**
     * <p> Date of the last modification of the project. </p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::move(value); }

    /**
     * <p> Date of the last modification of the project. </p>
     */
    inline ProjectDetails& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p> Date of the last modification of the project. </p>
     */
    inline ProjectDetails& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}


    /**
     * <p> Website URL for this project in the AWS Mobile Hub console. </p>
     */
    inline const Aws::String& GetConsoleUrl() const{ return m_consoleUrl; }

    /**
     * <p> Website URL for this project in the AWS Mobile Hub console. </p>
     */
    inline bool ConsoleUrlHasBeenSet() const { return m_consoleUrlHasBeenSet; }

    /**
     * <p> Website URL for this project in the AWS Mobile Hub console. </p>
     */
    inline void SetConsoleUrl(const Aws::String& value) { m_consoleUrlHasBeenSet = true; m_consoleUrl = value; }

    /**
     * <p> Website URL for this project in the AWS Mobile Hub console. </p>
     */
    inline void SetConsoleUrl(Aws::String&& value) { m_consoleUrlHasBeenSet = true; m_consoleUrl = std::move(value); }

    /**
     * <p> Website URL for this project in the AWS Mobile Hub console. </p>
     */
    inline void SetConsoleUrl(const char* value) { m_consoleUrlHasBeenSet = true; m_consoleUrl.assign(value); }

    /**
     * <p> Website URL for this project in the AWS Mobile Hub console. </p>
     */
    inline ProjectDetails& WithConsoleUrl(const Aws::String& value) { SetConsoleUrl(value); return *this;}

    /**
     * <p> Website URL for this project in the AWS Mobile Hub console. </p>
     */
    inline ProjectDetails& WithConsoleUrl(Aws::String&& value) { SetConsoleUrl(std::move(value)); return *this;}

    /**
     * <p> Website URL for this project in the AWS Mobile Hub console. </p>
     */
    inline ProjectDetails& WithConsoleUrl(const char* value) { SetConsoleUrl(value); return *this;}


    
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }

    
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    
    inline ProjectDetails& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}

    
    inline ProjectDetails& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}

    
    inline ProjectDetails& AddResources(const Resource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    
    inline ProjectDetails& AddResources(Resource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    ProjectState m_state;
    bool m_stateHasBeenSet;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedDate;
    bool m_lastUpdatedDateHasBeenSet;

    Aws::String m_consoleUrl;
    bool m_consoleUrlHasBeenSet;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
