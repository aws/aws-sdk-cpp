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
    AWS_CONNECT_API HierarchyStructure();
    AWS_CONNECT_API HierarchyStructure(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HierarchyStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about level one.</p>
     */
    inline const HierarchyLevel& GetLevelOne() const{ return m_levelOne; }
    inline bool LevelOneHasBeenSet() const { return m_levelOneHasBeenSet; }
    inline void SetLevelOne(const HierarchyLevel& value) { m_levelOneHasBeenSet = true; m_levelOne = value; }
    inline void SetLevelOne(HierarchyLevel&& value) { m_levelOneHasBeenSet = true; m_levelOne = std::move(value); }
    inline HierarchyStructure& WithLevelOne(const HierarchyLevel& value) { SetLevelOne(value); return *this;}
    inline HierarchyStructure& WithLevelOne(HierarchyLevel&& value) { SetLevelOne(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level two.</p>
     */
    inline const HierarchyLevel& GetLevelTwo() const{ return m_levelTwo; }
    inline bool LevelTwoHasBeenSet() const { return m_levelTwoHasBeenSet; }
    inline void SetLevelTwo(const HierarchyLevel& value) { m_levelTwoHasBeenSet = true; m_levelTwo = value; }
    inline void SetLevelTwo(HierarchyLevel&& value) { m_levelTwoHasBeenSet = true; m_levelTwo = std::move(value); }
    inline HierarchyStructure& WithLevelTwo(const HierarchyLevel& value) { SetLevelTwo(value); return *this;}
    inline HierarchyStructure& WithLevelTwo(HierarchyLevel&& value) { SetLevelTwo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level three.</p>
     */
    inline const HierarchyLevel& GetLevelThree() const{ return m_levelThree; }
    inline bool LevelThreeHasBeenSet() const { return m_levelThreeHasBeenSet; }
    inline void SetLevelThree(const HierarchyLevel& value) { m_levelThreeHasBeenSet = true; m_levelThree = value; }
    inline void SetLevelThree(HierarchyLevel&& value) { m_levelThreeHasBeenSet = true; m_levelThree = std::move(value); }
    inline HierarchyStructure& WithLevelThree(const HierarchyLevel& value) { SetLevelThree(value); return *this;}
    inline HierarchyStructure& WithLevelThree(HierarchyLevel&& value) { SetLevelThree(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level four.</p>
     */
    inline const HierarchyLevel& GetLevelFour() const{ return m_levelFour; }
    inline bool LevelFourHasBeenSet() const { return m_levelFourHasBeenSet; }
    inline void SetLevelFour(const HierarchyLevel& value) { m_levelFourHasBeenSet = true; m_levelFour = value; }
    inline void SetLevelFour(HierarchyLevel&& value) { m_levelFourHasBeenSet = true; m_levelFour = std::move(value); }
    inline HierarchyStructure& WithLevelFour(const HierarchyLevel& value) { SetLevelFour(value); return *this;}
    inline HierarchyStructure& WithLevelFour(HierarchyLevel&& value) { SetLevelFour(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about level five.</p>
     */
    inline const HierarchyLevel& GetLevelFive() const{ return m_levelFive; }
    inline bool LevelFiveHasBeenSet() const { return m_levelFiveHasBeenSet; }
    inline void SetLevelFive(const HierarchyLevel& value) { m_levelFiveHasBeenSet = true; m_levelFive = value; }
    inline void SetLevelFive(HierarchyLevel&& value) { m_levelFiveHasBeenSet = true; m_levelFive = std::move(value); }
    inline HierarchyStructure& WithLevelFive(const HierarchyLevel& value) { SetLevelFive(value); return *this;}
    inline HierarchyStructure& WithLevelFive(HierarchyLevel&& value) { SetLevelFive(std::move(value)); return *this;}
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
