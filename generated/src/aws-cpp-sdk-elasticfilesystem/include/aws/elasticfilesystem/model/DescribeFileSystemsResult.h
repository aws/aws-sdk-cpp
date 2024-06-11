﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticfilesystem/model/FileSystemDescription.h>
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
namespace EFS
{
namespace Model
{
  class DescribeFileSystemsResult
  {
  public:
    AWS_EFS_API DescribeFileSystemsResult();
    AWS_EFS_API DescribeFileSystemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API DescribeFileSystemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Present if provided by caller in the request (String).</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeFileSystemsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeFileSystemsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeFileSystemsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of file system descriptions.</p>
     */
    inline const Aws::Vector<FileSystemDescription>& GetFileSystems() const{ return m_fileSystems; }
    inline void SetFileSystems(const Aws::Vector<FileSystemDescription>& value) { m_fileSystems = value; }
    inline void SetFileSystems(Aws::Vector<FileSystemDescription>&& value) { m_fileSystems = std::move(value); }
    inline DescribeFileSystemsResult& WithFileSystems(const Aws::Vector<FileSystemDescription>& value) { SetFileSystems(value); return *this;}
    inline DescribeFileSystemsResult& WithFileSystems(Aws::Vector<FileSystemDescription>&& value) { SetFileSystems(std::move(value)); return *this;}
    inline DescribeFileSystemsResult& AddFileSystems(const FileSystemDescription& value) { m_fileSystems.push_back(value); return *this; }
    inline DescribeFileSystemsResult& AddFileSystems(FileSystemDescription&& value) { m_fileSystems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Present if there are more file systems than returned in the response
     * (String). You can use the <code>NextMarker</code> in the subsequent request to
     * fetch the descriptions.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }
    inline DescribeFileSystemsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline DescribeFileSystemsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline DescribeFileSystemsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeFileSystemsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeFileSystemsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeFileSystemsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_marker;

    Aws::Vector<FileSystemDescription> m_fileSystems;

    Aws::String m_nextMarker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
