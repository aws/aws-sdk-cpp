/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/AggregateOperation.h>
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
   * <p>Specifies a transform that groups rows by chosen fields and computes the
   * aggregated value by specified function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Aggregate">AWS API
   * Reference</a></p>
   */
  class Aggregate
  {
  public:
    AWS_GLUE_API Aggregate() = default;
    AWS_GLUE_API Aggregate(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aggregate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the transform node.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Aggregate& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the fields and rows to use as inputs for the aggregate
     * transform.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<Aws::String>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<Aws::String>>
    Aggregate& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    Aggregate& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the fields to group by.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<Aws::Vector<Aws::String>>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<Aws::Vector<Aws::String>>>
    Aggregate& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = Aws::Vector<Aws::String>>
    Aggregate& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the aggregate functions to be performed on specified fields. </p>
     */
    inline const Aws::Vector<AggregateOperation>& GetAggs() const { return m_aggs; }
    inline bool AggsHasBeenSet() const { return m_aggsHasBeenSet; }
    template<typename AggsT = Aws::Vector<AggregateOperation>>
    void SetAggs(AggsT&& value) { m_aggsHasBeenSet = true; m_aggs = std::forward<AggsT>(value); }
    template<typename AggsT = Aws::Vector<AggregateOperation>>
    Aggregate& WithAggs(AggsT&& value) { SetAggs(std::forward<AggsT>(value)); return *this;}
    template<typename AggsT = AggregateOperation>
    Aggregate& AddAggs(AggsT&& value) { m_aggsHasBeenSet = true; m_aggs.emplace_back(std::forward<AggsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::Vector<AggregateOperation> m_aggs;
    bool m_aggsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
