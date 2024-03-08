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
    AWS_CONNECT_API AgentHierarchyGroups();
    AWS_CONNECT_API AgentHierarchyGroups(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AgentHierarchyGroups& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifiers for level 1 hierarchy groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetL1Ids() const{ return m_l1Ids; }

    /**
     * <p>The identifiers for level 1 hierarchy groups.</p>
     */
    inline bool L1IdsHasBeenSet() const { return m_l1IdsHasBeenSet; }

    /**
     * <p>The identifiers for level 1 hierarchy groups.</p>
     */
    inline void SetL1Ids(const Aws::Vector<Aws::String>& value) { m_l1IdsHasBeenSet = true; m_l1Ids = value; }

    /**
     * <p>The identifiers for level 1 hierarchy groups.</p>
     */
    inline void SetL1Ids(Aws::Vector<Aws::String>&& value) { m_l1IdsHasBeenSet = true; m_l1Ids = std::move(value); }

    /**
     * <p>The identifiers for level 1 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& WithL1Ids(const Aws::Vector<Aws::String>& value) { SetL1Ids(value); return *this;}

    /**
     * <p>The identifiers for level 1 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& WithL1Ids(Aws::Vector<Aws::String>&& value) { SetL1Ids(std::move(value)); return *this;}

    /**
     * <p>The identifiers for level 1 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& AddL1Ids(const Aws::String& value) { m_l1IdsHasBeenSet = true; m_l1Ids.push_back(value); return *this; }

    /**
     * <p>The identifiers for level 1 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& AddL1Ids(Aws::String&& value) { m_l1IdsHasBeenSet = true; m_l1Ids.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers for level 1 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& AddL1Ids(const char* value) { m_l1IdsHasBeenSet = true; m_l1Ids.push_back(value); return *this; }


    /**
     * <p>The identifiers for level 2 hierarchy groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetL2Ids() const{ return m_l2Ids; }

    /**
     * <p>The identifiers for level 2 hierarchy groups.</p>
     */
    inline bool L2IdsHasBeenSet() const { return m_l2IdsHasBeenSet; }

    /**
     * <p>The identifiers for level 2 hierarchy groups.</p>
     */
    inline void SetL2Ids(const Aws::Vector<Aws::String>& value) { m_l2IdsHasBeenSet = true; m_l2Ids = value; }

    /**
     * <p>The identifiers for level 2 hierarchy groups.</p>
     */
    inline void SetL2Ids(Aws::Vector<Aws::String>&& value) { m_l2IdsHasBeenSet = true; m_l2Ids = std::move(value); }

    /**
     * <p>The identifiers for level 2 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& WithL2Ids(const Aws::Vector<Aws::String>& value) { SetL2Ids(value); return *this;}

    /**
     * <p>The identifiers for level 2 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& WithL2Ids(Aws::Vector<Aws::String>&& value) { SetL2Ids(std::move(value)); return *this;}

    /**
     * <p>The identifiers for level 2 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& AddL2Ids(const Aws::String& value) { m_l2IdsHasBeenSet = true; m_l2Ids.push_back(value); return *this; }

    /**
     * <p>The identifiers for level 2 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& AddL2Ids(Aws::String&& value) { m_l2IdsHasBeenSet = true; m_l2Ids.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers for level 2 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& AddL2Ids(const char* value) { m_l2IdsHasBeenSet = true; m_l2Ids.push_back(value); return *this; }


    /**
     * <p>The identifiers for level 3 hierarchy groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetL3Ids() const{ return m_l3Ids; }

    /**
     * <p>The identifiers for level 3 hierarchy groups.</p>
     */
    inline bool L3IdsHasBeenSet() const { return m_l3IdsHasBeenSet; }

    /**
     * <p>The identifiers for level 3 hierarchy groups.</p>
     */
    inline void SetL3Ids(const Aws::Vector<Aws::String>& value) { m_l3IdsHasBeenSet = true; m_l3Ids = value; }

    /**
     * <p>The identifiers for level 3 hierarchy groups.</p>
     */
    inline void SetL3Ids(Aws::Vector<Aws::String>&& value) { m_l3IdsHasBeenSet = true; m_l3Ids = std::move(value); }

    /**
     * <p>The identifiers for level 3 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& WithL3Ids(const Aws::Vector<Aws::String>& value) { SetL3Ids(value); return *this;}

    /**
     * <p>The identifiers for level 3 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& WithL3Ids(Aws::Vector<Aws::String>&& value) { SetL3Ids(std::move(value)); return *this;}

    /**
     * <p>The identifiers for level 3 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& AddL3Ids(const Aws::String& value) { m_l3IdsHasBeenSet = true; m_l3Ids.push_back(value); return *this; }

    /**
     * <p>The identifiers for level 3 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& AddL3Ids(Aws::String&& value) { m_l3IdsHasBeenSet = true; m_l3Ids.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers for level 3 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& AddL3Ids(const char* value) { m_l3IdsHasBeenSet = true; m_l3Ids.push_back(value); return *this; }


    /**
     * <p>The identifiers for level 4 hierarchy groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetL4Ids() const{ return m_l4Ids; }

    /**
     * <p>The identifiers for level 4 hierarchy groups.</p>
     */
    inline bool L4IdsHasBeenSet() const { return m_l4IdsHasBeenSet; }

    /**
     * <p>The identifiers for level 4 hierarchy groups.</p>
     */
    inline void SetL4Ids(const Aws::Vector<Aws::String>& value) { m_l4IdsHasBeenSet = true; m_l4Ids = value; }

    /**
     * <p>The identifiers for level 4 hierarchy groups.</p>
     */
    inline void SetL4Ids(Aws::Vector<Aws::String>&& value) { m_l4IdsHasBeenSet = true; m_l4Ids = std::move(value); }

    /**
     * <p>The identifiers for level 4 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& WithL4Ids(const Aws::Vector<Aws::String>& value) { SetL4Ids(value); return *this;}

    /**
     * <p>The identifiers for level 4 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& WithL4Ids(Aws::Vector<Aws::String>&& value) { SetL4Ids(std::move(value)); return *this;}

    /**
     * <p>The identifiers for level 4 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& AddL4Ids(const Aws::String& value) { m_l4IdsHasBeenSet = true; m_l4Ids.push_back(value); return *this; }

    /**
     * <p>The identifiers for level 4 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& AddL4Ids(Aws::String&& value) { m_l4IdsHasBeenSet = true; m_l4Ids.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers for level 4 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& AddL4Ids(const char* value) { m_l4IdsHasBeenSet = true; m_l4Ids.push_back(value); return *this; }


    /**
     * <p>The identifiers for level 5 hierarchy groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetL5Ids() const{ return m_l5Ids; }

    /**
     * <p>The identifiers for level 5 hierarchy groups.</p>
     */
    inline bool L5IdsHasBeenSet() const { return m_l5IdsHasBeenSet; }

    /**
     * <p>The identifiers for level 5 hierarchy groups.</p>
     */
    inline void SetL5Ids(const Aws::Vector<Aws::String>& value) { m_l5IdsHasBeenSet = true; m_l5Ids = value; }

    /**
     * <p>The identifiers for level 5 hierarchy groups.</p>
     */
    inline void SetL5Ids(Aws::Vector<Aws::String>&& value) { m_l5IdsHasBeenSet = true; m_l5Ids = std::move(value); }

    /**
     * <p>The identifiers for level 5 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& WithL5Ids(const Aws::Vector<Aws::String>& value) { SetL5Ids(value); return *this;}

    /**
     * <p>The identifiers for level 5 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& WithL5Ids(Aws::Vector<Aws::String>&& value) { SetL5Ids(std::move(value)); return *this;}

    /**
     * <p>The identifiers for level 5 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& AddL5Ids(const Aws::String& value) { m_l5IdsHasBeenSet = true; m_l5Ids.push_back(value); return *this; }

    /**
     * <p>The identifiers for level 5 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& AddL5Ids(Aws::String&& value) { m_l5IdsHasBeenSet = true; m_l5Ids.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers for level 5 hierarchy groups.</p>
     */
    inline AgentHierarchyGroups& AddL5Ids(const char* value) { m_l5IdsHasBeenSet = true; m_l5Ids.push_back(value); return *this; }

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
