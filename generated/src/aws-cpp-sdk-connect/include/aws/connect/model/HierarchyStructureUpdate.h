/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/HierarchyLevelUpdate.h>
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
   * <p>Contains information about the level hierarchy to update.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HierarchyStructureUpdate">AWS
   * API Reference</a></p>
   */
  class HierarchyStructureUpdate
  {
  public:
    AWS_CONNECT_API HierarchyStructureUpdate() = default;
    AWS_CONNECT_API HierarchyStructureUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HierarchyStructureUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The update for level one.</p>
     */
    inline const HierarchyLevelUpdate& GetLevelOne() const { return m_levelOne; }
    inline bool LevelOneHasBeenSet() const { return m_levelOneHasBeenSet; }
    template<typename LevelOneT = HierarchyLevelUpdate>
    void SetLevelOne(LevelOneT&& value) { m_levelOneHasBeenSet = true; m_levelOne = std::forward<LevelOneT>(value); }
    template<typename LevelOneT = HierarchyLevelUpdate>
    HierarchyStructureUpdate& WithLevelOne(LevelOneT&& value) { SetLevelOne(std::forward<LevelOneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update for level two.</p>
     */
    inline const HierarchyLevelUpdate& GetLevelTwo() const { return m_levelTwo; }
    inline bool LevelTwoHasBeenSet() const { return m_levelTwoHasBeenSet; }
    template<typename LevelTwoT = HierarchyLevelUpdate>
    void SetLevelTwo(LevelTwoT&& value) { m_levelTwoHasBeenSet = true; m_levelTwo = std::forward<LevelTwoT>(value); }
    template<typename LevelTwoT = HierarchyLevelUpdate>
    HierarchyStructureUpdate& WithLevelTwo(LevelTwoT&& value) { SetLevelTwo(std::forward<LevelTwoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update for level three.</p>
     */
    inline const HierarchyLevelUpdate& GetLevelThree() const { return m_levelThree; }
    inline bool LevelThreeHasBeenSet() const { return m_levelThreeHasBeenSet; }
    template<typename LevelThreeT = HierarchyLevelUpdate>
    void SetLevelThree(LevelThreeT&& value) { m_levelThreeHasBeenSet = true; m_levelThree = std::forward<LevelThreeT>(value); }
    template<typename LevelThreeT = HierarchyLevelUpdate>
    HierarchyStructureUpdate& WithLevelThree(LevelThreeT&& value) { SetLevelThree(std::forward<LevelThreeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update for level four.</p>
     */
    inline const HierarchyLevelUpdate& GetLevelFour() const { return m_levelFour; }
    inline bool LevelFourHasBeenSet() const { return m_levelFourHasBeenSet; }
    template<typename LevelFourT = HierarchyLevelUpdate>
    void SetLevelFour(LevelFourT&& value) { m_levelFourHasBeenSet = true; m_levelFour = std::forward<LevelFourT>(value); }
    template<typename LevelFourT = HierarchyLevelUpdate>
    HierarchyStructureUpdate& WithLevelFour(LevelFourT&& value) { SetLevelFour(std::forward<LevelFourT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update for level five.</p>
     */
    inline const HierarchyLevelUpdate& GetLevelFive() const { return m_levelFive; }
    inline bool LevelFiveHasBeenSet() const { return m_levelFiveHasBeenSet; }
    template<typename LevelFiveT = HierarchyLevelUpdate>
    void SetLevelFive(LevelFiveT&& value) { m_levelFiveHasBeenSet = true; m_levelFive = std::forward<LevelFiveT>(value); }
    template<typename LevelFiveT = HierarchyLevelUpdate>
    HierarchyStructureUpdate& WithLevelFive(LevelFiveT&& value) { SetLevelFive(std::forward<LevelFiveT>(value)); return *this;}
    ///@}
  private:

    HierarchyLevelUpdate m_levelOne;
    bool m_levelOneHasBeenSet = false;

    HierarchyLevelUpdate m_levelTwo;
    bool m_levelTwoHasBeenSet = false;

    HierarchyLevelUpdate m_levelThree;
    bool m_levelThreeHasBeenSet = false;

    HierarchyLevelUpdate m_levelFour;
    bool m_levelFourHasBeenSet = false;

    HierarchyLevelUpdate m_levelFive;
    bool m_levelFiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
