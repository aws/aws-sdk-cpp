/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A structure that defines search criteria for contacts using agent hierarchy
   * group levels. For more information about agent hierarchies, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/agent-hierarchy.html">Set
   * Up Agent Hierarchies</a> in the <i>Amazon Connect Administrator
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AgentHierarchyGroups">AWS
   * API Reference</a></p>
   */
  class AgentHierarchyGroups
  {
  public:
    AWS_CONNECT_API AgentHierarchyGroups() = default;
    AWS_CONNECT_API AgentHierarchyGroups(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AgentHierarchyGroups& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifiers for level 1 hierarchy groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetL1Ids() const { return m_l1Ids; }
    inline bool L1IdsHasBeenSet() const { return m_l1IdsHasBeenSet; }
    template<typename L1IdsT = Aws::Vector<Aws::String>>
    void SetL1Ids(L1IdsT&& value) { m_l1IdsHasBeenSet = true; m_l1Ids = std::forward<L1IdsT>(value); }
    template<typename L1IdsT = Aws::Vector<Aws::String>>
    AgentHierarchyGroups& WithL1Ids(L1IdsT&& value) { SetL1Ids(std::forward<L1IdsT>(value)); return *this;}
    template<typename L1IdsT = Aws::String>
    AgentHierarchyGroups& AddL1Ids(L1IdsT&& value) { m_l1IdsHasBeenSet = true; m_l1Ids.emplace_back(std::forward<L1IdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifiers for level 2 hierarchy groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetL2Ids() const { return m_l2Ids; }
    inline bool L2IdsHasBeenSet() const { return m_l2IdsHasBeenSet; }
    template<typename L2IdsT = Aws::Vector<Aws::String>>
    void SetL2Ids(L2IdsT&& value) { m_l2IdsHasBeenSet = true; m_l2Ids = std::forward<L2IdsT>(value); }
    template<typename L2IdsT = Aws::Vector<Aws::String>>
    AgentHierarchyGroups& WithL2Ids(L2IdsT&& value) { SetL2Ids(std::forward<L2IdsT>(value)); return *this;}
    template<typename L2IdsT = Aws::String>
    AgentHierarchyGroups& AddL2Ids(L2IdsT&& value) { m_l2IdsHasBeenSet = true; m_l2Ids.emplace_back(std::forward<L2IdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifiers for level 3 hierarchy groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetL3Ids() const { return m_l3Ids; }
    inline bool L3IdsHasBeenSet() const { return m_l3IdsHasBeenSet; }
    template<typename L3IdsT = Aws::Vector<Aws::String>>
    void SetL3Ids(L3IdsT&& value) { m_l3IdsHasBeenSet = true; m_l3Ids = std::forward<L3IdsT>(value); }
    template<typename L3IdsT = Aws::Vector<Aws::String>>
    AgentHierarchyGroups& WithL3Ids(L3IdsT&& value) { SetL3Ids(std::forward<L3IdsT>(value)); return *this;}
    template<typename L3IdsT = Aws::String>
    AgentHierarchyGroups& AddL3Ids(L3IdsT&& value) { m_l3IdsHasBeenSet = true; m_l3Ids.emplace_back(std::forward<L3IdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifiers for level 4 hierarchy groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetL4Ids() const { return m_l4Ids; }
    inline bool L4IdsHasBeenSet() const { return m_l4IdsHasBeenSet; }
    template<typename L4IdsT = Aws::Vector<Aws::String>>
    void SetL4Ids(L4IdsT&& value) { m_l4IdsHasBeenSet = true; m_l4Ids = std::forward<L4IdsT>(value); }
    template<typename L4IdsT = Aws::Vector<Aws::String>>
    AgentHierarchyGroups& WithL4Ids(L4IdsT&& value) { SetL4Ids(std::forward<L4IdsT>(value)); return *this;}
    template<typename L4IdsT = Aws::String>
    AgentHierarchyGroups& AddL4Ids(L4IdsT&& value) { m_l4IdsHasBeenSet = true; m_l4Ids.emplace_back(std::forward<L4IdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifiers for level 5 hierarchy groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetL5Ids() const { return m_l5Ids; }
    inline bool L5IdsHasBeenSet() const { return m_l5IdsHasBeenSet; }
    template<typename L5IdsT = Aws::Vector<Aws::String>>
    void SetL5Ids(L5IdsT&& value) { m_l5IdsHasBeenSet = true; m_l5Ids = std::forward<L5IdsT>(value); }
    template<typename L5IdsT = Aws::Vector<Aws::String>>
    AgentHierarchyGroups& WithL5Ids(L5IdsT&& value) { SetL5Ids(std::forward<L5IdsT>(value)); return *this;}
    template<typename L5IdsT = Aws::String>
    AgentHierarchyGroups& AddL5Ids(L5IdsT&& value) { m_l5IdsHasBeenSet = true; m_l5Ids.emplace_back(std::forward<L5IdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_l1Ids;
    bool m_l1IdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_l2Ids;
    bool m_l2IdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_l3Ids;
    bool m_l3IdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_l4Ids;
    bool m_l4IdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_l5Ids;
    bool m_l5IdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
