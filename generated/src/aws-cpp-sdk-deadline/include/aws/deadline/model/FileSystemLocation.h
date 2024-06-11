/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/FileSystemLocationType.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The details of the file system location for the resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/FileSystemLocation">AWS
   * API Reference</a></p>
   */
  class FileSystemLocation
  {
  public:
    AWS_DEADLINE_API FileSystemLocation();
    AWS_DEADLINE_API FileSystemLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API FileSystemLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FileSystemLocation& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FileSystemLocation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FileSystemLocation& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file path.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline FileSystemLocation& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline FileSystemLocation& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline FileSystemLocation& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of file.</p>
     */
    inline const FileSystemLocationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const FileSystemLocationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(FileSystemLocationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline FileSystemLocation& WithType(const FileSystemLocationType& value) { SetType(value); return *this;}
    inline FileSystemLocation& WithType(FileSystemLocationType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    FileSystemLocationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
