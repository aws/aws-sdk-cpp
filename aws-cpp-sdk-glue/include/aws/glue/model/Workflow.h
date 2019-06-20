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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/WorkflowRun.h>
#include <aws/glue/model/WorkflowGraph.h>
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
   * <p>A workflow represents a flow in which AWS Glue components should be executed
   * to complete a logical task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Workflow">AWS API
   * Reference</a></p>
   */
  class AWS_GLUE_API Workflow
  {
  public:
    Workflow();
    Workflow(Aws::Utils::Json::JsonView jsonValue);
    Workflow& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the workflow representing the flow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the workflow representing the flow.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the workflow representing the flow.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the workflow representing the flow.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the workflow representing the flow.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the workflow representing the flow.</p>
     */
    inline Workflow& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the workflow representing the flow.</p>
     */
    inline Workflow& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the workflow representing the flow.</p>
     */
    inline Workflow& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the workflow.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the workflow.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the workflow.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the workflow.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the workflow.</p>
     */
    inline Workflow& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the workflow.</p>
     */
    inline Workflow& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the workflow.</p>
     */
    inline Workflow& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultRunProperties() const{ return m_defaultRunProperties; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline bool DefaultRunPropertiesHasBeenSet() const { return m_defaultRunPropertiesHasBeenSet; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline void SetDefaultRunProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties = value; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline void SetDefaultRunProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties = std::move(value); }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline Workflow& WithDefaultRunProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetDefaultRunProperties(value); return *this;}

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline Workflow& WithDefaultRunProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetDefaultRunProperties(std::move(value)); return *this;}

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline Workflow& AddDefaultRunProperties(const Aws::String& key, const Aws::String& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(key, value); return *this; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline Workflow& AddDefaultRunProperties(Aws::String&& key, const Aws::String& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline Workflow& AddDefaultRunProperties(const Aws::String& key, Aws::String&& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline Workflow& AddDefaultRunProperties(Aws::String&& key, Aws::String&& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline Workflow& AddDefaultRunProperties(const char* key, Aws::String&& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline Workflow& AddDefaultRunProperties(Aws::String&& key, const char* value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline Workflow& AddDefaultRunProperties(const char* key, const char* value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(key, value); return *this; }


    /**
     * <p>The date and time when the workflow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const{ return m_createdOn; }

    /**
     * <p>The date and time when the workflow was created.</p>
     */
    inline bool CreatedOnHasBeenSet() const { return m_createdOnHasBeenSet; }

    /**
     * <p>The date and time when the workflow was created.</p>
     */
    inline void SetCreatedOn(const Aws::Utils::DateTime& value) { m_createdOnHasBeenSet = true; m_createdOn = value; }

    /**
     * <p>The date and time when the workflow was created.</p>
     */
    inline void SetCreatedOn(Aws::Utils::DateTime&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::move(value); }

    /**
     * <p>The date and time when the workflow was created.</p>
     */
    inline Workflow& WithCreatedOn(const Aws::Utils::DateTime& value) { SetCreatedOn(value); return *this;}

    /**
     * <p>The date and time when the workflow was created.</p>
     */
    inline Workflow& WithCreatedOn(Aws::Utils::DateTime&& value) { SetCreatedOn(std::move(value)); return *this;}


    /**
     * <p>The date and time when the workflow was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const{ return m_lastModifiedOn; }

    /**
     * <p>The date and time when the workflow was last modified.</p>
     */
    inline bool LastModifiedOnHasBeenSet() const { return m_lastModifiedOnHasBeenSet; }

    /**
     * <p>The date and time when the workflow was last modified.</p>
     */
    inline void SetLastModifiedOn(const Aws::Utils::DateTime& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = value; }

    /**
     * <p>The date and time when the workflow was last modified.</p>
     */
    inline void SetLastModifiedOn(Aws::Utils::DateTime&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::move(value); }

    /**
     * <p>The date and time when the workflow was last modified.</p>
     */
    inline Workflow& WithLastModifiedOn(const Aws::Utils::DateTime& value) { SetLastModifiedOn(value); return *this;}

    /**
     * <p>The date and time when the workflow was last modified.</p>
     */
    inline Workflow& WithLastModifiedOn(Aws::Utils::DateTime&& value) { SetLastModifiedOn(std::move(value)); return *this;}


    /**
     * <p>The information about the last execution of the workflow.</p>
     */
    inline const WorkflowRun& GetLastRun() const{ return m_lastRun; }

    /**
     * <p>The information about the last execution of the workflow.</p>
     */
    inline bool LastRunHasBeenSet() const { return m_lastRunHasBeenSet; }

    /**
     * <p>The information about the last execution of the workflow.</p>
     */
    inline void SetLastRun(const WorkflowRun& value) { m_lastRunHasBeenSet = true; m_lastRun = value; }

    /**
     * <p>The information about the last execution of the workflow.</p>
     */
    inline void SetLastRun(WorkflowRun&& value) { m_lastRunHasBeenSet = true; m_lastRun = std::move(value); }

    /**
     * <p>The information about the last execution of the workflow.</p>
     */
    inline Workflow& WithLastRun(const WorkflowRun& value) { SetLastRun(value); return *this;}

    /**
     * <p>The information about the last execution of the workflow.</p>
     */
    inline Workflow& WithLastRun(WorkflowRun&& value) { SetLastRun(std::move(value)); return *this;}


    /**
     * <p>The graph representing all the AWS Glue components that belong to the
     * workflow as nodes and directed connections between them as edges.</p>
     */
    inline const WorkflowGraph& GetGraph() const{ return m_graph; }

    /**
     * <p>The graph representing all the AWS Glue components that belong to the
     * workflow as nodes and directed connections between them as edges.</p>
     */
    inline bool GraphHasBeenSet() const { return m_graphHasBeenSet; }

    /**
     * <p>The graph representing all the AWS Glue components that belong to the
     * workflow as nodes and directed connections between them as edges.</p>
     */
    inline void SetGraph(const WorkflowGraph& value) { m_graphHasBeenSet = true; m_graph = value; }

    /**
     * <p>The graph representing all the AWS Glue components that belong to the
     * workflow as nodes and directed connections between them as edges.</p>
     */
    inline void SetGraph(WorkflowGraph&& value) { m_graphHasBeenSet = true; m_graph = std::move(value); }

    /**
     * <p>The graph representing all the AWS Glue components that belong to the
     * workflow as nodes and directed connections between them as edges.</p>
     */
    inline Workflow& WithGraph(const WorkflowGraph& value) { SetGraph(value); return *this;}

    /**
     * <p>The graph representing all the AWS Glue components that belong to the
     * workflow as nodes and directed connections between them as edges.</p>
     */
    inline Workflow& WithGraph(WorkflowGraph&& value) { SetGraph(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_defaultRunProperties;
    bool m_defaultRunPropertiesHasBeenSet;

    Aws::Utils::DateTime m_createdOn;
    bool m_createdOnHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedOn;
    bool m_lastModifiedOnHasBeenSet;

    WorkflowRun m_lastRun;
    bool m_lastRunHasBeenSet;

    WorkflowGraph m_graph;
    bool m_graphHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
