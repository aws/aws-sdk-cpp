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
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeMountTargetsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeMountTargetsRequest : public EFSRequest
  {
  public:
    AWS_EFS_API DescribeMountTargetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMountTargets"; }

    AWS_EFS_API Aws::String SerializePayload() const override;

    AWS_EFS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>(Optional) Maximum number of mount targets to return in the response.
     * Currently, this number is automatically set to 10, and other values are ignored.
     * The response is paginated at 100 per page if you have more than 100 mount
     * targets.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline DescribeMountTargetsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeMountTargets</code> operation (String). If present, it specifies
     * to continue the list from where the previous returning call left off.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeMountTargetsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeMountTargetsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeMountTargetsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) ID of the file system whose mount targets you want to list
     * (String). It must be included in your request if an <code>AccessPointId</code>
     * or <code>MountTargetId</code> is not included. Accepts either a file system ID
     * or ARN as input.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }
    inline DescribeMountTargetsRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}
    inline DescribeMountTargetsRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}
    inline DescribeMountTargetsRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) ID of the mount target that you want to have described (String).
     * It must be included in your request if <code>FileSystemId</code> is not
     * included. Accepts either a mount target ID or ARN as input.</p>
     */
    inline const Aws::String& GetMountTargetId() const{ return m_mountTargetId; }
    inline bool MountTargetIdHasBeenSet() const { return m_mountTargetIdHasBeenSet; }
    inline void SetMountTargetId(const Aws::String& value) { m_mountTargetIdHasBeenSet = true; m_mountTargetId = value; }
    inline void SetMountTargetId(Aws::String&& value) { m_mountTargetIdHasBeenSet = true; m_mountTargetId = std::move(value); }
    inline void SetMountTargetId(const char* value) { m_mountTargetIdHasBeenSet = true; m_mountTargetId.assign(value); }
    inline DescribeMountTargetsRequest& WithMountTargetId(const Aws::String& value) { SetMountTargetId(value); return *this;}
    inline DescribeMountTargetsRequest& WithMountTargetId(Aws::String&& value) { SetMountTargetId(std::move(value)); return *this;}
    inline DescribeMountTargetsRequest& WithMountTargetId(const char* value) { SetMountTargetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The ID of the access point whose mount targets that you want to
     * list. It must be included in your request if a <code>FileSystemId</code> or
     * <code>MountTargetId</code> is not included in your request. Accepts either an
     * access point ID or ARN as input.</p>
     */
    inline const Aws::String& GetAccessPointId() const{ return m_accessPointId; }
    inline bool AccessPointIdHasBeenSet() const { return m_accessPointIdHasBeenSet; }
    inline void SetAccessPointId(const Aws::String& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = value; }
    inline void SetAccessPointId(Aws::String&& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = std::move(value); }
    inline void SetAccessPointId(const char* value) { m_accessPointIdHasBeenSet = true; m_accessPointId.assign(value); }
    inline DescribeMountTargetsRequest& WithAccessPointId(const Aws::String& value) { SetAccessPointId(value); return *this;}
    inline DescribeMountTargetsRequest& WithAccessPointId(Aws::String&& value) { SetAccessPointId(std::move(value)); return *this;}
    inline DescribeMountTargetsRequest& WithAccessPointId(const char* value) { SetAccessPointId(value); return *this;}
    ///@}
  private:

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_mountTargetId;
    bool m_mountTargetIdHasBeenSet = false;

    Aws::String m_accessPointId;
    bool m_accessPointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
