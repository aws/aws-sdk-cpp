/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace EFS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeFileSystemsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeFileSystemsRequest : public EFSRequest
  {
  public:
    AWS_EFS_API DescribeFileSystemsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFileSystems"; }

    AWS_EFS_API Aws::String SerializePayload() const override;

    AWS_EFS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>(Optional) Specifies the maximum number of file systems to return in the
     * response (integer). This number is automatically set to 100. The response is
     * paginated at 100 per page if you have more than 100 file systems. </p>
     */
    inline int GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline DescribeFileSystemsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeFileSystems</code> operation (String). If present, specifies to
     * continue the list from where the returning call had left off. </p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeFileSystemsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Restricts the list to the file system with this creation token
     * (String). You specify a creation token when you create an Amazon EFS file
     * system.</p>
     */
    inline const Aws::String& GetCreationToken() const { return m_creationToken; }
    inline bool CreationTokenHasBeenSet() const { return m_creationTokenHasBeenSet; }
    template<typename CreationTokenT = Aws::String>
    void SetCreationToken(CreationTokenT&& value) { m_creationTokenHasBeenSet = true; m_creationToken = std::forward<CreationTokenT>(value); }
    template<typename CreationTokenT = Aws::String>
    DescribeFileSystemsRequest& WithCreationToken(CreationTokenT&& value) { SetCreationToken(std::forward<CreationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) ID of the file system whose description you want to retrieve
     * (String).</p>
     */
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    DescribeFileSystemsRequest& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}
  private:

    int m_maxItems{0};
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_creationToken;
    bool m_creationTokenHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
