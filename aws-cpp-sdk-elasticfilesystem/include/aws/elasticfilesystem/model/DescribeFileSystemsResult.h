/**
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


    /**
     * <p>Present if provided by caller in the request (String).</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Present if provided by caller in the request (String).</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>Present if provided by caller in the request (String).</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>Present if provided by caller in the request (String).</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>Present if provided by caller in the request (String).</p>
     */
    inline DescribeFileSystemsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Present if provided by caller in the request (String).</p>
     */
    inline DescribeFileSystemsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Present if provided by caller in the request (String).</p>
     */
    inline DescribeFileSystemsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>An array of file system descriptions.</p>
     */
    inline const Aws::Vector<FileSystemDescription>& GetFileSystems() const{ return m_fileSystems; }

    /**
     * <p>An array of file system descriptions.</p>
     */
    inline void SetFileSystems(const Aws::Vector<FileSystemDescription>& value) { m_fileSystems = value; }

    /**
     * <p>An array of file system descriptions.</p>
     */
    inline void SetFileSystems(Aws::Vector<FileSystemDescription>&& value) { m_fileSystems = std::move(value); }

    /**
     * <p>An array of file system descriptions.</p>
     */
    inline DescribeFileSystemsResult& WithFileSystems(const Aws::Vector<FileSystemDescription>& value) { SetFileSystems(value); return *this;}

    /**
     * <p>An array of file system descriptions.</p>
     */
    inline DescribeFileSystemsResult& WithFileSystems(Aws::Vector<FileSystemDescription>&& value) { SetFileSystems(std::move(value)); return *this;}

    /**
     * <p>An array of file system descriptions.</p>
     */
    inline DescribeFileSystemsResult& AddFileSystems(const FileSystemDescription& value) { m_fileSystems.push_back(value); return *this; }

    /**
     * <p>An array of file system descriptions.</p>
     */
    inline DescribeFileSystemsResult& AddFileSystems(FileSystemDescription&& value) { m_fileSystems.push_back(std::move(value)); return *this; }


    /**
     * <p>Present if there are more file systems than returned in the response
     * (String). You can use the <code>NextMarker</code> in the subsequent request to
     * fetch the descriptions.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>Present if there are more file systems than returned in the response
     * (String). You can use the <code>NextMarker</code> in the subsequent request to
     * fetch the descriptions.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>Present if there are more file systems than returned in the response
     * (String). You can use the <code>NextMarker</code> in the subsequent request to
     * fetch the descriptions.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>Present if there are more file systems than returned in the response
     * (String). You can use the <code>NextMarker</code> in the subsequent request to
     * fetch the descriptions.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>Present if there are more file systems than returned in the response
     * (String). You can use the <code>NextMarker</code> in the subsequent request to
     * fetch the descriptions.</p>
     */
    inline DescribeFileSystemsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>Present if there are more file systems than returned in the response
     * (String). You can use the <code>NextMarker</code> in the subsequent request to
     * fetch the descriptions.</p>
     */
    inline DescribeFileSystemsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>Present if there are more file systems than returned in the response
     * (String). You can use the <code>NextMarker</code> in the subsequent request to
     * fetch the descriptions.</p>
     */
    inline DescribeFileSystemsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<FileSystemDescription> m_fileSystems;

    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
