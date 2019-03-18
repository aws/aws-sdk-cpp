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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/DirectoryState.h>
#include <aws/core/utils/DateTime.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Directory structure that includes the directory name and directory
   * ARN.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/Directory">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API Directory
  {
  public:
    Directory();
    Directory(Aws::Utils::Json::JsonView jsonValue);
    Directory& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the directory.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the directory.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the directory.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the directory.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

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
    inline Directory& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the directory.</p>
     */
    inline Directory& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the directory. For
     * more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the directory. For
     * more information, see <a>arns</a>.</p>
     */
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the directory. For
     * more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the directory. For
     * more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the directory. For
     * more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the directory. For
     * more information, see <a>arns</a>.</p>
     */
    inline Directory& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the directory. For
     * more information, see <a>arns</a>.</p>
     */
    inline Directory& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the directory. For
     * more information, see <a>arns</a>.</p>
     */
    inline Directory& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}


    /**
     * <p>The state of the directory. Can be either <code>Enabled</code>,
     * <code>Disabled</code>, or <code>Deleted</code>.</p>
     */
    inline const DirectoryState& GetState() const{ return m_state; }

    /**
     * <p>The state of the directory. Can be either <code>Enabled</code>,
     * <code>Disabled</code>, or <code>Deleted</code>.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the directory. Can be either <code>Enabled</code>,
     * <code>Disabled</code>, or <code>Deleted</code>.</p>
     */
    inline void SetState(const DirectoryState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the directory. Can be either <code>Enabled</code>,
     * <code>Disabled</code>, or <code>Deleted</code>.</p>
     */
    inline void SetState(DirectoryState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the directory. Can be either <code>Enabled</code>,
     * <code>Disabled</code>, or <code>Deleted</code>.</p>
     */
    inline Directory& WithState(const DirectoryState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the directory. Can be either <code>Enabled</code>,
     * <code>Disabled</code>, or <code>Deleted</code>.</p>
     */
    inline Directory& WithState(DirectoryState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The date and time when the directory was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time when the directory was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time when the directory was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time when the directory was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time when the directory was created.</p>
     */
    inline Directory& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time when the directory was created.</p>
     */
    inline Directory& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}

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
