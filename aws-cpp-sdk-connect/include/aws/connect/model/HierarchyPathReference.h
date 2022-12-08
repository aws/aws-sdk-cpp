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
    AWS_CONNECT_API HierarchyPathReference();
    AWS_CONNECT_API HierarchyPathReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HierarchyPathReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about level one.</p>
     */
    inline const HierarchyGroupSummaryReference& GetLevelOne() const{ return m_levelOne; }

    /**
     * <p>Information about level one.</p>
     */
    inline bool LevelOneHasBeenSet() const { return m_levelOneHasBeenSet; }

    /**
     * <p>Information about level one.</p>
     */
    inline void SetLevelOne(const HierarchyGroupSummaryReference& value) { m_levelOneHasBeenSet = true; m_levelOne = value; }

    /**
     * <p>Information about level one.</p>
     */
    inline void SetLevelOne(HierarchyGroupSummaryReference&& value) { m_levelOneHasBeenSet = true; m_levelOne = std::move(value); }

    /**
     * <p>Information about level one.</p>
     */
    inline HierarchyPathReference& WithLevelOne(const HierarchyGroupSummaryReference& value) { SetLevelOne(value); return *this;}

    /**
     * <p>Information about level one.</p>
     */
    inline HierarchyPathReference& WithLevelOne(HierarchyGroupSummaryReference&& value) { SetLevelOne(std::move(value)); return *this;}


    /**
     * <p>Information about level two.</p>
     */
    inline const HierarchyGroupSummaryReference& GetLevelTwo() const{ return m_levelTwo; }

    /**
     * <p>Information about level two.</p>
     */
    inline bool LevelTwoHasBeenSet() const { return m_levelTwoHasBeenSet; }

    /**
     * <p>Information about level two.</p>
     */
    inline void SetLevelTwo(const HierarchyGroupSummaryReference& value) { m_levelTwoHasBeenSet = true; m_levelTwo = value; }

    /**
     * <p>Information about level two.</p>
     */
    inline void SetLevelTwo(HierarchyGroupSummaryReference&& value) { m_levelTwoHasBeenSet = true; m_levelTwo = std::move(value); }

    /**
     * <p>Information about level two.</p>
     */
    inline HierarchyPathReference& WithLevelTwo(const HierarchyGroupSummaryReference& value) { SetLevelTwo(value); return *this;}

    /**
     * <p>Information about level two.</p>
     */
    inline HierarchyPathReference& WithLevelTwo(HierarchyGroupSummaryReference&& value) { SetLevelTwo(std::move(value)); return *this;}


    /**
     * <p>Information about level three.</p>
     */
    inline const HierarchyGroupSummaryReference& GetLevelThree() const{ return m_levelThree; }

    /**
     * <p>Information about level three.</p>
     */
    inline bool LevelThreeHasBeenSet() const { return m_levelThreeHasBeenSet; }

    /**
     * <p>Information about level three.</p>
     */
    inline void SetLevelThree(const HierarchyGroupSummaryReference& value) { m_levelThreeHasBeenSet = true; m_levelThree = value; }

    /**
     * <p>Information about level three.</p>
     */
    inline void SetLevelThree(HierarchyGroupSummaryReference&& value) { m_levelThreeHasBeenSet = true; m_levelThree = std::move(value); }

    /**
     * <p>Information about level three.</p>
     */
    inline HierarchyPathReference& WithLevelThree(const HierarchyGroupSummaryReference& value) { SetLevelThree(value); return *this;}

    /**
     * <p>Information about level three.</p>
     */
    inline HierarchyPathReference& WithLevelThree(HierarchyGroupSummaryReference&& value) { SetLevelThree(std::move(value)); return *this;}


    /**
     * <p>Information about level four.</p>
     */
    inline const HierarchyGroupSummaryReference& GetLevelFour() const{ return m_levelFour; }

    /**
     * <p>Information about level four.</p>
     */
    inline bool LevelFourHasBeenSet() const { return m_levelFourHasBeenSet; }

    /**
     * <p>Information about level four.</p>
     */
    inline void SetLevelFour(const HierarchyGroupSummaryReference& value) { m_levelFourHasBeenSet = true; m_levelFour = value; }

    /**
     * <p>Information about level four.</p>
     */
    inline void SetLevelFour(HierarchyGroupSummaryReference&& value) { m_levelFourHasBeenSet = true; m_levelFour = std::move(value); }

    /**
     * <p>Information about level four.</p>
     */
    inline HierarchyPathReference& WithLevelFour(const HierarchyGroupSummaryReference& value) { SetLevelFour(value); return *this;}

    /**
     * <p>Information about level four.</p>
     */
    inline HierarchyPathReference& WithLevelFour(HierarchyGroupSummaryReference&& value) { SetLevelFour(std::move(value)); return *this;}


    /**
     * <p>Information about level five.</p>
     */
    inline const HierarchyGroupSummaryReference& GetLevelFive() const{ return m_levelFive; }

    /**
     * <p>Information about level five.</p>
     */
    inline bool LevelFiveHasBeenSet() const { return m_levelFiveHasBeenSet; }

    /**
     * <p>Information about level five.</p>
     */
    inline void SetLevelFive(const HierarchyGroupSummaryReference& value) { m_levelFiveHasBeenSet = true; m_levelFive = value; }

    /**
     * <p>Information about level five.</p>
     */
    inline void SetLevelFive(HierarchyGroupSummaryReference&& value) { m_levelFiveHasBeenSet = true; m_levelFive = std::move(value); }

    /**
     * <p>Information about level five.</p>
     */
    inline HierarchyPathReference& WithLevelFive(const HierarchyGroupSummaryReference& value) { SetLevelFive(value); return *this;}

    /**
     * <p>Information about level five.</p>
     */
    inline HierarchyPathReference& WithLevelFive(HierarchyGroupSummaryReference&& value) { SetLevelFive(std::move(value)); return *this;}

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
