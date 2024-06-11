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
    AWS_CONNECT_API HierarchyPath();
    AWS_CONNECT_API HierarchyPath(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HierarchyPath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about level one.</p>
     */
    inline const HierarchyGroupSummary& GetLevelOne() const{ return m_levelOne; }
    inline bool LevelOneHasBeenSet() const { return m_levelOneHasBeenSet; }
    inline void SetLevelOne(const HierarchyGroupSummary& value) { m_levelOneHasBeenSet = true; m_levelOne = value; }
    inline void SetLevelOne(HierarchyGroupSummary&& value) { m_levelOneHasBeenSet = true; m_levelOne = std::move(value); }
    inline HierarchyPath& WithLevelOne(const HierarchyGroupSummary& value) { SetLevelOne(value); return *this;}
    inline HierarchyPath& WithLevelOne(HierarchyGroupSummary&& value) { SetLevelOne(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level two.</p>
     */
    inline const HierarchyGroupSummary& GetLevelTwo() const{ return m_levelTwo; }
    inline bool LevelTwoHasBeenSet() const { return m_levelTwoHasBeenSet; }
    inline void SetLevelTwo(const HierarchyGroupSummary& value) { m_levelTwoHasBeenSet = true; m_levelTwo = value; }
    inline void SetLevelTwo(HierarchyGroupSummary&& value) { m_levelTwoHasBeenSet = true; m_levelTwo = std::move(value); }
    inline HierarchyPath& WithLevelTwo(const HierarchyGroupSummary& value) { SetLevelTwo(value); return *this;}
    inline HierarchyPath& WithLevelTwo(HierarchyGroupSummary&& value) { SetLevelTwo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level three.</p>
     */
    inline const HierarchyGroupSummary& GetLevelThree() const{ return m_levelThree; }
    inline bool LevelThreeHasBeenSet() const { return m_levelThreeHasBeenSet; }
    inline void SetLevelThree(const HierarchyGroupSummary& value) { m_levelThreeHasBeenSet = true; m_levelThree = value; }
    inline void SetLevelThree(HierarchyGroupSummary&& value) { m_levelThreeHasBeenSet = true; m_levelThree = std::move(value); }
    inline HierarchyPath& WithLevelThree(const HierarchyGroupSummary& value) { SetLevelThree(value); return *this;}
    inline HierarchyPath& WithLevelThree(HierarchyGroupSummary&& value) { SetLevelThree(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level four.</p>
     */
    inline const HierarchyGroupSummary& GetLevelFour() const{ return m_levelFour; }
    inline bool LevelFourHasBeenSet() const { return m_levelFourHasBeenSet; }
    inline void SetLevelFour(const HierarchyGroupSummary& value) { m_levelFourHasBeenSet = true; m_levelFour = value; }
    inline void SetLevelFour(HierarchyGroupSummary&& value) { m_levelFourHasBeenSet = true; m_levelFour = std::move(value); }
    inline HierarchyPath& WithLevelFour(const HierarchyGroupSummary& value) { SetLevelFour(value); return *this;}
    inline HierarchyPath& WithLevelFour(HierarchyGroupSummary&& value) { SetLevelFour(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level five.</p>
     */
    inline const HierarchyGroupSummary& GetLevelFive() const{ return m_levelFive; }
    inline bool LevelFiveHasBeenSet() const { return m_levelFiveHasBeenSet; }
    inline void SetLevelFive(const HierarchyGroupSummary& value) { m_levelFiveHasBeenSet = true; m_levelFive = value; }
    inline void SetLevelFive(HierarchyGroupSummary&& value) { m_levelFiveHasBeenSet = true; m_levelFive = std::move(value); }
    inline HierarchyPath& WithLevelFive(const HierarchyGroupSummary& value) { SetLevelFive(value); return *this;}
    inline HierarchyPath& WithLevelFive(HierarchyGroupSummary&& value) { SetLevelFive(std::move(value)); return *this;}
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
