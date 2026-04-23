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
  class AWS_CLOUDWATCHLOGS_API QueryCompileErrorLocation
  {
  public:
    QueryCompileErrorLocation();
    QueryCompileErrorLocation(Aws::Utils::Json::JsonView jsonValue);
    QueryCompileErrorLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_startCharOffsetHasBeenSet;

    int m_endCharOffset;
    bool m_endCharOffsetHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
