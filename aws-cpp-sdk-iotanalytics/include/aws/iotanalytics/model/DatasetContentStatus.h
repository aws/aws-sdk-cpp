/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/DatasetContentState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>The state of the dataset contents and the reason they are in this
   * state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatasetContentStatus">AWS
   * API Reference</a></p>
   */
  class DatasetContentStatus
  {
  public:
    AWS_IOTANALYTICS_API DatasetContentStatus();
    AWS_IOTANALYTICS_API DatasetContentStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatasetContentStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The state of the dataset contents. Can be one of READY, CREATING, SUCCEEDED,
     * or FAILED.</p>
     */
    inline const DatasetContentState& GetState() const{ return m_state; }

    /**
     * <p>The state of the dataset contents. Can be one of READY, CREATING, SUCCEEDED,
     * or FAILED.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the dataset contents. Can be one of READY, CREATING, SUCCEEDED,
     * or FAILED.</p>
     */
    inline void SetState(const DatasetContentState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the dataset contents. Can be one of READY, CREATING, SUCCEEDED,
     * or FAILED.</p>
     */
    inline void SetState(DatasetContentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the dataset contents. Can be one of READY, CREATING, SUCCEEDED,
     * or FAILED.</p>
     */
    inline DatasetContentStatus& WithState(const DatasetContentState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the dataset contents. Can be one of READY, CREATING, SUCCEEDED,
     * or FAILED.</p>
     */
    inline DatasetContentStatus& WithState(DatasetContentState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The reason the dataset contents are in this state.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason the dataset contents are in this state.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason the dataset contents are in this state.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason the dataset contents are in this state.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason the dataset contents are in this state.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason the dataset contents are in this state.</p>
     */
    inline DatasetContentStatus& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason the dataset contents are in this state.</p>
     */
    inline DatasetContentStatus& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason the dataset contents are in this state.</p>
     */
    inline DatasetContentStatus& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    DatasetContentState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
