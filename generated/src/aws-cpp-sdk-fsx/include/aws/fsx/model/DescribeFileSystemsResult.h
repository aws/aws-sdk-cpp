/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/FileSystem.h>
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
  /**
   * <p>The response object for <code>DescribeFileSystems</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeFileSystemsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeFileSystemsResult
  {
  public:
    AWS_FSX_API DescribeFileSystemsResult() = default;
    AWS_FSX_API DescribeFileSystemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DescribeFileSystemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of file system descriptions.</p>
     */
    inline const Aws::Vector<FileSystem>& GetFileSystems() const { return m_fileSystems; }
    template<typename FileSystemsT = Aws::Vector<FileSystem>>
    void SetFileSystems(FileSystemsT&& value) { m_fileSystemsHasBeenSet = true; m_fileSystems = std::forward<FileSystemsT>(value); }
    template<typename FileSystemsT = Aws::Vector<FileSystem>>
    DescribeFileSystemsResult& WithFileSystems(FileSystemsT&& value) { SetFileSystems(std::forward<FileSystemsT>(value)); return *this;}
    template<typename FileSystemsT = FileSystem>
    DescribeFileSystemsResult& AddFileSystems(FileSystemsT&& value) { m_fileSystemsHasBeenSet = true; m_fileSystems.emplace_back(std::forward<FileSystemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Present if there are more file systems than returned in the response
     * (String). You can use the <code>NextToken</code> value in the later request to
     * fetch the descriptions. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeFileSystemsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFileSystemsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FileSystem> m_fileSystems;
    bool m_fileSystemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
