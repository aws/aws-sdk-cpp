/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>For a SQL-based Kinesis Data Analytics application, provides updates to the
   * parallelism count.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/InputParallelismUpdate">AWS
   * API Reference</a></p>
   */
  class InputParallelismUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API InputParallelismUpdate();
    AWS_KINESISANALYTICSV2_API InputParallelismUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API InputParallelismUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_countUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
