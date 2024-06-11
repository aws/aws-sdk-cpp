﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/SharedDirectory.h>
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
namespace DirectoryService
{
namespace Model
{
  class AcceptSharedDirectoryResult
  {
  public:
    AWS_DIRECTORYSERVICE_API AcceptSharedDirectoryResult();
    AWS_DIRECTORYSERVICE_API AcceptSharedDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API AcceptSharedDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The shared directory in the directory consumer account.</p>
     */
    inline const SharedDirectory& GetSharedDirectory() const{ return m_sharedDirectory; }
    inline void SetSharedDirectory(const SharedDirectory& value) { m_sharedDirectory = value; }
    inline void SetSharedDirectory(SharedDirectory&& value) { m_sharedDirectory = std::move(value); }
    inline AcceptSharedDirectoryResult& WithSharedDirectory(const SharedDirectory& value) { SetSharedDirectory(value); return *this;}
    inline AcceptSharedDirectoryResult& WithSharedDirectory(SharedDirectory&& value) { SetSharedDirectory(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AcceptSharedDirectoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AcceptSharedDirectoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AcceptSharedDirectoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SharedDirectory m_sharedDirectory;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
