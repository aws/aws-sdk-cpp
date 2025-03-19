/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/FileAccessLog.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents the access logging information for a virtual
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/AccessLog">AWS
   * API Reference</a></p>
   */
  class AccessLog
  {
  public:
    AWS_APPMESH_API AccessLog() = default;
    AWS_APPMESH_API AccessLog(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API AccessLog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file object to send virtual node access logs to.</p>
     */
    inline const FileAccessLog& GetFile() const { return m_file; }
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }
    template<typename FileT = FileAccessLog>
    void SetFile(FileT&& value) { m_fileHasBeenSet = true; m_file = std::forward<FileT>(value); }
    template<typename FileT = FileAccessLog>
    AccessLog& WithFile(FileT&& value) { SetFile(std::forward<FileT>(value)); return *this;}
    ///@}
  private:

    FileAccessLog m_file;
    bool m_fileHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
