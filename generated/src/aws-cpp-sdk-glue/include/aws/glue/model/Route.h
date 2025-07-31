/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/GroupFilters.h>
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
   * <p>Specifies a route node that directs data to different output paths based on
   * defined filtering conditions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Route">AWS API
   * Reference</a></p>
   */
  class Route
  {
  public:
    AWS_GLUE_API Route() = default;
    AWS_GLUE_API Route(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Route& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the route node.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Route& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input connection for the route node.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<Aws::String>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<Aws::String>>
    Route& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    Route& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of group filters that define the routing conditions and criteria for
     * directing data to different output paths.</p>
     */
    inline const Aws::Vector<GroupFilters>& GetGroupFiltersList() const { return m_groupFiltersList; }
    inline bool GroupFiltersListHasBeenSet() const { return m_groupFiltersListHasBeenSet; }
    template<typename GroupFiltersListT = Aws::Vector<GroupFilters>>
    void SetGroupFiltersList(GroupFiltersListT&& value) { m_groupFiltersListHasBeenSet = true; m_groupFiltersList = std::forward<GroupFiltersListT>(value); }
    template<typename GroupFiltersListT = Aws::Vector<GroupFilters>>
    Route& WithGroupFiltersList(GroupFiltersListT&& value) { SetGroupFiltersList(std::forward<GroupFiltersListT>(value)); return *this;}
    template<typename GroupFiltersListT = GroupFilters>
    Route& AddGroupFiltersList(GroupFiltersListT&& value) { m_groupFiltersListHasBeenSet = true; m_groupFiltersList.emplace_back(std::forward<GroupFiltersListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Vector<GroupFilters> m_groupFiltersList;
    bool m_groupFiltersListHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
