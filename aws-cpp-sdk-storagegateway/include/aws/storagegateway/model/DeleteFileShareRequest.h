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
   * <p>DeleteFileShareInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeleteFileShareInput">AWS
   * API Reference</a></p>
   */
  class DeleteFileShareRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API DeleteFileShareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFileShare"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be deleted.</p>
     */
    inline const Aws::String& GetFileShareARN() const{ return m_fileShareARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be deleted.</p>
     */
    inline bool FileShareARNHasBeenSet() const { return m_fileShareARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be deleted.</p>
     */
    inline void SetFileShareARN(const Aws::String& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be deleted.</p>
     */
    inline void SetFileShareARN(Aws::String&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be deleted.</p>
     */
    inline void SetFileShareARN(const char* value) { m_fileShareARNHasBeenSet = true; m_fileShareARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be deleted.</p>
     */
    inline DeleteFileShareRequest& WithFileShareARN(const Aws::String& value) { SetFileShareARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be deleted.</p>
     */
    inline DeleteFileShareRequest& WithFileShareARN(Aws::String&& value) { SetFileShareARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be deleted.</p>
     */
    inline DeleteFileShareRequest& WithFileShareARN(const char* value) { SetFileShareARN(value); return *this;}


    /**
     * <p>If this value is set to <code>true</code>, the operation deletes a file share
     * immediately and aborts all data uploads to Amazon Web Services. Otherwise, the
     * file share is not deleted until all data is uploaded to Amazon Web Services.
     * This process aborts the data upload process, and the file share enters the
     * <code>FORCE_DELETING</code> status.</p> <p>Valid Values: <code>true</code> |
     * <code>false</code> </p>
     */
    inline bool GetForceDelete() const{ return m_forceDelete; }

    /**
     * <p>If this value is set to <code>true</code>, the operation deletes a file share
     * immediately and aborts all data uploads to Amazon Web Services. Otherwise, the
     * file share is not deleted until all data is uploaded to Amazon Web Services.
     * This process aborts the data upload process, and the file share enters the
     * <code>FORCE_DELETING</code> status.</p> <p>Valid Values: <code>true</code> |
     * <code>false</code> </p>
     */
    inline bool ForceDeleteHasBeenSet() const { return m_forceDeleteHasBeenSet; }

    /**
     * <p>If this value is set to <code>true</code>, the operation deletes a file share
     * immediately and aborts all data uploads to Amazon Web Services. Otherwise, the
     * file share is not deleted until all data is uploaded to Amazon Web Services.
     * This process aborts the data upload process, and the file share enters the
     * <code>FORCE_DELETING</code> status.</p> <p>Valid Values: <code>true</code> |
     * <code>false</code> </p>
     */
    inline void SetForceDelete(bool value) { m_forceDeleteHasBeenSet = true; m_forceDelete = value; }

    /**
     * <p>If this value is set to <code>true</code>, the operation deletes a file share
     * immediately and aborts all data uploads to Amazon Web Services. Otherwise, the
     * file share is not deleted until all data is uploaded to Amazon Web Services.
     * This process aborts the data upload process, and the file share enters the
     * <code>FORCE_DELETING</code> status.</p> <p>Valid Values: <code>true</code> |
     * <code>false</code> </p>
     */
    inline DeleteFileShareRequest& WithForceDelete(bool value) { SetForceDelete(value); return *this;}

  private:

    Aws::String m_fileShareARN;
    bool m_fileShareARNHasBeenSet = false;

    bool m_forceDelete;
    bool m_forceDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
