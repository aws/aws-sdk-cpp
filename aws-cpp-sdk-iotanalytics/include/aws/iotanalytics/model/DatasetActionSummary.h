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
   * <p>Information about the action which automatically creates the data set's
   * contents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatasetActionSummary">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API DatasetActionSummary
  {
  public:
    DatasetActionSummary();
    DatasetActionSummary(Aws::Utils::Json::JsonView jsonValue);
    DatasetActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the action which automatically creates the data set's
     * contents.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>The name of the action which automatically creates the data set's
     * contents.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>The name of the action which automatically creates the data set's
     * contents.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The name of the action which automatically creates the data set's
     * contents.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>The name of the action which automatically creates the data set's
     * contents.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>The name of the action which automatically creates the data set's
     * contents.</p>
     */
    inline DatasetActionSummary& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>The name of the action which automatically creates the data set's
     * contents.</p>
     */
    inline DatasetActionSummary& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the action which automatically creates the data set's
     * contents.</p>
     */
    inline DatasetActionSummary& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>The type of action by which the data set's contents are automatically
     * created.</p>
     */
    inline const DatasetActionType& GetActionType() const{ return m_actionType; }

    /**
     * <p>The type of action by which the data set's contents are automatically
     * created.</p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p>The type of action by which the data set's contents are automatically
     * created.</p>
     */
    inline void SetActionType(const DatasetActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p>The type of action by which the data set's contents are automatically
     * created.</p>
     */
    inline void SetActionType(DatasetActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p>The type of action by which the data set's contents are automatically
     * created.</p>
     */
    inline DatasetActionSummary& WithActionType(const DatasetActionType& value) { SetActionType(value); return *this;}

    /**
     * <p>The type of action by which the data set's contents are automatically
     * created.</p>
     */
    inline DatasetActionSummary& WithActionType(DatasetActionType&& value) { SetActionType(std::move(value)); return *this;}

  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet;

    DatasetActionType m_actionType;
    bool m_actionTypeHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
