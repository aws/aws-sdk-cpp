/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class LogPattern
  {
  public:
    AWS_APPLICATIONINSIGHTS_API LogPattern();
    AWS_APPLICATIONINSIGHTS_API LogPattern(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API LogPattern& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the log pattern. A log pattern name can contain as many as 30
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits, or one of the following symbols: period, dash, underscore.</p>
     */
    inline const Aws::String& GetPatternSetName() const{ return m_patternSetName; }

    /**
     * <p>The name of the log pattern. A log pattern name can contain as many as 30
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits, or one of the following symbols: period, dash, underscore.</p>
     */
    inline bool PatternSetNameHasBeenSet() const { return m_patternSetNameHasBeenSet; }

    /**
     * <p>The name of the log pattern. A log pattern name can contain as many as 30
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits, or one of the following symbols: period, dash, underscore.</p>
     */
    inline void SetPatternSetName(const Aws::String& value) { m_patternSetNameHasBeenSet = true; m_patternSetName = value; }

    /**
     * <p>The name of the log pattern. A log pattern name can contain as many as 30
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits, or one of the following symbols: period, dash, underscore.</p>
     */
    inline void SetPatternSetName(Aws::String&& value) { m_patternSetNameHasBeenSet = true; m_patternSetName = std::move(value); }

    /**
     * <p>The name of the log pattern. A log pattern name can contain as many as 30
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits, or one of the following symbols: period, dash, underscore.</p>
     */
    inline void SetPatternSetName(const char* value) { m_patternSetNameHasBeenSet = true; m_patternSetName.assign(value); }

    /**
     * <p>The name of the log pattern. A log pattern name can contain as many as 30
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits, or one of the following symbols: period, dash, underscore.</p>
     */
    inline LogPattern& WithPatternSetName(const Aws::String& value) { SetPatternSetName(value); return *this;}

    /**
     * <p>The name of the log pattern. A log pattern name can contain as many as 30
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits, or one of the following symbols: period, dash, underscore.</p>
     */
    inline LogPattern& WithPatternSetName(Aws::String&& value) { SetPatternSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the log pattern. A log pattern name can contain as many as 30
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits, or one of the following symbols: period, dash, underscore.</p>
     */
    inline LogPattern& WithPatternSetName(const char* value) { SetPatternSetName(value); return *this;}


    /**
     * <p>The name of the log pattern. A log pattern name can contain as many as 50
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits, or one of the following symbols: period, dash, underscore.</p>
     */
    inline const Aws::String& GetPatternName() const{ return m_patternName; }

    /**
     * <p>The name of the log pattern. A log pattern name can contain as many as 50
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits, or one of the following symbols: period, dash, underscore.</p>
     */
    inline bool PatternNameHasBeenSet() const { return m_patternNameHasBeenSet; }

    /**
     * <p>The name of the log pattern. A log pattern name can contain as many as 50
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits, or one of the following symbols: period, dash, underscore.</p>
     */
    inline void SetPatternName(const Aws::String& value) { m_patternNameHasBeenSet = true; m_patternName = value; }

    /**
     * <p>The name of the log pattern. A log pattern name can contain as many as 50
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits, or one of the following symbols: period, dash, underscore.</p>
     */
    inline void SetPatternName(Aws::String&& value) { m_patternNameHasBeenSet = true; m_patternName = std::move(value); }

    /**
     * <p>The name of the log pattern. A log pattern name can contain as many as 50
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits, or one of the following symbols: period, dash, underscore.</p>
     */
    inline void SetPatternName(const char* value) { m_patternNameHasBeenSet = true; m_patternName.assign(value); }

    /**
     * <p>The name of the log pattern. A log pattern name can contain as many as 50
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits, or one of the following symbols: period, dash, underscore.</p>
     */
    inline LogPattern& WithPatternName(const Aws::String& value) { SetPatternName(value); return *this;}

    /**
     * <p>The name of the log pattern. A log pattern name can contain as many as 50
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits, or one of the following symbols: period, dash, underscore.</p>
     */
    inline LogPattern& WithPatternName(Aws::String&& value) { SetPatternName(std::move(value)); return *this;}

    /**
     * <p>The name of the log pattern. A log pattern name can contain as many as 50
     * characters, and it cannot be empty. The characters can be Unicode letters,
     * digits, or one of the following symbols: period, dash, underscore.</p>
     */
    inline LogPattern& WithPatternName(const char* value) { SetPatternName(value); return *this;}


    /**
     * <p>A regular expression that defines the log pattern. A log pattern can contain
     * as many as 50 characters, and it cannot be empty. The pattern must be DFA
     * compatible. Patterns that utilize forward lookahead or backreference
     * constructions are not supported.</p>
     */
    inline const Aws::String& GetPattern() const{ return m_pattern; }

    /**
     * <p>A regular expression that defines the log pattern. A log pattern can contain
     * as many as 50 characters, and it cannot be empty. The pattern must be DFA
     * compatible. Patterns that utilize forward lookahead or backreference
     * constructions are not supported.</p>
     */
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }

    /**
     * <p>A regular expression that defines the log pattern. A log pattern can contain
     * as many as 50 characters, and it cannot be empty. The pattern must be DFA
     * compatible. Patterns that utilize forward lookahead or backreference
     * constructions are not supported.</p>
     */
    inline void SetPattern(const Aws::String& value) { m_patternHasBeenSet = true; m_pattern = value; }

    /**
     * <p>A regular expression that defines the log pattern. A log pattern can contain
     * as many as 50 characters, and it cannot be empty. The pattern must be DFA
     * compatible. Patterns that utilize forward lookahead or backreference
     * constructions are not supported.</p>
     */
    inline void SetPattern(Aws::String&& value) { m_patternHasBeenSet = true; m_pattern = std::move(value); }

    /**
     * <p>A regular expression that defines the log pattern. A log pattern can contain
     * as many as 50 characters, and it cannot be empty. The pattern must be DFA
     * compatible. Patterns that utilize forward lookahead or backreference
     * constructions are not supported.</p>
     */
    inline void SetPattern(const char* value) { m_patternHasBeenSet = true; m_pattern.assign(value); }

    /**
     * <p>A regular expression that defines the log pattern. A log pattern can contain
     * as many as 50 characters, and it cannot be empty. The pattern must be DFA
     * compatible. Patterns that utilize forward lookahead or backreference
     * constructions are not supported.</p>
     */
    inline LogPattern& WithPattern(const Aws::String& value) { SetPattern(value); return *this;}

    /**
     * <p>A regular expression that defines the log pattern. A log pattern can contain
     * as many as 50 characters, and it cannot be empty. The pattern must be DFA
     * compatible. Patterns that utilize forward lookahead or backreference
     * constructions are not supported.</p>
     */
    inline LogPattern& WithPattern(Aws::String&& value) { SetPattern(std::move(value)); return *this;}

    /**
     * <p>A regular expression that defines the log pattern. A log pattern can contain
     * as many as 50 characters, and it cannot be empty. The pattern must be DFA
     * compatible. Patterns that utilize forward lookahead or backreference
     * constructions are not supported.</p>
     */
    inline LogPattern& WithPattern(const char* value) { SetPattern(value); return *this;}


    /**
     * <p>Rank of the log pattern. Must be a value between <code>1</code> and
     * <code>1,000,000</code>. The patterns are sorted by rank, so we recommend that
     * you set your highest priority patterns with the lowest rank. A pattern of rank
     * <code>1</code> will be the first to get matched to a log line. A pattern of rank
     * <code>1,000,000</code> will be last to get matched. When you configure custom
     * log patterns from the console, a <code>Low</code> severity pattern translates to
     * a <code>750,000</code> rank. A <code>Medium</code> severity pattern translates
     * to a <code>500,000</code> rank. And a <code>High</code> severity pattern
     * translates to a <code>250,000</code> rank. Rank values less than <code>1</code>
     * or greater than <code>1,000,000</code> are reserved for AWS-provided patterns.
     * </p>
     */
    inline int GetRank() const{ return m_rank; }

    /**
     * <p>Rank of the log pattern. Must be a value between <code>1</code> and
     * <code>1,000,000</code>. The patterns are sorted by rank, so we recommend that
     * you set your highest priority patterns with the lowest rank. A pattern of rank
     * <code>1</code> will be the first to get matched to a log line. A pattern of rank
     * <code>1,000,000</code> will be last to get matched. When you configure custom
     * log patterns from the console, a <code>Low</code> severity pattern translates to
     * a <code>750,000</code> rank. A <code>Medium</code> severity pattern translates
     * to a <code>500,000</code> rank. And a <code>High</code> severity pattern
     * translates to a <code>250,000</code> rank. Rank values less than <code>1</code>
     * or greater than <code>1,000,000</code> are reserved for AWS-provided patterns.
     * </p>
     */
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }

    /**
     * <p>Rank of the log pattern. Must be a value between <code>1</code> and
     * <code>1,000,000</code>. The patterns are sorted by rank, so we recommend that
     * you set your highest priority patterns with the lowest rank. A pattern of rank
     * <code>1</code> will be the first to get matched to a log line. A pattern of rank
     * <code>1,000,000</code> will be last to get matched. When you configure custom
     * log patterns from the console, a <code>Low</code> severity pattern translates to
     * a <code>750,000</code> rank. A <code>Medium</code> severity pattern translates
     * to a <code>500,000</code> rank. And a <code>High</code> severity pattern
     * translates to a <code>250,000</code> rank. Rank values less than <code>1</code>
     * or greater than <code>1,000,000</code> are reserved for AWS-provided patterns.
     * </p>
     */
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }

    /**
     * <p>Rank of the log pattern. Must be a value between <code>1</code> and
     * <code>1,000,000</code>. The patterns are sorted by rank, so we recommend that
     * you set your highest priority patterns with the lowest rank. A pattern of rank
     * <code>1</code> will be the first to get matched to a log line. A pattern of rank
     * <code>1,000,000</code> will be last to get matched. When you configure custom
     * log patterns from the console, a <code>Low</code> severity pattern translates to
     * a <code>750,000</code> rank. A <code>Medium</code> severity pattern translates
     * to a <code>500,000</code> rank. And a <code>High</code> severity pattern
     * translates to a <code>250,000</code> rank. Rank values less than <code>1</code>
     * or greater than <code>1,000,000</code> are reserved for AWS-provided patterns.
     * </p>
     */
    inline LogPattern& WithRank(int value) { SetRank(value); return *this;}

  private:

    Aws::String m_patternSetName;
    bool m_patternSetNameHasBeenSet = false;

    Aws::String m_patternName;
    bool m_patternNameHasBeenSet = false;

    Aws::String m_pattern;
    bool m_patternHasBeenSet = false;

    int m_rank;
    bool m_rankHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
