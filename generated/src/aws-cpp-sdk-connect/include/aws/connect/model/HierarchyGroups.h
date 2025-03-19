/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AgentHierarchyGroup.h>
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
   * <p>Information about the agent hierarchy. Hierarchies can be configured with up
   * to five levels.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HierarchyGroups">AWS
   * API Reference</a></p>
   */
  class HierarchyGroups
  {
  public:
    AWS_CONNECT_API HierarchyGroups() = default;
    AWS_CONNECT_API HierarchyGroups(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HierarchyGroups& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The group at level one of the agent hierarchy.</p>
     */
    inline const AgentHierarchyGroup& GetLevel1() const { return m_level1; }
    inline bool Level1HasBeenSet() const { return m_level1HasBeenSet; }
    template<typename Level1T = AgentHierarchyGroup>
    void SetLevel1(Level1T&& value) { m_level1HasBeenSet = true; m_level1 = std::forward<Level1T>(value); }
    template<typename Level1T = AgentHierarchyGroup>
    HierarchyGroups& WithLevel1(Level1T&& value) { SetLevel1(std::forward<Level1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group at level two of the agent hierarchy.</p>
     */
    inline const AgentHierarchyGroup& GetLevel2() const { return m_level2; }
    inline bool Level2HasBeenSet() const { return m_level2HasBeenSet; }
    template<typename Level2T = AgentHierarchyGroup>
    void SetLevel2(Level2T&& value) { m_level2HasBeenSet = true; m_level2 = std::forward<Level2T>(value); }
    template<typename Level2T = AgentHierarchyGroup>
    HierarchyGroups& WithLevel2(Level2T&& value) { SetLevel2(std::forward<Level2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group at level three of the agent hierarchy.</p>
     */
    inline const AgentHierarchyGroup& GetLevel3() const { return m_level3; }
    inline bool Level3HasBeenSet() const { return m_level3HasBeenSet; }
    template<typename Level3T = AgentHierarchyGroup>
    void SetLevel3(Level3T&& value) { m_level3HasBeenSet = true; m_level3 = std::forward<Level3T>(value); }
    template<typename Level3T = AgentHierarchyGroup>
    HierarchyGroups& WithLevel3(Level3T&& value) { SetLevel3(std::forward<Level3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group at level four of the agent hierarchy.</p>
     */
    inline const AgentHierarchyGroup& GetLevel4() const { return m_level4; }
    inline bool Level4HasBeenSet() const { return m_level4HasBeenSet; }
    template<typename Level4T = AgentHierarchyGroup>
    void SetLevel4(Level4T&& value) { m_level4HasBeenSet = true; m_level4 = std::forward<Level4T>(value); }
    template<typename Level4T = AgentHierarchyGroup>
    HierarchyGroups& WithLevel4(Level4T&& value) { SetLevel4(std::forward<Level4T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group at level five of the agent hierarchy.</p>
     */
    inline const AgentHierarchyGroup& GetLevel5() const { return m_level5; }
    inline bool Level5HasBeenSet() const { return m_level5HasBeenSet; }
    template<typename Level5T = AgentHierarchyGroup>
    void SetLevel5(Level5T&& value) { m_level5HasBeenSet = true; m_level5 = std::forward<Level5T>(value); }
    template<typename Level5T = AgentHierarchyGroup>
    HierarchyGroups& WithLevel5(Level5T&& value) { SetLevel5(std::forward<Level5T>(value)); return *this;}
    ///@}
  private:

    AgentHierarchyGroup m_level1;
    bool m_level1HasBeenSet = false;

    AgentHierarchyGroup m_level2;
    bool m_level2HasBeenSet = false;

    AgentHierarchyGroup m_level3;
    bool m_level3HasBeenSet = false;

    AgentHierarchyGroup m_level4;
    bool m_level4HasBeenSet = false;

    AgentHierarchyGroup m_level5;
    bool m_level5HasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
