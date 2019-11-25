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
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ApplicationInsights
{
namespace Model
{

  /**
   * <p>An object that defines the log patterns that belongs to a
   * <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/LogPattern">AWS
   * API Reference</a></p>
   */
  class AWS_APPLICATIONINSIGHTS_API LogPattern
  {
  public:
    LogPattern();
    LogPattern(Aws::Utils::Json::JsonView jsonValue);
    LogPattern& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the log pattern. A log pattern name can contains at many as 30
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits or one of the following symbols: period, dash, underscore.</p>
     */
    inline const Aws::String& GetPatternSetName() const{ return m_patternSetName; }

    /**
     * <p>The name of the log pattern. A log pattern name can contains at many as 30
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits or one of the following symbols: period, dash, underscore.</p>
     */
    inline bool PatternSetNameHasBeenSet() const { return m_patternSetNameHasBeenSet; }

    /**
     * <p>The name of the log pattern. A log pattern name can contains at many as 30
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits or one of the following symbols: period, dash, underscore.</p>
     */
    inline void SetPatternSetName(const Aws::String& value) { m_patternSetNameHasBeenSet = true; m_patternSetName = value; }

    /**
     * <p>The name of the log pattern. A log pattern name can contains at many as 30
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits or one of the following symbols: period, dash, underscore.</p>
     */
    inline void SetPatternSetName(Aws::String&& value) { m_patternSetNameHasBeenSet = true; m_patternSetName = std::move(value); }

    /**
     * <p>The name of the log pattern. A log pattern name can contains at many as 30
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits or one of the following symbols: period, dash, underscore.</p>
     */
    inline void SetPatternSetName(const char* value) { m_patternSetNameHasBeenSet = true; m_patternSetName.assign(value); }

    /**
     * <p>The name of the log pattern. A log pattern name can contains at many as 30
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits or one of the following symbols: period, dash, underscore.</p>
     */
    inline LogPattern& WithPatternSetName(const Aws::String& value) { SetPatternSetName(value); return *this;}

    /**
     * <p>The name of the log pattern. A log pattern name can contains at many as 30
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits or one of the following symbols: period, dash, underscore.</p>
     */
    inline LogPattern& WithPatternSetName(Aws::String&& value) { SetPatternSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the log pattern. A log pattern name can contains at many as 30
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits or one of the following symbols: period, dash, underscore.</p>
     */
    inline LogPattern& WithPatternSetName(const char* value) { SetPatternSetName(value); return *this;}


    /**
     * <p>The name of the log pattern. A log pattern name can contains at many as 50
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits or one of the following symbols: period, dash, underscore.</p>
     */
    inline const Aws::String& GetPatternName() const{ return m_patternName; }

    /**
     * <p>The name of the log pattern. A log pattern name can contains at many as 50
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits or one of the following symbols: period, dash, underscore.</p>
     */
    inline bool PatternNameHasBeenSet() const { return m_patternNameHasBeenSet; }

    /**
     * <p>The name of the log pattern. A log pattern name can contains at many as 50
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits or one of the following symbols: period, dash, underscore.</p>
     */
    inline void SetPatternName(const Aws::String& value) { m_patternNameHasBeenSet = true; m_patternName = value; }

    /**
     * <p>The name of the log pattern. A log pattern name can contains at many as 50
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits or one of the following symbols: period, dash, underscore.</p>
     */
    inline void SetPatternName(Aws::String&& value) { m_patternNameHasBeenSet = true; m_patternName = std::move(value); }

    /**
     * <p>The name of the log pattern. A log pattern name can contains at many as 50
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits or one of the following symbols: period, dash, underscore.</p>
     */
    inline void SetPatternName(const char* value) { m_patternNameHasBeenSet = true; m_patternName.assign(value); }

    /**
     * <p>The name of the log pattern. A log pattern name can contains at many as 50
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits or one of the following symbols: period, dash, underscore.</p>
     */
    inline LogPattern& WithPatternName(const Aws::String& value) { SetPatternName(value); return *this;}

    /**
     * <p>The name of the log pattern. A log pattern name can contains at many as 50
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits or one of the following symbols: period, dash, underscore.</p>
     */
    inline LogPattern& WithPatternName(Aws::String&& value) { SetPatternName(std::move(value)); return *this;}

    /**
     * <p>The name of the log pattern. A log pattern name can contains at many as 50
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits or one of the following symbols: period, dash, underscore.</p>
     */
    inline LogPattern& WithPatternName(const char* value) { SetPatternName(value); return *this;}


    /**
     * <p>A regular expression that defines the log pattern. A log pattern can contains
     * at many as 50 characters, and it cannot be empty.</p>
     */
    inline const Aws::String& GetPattern() const{ return m_pattern; }

    /**
     * <p>A regular expression that defines the log pattern. A log pattern can contains
     * at many as 50 characters, and it cannot be empty.</p>
     */
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }

    /**
     * <p>A regular expression that defines the log pattern. A log pattern can contains
     * at many as 50 characters, and it cannot be empty.</p>
     */
    inline void SetPattern(const Aws::String& value) { m_patternHasBeenSet = true; m_pattern = value; }

    /**
     * <p>A regular expression that defines the log pattern. A log pattern can contains
     * at many as 50 characters, and it cannot be empty.</p>
     */
    inline void SetPattern(Aws::String&& value) { m_patternHasBeenSet = true; m_pattern = std::move(value); }

    /**
     * <p>A regular expression that defines the log pattern. A log pattern can contains
     * at many as 50 characters, and it cannot be empty.</p>
     */
    inline void SetPattern(const char* value) { m_patternHasBeenSet = true; m_pattern.assign(value); }

    /**
     * <p>A regular expression that defines the log pattern. A log pattern can contains
     * at many as 50 characters, and it cannot be empty.</p>
     */
    inline LogPattern& WithPattern(const Aws::String& value) { SetPattern(value); return *this;}

    /**
     * <p>A regular expression that defines the log pattern. A log pattern can contains
     * at many as 50 characters, and it cannot be empty.</p>
     */
    inline LogPattern& WithPattern(Aws::String&& value) { SetPattern(std::move(value)); return *this;}

    /**
     * <p>A regular expression that defines the log pattern. A log pattern can contains
     * at many as 50 characters, and it cannot be empty.</p>
     */
    inline LogPattern& WithPattern(const char* value) { SetPattern(value); return *this;}


    /**
     * <p>Rank of the log pattern.</p>
     */
    inline int GetRank() const{ return m_rank; }

    /**
     * <p>Rank of the log pattern.</p>
     */
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }

    /**
     * <p>Rank of the log pattern.</p>
     */
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }

    /**
     * <p>Rank of the log pattern.</p>
     */
    inline LogPattern& WithRank(int value) { SetRank(value); return *this;}

  private:

    Aws::String m_patternSetName;
    bool m_patternSetNameHasBeenSet;

    Aws::String m_patternName;
    bool m_patternNameHasBeenSet;

    Aws::String m_pattern;
    bool m_patternHasBeenSet;

    int m_rank;
    bool m_rankHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
