/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/HierarchyGroupSummary.h>
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
   * <p>Contains information about the levels of a hierarchy group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HierarchyPath">AWS
   * API Reference</a></p>
   */
  class HierarchyPath
  {
  public:
    AWS_CONNECT_API HierarchyPath() = default;
    AWS_CONNECT_API HierarchyPath(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HierarchyPath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about level one.</p>
     */
    inline const HierarchyGroupSummary& GetLevelOne() const { return m_levelOne; }
    inline bool LevelOneHasBeenSet() const { return m_levelOneHasBeenSet; }
    template<typename LevelOneT = HierarchyGroupSummary>
    void SetLevelOne(LevelOneT&& value) { m_levelOneHasBeenSet = true; m_levelOne = std::forward<LevelOneT>(value); }
    template<typename LevelOneT = HierarchyGroupSummary>
    HierarchyPath& WithLevelOne(LevelOneT&& value) { SetLevelOne(std::forward<LevelOneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level two.</p>
     */
    inline const HierarchyGroupSummary& GetLevelTwo() const { return m_levelTwo; }
    inline bool LevelTwoHasBeenSet() const { return m_levelTwoHasBeenSet; }
    template<typename LevelTwoT = HierarchyGroupSummary>
    void SetLevelTwo(LevelTwoT&& value) { m_levelTwoHasBeenSet = true; m_levelTwo = std::forward<LevelTwoT>(value); }
    template<typename LevelTwoT = HierarchyGroupSummary>
    HierarchyPath& WithLevelTwo(LevelTwoT&& value) { SetLevelTwo(std::forward<LevelTwoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level three.</p>
     */
    inline const HierarchyGroupSummary& GetLevelThree() const { return m_levelThree; }
    inline bool LevelThreeHasBeenSet() const { return m_levelThreeHasBeenSet; }
    template<typename LevelThreeT = HierarchyGroupSummary>
    void SetLevelThree(LevelThreeT&& value) { m_levelThreeHasBeenSet = true; m_levelThree = std::forward<LevelThreeT>(value); }
    template<typename LevelThreeT = HierarchyGroupSummary>
    HierarchyPath& WithLevelThree(LevelThreeT&& value) { SetLevelThree(std::forward<LevelThreeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level four.</p>
     */
    inline const HierarchyGroupSummary& GetLevelFour() const { return m_levelFour; }
    inline bool LevelFourHasBeenSet() const { return m_levelFourHasBeenSet; }
    template<typename LevelFourT = HierarchyGroupSummary>
    void SetLevelFour(LevelFourT&& value) { m_levelFourHasBeenSet = true; m_levelFour = std::forward<LevelFourT>(value); }
    template<typename LevelFourT = HierarchyGroupSummary>
    HierarchyPath& WithLevelFour(LevelFourT&& value) { SetLevelFour(std::forward<LevelFourT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level five.</p>
     */
    inline const HierarchyGroupSummary& GetLevelFive() const { return m_levelFive; }
    inline bool LevelFiveHasBeenSet() const { return m_levelFiveHasBeenSet; }
    template<typename LevelFiveT = HierarchyGroupSummary>
    void SetLevelFive(LevelFiveT&& value) { m_levelFiveHasBeenSet = true; m_levelFive = std::forward<LevelFiveT>(value); }
    template<typename LevelFiveT = HierarchyGroupSummary>
    HierarchyPath& WithLevelFive(LevelFiveT&& value) { SetLevelFive(std::forward<LevelFiveT>(value)); return *this;}
    ///@}
  private:

    HierarchyGroupSummary m_levelOne;
    bool m_levelOneHasBeenSet = false;

    HierarchyGroupSummary m_levelTwo;
    bool m_levelTwoHasBeenSet = false;

    HierarchyGroupSummary m_levelThree;
    bool m_levelThreeHasBeenSet = false;

    HierarchyGroupSummary m_levelFour;
    bool m_levelFourHasBeenSet = false;

    HierarchyGroupSummary m_levelFive;
    bool m_levelFiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
