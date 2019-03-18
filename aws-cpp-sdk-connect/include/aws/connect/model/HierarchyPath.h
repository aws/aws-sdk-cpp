/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>A <code>HierarchyPath</code> object that contains information about the
   * levels of the hierarchy group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HierarchyPath">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API HierarchyPath
  {
  public:
    HierarchyPath();
    HierarchyPath(Aws::Utils::Json::JsonView jsonValue);
    HierarchyPath& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline const HierarchyGroupSummary& GetLevelOne() const{ return m_levelOne; }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline bool LevelOneHasBeenSet() const { return m_levelOneHasBeenSet; }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline void SetLevelOne(const HierarchyGroupSummary& value) { m_levelOneHasBeenSet = true; m_levelOne = value; }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline void SetLevelOne(HierarchyGroupSummary&& value) { m_levelOneHasBeenSet = true; m_levelOne = std::move(value); }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline HierarchyPath& WithLevelOne(const HierarchyGroupSummary& value) { SetLevelOne(value); return *this;}

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline HierarchyPath& WithLevelOne(HierarchyGroupSummary&& value) { SetLevelOne(std::move(value)); return *this;}


    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline const HierarchyGroupSummary& GetLevelTwo() const{ return m_levelTwo; }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline bool LevelTwoHasBeenSet() const { return m_levelTwoHasBeenSet; }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline void SetLevelTwo(const HierarchyGroupSummary& value) { m_levelTwoHasBeenSet = true; m_levelTwo = value; }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline void SetLevelTwo(HierarchyGroupSummary&& value) { m_levelTwoHasBeenSet = true; m_levelTwo = std::move(value); }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline HierarchyPath& WithLevelTwo(const HierarchyGroupSummary& value) { SetLevelTwo(value); return *this;}

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline HierarchyPath& WithLevelTwo(HierarchyGroupSummary&& value) { SetLevelTwo(std::move(value)); return *this;}


    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline const HierarchyGroupSummary& GetLevelThree() const{ return m_levelThree; }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline bool LevelThreeHasBeenSet() const { return m_levelThreeHasBeenSet; }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline void SetLevelThree(const HierarchyGroupSummary& value) { m_levelThreeHasBeenSet = true; m_levelThree = value; }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline void SetLevelThree(HierarchyGroupSummary&& value) { m_levelThreeHasBeenSet = true; m_levelThree = std::move(value); }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline HierarchyPath& WithLevelThree(const HierarchyGroupSummary& value) { SetLevelThree(value); return *this;}

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline HierarchyPath& WithLevelThree(HierarchyGroupSummary&& value) { SetLevelThree(std::move(value)); return *this;}


    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline const HierarchyGroupSummary& GetLevelFour() const{ return m_levelFour; }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline bool LevelFourHasBeenSet() const { return m_levelFourHasBeenSet; }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline void SetLevelFour(const HierarchyGroupSummary& value) { m_levelFourHasBeenSet = true; m_levelFour = value; }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline void SetLevelFour(HierarchyGroupSummary&& value) { m_levelFourHasBeenSet = true; m_levelFour = std::move(value); }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline HierarchyPath& WithLevelFour(const HierarchyGroupSummary& value) { SetLevelFour(value); return *this;}

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline HierarchyPath& WithLevelFour(HierarchyGroupSummary&& value) { SetLevelFour(std::move(value)); return *this;}


    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline const HierarchyGroupSummary& GetLevelFive() const{ return m_levelFive; }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline bool LevelFiveHasBeenSet() const { return m_levelFiveHasBeenSet; }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline void SetLevelFive(const HierarchyGroupSummary& value) { m_levelFiveHasBeenSet = true; m_levelFive = value; }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline void SetLevelFive(HierarchyGroupSummary&& value) { m_levelFiveHasBeenSet = true; m_levelFive = std::move(value); }

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline HierarchyPath& WithLevelFive(const HierarchyGroupSummary& value) { SetLevelFive(value); return *this;}

    /**
     * <p>A <code>HierarchyGroupSummary</code> object that contains information about
     * the level of the hierarchy group, including ARN, Id, and Name.</p>
     */
    inline HierarchyPath& WithLevelFive(HierarchyGroupSummary&& value) { SetLevelFive(std::move(value)); return *this;}

  private:

    HierarchyGroupSummary m_levelOne;
    bool m_levelOneHasBeenSet;

    HierarchyGroupSummary m_levelTwo;
    bool m_levelTwoHasBeenSet;

    HierarchyGroupSummary m_levelThree;
    bool m_levelThreeHasBeenSet;

    HierarchyGroupSummary m_levelFour;
    bool m_levelFourHasBeenSet;

    HierarchyGroupSummary m_levelFive;
    bool m_levelFiveHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
