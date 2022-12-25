/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Used to filter workflow execution query results by type. Each parameter, if
   * specified, defines a rule that must be satisfied by each returned
   * result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowTypeFilter">AWS
   * API Reference</a></p>
   */
  class WorkflowTypeFilter
  {
  public:
    AWS_SWF_API WorkflowTypeFilter();
    AWS_SWF_API WorkflowTypeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API WorkflowTypeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Name of the workflow type.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> Name of the workflow type.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> Name of the workflow type.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> Name of the workflow type.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> Name of the workflow type.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> Name of the workflow type.</p>
     */
    inline WorkflowTypeFilter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> Name of the workflow type.</p>
     */
    inline WorkflowTypeFilter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> Name of the workflow type.</p>
     */
    inline WorkflowTypeFilter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Version of the workflow type.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>Version of the workflow type.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>Version of the workflow type.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version of the workflow type.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

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
    inline WorkflowTypeFilter& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>Version of the workflow type.</p>
     */
    inline WorkflowTypeFilter& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
