/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>

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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Provides updates to the parallelism count.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/InputParallelismUpdate">AWS
   * API Reference</a></p>
   */
  class InputParallelismUpdate
  {
  public:
    AWS_KINESISANALYTICS_API InputParallelismUpdate();
    AWS_KINESISANALYTICS_API InputParallelismUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API InputParallelismUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Number of in-application streams to create for the specified streaming
     * source.</p>
     */
    inline int GetCountUpdate() const{ return m_countUpdate; }

    /**
     * <p>Number of in-application streams to create for the specified streaming
     * source.</p>
     */
    inline bool CountUpdateHasBeenSet() const { return m_countUpdateHasBeenSet; }

    /**
     * <p>Number of in-application streams to create for the specified streaming
     * source.</p>
     */
    inline void SetCountUpdate(int value) { m_countUpdateHasBeenSet = true; m_countUpdate = value; }

    /**
     * <p>Number of in-application streams to create for the specified streaming
     * source.</p>
     */
    inline InputParallelismUpdate& WithCountUpdate(int value) { SetCountUpdate(value); return *this;}

  private:

    int m_countUpdate;
    bool m_countUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
