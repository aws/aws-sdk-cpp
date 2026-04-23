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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * A list of schedule actions to delete.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchScheduleActionDeleteRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API BatchScheduleActionDeleteRequest
  {
  public:
    BatchScheduleActionDeleteRequest();
    BatchScheduleActionDeleteRequest(Aws::Utils::Json::JsonView jsonValue);
    BatchScheduleActionDeleteRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A list of schedule actions to delete.
     */
    inline const Aws::Vector<Aws::String>& GetActionNames() const{ return m_actionNames; }

    /**
     * A list of schedule actions to delete.
     */
    inline bool ActionNamesHasBeenSet() const { return m_actionNamesHasBeenSet; }

    /**
     * A list of schedule actions to delete.
     */
    inline void SetActionNames(const Aws::Vector<Aws::String>& value) { m_actionNamesHasBeenSet = true; m_actionNames = value; }

    /**
     * A list of schedule actions to delete.
     */
    inline void SetActionNames(Aws::Vector<Aws::String>&& value) { m_actionNamesHasBeenSet = true; m_actionNames = std::move(value); }

    /**
     * A list of schedule actions to delete.
     */
    inline BatchScheduleActionDeleteRequest& WithActionNames(const Aws::Vector<Aws::String>& value) { SetActionNames(value); return *this;}

    /**
     * A list of schedule actions to delete.
     */
    inline BatchScheduleActionDeleteRequest& WithActionNames(Aws::Vector<Aws::String>&& value) { SetActionNames(std::move(value)); return *this;}

    /**
     * A list of schedule actions to delete.
     */
    inline BatchScheduleActionDeleteRequest& AddActionNames(const Aws::String& value) { m_actionNamesHasBeenSet = true; m_actionNames.push_back(value); return *this; }

    /**
     * A list of schedule actions to delete.
     */
    inline BatchScheduleActionDeleteRequest& AddActionNames(Aws::String&& value) { m_actionNamesHasBeenSet = true; m_actionNames.push_back(std::move(value)); return *this; }

    /**
     * A list of schedule actions to delete.
     */
    inline BatchScheduleActionDeleteRequest& AddActionNames(const char* value) { m_actionNamesHasBeenSet = true; m_actionNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_actionNames;
    bool m_actionNamesHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
