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


    ///@{
    /**
     * <p>The state of the dataset contents. Can be one of READY, CREATING, SUCCEEDED,
     * or FAILED.</p>
     */
    inline const DatasetContentState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const DatasetContentState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(DatasetContentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline DatasetContentStatus& WithState(const DatasetContentState& value) { SetState(value); return *this;}
    inline DatasetContentStatus& WithState(DatasetContentState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the dataset contents are in this state.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline DatasetContentStatus& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline DatasetContentStatus& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline DatasetContentStatus& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}
  private:

    DatasetContentState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
