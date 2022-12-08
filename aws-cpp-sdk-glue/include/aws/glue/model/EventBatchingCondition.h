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
   * <p>Batch condition that must be met (specified number of events received or
   * batch time window expired) before EventBridge event trigger fires.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/EventBatchingCondition">AWS
   * API Reference</a></p>
   */
  class EventBatchingCondition
  {
  public:
    AWS_GLUE_API EventBatchingCondition();
    AWS_GLUE_API EventBatchingCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API EventBatchingCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Number of events that must be received from Amazon EventBridge before
     * EventBridge event trigger fires.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }

    /**
     * <p>Number of events that must be received from Amazon EventBridge before
     * EventBridge event trigger fires.</p>
     */
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }

    /**
     * <p>Number of events that must be received from Amazon EventBridge before
     * EventBridge event trigger fires.</p>
     */
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }

    /**
     * <p>Number of events that must be received from Amazon EventBridge before
     * EventBridge event trigger fires.</p>
     */
    inline EventBatchingCondition& WithBatchSize(int value) { SetBatchSize(value); return *this;}


    /**
     * <p>Window of time in seconds after which EventBridge event trigger fires. Window
     * starts when first event is received.</p>
     */
    inline int GetBatchWindow() const{ return m_batchWindow; }

    /**
     * <p>Window of time in seconds after which EventBridge event trigger fires. Window
     * starts when first event is received.</p>
     */
    inline bool BatchWindowHasBeenSet() const { return m_batchWindowHasBeenSet; }

    /**
     * <p>Window of time in seconds after which EventBridge event trigger fires. Window
     * starts when first event is received.</p>
     */
    inline void SetBatchWindow(int value) { m_batchWindowHasBeenSet = true; m_batchWindow = value; }

    /**
     * <p>Window of time in seconds after which EventBridge event trigger fires. Window
     * starts when first event is received.</p>
     */
    inline EventBatchingCondition& WithBatchWindow(int value) { SetBatchWindow(value); return *this;}

  private:

    int m_batchSize;
    bool m_batchSizeHasBeenSet = false;

    int m_batchWindow;
    bool m_batchWindowHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
