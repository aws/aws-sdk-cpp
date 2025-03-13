/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/DatasetActionType.h>
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
   * <p>Information about the action that automatically creates the dataset's
   * contents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatasetActionSummary">AWS
   * API Reference</a></p>
   */
  class DatasetActionSummary
  {
  public:
    AWS_IOTANALYTICS_API DatasetActionSummary() = default;
    AWS_IOTANALYTICS_API DatasetActionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatasetActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the action that automatically creates the dataset's contents.</p>
     */
    inline const Aws::String& GetActionName() const { return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    template<typename ActionNameT = Aws::String>
    void SetActionName(ActionNameT&& value) { m_actionNameHasBeenSet = true; m_actionName = std::forward<ActionNameT>(value); }
    template<typename ActionNameT = Aws::String>
    DatasetActionSummary& WithActionName(ActionNameT&& value) { SetActionName(std::forward<ActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of action by which the dataset's contents are automatically
     * created.</p>
     */
    inline DatasetActionType GetActionType() const { return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    inline void SetActionType(DatasetActionType value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline DatasetActionSummary& WithActionType(DatasetActionType value) { SetActionType(value); return *this;}
    ///@}
  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    DatasetActionType m_actionType{DatasetActionType::NOT_SET};
    bool m_actionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
