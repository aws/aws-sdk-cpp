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
    AWS_FSX_API StartMisconfiguredStateRecoveryResult();
    AWS_FSX_API StartMisconfiguredStateRecoveryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API StartMisconfiguredStateRecoveryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const FileSystem& GetFileSystem() const{ return m_fileSystem; }

    
    inline void SetFileSystem(const FileSystem& value) { m_fileSystem = value; }

    
    inline void SetFileSystem(FileSystem&& value) { m_fileSystem = std::move(value); }

    
    inline StartMisconfiguredStateRecoveryResult& WithFileSystem(const FileSystem& value) { SetFileSystem(value); return *this;}

    
    inline StartMisconfiguredStateRecoveryResult& WithFileSystem(FileSystem&& value) { SetFileSystem(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartMisconfiguredStateRecoveryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartMisconfiguredStateRecoveryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartMisconfiguredStateRecoveryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    FileSystem m_fileSystem;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
