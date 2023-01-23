/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>

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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents the range of values to match on. The first
   * character of the range is included in the range, though the last character is
   * not. For example, if the range specified were 1-100, only values 1-99 would be
   * matched.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/MatchRange">AWS
   * API Reference</a></p>
   */
  class MatchRange
  {
  public:
    AWS_APPMESH_API MatchRange();
    AWS_APPMESH_API MatchRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API MatchRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The end of the range.</p>
     */
    inline long long GetEnd() const{ return m_end; }

    /**
     * <p>The end of the range.</p>
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * <p>The end of the range.</p>
     */
    inline void SetEnd(long long value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>The end of the range.</p>
     */
    inline MatchRange& WithEnd(long long value) { SetEnd(value); return *this;}


    /**
     * <p>The start of the range.</p>
     */
    inline long long GetStart() const{ return m_start; }

    /**
     * <p>The start of the range.</p>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>The start of the range.</p>
     */
    inline void SetStart(long long value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>The start of the range.</p>
     */
    inline MatchRange& WithStart(long long value) { SetStart(value); return *this;}

  private:

    long long m_end;
    bool m_endHasBeenSet = false;

    long long m_start;
    bool m_startHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
