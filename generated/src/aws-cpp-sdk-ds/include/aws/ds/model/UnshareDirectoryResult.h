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
  class UnshareDirectoryResult
  {
  public:
    AWS_DIRECTORYSERVICE_API UnshareDirectoryResult();
    AWS_DIRECTORYSERVICE_API UnshareDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API UnshareDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Identifier of the directory stored in the directory consumer account that is
     * to be unshared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline const Aws::String& GetSharedDirectoryId() const{ return m_sharedDirectoryId; }

    /**
     * <p>Identifier of the directory stored in the directory consumer account that is
     * to be unshared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline void SetSharedDirectoryId(const Aws::String& value) { m_sharedDirectoryId = value; }

    /**
     * <p>Identifier of the directory stored in the directory consumer account that is
     * to be unshared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline void SetSharedDirectoryId(Aws::String&& value) { m_sharedDirectoryId = std::move(value); }

    /**
     * <p>Identifier of the directory stored in the directory consumer account that is
     * to be unshared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline void SetSharedDirectoryId(const char* value) { m_sharedDirectoryId.assign(value); }

    /**
     * <p>Identifier of the directory stored in the directory consumer account that is
     * to be unshared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline UnshareDirectoryResult& WithSharedDirectoryId(const Aws::String& value) { SetSharedDirectoryId(value); return *this;}

    /**
     * <p>Identifier of the directory stored in the directory consumer account that is
     * to be unshared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline UnshareDirectoryResult& WithSharedDirectoryId(Aws::String&& value) { SetSharedDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the directory stored in the directory consumer account that is
     * to be unshared from the specified directory (<code>DirectoryId</code>).</p>
     */
    inline UnshareDirectoryResult& WithSharedDirectoryId(const char* value) { SetSharedDirectoryId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UnshareDirectoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UnshareDirectoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UnshareDirectoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_sharedDirectoryId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
