/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class DeleteStorageVirtualMachineRequest : public FSxRequest
  {
  public:
    AWS_FSX_API DeleteStorageVirtualMachineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteStorageVirtualMachine"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline DeleteStorageVirtualMachineRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline DeleteStorageVirtualMachineRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline DeleteStorageVirtualMachineRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The ID of the SVM that you want to delete.</p>
     */
    inline const Aws::String& GetStorageVirtualMachineId() const{ return m_storageVirtualMachineId; }

    /**
     * <p>The ID of the SVM that you want to delete.</p>
     */
    inline bool StorageVirtualMachineIdHasBeenSet() const { return m_storageVirtualMachineIdHasBeenSet; }

    /**
     * <p>The ID of the SVM that you want to delete.</p>
     */
    inline void SetStorageVirtualMachineId(const Aws::String& value) { m_storageVirtualMachineIdHasBeenSet = true; m_storageVirtualMachineId = value; }

    /**
     * <p>The ID of the SVM that you want to delete.</p>
     */
    inline void SetStorageVirtualMachineId(Aws::String&& value) { m_storageVirtualMachineIdHasBeenSet = true; m_storageVirtualMachineId = std::move(value); }

    /**
     * <p>The ID of the SVM that you want to delete.</p>
     */
    inline void SetStorageVirtualMachineId(const char* value) { m_storageVirtualMachineIdHasBeenSet = true; m_storageVirtualMachineId.assign(value); }

    /**
     * <p>The ID of the SVM that you want to delete.</p>
     */
    inline DeleteStorageVirtualMachineRequest& WithStorageVirtualMachineId(const Aws::String& value) { SetStorageVirtualMachineId(value); return *this;}

    /**
     * <p>The ID of the SVM that you want to delete.</p>
     */
    inline DeleteStorageVirtualMachineRequest& WithStorageVirtualMachineId(Aws::String&& value) { SetStorageVirtualMachineId(std::move(value)); return *this;}

    /**
     * <p>The ID of the SVM that you want to delete.</p>
     */
    inline DeleteStorageVirtualMachineRequest& WithStorageVirtualMachineId(const char* value) { SetStorageVirtualMachineId(value); return *this;}

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_storageVirtualMachineId;
    bool m_storageVirtualMachineIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
