/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BatchScheduleActionDeleteRequest
  {
  public:
    AWS_MEDIALIVE_API BatchScheduleActionDeleteRequest();
    AWS_MEDIALIVE_API BatchScheduleActionDeleteRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API BatchScheduleActionDeleteRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_actionNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
