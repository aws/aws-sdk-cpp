/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>

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
   * <p>A reference to a substring of a literal string in a JSON
   * document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/Substring">AWS
   * API Reference</a></p>
   */
  class AWS_ACCESSANALYZER_API Substring
  {
  public:
    Substring();
    Substring(Aws::Utils::Json::JsonView jsonValue);
    Substring& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The length of the substring.</p>
     */
    inline int GetLength() const{ return m_length; }

    /**
     * <p>The length of the substring.</p>
     */
    inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }

    /**
     * <p>The length of the substring.</p>
     */
    inline void SetLength(int value) { m_lengthHasBeenSet = true; m_length = value; }

    /**
     * <p>The length of the substring.</p>
     */
    inline Substring& WithLength(int value) { SetLength(value); return *this;}


    /**
     * <p>The start index of the substring, starting from 0.</p>
     */
    inline int GetStart() const{ return m_start; }

    /**
     * <p>The start index of the substring, starting from 0.</p>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>The start index of the substring, starting from 0.</p>
     */
    inline void SetStart(int value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>The start index of the substring, starting from 0.</p>
     */
    inline Substring& WithStart(int value) { SetStart(value); return *this;}

  private:

    int m_length;
    bool m_lengthHasBeenSet;

    int m_start;
    bool m_startHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
