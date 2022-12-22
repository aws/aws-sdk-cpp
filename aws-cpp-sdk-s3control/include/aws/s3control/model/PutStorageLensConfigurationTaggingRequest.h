/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/StorageLensTag.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class PutStorageLensConfigurationTaggingRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API PutStorageLensConfigurationTaggingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutStorageLensConfigurationTagging"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>The ID of the S3 Storage Lens configuration.</p>
     */
    inline const Aws::String& GetConfigId() const{ return m_configId; }

    /**
     * <p>The ID of the S3 Storage Lens configuration.</p>
     */
    inline bool ConfigIdHasBeenSet() const { return m_configIdHasBeenSet; }

    /**
     * <p>The ID of the S3 Storage Lens configuration.</p>
     */
    inline void SetConfigId(const Aws::String& value) { m_configIdHasBeenSet = true; m_configId = value; }

    /**
     * <p>The ID of the S3 Storage Lens configuration.</p>
     */
    inline void SetConfigId(Aws::String&& value) { m_configIdHasBeenSet = true; m_configId = std::move(value); }

    /**
     * <p>The ID of the S3 Storage Lens configuration.</p>
     */
    inline void SetConfigId(const char* value) { m_configIdHasBeenSet = true; m_configId.assign(value); }

    /**
     * <p>The ID of the S3 Storage Lens configuration.</p>
     */
    inline PutStorageLensConfigurationTaggingRequest& WithConfigId(const Aws::String& value) { SetConfigId(value); return *this;}

    /**
     * <p>The ID of the S3 Storage Lens configuration.</p>
     */
    inline PutStorageLensConfigurationTaggingRequest& WithConfigId(Aws::String&& value) { SetConfigId(std::move(value)); return *this;}

    /**
     * <p>The ID of the S3 Storage Lens configuration.</p>
     */
    inline PutStorageLensConfigurationTaggingRequest& WithConfigId(const char* value) { SetConfigId(value); return *this;}


    /**
     * <p>The account ID of the requester.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID of the requester.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID of the requester.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID of the requester.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID of the requester.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID of the requester.</p>
     */
    inline PutStorageLensConfigurationTaggingRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID of the requester.</p>
     */
    inline PutStorageLensConfigurationTaggingRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID of the requester.</p>
     */
    inline PutStorageLensConfigurationTaggingRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The tag set of the S3 Storage Lens configuration.</p>  <p>You can set
     * up to a maximum of 50 tags.</p> 
     */
    inline const Aws::Vector<StorageLensTag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag set of the S3 Storage Lens configuration.</p>  <p>You can set
     * up to a maximum of 50 tags.</p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag set of the S3 Storage Lens configuration.</p>  <p>You can set
     * up to a maximum of 50 tags.</p> 
     */
    inline void SetTags(const Aws::Vector<StorageLensTag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag set of the S3 Storage Lens configuration.</p>  <p>You can set
     * up to a maximum of 50 tags.</p> 
     */
    inline void SetTags(Aws::Vector<StorageLensTag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag set of the S3 Storage Lens configuration.</p>  <p>You can set
     * up to a maximum of 50 tags.</p> 
     */
    inline PutStorageLensConfigurationTaggingRequest& WithTags(const Aws::Vector<StorageLensTag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag set of the S3 Storage Lens configuration.</p>  <p>You can set
     * up to a maximum of 50 tags.</p> 
     */
    inline PutStorageLensConfigurationTaggingRequest& WithTags(Aws::Vector<StorageLensTag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag set of the S3 Storage Lens configuration.</p>  <p>You can set
     * up to a maximum of 50 tags.</p> 
     */
    inline PutStorageLensConfigurationTaggingRequest& AddTags(const StorageLensTag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag set of the S3 Storage Lens configuration.</p>  <p>You can set
     * up to a maximum of 50 tags.</p> 
     */
    inline PutStorageLensConfigurationTaggingRequest& AddTags(StorageLensTag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_configId;
    bool m_configIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<StorageLensTag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
