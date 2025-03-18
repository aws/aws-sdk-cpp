/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/HierarchyLevel.h>
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
   * <p>Contains information about a hierarchy structure.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HierarchyStructure">AWS
   * API Reference</a></p>
   */
  class HierarchyStructure
  {
  public:
    AWS_CONNECT_API HierarchyStructure() = default;
    AWS_CONNECT_API HierarchyStructure(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HierarchyStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about level one.</p>
     */
    inline const HierarchyLevel& GetLevelOne() const { return m_levelOne; }
    inline bool LevelOneHasBeenSet() const { return m_levelOneHasBeenSet; }
    template<typename LevelOneT = HierarchyLevel>
    void SetLevelOne(LevelOneT&& value) { m_levelOneHasBeenSet = true; m_levelOne = std::forward<LevelOneT>(value); }
    template<typename LevelOneT = HierarchyLevel>
    HierarchyStructure& WithLevelOne(LevelOneT&& value) { SetLevelOne(std::forward<LevelOneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level two.</p>
     */
    inline const HierarchyLevel& GetLevelTwo() const { return m_levelTwo; }
    inline bool LevelTwoHasBeenSet() const { return m_levelTwoHasBeenSet; }
    template<typename LevelTwoT = HierarchyLevel>
    void SetLevelTwo(LevelTwoT&& value) { m_levelTwoHasBeenSet = true; m_levelTwo = std::forward<LevelTwoT>(value); }
    template<typename LevelTwoT = HierarchyLevel>
    HierarchyStructure& WithLevelTwo(LevelTwoT&& value) { SetLevelTwo(std::forward<LevelTwoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level three.</p>
     */
    inline const HierarchyLevel& GetLevelThree() const { return m_levelThree; }
    inline bool LevelThreeHasBeenSet() const { return m_levelThreeHasBeenSet; }
    template<typename LevelThreeT = HierarchyLevel>
    void SetLevelThree(LevelThreeT&& value) { m_levelThreeHasBeenSet = true; m_levelThree = std::forward<LevelThreeT>(value); }
    template<typename LevelThreeT = HierarchyLevel>
    HierarchyStructure& WithLevelThree(LevelThreeT&& value) { SetLevelThree(std::forward<LevelThreeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level four.</p>
     */
    inline const HierarchyLevel& GetLevelFour() const { return m_levelFour; }
    inline bool LevelFourHasBeenSet() const { return m_levelFourHasBeenSet; }
    template<typename LevelFourT = HierarchyLevel>
    void SetLevelFour(LevelFourT&& value) { m_levelFourHasBeenSet = true; m_levelFour = std::forward<LevelFourT>(value); }
    template<typename LevelFourT = HierarchyLevel>
    HierarchyStructure& WithLevelFour(LevelFourT&& value) { SetLevelFour(std::forward<LevelFourT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level five.</p>
     */
    inline const HierarchyLevel& GetLevelFive() const { return m_levelFive; }
    inline bool LevelFiveHasBeenSet() const { return m_levelFiveHasBeenSet; }
    template<typename LevelFiveT = HierarchyLevel>
    void SetLevelFive(LevelFiveT&& value) { m_levelFiveHasBeenSet = true; m_levelFive = std::forward<LevelFiveT>(value); }
    template<typename LevelFiveT = HierarchyLevel>
    HierarchyStructure& WithLevelFive(LevelFiveT&& value) { SetLevelFive(std::forward<LevelFiveT>(value)); return *this;}
    ///@}
  private:

    HierarchyLevel m_levelOne;
    bool m_levelOneHasBeenSet = false;

    HierarchyLevel m_levelTwo;
    bool m_levelTwoHasBeenSet = false;

    HierarchyLevel m_levelThree;
    bool m_levelThreeHasBeenSet = false;

    HierarchyLevel m_levelFour;
    bool m_levelFourHasBeenSet = false;

    HierarchyLevel m_levelFive;
    bool m_levelFiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
