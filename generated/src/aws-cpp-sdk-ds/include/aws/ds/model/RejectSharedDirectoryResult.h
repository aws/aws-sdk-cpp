﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
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
  class RejectSharedDirectoryResult
  {
  public:
    AWS_DIRECTORYSERVICE_API RejectSharedDirectoryResult();
    AWS_DIRECTORYSERVICE_API RejectSharedDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API RejectSharedDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Identifier of the shared directory in the directory consumer account.</p>
     */
    inline const Aws::String& GetSharedDirectoryId() const{ return m_sharedDirectoryId; }
    inline void SetSharedDirectoryId(const Aws::String& value) { m_sharedDirectoryId = value; }
    inline void SetSharedDirectoryId(Aws::String&& value) { m_sharedDirectoryId = std::move(value); }
    inline void SetSharedDirectoryId(const char* value) { m_sharedDirectoryId.assign(value); }
    inline RejectSharedDirectoryResult& WithSharedDirectoryId(const Aws::String& value) { SetSharedDirectoryId(value); return *this;}
    inline RejectSharedDirectoryResult& WithSharedDirectoryId(Aws::String&& value) { SetSharedDirectoryId(std::move(value)); return *this;}
    inline RejectSharedDirectoryResult& WithSharedDirectoryId(const char* value) { SetSharedDirectoryId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RejectSharedDirectoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RejectSharedDirectoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RejectSharedDirectoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_sharedDirectoryId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
