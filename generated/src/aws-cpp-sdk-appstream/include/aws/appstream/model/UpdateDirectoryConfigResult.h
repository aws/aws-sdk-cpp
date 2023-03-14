/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/DirectoryConfig.h>
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
namespace AppStream
{
namespace Model
{
  class UpdateDirectoryConfigResult
  {
  public:
    AWS_APPSTREAM_API UpdateDirectoryConfigResult();
    AWS_APPSTREAM_API UpdateDirectoryConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API UpdateDirectoryConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the Directory Config object.</p>
     */
    inline const DirectoryConfig& GetDirectoryConfig() const{ return m_directoryConfig; }

    /**
     * <p>Information about the Directory Config object.</p>
     */
    inline void SetDirectoryConfig(const DirectoryConfig& value) { m_directoryConfig = value; }

    /**
     * <p>Information about the Directory Config object.</p>
     */
    inline void SetDirectoryConfig(DirectoryConfig&& value) { m_directoryConfig = std::move(value); }

    /**
     * <p>Information about the Directory Config object.</p>
     */
    inline UpdateDirectoryConfigResult& WithDirectoryConfig(const DirectoryConfig& value) { SetDirectoryConfig(value); return *this;}

    /**
     * <p>Information about the Directory Config object.</p>
     */
    inline UpdateDirectoryConfigResult& WithDirectoryConfig(DirectoryConfig&& value) { SetDirectoryConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateDirectoryConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateDirectoryConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateDirectoryConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DirectoryConfig m_directoryConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
