/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>Reserved.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/QueryCompileErrorLocation">AWS
   * API Reference</a></p>
   */
  class QueryCompileErrorLocation
  {
  public:
    AWS_CLOUDWATCHLOGS_API QueryCompileErrorLocation();
    AWS_CLOUDWATCHLOGS_API QueryCompileErrorLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API QueryCompileErrorLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reserved.</p>
     */
    inline int GetStartCharOffset() const{ return m_startCharOffset; }

    /**
     * <p>Reserved.</p>
     */
    inline bool StartCharOffsetHasBeenSet() const { return m_startCharOffsetHasBeenSet; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetStartCharOffset(int value) { m_startCharOffsetHasBeenSet = true; m_startCharOffset = value; }

    /**
     * <p>Reserved.</p>
     */
    inline QueryCompileErrorLocation& WithStartCharOffset(int value) { SetStartCharOffset(value); return *this;}


    /**
     * <p>Reserved.</p>
     */
    inline int GetEndCharOffset() const{ return m_endCharOffset; }

    /**
     * <p>Reserved.</p>
     */
    inline bool EndCharOffsetHasBeenSet() const { return m_endCharOffsetHasBeenSet; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetEndCharOffset(int value) { m_endCharOffsetHasBeenSet = true; m_endCharOffset = value; }

    /**
     * <p>Reserved.</p>
     */
    inline QueryCompileErrorLocation& WithEndCharOffset(int value) { SetEndCharOffset(value); return *this;}

  private:

    int m_startCharOffset;
    bool m_startCharOffsetHasBeenSet = false;

    int m_endCharOffset;
    bool m_endCharOffsetHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
