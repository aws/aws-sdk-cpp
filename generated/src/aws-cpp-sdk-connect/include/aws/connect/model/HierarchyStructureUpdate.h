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
    AWS_CONNECT_API HierarchyStructureUpdate();
    AWS_CONNECT_API HierarchyStructureUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HierarchyStructureUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The update for level one.</p>
     */
    inline const HierarchyLevelUpdate& GetLevelOne() const{ return m_levelOne; }
    inline bool LevelOneHasBeenSet() const { return m_levelOneHasBeenSet; }
    inline void SetLevelOne(const HierarchyLevelUpdate& value) { m_levelOneHasBeenSet = true; m_levelOne = value; }
    inline void SetLevelOne(HierarchyLevelUpdate&& value) { m_levelOneHasBeenSet = true; m_levelOne = std::move(value); }
    inline HierarchyStructureUpdate& WithLevelOne(const HierarchyLevelUpdate& value) { SetLevelOne(value); return *this;}
    inline HierarchyStructureUpdate& WithLevelOne(HierarchyLevelUpdate&& value) { SetLevelOne(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update for level two.</p>
     */
    inline const HierarchyLevelUpdate& GetLevelTwo() const{ return m_levelTwo; }
    inline bool LevelTwoHasBeenSet() const { return m_levelTwoHasBeenSet; }
    inline void SetLevelTwo(const HierarchyLevelUpdate& value) { m_levelTwoHasBeenSet = true; m_levelTwo = value; }
    inline void SetLevelTwo(HierarchyLevelUpdate&& value) { m_levelTwoHasBeenSet = true; m_levelTwo = std::move(value); }
    inline HierarchyStructureUpdate& WithLevelTwo(const HierarchyLevelUpdate& value) { SetLevelTwo(value); return *this;}
    inline HierarchyStructureUpdate& WithLevelTwo(HierarchyLevelUpdate&& value) { SetLevelTwo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update for level three.</p>
     */
    inline const HierarchyLevelUpdate& GetLevelThree() const{ return m_levelThree; }
    inline bool LevelThreeHasBeenSet() const { return m_levelThreeHasBeenSet; }
    inline void SetLevelThree(const HierarchyLevelUpdate& value) { m_levelThreeHasBeenSet = true; m_levelThree = value; }
    inline void SetLevelThree(HierarchyLevelUpdate&& value) { m_levelThreeHasBeenSet = true; m_levelThree = std::move(value); }
    inline HierarchyStructureUpdate& WithLevelThree(const HierarchyLevelUpdate& value) { SetLevelThree(value); return *this;}
    inline HierarchyStructureUpdate& WithLevelThree(HierarchyLevelUpdate&& value) { SetLevelThree(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update for level four.</p>
     */
    inline const HierarchyLevelUpdate& GetLevelFour() const{ return m_levelFour; }
    inline bool LevelFourHasBeenSet() const { return m_levelFourHasBeenSet; }
    inline void SetLevelFour(const HierarchyLevelUpdate& value) { m_levelFourHasBeenSet = true; m_levelFour = value; }
    inline void SetLevelFour(HierarchyLevelUpdate&& value) { m_levelFourHasBeenSet = true; m_levelFour = std::move(value); }
    inline HierarchyStructureUpdate& WithLevelFour(const HierarchyLevelUpdate& value) { SetLevelFour(value); return *this;}
    inline HierarchyStructureUpdate& WithLevelFour(HierarchyLevelUpdate&& value) { SetLevelFour(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update for level five.</p>
     */
    inline const HierarchyLevelUpdate& GetLevelFive() const{ return m_levelFive; }
    inline bool LevelFiveHasBeenSet() const { return m_levelFiveHasBeenSet; }
    inline void SetLevelFive(const HierarchyLevelUpdate& value) { m_levelFiveHasBeenSet = true; m_levelFive = value; }
    inline void SetLevelFive(HierarchyLevelUpdate&& value) { m_levelFiveHasBeenSet = true; m_levelFive = std::move(value); }
    inline HierarchyStructureUpdate& WithLevelFive(const HierarchyLevelUpdate& value) { SetLevelFive(value); return *this;}
    inline HierarchyStructureUpdate& WithLevelFive(HierarchyLevelUpdate&& value) { SetLevelFive(std::move(value)); return *this;}
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
