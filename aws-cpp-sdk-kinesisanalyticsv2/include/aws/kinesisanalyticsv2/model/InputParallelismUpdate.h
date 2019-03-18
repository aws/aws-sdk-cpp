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
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>

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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>For an SQL-based Amazon Kinesis Data Analytics application, provides updates
   * to the parallelism count.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/InputParallelismUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API InputParallelismUpdate
  {
  public:
    InputParallelismUpdate();
    InputParallelismUpdate(Aws::Utils::Json::JsonView jsonValue);
    InputParallelismUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of in-application streams to create for the specified streaming
     * source.</p>
     */
    inline int GetCountUpdate() const{ return m_countUpdate; }

    /**
     * <p>The number of in-application streams to create for the specified streaming
     * source.</p>
     */
    inline bool CountUpdateHasBeenSet() const { return m_countUpdateHasBeenSet; }

    /**
     * <p>The number of in-application streams to create for the specified streaming
     * source.</p>
     */
    inline void SetCountUpdate(int value) { m_countUpdateHasBeenSet = true; m_countUpdate = value; }

    /**
     * <p>The number of in-application streams to create for the specified streaming
     * source.</p>
     */
    inline InputParallelismUpdate& WithCountUpdate(int value) { SetCountUpdate(value); return *this;}

  private:

    int m_countUpdate;
    bool m_countUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
