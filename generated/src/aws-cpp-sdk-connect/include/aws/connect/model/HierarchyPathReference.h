/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/HierarchyGroupSummaryReference.h>
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
   * <p>Information about the levels in the hierarchy group.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HierarchyPathReference">AWS
   * API Reference</a></p>
   */
  class HierarchyPathReference
  {
  public:
    AWS_CONNECT_API HierarchyPathReference() = default;
    AWS_CONNECT_API HierarchyPathReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HierarchyPathReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about level one.</p>
     */
    inline const HierarchyGroupSummaryReference& GetLevelOne() const { return m_levelOne; }
    inline bool LevelOneHasBeenSet() const { return m_levelOneHasBeenSet; }
    template<typename LevelOneT = HierarchyGroupSummaryReference>
    void SetLevelOne(LevelOneT&& value) { m_levelOneHasBeenSet = true; m_levelOne = std::forward<LevelOneT>(value); }
    template<typename LevelOneT = HierarchyGroupSummaryReference>
    HierarchyPathReference& WithLevelOne(LevelOneT&& value) { SetLevelOne(std::forward<LevelOneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level two.</p>
     */
    inline const HierarchyGroupSummaryReference& GetLevelTwo() const { return m_levelTwo; }
    inline bool LevelTwoHasBeenSet() const { return m_levelTwoHasBeenSet; }
    template<typename LevelTwoT = HierarchyGroupSummaryReference>
    void SetLevelTwo(LevelTwoT&& value) { m_levelTwoHasBeenSet = true; m_levelTwo = std::forward<LevelTwoT>(value); }
    template<typename LevelTwoT = HierarchyGroupSummaryReference>
    HierarchyPathReference& WithLevelTwo(LevelTwoT&& value) { SetLevelTwo(std::forward<LevelTwoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level three.</p>
     */
    inline const HierarchyGroupSummaryReference& GetLevelThree() const { return m_levelThree; }
    inline bool LevelThreeHasBeenSet() const { return m_levelThreeHasBeenSet; }
    template<typename LevelThreeT = HierarchyGroupSummaryReference>
    void SetLevelThree(LevelThreeT&& value) { m_levelThreeHasBeenSet = true; m_levelThree = std::forward<LevelThreeT>(value); }
    template<typename LevelThreeT = HierarchyGroupSummaryReference>
    HierarchyPathReference& WithLevelThree(LevelThreeT&& value) { SetLevelThree(std::forward<LevelThreeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level four.</p>
     */
    inline const HierarchyGroupSummaryReference& GetLevelFour() const { return m_levelFour; }
    inline bool LevelFourHasBeenSet() const { return m_levelFourHasBeenSet; }
    template<typename LevelFourT = HierarchyGroupSummaryReference>
    void SetLevelFour(LevelFourT&& value) { m_levelFourHasBeenSet = true; m_levelFour = std::forward<LevelFourT>(value); }
    template<typename LevelFourT = HierarchyGroupSummaryReference>
    HierarchyPathReference& WithLevelFour(LevelFourT&& value) { SetLevelFour(std::forward<LevelFourT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level five.</p>
     */
    inline const HierarchyGroupSummaryReference& GetLevelFive() const { return m_levelFive; }
    inline bool LevelFiveHasBeenSet() const { return m_levelFiveHasBeenSet; }
    template<typename LevelFiveT = HierarchyGroupSummaryReference>
    void SetLevelFive(LevelFiveT&& value) { m_levelFiveHasBeenSet = true; m_levelFive = std::forward<LevelFiveT>(value); }
    template<typename LevelFiveT = HierarchyGroupSummaryReference>
    HierarchyPathReference& WithLevelFive(LevelFiveT&& value) { SetLevelFive(std::forward<LevelFiveT>(value)); return *this;}
    ///@}
  private:

    HierarchyGroupSummaryReference m_levelOne;
    bool m_levelOneHasBeenSet = false;

    HierarchyGroupSummaryReference m_levelTwo;
    bool m_levelTwoHasBeenSet = false;

    HierarchyGroupSummaryReference m_levelThree;
    bool m_levelThreeHasBeenSet = false;

    HierarchyGroupSummaryReference m_levelFour;
    bool m_levelFourHasBeenSet = false;

    HierarchyGroupSummaryReference m_levelFive;
    bool m_levelFiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
