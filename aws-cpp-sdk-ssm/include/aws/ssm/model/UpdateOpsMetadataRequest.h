/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/MetadataValue.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class UpdateOpsMetadataRequest : public SSMRequest
  {
  public:
    AWS_SSM_API UpdateOpsMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOpsMetadata"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object to update.</p>
     */
    inline const Aws::String& GetOpsMetadataArn() const{ return m_opsMetadataArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object to update.</p>
     */
    inline bool OpsMetadataArnHasBeenSet() const { return m_opsMetadataArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object to update.</p>
     */
    inline void SetOpsMetadataArn(const Aws::String& value) { m_opsMetadataArnHasBeenSet = true; m_opsMetadataArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object to update.</p>
     */
    inline void SetOpsMetadataArn(Aws::String&& value) { m_opsMetadataArnHasBeenSet = true; m_opsMetadataArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object to update.</p>
     */
    inline void SetOpsMetadataArn(const char* value) { m_opsMetadataArnHasBeenSet = true; m_opsMetadataArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object to update.</p>
     */
    inline UpdateOpsMetadataRequest& WithOpsMetadataArn(const Aws::String& value) { SetOpsMetadataArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object to update.</p>
     */
    inline UpdateOpsMetadataRequest& WithOpsMetadataArn(Aws::String&& value) { SetOpsMetadataArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object to update.</p>
     */
    inline UpdateOpsMetadataRequest& WithOpsMetadataArn(const char* value) { SetOpsMetadataArn(value); return *this;}


    /**
     * <p>Metadata to add to an OpsMetadata object.</p>
     */
    inline const Aws::Map<Aws::String, MetadataValue>& GetMetadataToUpdate() const{ return m_metadataToUpdate; }

    /**
     * <p>Metadata to add to an OpsMetadata object.</p>
     */
    inline bool MetadataToUpdateHasBeenSet() const { return m_metadataToUpdateHasBeenSet; }

    /**
     * <p>Metadata to add to an OpsMetadata object.</p>
     */
    inline void SetMetadataToUpdate(const Aws::Map<Aws::String, MetadataValue>& value) { m_metadataToUpdateHasBeenSet = true; m_metadataToUpdate = value; }

    /**
     * <p>Metadata to add to an OpsMetadata object.</p>
     */
    inline void SetMetadataToUpdate(Aws::Map<Aws::String, MetadataValue>&& value) { m_metadataToUpdateHasBeenSet = true; m_metadataToUpdate = std::move(value); }

    /**
     * <p>Metadata to add to an OpsMetadata object.</p>
     */
    inline UpdateOpsMetadataRequest& WithMetadataToUpdate(const Aws::Map<Aws::String, MetadataValue>& value) { SetMetadataToUpdate(value); return *this;}

    /**
     * <p>Metadata to add to an OpsMetadata object.</p>
     */
    inline UpdateOpsMetadataRequest& WithMetadataToUpdate(Aws::Map<Aws::String, MetadataValue>&& value) { SetMetadataToUpdate(std::move(value)); return *this;}

    /**
     * <p>Metadata to add to an OpsMetadata object.</p>
     */
    inline UpdateOpsMetadataRequest& AddMetadataToUpdate(const Aws::String& key, const MetadataValue& value) { m_metadataToUpdateHasBeenSet = true; m_metadataToUpdate.emplace(key, value); return *this; }

    /**
     * <p>Metadata to add to an OpsMetadata object.</p>
     */
    inline UpdateOpsMetadataRequest& AddMetadataToUpdate(Aws::String&& key, const MetadataValue& value) { m_metadataToUpdateHasBeenSet = true; m_metadataToUpdate.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata to add to an OpsMetadata object.</p>
     */
    inline UpdateOpsMetadataRequest& AddMetadataToUpdate(const Aws::String& key, MetadataValue&& value) { m_metadataToUpdateHasBeenSet = true; m_metadataToUpdate.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata to add to an OpsMetadata object.</p>
     */
    inline UpdateOpsMetadataRequest& AddMetadataToUpdate(Aws::String&& key, MetadataValue&& value) { m_metadataToUpdateHasBeenSet = true; m_metadataToUpdate.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata to add to an OpsMetadata object.</p>
     */
    inline UpdateOpsMetadataRequest& AddMetadataToUpdate(const char* key, MetadataValue&& value) { m_metadataToUpdateHasBeenSet = true; m_metadataToUpdate.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata to add to an OpsMetadata object.</p>
     */
    inline UpdateOpsMetadataRequest& AddMetadataToUpdate(const char* key, const MetadataValue& value) { m_metadataToUpdateHasBeenSet = true; m_metadataToUpdate.emplace(key, value); return *this; }


    /**
     * <p>The metadata keys to delete from the OpsMetadata object. </p>
     */
    inline const Aws::Vector<Aws::String>& GetKeysToDelete() const{ return m_keysToDelete; }

    /**
     * <p>The metadata keys to delete from the OpsMetadata object. </p>
     */
    inline bool KeysToDeleteHasBeenSet() const { return m_keysToDeleteHasBeenSet; }

    /**
     * <p>The metadata keys to delete from the OpsMetadata object. </p>
     */
    inline void SetKeysToDelete(const Aws::Vector<Aws::String>& value) { m_keysToDeleteHasBeenSet = true; m_keysToDelete = value; }

    /**
     * <p>The metadata keys to delete from the OpsMetadata object. </p>
     */
    inline void SetKeysToDelete(Aws::Vector<Aws::String>&& value) { m_keysToDeleteHasBeenSet = true; m_keysToDelete = std::move(value); }

    /**
     * <p>The metadata keys to delete from the OpsMetadata object. </p>
     */
    inline UpdateOpsMetadataRequest& WithKeysToDelete(const Aws::Vector<Aws::String>& value) { SetKeysToDelete(value); return *this;}

    /**
     * <p>The metadata keys to delete from the OpsMetadata object. </p>
     */
    inline UpdateOpsMetadataRequest& WithKeysToDelete(Aws::Vector<Aws::String>&& value) { SetKeysToDelete(std::move(value)); return *this;}

    /**
     * <p>The metadata keys to delete from the OpsMetadata object. </p>
     */
    inline UpdateOpsMetadataRequest& AddKeysToDelete(const Aws::String& value) { m_keysToDeleteHasBeenSet = true; m_keysToDelete.push_back(value); return *this; }

    /**
     * <p>The metadata keys to delete from the OpsMetadata object. </p>
     */
    inline UpdateOpsMetadataRequest& AddKeysToDelete(Aws::String&& value) { m_keysToDeleteHasBeenSet = true; m_keysToDelete.push_back(std::move(value)); return *this; }

    /**
     * <p>The metadata keys to delete from the OpsMetadata object. </p>
     */
    inline UpdateOpsMetadataRequest& AddKeysToDelete(const char* value) { m_keysToDeleteHasBeenSet = true; m_keysToDelete.push_back(value); return *this; }

  private:

    Aws::String m_opsMetadataArn;
    bool m_opsMetadataArnHasBeenSet = false;

    Aws::Map<Aws::String, MetadataValue> m_metadataToUpdate;
    bool m_metadataToUpdateHasBeenSet = false;

    Aws::Vector<Aws::String> m_keysToDelete;
    bool m_keysToDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
