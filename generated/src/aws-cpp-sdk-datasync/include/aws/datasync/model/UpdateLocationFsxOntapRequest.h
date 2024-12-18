/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/FsxUpdateProtocol.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class UpdateLocationFsxOntapRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API UpdateLocationFsxOntapRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLocationFsxOntap"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the FSx for ONTAP transfer
     * location that you're updating.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }
    inline void SetLocationArn(const Aws::String& value) { m_locationArnHasBeenSet = true; m_locationArn = value; }
    inline void SetLocationArn(Aws::String&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::move(value); }
    inline void SetLocationArn(const char* value) { m_locationArnHasBeenSet = true; m_locationArn.assign(value); }
    inline UpdateLocationFsxOntapRequest& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}
    inline UpdateLocationFsxOntapRequest& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}
    inline UpdateLocationFsxOntapRequest& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the data transfer protocol that DataSync uses to access your Amazon
     * FSx file system.</p>
     */
    inline const FsxUpdateProtocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const FsxUpdateProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(FsxUpdateProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline UpdateLocationFsxOntapRequest& WithProtocol(const FsxUpdateProtocol& value) { SetProtocol(value); return *this;}
    inline UpdateLocationFsxOntapRequest& WithProtocol(FsxUpdateProtocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a path to the file share in the storage virtual machine (SVM) where
     * you want to transfer data to or from.</p> <p>You can specify a junction path
     * (also known as a mount point), qtree path (for NFS file shares), or share name
     * (for SMB file shares). For example, your mount path might be <code>/vol1</code>,
     * <code>/vol1/tree1</code>, or <code>/share1</code>.</p>  <p>Don't specify a
     * junction path in the SVM's root volume. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-svms.html">Managing
     * FSx for ONTAP storage virtual machines</a> in the <i>Amazon FSx for NetApp ONTAP
     * User Guide</i>.</p> 
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }
    inline UpdateLocationFsxOntapRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}
    inline UpdateLocationFsxOntapRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}
    inline UpdateLocationFsxOntapRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}
    ///@}
  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

    FsxUpdateProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
