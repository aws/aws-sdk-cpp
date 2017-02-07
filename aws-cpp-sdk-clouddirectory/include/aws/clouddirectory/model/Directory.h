﻿/*
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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/DirectoryState.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Directory structure that includes the directory name and directory
   * ARN.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2016-05-10/Directory">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API Directory
  {
  public:
    Directory();
    Directory(const Aws::Utils::Json::JsonValue& jsonValue);
    Directory& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the directory.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the directory.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the directory.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the directory.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the directory.</p>
     */
    inline Directory& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the directory.</p>
     */
    inline Directory& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the directory.</p>
     */
    inline Directory& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>ARN associated with the directory. For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>ARN associated with the directory. For more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>ARN associated with the directory. For more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>ARN associated with the directory. For more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>ARN associated with the directory. For more information, see <a>arns</a>.</p>
     */
    inline Directory& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>ARN associated with the directory. For more information, see <a>arns</a>.</p>
     */
    inline Directory& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>ARN associated with the directory. For more information, see <a>arns</a>.</p>
     */
    inline Directory& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The state of the directory. Can be either Enabled, Disabled, or Deleted.</p>
     */
    inline const DirectoryState& GetState() const{ return m_state; }

    /**
     * <p>The state of the directory. Can be either Enabled, Disabled, or Deleted.</p>
     */
    inline void SetState(const DirectoryState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the directory. Can be either Enabled, Disabled, or Deleted.</p>
     */
    inline void SetState(DirectoryState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the directory. Can be either Enabled, Disabled, or Deleted.</p>
     */
    inline Directory& WithState(const DirectoryState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the directory. Can be either Enabled, Disabled, or Deleted.</p>
     */
    inline Directory& WithState(DirectoryState&& value) { SetState(value); return *this;}

    /**
     * <p>The date and time when the directory was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time when the directory was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time when the directory was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time when the directory was created.</p>
     */
    inline Directory& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time when the directory was created.</p>
     */
    inline Directory& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet;
    DirectoryState m_state;
    bool m_stateHasBeenSet;
    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
