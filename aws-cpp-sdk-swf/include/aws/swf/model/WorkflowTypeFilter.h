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
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>Used to filter workflow execution query results by type. Each parameter, if
   * specified, defines a rule that must be satisfied by each returned result.</p>
   */
  class AWS_SWF_API WorkflowTypeFilter
  {
  public:
    WorkflowTypeFilter();
    WorkflowTypeFilter(const Aws::Utils::Json::JsonValue& jsonValue);
    WorkflowTypeFilter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p><b>Required.</b> Name of the workflow type.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p><b>Required.</b> Name of the workflow type.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p><b>Required.</b> Name of the workflow type.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p><b>Required.</b> Name of the workflow type.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p><b>Required.</b> Name of the workflow type.</p>
     */
    inline WorkflowTypeFilter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p><b>Required.</b> Name of the workflow type.</p>
     */
    inline WorkflowTypeFilter& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p><b>Required.</b> Name of the workflow type.</p>
     */
    inline WorkflowTypeFilter& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Version of the workflow type.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>Version of the workflow type.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version of the workflow type.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version of the workflow type.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>Version of the workflow type.</p>
     */
    inline WorkflowTypeFilter& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Version of the workflow type.</p>
     */
    inline WorkflowTypeFilter& WithVersion(Aws::String&& value) { SetVersion(value); return *this;}

    /**
     * <p>Version of the workflow type.</p>
     */
    inline WorkflowTypeFilter& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
