/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>

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
namespace Glue
{
namespace Model
{

  /**
   * <p>The batch condition that started the workflow run. Either the number of
   * events in the batch size arrived, in which case the BatchSize member is
   * non-zero, or the batch window expired, in which case the BatchWindow member is
   * non-zero.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartingEventBatchCondition">AWS
   * API Reference</a></p>
   */
  class StartingEventBatchCondition
  {
  public:
    AWS_GLUE_API StartingEventBatchCondition();
    AWS_GLUE_API StartingEventBatchCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API StartingEventBatchCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Number of events in the batch.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }

    /**
     * <p>Number of events in the batch.</p>
     */
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }

    /**
     * <p>Number of events in the batch.</p>
     */
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }

    /**
     * <p>Number of events in the batch.</p>
     */
    inline StartingEventBatchCondition& WithBatchSize(int value) { SetBatchSize(value); return *this;}


    /**
     * <p>Duration of the batch window in seconds.</p>
     */
    inline int GetBatchWindow() const{ return m_batchWindow; }

    /**
     * <p>Duration of the batch window in seconds.</p>
     */
    inline bool BatchWindowHasBeenSet() const { return m_batchWindowHasBeenSet; }

    /**
     * <p>Duration of the batch window in seconds.</p>
     */
    inline void SetBatchWindow(int value) { m_batchWindowHasBeenSet = true; m_batchWindow = value; }

    /**
     * <p>Duration of the batch window in seconds.</p>
     */
    inline StartingEventBatchCondition& WithBatchWindow(int value) { SetBatchWindow(value); return *this;}

  private:

    int m_batchSize;
    bool m_batchSizeHasBeenSet = false;

    int m_batchWindow;
    bool m_batchWindowHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
