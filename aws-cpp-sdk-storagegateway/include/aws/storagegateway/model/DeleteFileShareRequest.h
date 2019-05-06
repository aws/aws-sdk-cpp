/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_STORAGEGATEWAY_API DeleteFileShareRequest : public StorageGatewayRequest
  {
  public:
    DeleteFileShareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFileShare"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be deleted. </p>
     */
    inline const Aws::String& GetFileShareARN() const{ return m_fileShareARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be deleted. </p>
     */
    inline bool FileShareARNHasBeenSet() const { return m_fileShareARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be deleted. </p>
     */
    inline void SetFileShareARN(const Aws::String& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be deleted. </p>
     */
    inline void SetFileShareARN(Aws::String&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be deleted. </p>
     */
    inline void SetFileShareARN(const char* value) { m_fileShareARNHasBeenSet = true; m_fileShareARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be deleted. </p>
     */
    inline DeleteFileShareRequest& WithFileShareARN(const Aws::String& value) { SetFileShareARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be deleted. </p>
     */
    inline DeleteFileShareRequest& WithFileShareARN(Aws::String&& value) { SetFileShareARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file share to be deleted. </p>
     */
    inline DeleteFileShareRequest& WithFileShareARN(const char* value) { SetFileShareARN(value); return *this;}


    /**
     * <p>If this value is set to true, the operation deletes a file share immediately
     * and aborts all data uploads to AWS. Otherwise, the file share is not deleted
     * until all data is uploaded to AWS. This process aborts the data upload process,
     * and the file share enters the FORCE_DELETING status.</p>
     */
    inline bool GetForceDelete() const{ return m_forceDelete; }

    /**
     * <p>If this value is set to true, the operation deletes a file share immediately
     * and aborts all data uploads to AWS. Otherwise, the file share is not deleted
     * until all data is uploaded to AWS. This process aborts the data upload process,
     * and the file share enters the FORCE_DELETING status.</p>
     */
    inline bool ForceDeleteHasBeenSet() const { return m_forceDeleteHasBeenSet; }

    /**
     * <p>If this value is set to true, the operation deletes a file share immediately
     * and aborts all data uploads to AWS. Otherwise, the file share is not deleted
     * until all data is uploaded to AWS. This process aborts the data upload process,
     * and the file share enters the FORCE_DELETING status.</p>
     */
    inline void SetForceDelete(bool value) { m_forceDeleteHasBeenSet = true; m_forceDelete = value; }

    /**
     * <p>If this value is set to true, the operation deletes a file share immediately
     * and aborts all data uploads to AWS. Otherwise, the file share is not deleted
     * until all data is uploaded to AWS. This process aborts the data upload process,
     * and the file share enters the FORCE_DELETING status.</p>
     */
    inline DeleteFileShareRequest& WithForceDelete(bool value) { SetForceDelete(value); return *this;}

  private:

    Aws::String m_fileShareARN;
    bool m_fileShareARNHasBeenSet;

    bool m_forceDelete;
    bool m_forceDeleteHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
