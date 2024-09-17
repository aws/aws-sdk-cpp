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
    AWS_CONNECT_API HierarchyGroups();
    AWS_CONNECT_API HierarchyGroups(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HierarchyGroups& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The group at level one of the agent hierarchy.</p>
     */
    inline const AgentHierarchyGroup& GetLevel1() const{ return m_level1; }
    inline bool Level1HasBeenSet() const { return m_level1HasBeenSet; }
    inline void SetLevel1(const AgentHierarchyGroup& value) { m_level1HasBeenSet = true; m_level1 = value; }
    inline void SetLevel1(AgentHierarchyGroup&& value) { m_level1HasBeenSet = true; m_level1 = std::move(value); }
    inline HierarchyGroups& WithLevel1(const AgentHierarchyGroup& value) { SetLevel1(value); return *this;}
    inline HierarchyGroups& WithLevel1(AgentHierarchyGroup&& value) { SetLevel1(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group at level two of the agent hierarchy.</p>
     */
    inline const AgentHierarchyGroup& GetLevel2() const{ return m_level2; }
    inline bool Level2HasBeenSet() const { return m_level2HasBeenSet; }
    inline void SetLevel2(const AgentHierarchyGroup& value) { m_level2HasBeenSet = true; m_level2 = value; }
    inline void SetLevel2(AgentHierarchyGroup&& value) { m_level2HasBeenSet = true; m_level2 = std::move(value); }
    inline HierarchyGroups& WithLevel2(const AgentHierarchyGroup& value) { SetLevel2(value); return *this;}
    inline HierarchyGroups& WithLevel2(AgentHierarchyGroup&& value) { SetLevel2(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group at level three of the agent hierarchy.</p>
     */
    inline const AgentHierarchyGroup& GetLevel3() const{ return m_level3; }
    inline bool Level3HasBeenSet() const { return m_level3HasBeenSet; }
    inline void SetLevel3(const AgentHierarchyGroup& value) { m_level3HasBeenSet = true; m_level3 = value; }
    inline void SetLevel3(AgentHierarchyGroup&& value) { m_level3HasBeenSet = true; m_level3 = std::move(value); }
    inline HierarchyGroups& WithLevel3(const AgentHierarchyGroup& value) { SetLevel3(value); return *this;}
    inline HierarchyGroups& WithLevel3(AgentHierarchyGroup&& value) { SetLevel3(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group at level four of the agent hierarchy.</p>
     */
    inline const AgentHierarchyGroup& GetLevel4() const{ return m_level4; }
    inline bool Level4HasBeenSet() const { return m_level4HasBeenSet; }
    inline void SetLevel4(const AgentHierarchyGroup& value) { m_level4HasBeenSet = true; m_level4 = value; }
    inline void SetLevel4(AgentHierarchyGroup&& value) { m_level4HasBeenSet = true; m_level4 = std::move(value); }
    inline HierarchyGroups& WithLevel4(const AgentHierarchyGroup& value) { SetLevel4(value); return *this;}
    inline HierarchyGroups& WithLevel4(AgentHierarchyGroup&& value) { SetLevel4(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group at level five of the agent hierarchy.</p>
     */
    inline const AgentHierarchyGroup& GetLevel5() const{ return m_level5; }
    inline bool Level5HasBeenSet() const { return m_level5HasBeenSet; }
    inline void SetLevel5(const AgentHierarchyGroup& value) { m_level5HasBeenSet = true; m_level5 = value; }
    inline void SetLevel5(AgentHierarchyGroup&& value) { m_level5HasBeenSet = true; m_level5 = std::move(value); }
    inline HierarchyGroups& WithLevel5(const AgentHierarchyGroup& value) { SetLevel5(value); return *this;}
    inline HierarchyGroups& WithLevel5(AgentHierarchyGroup&& value) { SetLevel5(std::move(value)); return *this;}
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
