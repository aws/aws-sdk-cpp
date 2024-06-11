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
    AWS_IOTANALYTICS_API DatasetActionSummary();
    AWS_IOTANALYTICS_API DatasetActionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatasetActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the action that automatically creates the dataset's contents.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }
    inline DatasetActionSummary& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}
    inline DatasetActionSummary& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}
    inline DatasetActionSummary& WithActionName(const char* value) { SetActionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of action by which the dataset's contents are automatically
     * created.</p>
     */
    inline const DatasetActionType& GetActionType() const{ return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    inline void SetActionType(const DatasetActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline void SetActionType(DatasetActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }
    inline DatasetActionSummary& WithActionType(const DatasetActionType& value) { SetActionType(value); return *this;}
    inline DatasetActionSummary& WithActionType(DatasetActionType&& value) { SetActionType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    DatasetActionType m_actionType;
    bool m_actionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
