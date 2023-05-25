/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/Position.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>A span in a policy. The span consists of a start position (inclusive) and end
   * position (exclusive).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/Span">AWS
   * API Reference</a></p>
   */
  class Span
  {
  public:
    AWS_ACCESSANALYZER_API Span();
    AWS_ACCESSANALYZER_API Span(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Span& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start position of the span (inclusive).</p>
     */
    inline const Position& GetStart() const{ return m_start; }

    /**
     * <p>The start position of the span (inclusive).</p>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>The start position of the span (inclusive).</p>
     */
    inline void SetStart(const Position& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>The start position of the span (inclusive).</p>
     */
    inline void SetStart(Position&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * <p>The start position of the span (inclusive).</p>
     */
    inline Span& WithStart(const Position& value) { SetStart(value); return *this;}

    /**
     * <p>The start position of the span (inclusive).</p>
     */
    inline Span& WithStart(Position&& value) { SetStart(std::move(value)); return *this;}


    /**
     * <p>The end position of the span (exclusive).</p>
     */
    inline const Position& GetEnd() const{ return m_end; }

    /**
     * <p>The end position of the span (exclusive).</p>
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * <p>The end position of the span (exclusive).</p>
     */
    inline void SetEnd(const Position& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>The end position of the span (exclusive).</p>
     */
    inline void SetEnd(Position&& value) { m_endHasBeenSet = true; m_end = std::move(value); }

    /**
     * <p>The end position of the span (exclusive).</p>
     */
    inline Span& WithEnd(const Position& value) { SetEnd(value); return *this;}

    /**
     * <p>The end position of the span (exclusive).</p>
     */
    inline Span& WithEnd(Position&& value) { SetEnd(std::move(value)); return *this;}

  private:

    Position m_start;
    bool m_startHasBeenSet = false;

    Position m_end;
    bool m_endHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
