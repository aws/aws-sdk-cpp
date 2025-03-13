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
    AWS_EFS_API DescribeFileSystemsResult() = default;
    AWS_EFS_API DescribeFileSystemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API DescribeFileSystemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Present if provided by caller in the request (String).</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeFileSystemsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of file system descriptions.</p>
     */
    inline const Aws::Vector<FileSystemDescription>& GetFileSystems() const { return m_fileSystems; }
    template<typename FileSystemsT = Aws::Vector<FileSystemDescription>>
    void SetFileSystems(FileSystemsT&& value) { m_fileSystemsHasBeenSet = true; m_fileSystems = std::forward<FileSystemsT>(value); }
    template<typename FileSystemsT = Aws::Vector<FileSystemDescription>>
    DescribeFileSystemsResult& WithFileSystems(FileSystemsT&& value) { SetFileSystems(std::forward<FileSystemsT>(value)); return *this;}
    template<typename FileSystemsT = FileSystemDescription>
    DescribeFileSystemsResult& AddFileSystems(FileSystemsT&& value) { m_fileSystemsHasBeenSet = true; m_fileSystems.emplace_back(std::forward<FileSystemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Present if there are more file systems than returned in the response
     * (String). You can use the <code>NextMarker</code> in the subsequent request to
     * fetch the descriptions.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    DescribeFileSystemsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFileSystemsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<FileSystemDescription> m_fileSystems;
    bool m_fileSystemsHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
