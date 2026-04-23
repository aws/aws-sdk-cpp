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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/CloseStatus.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Used to filter the closed workflow executions in visibility APIs by their
   * close status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CloseStatusFilter">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API CloseStatusFilter
  {
  public:
    CloseStatusFilter();
    CloseStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    CloseStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The close status that must match the close status of an execution for it to
     * meet the criteria of this filter.</p>
     */
    inline const CloseStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The close status that must match the close status of an execution for it to
     * meet the criteria of this filter.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The close status that must match the close status of an execution for it to
     * meet the criteria of this filter.</p>
     */
    inline void SetStatus(const CloseStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The close status that must match the close status of an execution for it to
     * meet the criteria of this filter.</p>
     */
    inline void SetStatus(CloseStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The close status that must match the close status of an execution for it to
     * meet the criteria of this filter.</p>
     */
    inline CloseStatusFilter& WithStatus(const CloseStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The close status that must match the close status of an execution for it to
     * meet the criteria of this filter.</p>
     */
    inline CloseStatusFilter& WithStatus(CloseStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    CloseStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
