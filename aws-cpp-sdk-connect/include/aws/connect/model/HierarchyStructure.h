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
   * <p>A <code>HierarchyStructure</code> object that contains information about the
   * hierarchy group structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HierarchyStructure">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API HierarchyStructure
  {
  public:
    HierarchyStructure();
    HierarchyStructure(Aws::Utils::Json::JsonView jsonValue);
    HierarchyStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline const HierarchyLevel& GetLevelOne() const{ return m_levelOne; }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline bool LevelOneHasBeenSet() const { return m_levelOneHasBeenSet; }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline void SetLevelOne(const HierarchyLevel& value) { m_levelOneHasBeenSet = true; m_levelOne = value; }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline void SetLevelOne(HierarchyLevel&& value) { m_levelOneHasBeenSet = true; m_levelOne = std::move(value); }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline HierarchyStructure& WithLevelOne(const HierarchyLevel& value) { SetLevelOne(value); return *this;}

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline HierarchyStructure& WithLevelOne(HierarchyLevel&& value) { SetLevelOne(std::move(value)); return *this;}


    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline const HierarchyLevel& GetLevelTwo() const{ return m_levelTwo; }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline bool LevelTwoHasBeenSet() const { return m_levelTwoHasBeenSet; }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline void SetLevelTwo(const HierarchyLevel& value) { m_levelTwoHasBeenSet = true; m_levelTwo = value; }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline void SetLevelTwo(HierarchyLevel&& value) { m_levelTwoHasBeenSet = true; m_levelTwo = std::move(value); }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline HierarchyStructure& WithLevelTwo(const HierarchyLevel& value) { SetLevelTwo(value); return *this;}

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline HierarchyStructure& WithLevelTwo(HierarchyLevel&& value) { SetLevelTwo(std::move(value)); return *this;}


    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline const HierarchyLevel& GetLevelThree() const{ return m_levelThree; }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline bool LevelThreeHasBeenSet() const { return m_levelThreeHasBeenSet; }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline void SetLevelThree(const HierarchyLevel& value) { m_levelThreeHasBeenSet = true; m_levelThree = value; }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline void SetLevelThree(HierarchyLevel&& value) { m_levelThreeHasBeenSet = true; m_levelThree = std::move(value); }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline HierarchyStructure& WithLevelThree(const HierarchyLevel& value) { SetLevelThree(value); return *this;}

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline HierarchyStructure& WithLevelThree(HierarchyLevel&& value) { SetLevelThree(std::move(value)); return *this;}


    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline const HierarchyLevel& GetLevelFour() const{ return m_levelFour; }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline bool LevelFourHasBeenSet() const { return m_levelFourHasBeenSet; }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline void SetLevelFour(const HierarchyLevel& value) { m_levelFourHasBeenSet = true; m_levelFour = value; }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline void SetLevelFour(HierarchyLevel&& value) { m_levelFourHasBeenSet = true; m_levelFour = std::move(value); }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline HierarchyStructure& WithLevelFour(const HierarchyLevel& value) { SetLevelFour(value); return *this;}

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline HierarchyStructure& WithLevelFour(HierarchyLevel&& value) { SetLevelFour(std::move(value)); return *this;}


    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline const HierarchyLevel& GetLevelFive() const{ return m_levelFive; }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline bool LevelFiveHasBeenSet() const { return m_levelFiveHasBeenSet; }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline void SetLevelFive(const HierarchyLevel& value) { m_levelFiveHasBeenSet = true; m_levelFive = value; }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline void SetLevelFive(HierarchyLevel&& value) { m_levelFiveHasBeenSet = true; m_levelFive = std::move(value); }

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline HierarchyStructure& WithLevelFive(const HierarchyLevel& value) { SetLevelFive(value); return *this;}

    /**
     * <p>A <code>HierarchyLevel</code> object that contains information about the
     * hierarchy group level.</p>
     */
    inline HierarchyStructure& WithLevelFive(HierarchyLevel&& value) { SetLevelFive(std::move(value)); return *this;}

  private:

    HierarchyLevel m_levelOne;
    bool m_levelOneHasBeenSet;

    HierarchyLevel m_levelTwo;
    bool m_levelTwoHasBeenSet;

    HierarchyLevel m_levelThree;
    bool m_levelThreeHasBeenSet;

    HierarchyLevel m_levelFour;
    bool m_levelFourHasBeenSet;

    HierarchyLevel m_levelFive;
    bool m_levelFiveHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
