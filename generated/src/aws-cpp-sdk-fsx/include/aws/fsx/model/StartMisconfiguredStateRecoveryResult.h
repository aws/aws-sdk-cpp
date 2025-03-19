/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/FileSystem.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace FSx
{
namespace Model
{
  class StartMisconfiguredStateRecoveryResult
  {
  public:
    AWS_FSX_API StartMisconfiguredStateRecoveryResult() = default;
    AWS_FSX_API StartMisconfiguredStateRecoveryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API StartMisconfiguredStateRecoveryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const FileSystem& GetFileSystem() const { return m_fileSystem; }
    template<typename FileSystemT = FileSystem>
    void SetFileSystem(FileSystemT&& value) { m_fileSystemHasBeenSet = true; m_fileSystem = std::forward<FileSystemT>(value); }
    template<typename FileSystemT = FileSystem>
    StartMisconfiguredStateRecoveryResult& WithFileSystem(FileSystemT&& value) { SetFileSystem(std::forward<FileSystemT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartMisconfiguredStateRecoveryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FileSystem m_fileSystem;
    bool m_fileSystemHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
