/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/WorkflowRun.h>
#include <aws/glue/model/WorkflowGraph.h>
#include <aws/glue/model/BlueprintDetails.h>
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
   * <p>A workflow is a collection of multiple dependent Glue jobs and crawlers that
   * are run to complete a complex ETL task. A workflow manages the execution and
   * monitoring of all its jobs and crawlers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Workflow">AWS API
   * Reference</a></p>
   */
  class Workflow
  {
  public:
    AWS_GLUE_API Workflow() = default;
    AWS_GLUE_API Workflow(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Workflow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the workflow.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Workflow& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the workflow.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Workflow& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow. The run properties are made available to each job in the workflow. A
     * job can modify the properties for the next jobs in the flow.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultRunProperties() const { return m_defaultRunProperties; }
    inline bool DefaultRunPropertiesHasBeenSet() const { return m_defaultRunPropertiesHasBeenSet; }
    template<typename DefaultRunPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetDefaultRunProperties(DefaultRunPropertiesT&& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties = std::forward<DefaultRunPropertiesT>(value); }
    template<typename DefaultRunPropertiesT = Aws::Map<Aws::String, Aws::String>>
    Workflow& WithDefaultRunProperties(DefaultRunPropertiesT&& value) { SetDefaultRunProperties(std::forward<DefaultRunPropertiesT>(value)); return *this;}
    template<typename DefaultRunPropertiesKeyT = Aws::String, typename DefaultRunPropertiesValueT = Aws::String>
    Workflow& AddDefaultRunProperties(DefaultRunPropertiesKeyT&& key, DefaultRunPropertiesValueT&& value) {
      m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(std::forward<DefaultRunPropertiesKeyT>(key), std::forward<DefaultRunPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The date and time when the workflow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const { return m_createdOn; }
    inline bool CreatedOnHasBeenSet() const { return m_createdOnHasBeenSet; }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    void SetCreatedOn(CreatedOnT&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::forward<CreatedOnT>(value); }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    Workflow& WithCreatedOn(CreatedOnT&& value) { SetCreatedOn(std::forward<CreatedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the workflow was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const { return m_lastModifiedOn; }
    inline bool LastModifiedOnHasBeenSet() const { return m_lastModifiedOnHasBeenSet; }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    void SetLastModifiedOn(LastModifiedOnT&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::forward<LastModifiedOnT>(value); }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    Workflow& WithLastModifiedOn(LastModifiedOnT&& value) { SetLastModifiedOn(std::forward<LastModifiedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information about the last execution of the workflow.</p>
     */
    inline const WorkflowRun& GetLastRun() const { return m_lastRun; }
    inline bool LastRunHasBeenSet() const { return m_lastRunHasBeenSet; }
    template<typename LastRunT = WorkflowRun>
    void SetLastRun(LastRunT&& value) { m_lastRunHasBeenSet = true; m_lastRun = std::forward<LastRunT>(value); }
    template<typename LastRunT = WorkflowRun>
    Workflow& WithLastRun(LastRunT&& value) { SetLastRun(std::forward<LastRunT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The graph representing all the Glue components that belong to the workflow as
     * nodes and directed connections between them as edges.</p>
     */
    inline const WorkflowGraph& GetGraph() const { return m_graph; }
    inline bool GraphHasBeenSet() const { return m_graphHasBeenSet; }
    template<typename GraphT = WorkflowGraph>
    void SetGraph(GraphT&& value) { m_graphHasBeenSet = true; m_graph = std::forward<GraphT>(value); }
    template<typename GraphT = WorkflowGraph>
    Workflow& WithGraph(GraphT&& value) { SetGraph(std::forward<GraphT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use this parameter to prevent unwanted multiple updates to data, to
     * control costs, or in some cases, to prevent exceeding the maximum number of
     * concurrent runs of any of the component jobs. If you leave this parameter blank,
     * there is no limit to the number of concurrent workflow runs.</p>
     */
    inline int GetMaxConcurrentRuns() const { return m_maxConcurrentRuns; }
    inline bool MaxConcurrentRunsHasBeenSet() const { return m_maxConcurrentRunsHasBeenSet; }
    inline void SetMaxConcurrentRuns(int value) { m_maxConcurrentRunsHasBeenSet = true; m_maxConcurrentRuns = value; }
    inline Workflow& WithMaxConcurrentRuns(int value) { SetMaxConcurrentRuns(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure indicates the details of the blueprint that this particular
     * workflow is created from.</p>
     */
    inline const BlueprintDetails& GetBlueprintDetails() const { return m_blueprintDetails; }
    inline bool BlueprintDetailsHasBeenSet() const { return m_blueprintDetailsHasBeenSet; }
    template<typename BlueprintDetailsT = BlueprintDetails>
    void SetBlueprintDetails(BlueprintDetailsT&& value) { m_blueprintDetailsHasBeenSet = true; m_blueprintDetails = std::forward<BlueprintDetailsT>(value); }
    template<typename BlueprintDetailsT = BlueprintDetails>
    Workflow& WithBlueprintDetails(BlueprintDetailsT&& value) { SetBlueprintDetails(std::forward<BlueprintDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_defaultRunProperties;
    bool m_defaultRunPropertiesHasBeenSet = false;

    Aws::Utils::DateTime m_createdOn{};
    bool m_createdOnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedOn{};
    bool m_lastModifiedOnHasBeenSet = false;

    WorkflowRun m_lastRun;
    bool m_lastRunHasBeenSet = false;

    WorkflowGraph m_graph;
    bool m_graphHasBeenSet = false;

    int m_maxConcurrentRuns{0};
    bool m_maxConcurrentRunsHasBeenSet = false;

    BlueprintDetails m_blueprintDetails;
    bool m_blueprintDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
