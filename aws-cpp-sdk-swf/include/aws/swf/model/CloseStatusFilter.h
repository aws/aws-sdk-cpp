/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SWF
{
namespace Model
{

  /**
   * <p>Used to filter the closed workflow executions in visibility APIs by their
   * close status.</p>
   */
  class AWS_SWF_API CloseStatusFilter
  {
  public:
    CloseStatusFilter();
    CloseStatusFilter(const Aws::Utils::Json::JsonValue& jsonValue);
    CloseStatusFilter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p><b>Required.</b> The close status that must match the close status of an
     * execution for it to meet the criteria of this filter.</p>
     */
    inline const CloseStatus& GetStatus() const{ return m_status; }

    /**
     * <p><b>Required.</b> The close status that must match the close status of an
     * execution for it to meet the criteria of this filter.</p>
     */
    inline void SetStatus(const CloseStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p><b>Required.</b> The close status that must match the close status of an
     * execution for it to meet the criteria of this filter.</p>
     */
    inline void SetStatus(CloseStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p><b>Required.</b> The close status that must match the close status of an
     * execution for it to meet the criteria of this filter.</p>
     */
    inline CloseStatusFilter& WithStatus(const CloseStatus& value) { SetStatus(value); return *this;}

    /**
     * <p><b>Required.</b> The close status that must match the close status of an
     * execution for it to meet the criteria of this filter.</p>
     */
    inline CloseStatusFilter& WithStatus(CloseStatus&& value) { SetStatus(value); return *this;}

  private:
    CloseStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
