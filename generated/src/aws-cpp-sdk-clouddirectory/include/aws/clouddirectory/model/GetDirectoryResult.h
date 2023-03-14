/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/Directory.h>
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
namespace CloudDirectory
{
namespace Model
{
  class GetDirectoryResult
  {
  public:
    AWS_CLOUDDIRECTORY_API GetDirectoryResult();
    AWS_CLOUDDIRECTORY_API GetDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API GetDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata about the directory.</p>
     */
    inline const Directory& GetDirectory() const{ return m_directory; }

    /**
     * <p>Metadata about the directory.</p>
     */
    inline void SetDirectory(const Directory& value) { m_directory = value; }

    /**
     * <p>Metadata about the directory.</p>
     */
    inline void SetDirectory(Directory&& value) { m_directory = std::move(value); }

    /**
     * <p>Metadata about the directory.</p>
     */
    inline GetDirectoryResult& WithDirectory(const Directory& value) { SetDirectory(value); return *this;}

    /**
     * <p>Metadata about the directory.</p>
     */
    inline GetDirectoryResult& WithDirectory(Directory&& value) { SetDirectory(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDirectoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDirectoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDirectoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Directory m_directory;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
