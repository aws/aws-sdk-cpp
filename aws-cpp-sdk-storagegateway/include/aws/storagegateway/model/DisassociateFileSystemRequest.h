/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class DisassociateFileSystemRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API DisassociateFileSystemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateFileSystem"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the file system association to be
     * deleted.</p>
     */
    inline const Aws::String& GetFileSystemAssociationARN() const{ return m_fileSystemAssociationARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association to be
     * deleted.</p>
     */
    inline bool FileSystemAssociationARNHasBeenSet() const { return m_fileSystemAssociationARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association to be
     * deleted.</p>
     */
    inline void SetFileSystemAssociationARN(const Aws::String& value) { m_fileSystemAssociationARNHasBeenSet = true; m_fileSystemAssociationARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association to be
     * deleted.</p>
     */
    inline void SetFileSystemAssociationARN(Aws::String&& value) { m_fileSystemAssociationARNHasBeenSet = true; m_fileSystemAssociationARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association to be
     * deleted.</p>
     */
    inline void SetFileSystemAssociationARN(const char* value) { m_fileSystemAssociationARNHasBeenSet = true; m_fileSystemAssociationARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association to be
     * deleted.</p>
     */
    inline DisassociateFileSystemRequest& WithFileSystemAssociationARN(const Aws::String& value) { SetFileSystemAssociationARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association to be
     * deleted.</p>
     */
    inline DisassociateFileSystemRequest& WithFileSystemAssociationARN(Aws::String&& value) { SetFileSystemAssociationARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association to be
     * deleted.</p>
     */
    inline DisassociateFileSystemRequest& WithFileSystemAssociationARN(const char* value) { SetFileSystemAssociationARN(value); return *this;}


    /**
     * <p>If this value is set to true, the operation disassociates an Amazon FSx file
     * system immediately. It ends all data uploads to the file system, and the file
     * system association enters the <code>FORCE_DELETING</code> status. If this value
     * is set to false, the Amazon FSx file system does not disassociate until all data
     * is uploaded.</p>
     */
    inline bool GetForceDelete() const{ return m_forceDelete; }

    /**
     * <p>If this value is set to true, the operation disassociates an Amazon FSx file
     * system immediately. It ends all data uploads to the file system, and the file
     * system association enters the <code>FORCE_DELETING</code> status. If this value
     * is set to false, the Amazon FSx file system does not disassociate until all data
     * is uploaded.</p>
     */
    inline bool ForceDeleteHasBeenSet() const { return m_forceDeleteHasBeenSet; }

    /**
     * <p>If this value is set to true, the operation disassociates an Amazon FSx file
     * system immediately. It ends all data uploads to the file system, and the file
     * system association enters the <code>FORCE_DELETING</code> status. If this value
     * is set to false, the Amazon FSx file system does not disassociate until all data
     * is uploaded.</p>
     */
    inline void SetForceDelete(bool value) { m_forceDeleteHasBeenSet = true; m_forceDelete = value; }

    /**
     * <p>If this value is set to true, the operation disassociates an Amazon FSx file
     * system immediately. It ends all data uploads to the file system, and the file
     * system association enters the <code>FORCE_DELETING</code> status. If this value
     * is set to false, the Amazon FSx file system does not disassociate until all data
     * is uploaded.</p>
     */
    inline DisassociateFileSystemRequest& WithForceDelete(bool value) { SetForceDelete(value); return *this;}

  private:

    Aws::String m_fileSystemAssociationARN;
    bool m_fileSystemAssociationARNHasBeenSet = false;

    bool m_forceDelete;
    bool m_forceDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
