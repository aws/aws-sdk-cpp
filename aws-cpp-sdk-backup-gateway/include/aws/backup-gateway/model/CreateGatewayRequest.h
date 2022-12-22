/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/backup-gateway/BackupGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup-gateway/model/GatewayType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup-gateway/model/Tag.h>
#include <utility>

namespace Aws
{
namespace BackupGateway
{
namespace Model
{

  /**
   */
  class CreateGatewayRequest : public BackupGatewayRequest
  {
  public:
    AWS_BACKUPGATEWAY_API CreateGatewayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGateway"; }

    AWS_BACKUPGATEWAY_API Aws::String SerializePayload() const override;

    AWS_BACKUPGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The activation key of the created gateway.</p>
     */
    inline const Aws::String& GetActivationKey() const{ return m_activationKey; }

    /**
     * <p>The activation key of the created gateway.</p>
     */
    inline bool ActivationKeyHasBeenSet() const { return m_activationKeyHasBeenSet; }

    /**
     * <p>The activation key of the created gateway.</p>
     */
    inline void SetActivationKey(const Aws::String& value) { m_activationKeyHasBeenSet = true; m_activationKey = value; }

    /**
     * <p>The activation key of the created gateway.</p>
     */
    inline void SetActivationKey(Aws::String&& value) { m_activationKeyHasBeenSet = true; m_activationKey = std::move(value); }

    /**
     * <p>The activation key of the created gateway.</p>
     */
    inline void SetActivationKey(const char* value) { m_activationKeyHasBeenSet = true; m_activationKey.assign(value); }

    /**
     * <p>The activation key of the created gateway.</p>
     */
    inline CreateGatewayRequest& WithActivationKey(const Aws::String& value) { SetActivationKey(value); return *this;}

    /**
     * <p>The activation key of the created gateway.</p>
     */
    inline CreateGatewayRequest& WithActivationKey(Aws::String&& value) { SetActivationKey(std::move(value)); return *this;}

    /**
     * <p>The activation key of the created gateway.</p>
     */
    inline CreateGatewayRequest& WithActivationKey(const char* value) { SetActivationKey(value); return *this;}


    /**
     * <p>The display name of the created gateway.</p>
     */
    inline const Aws::String& GetGatewayDisplayName() const{ return m_gatewayDisplayName; }

    /**
     * <p>The display name of the created gateway.</p>
     */
    inline bool GatewayDisplayNameHasBeenSet() const { return m_gatewayDisplayNameHasBeenSet; }

    /**
     * <p>The display name of the created gateway.</p>
     */
    inline void SetGatewayDisplayName(const Aws::String& value) { m_gatewayDisplayNameHasBeenSet = true; m_gatewayDisplayName = value; }

    /**
     * <p>The display name of the created gateway.</p>
     */
    inline void SetGatewayDisplayName(Aws::String&& value) { m_gatewayDisplayNameHasBeenSet = true; m_gatewayDisplayName = std::move(value); }

    /**
     * <p>The display name of the created gateway.</p>
     */
    inline void SetGatewayDisplayName(const char* value) { m_gatewayDisplayNameHasBeenSet = true; m_gatewayDisplayName.assign(value); }

    /**
     * <p>The display name of the created gateway.</p>
     */
    inline CreateGatewayRequest& WithGatewayDisplayName(const Aws::String& value) { SetGatewayDisplayName(value); return *this;}

    /**
     * <p>The display name of the created gateway.</p>
     */
    inline CreateGatewayRequest& WithGatewayDisplayName(Aws::String&& value) { SetGatewayDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the created gateway.</p>
     */
    inline CreateGatewayRequest& WithGatewayDisplayName(const char* value) { SetGatewayDisplayName(value); return *this;}


    /**
     * <p>The type of created gateway.</p>
     */
    inline const GatewayType& GetGatewayType() const{ return m_gatewayType; }

    /**
     * <p>The type of created gateway.</p>
     */
    inline bool GatewayTypeHasBeenSet() const { return m_gatewayTypeHasBeenSet; }

    /**
     * <p>The type of created gateway.</p>
     */
    inline void SetGatewayType(const GatewayType& value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = value; }

    /**
     * <p>The type of created gateway.</p>
     */
    inline void SetGatewayType(GatewayType&& value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = std::move(value); }

    /**
     * <p>The type of created gateway.</p>
     */
    inline CreateGatewayRequest& WithGatewayType(const GatewayType& value) { SetGatewayType(value); return *this;}

    /**
     * <p>The type of created gateway.</p>
     */
    inline CreateGatewayRequest& WithGatewayType(GatewayType&& value) { SetGatewayType(std::move(value)); return *this;}


    /**
     * <p>A list of up to 50 tags to assign to the gateway. Each tag is a key-value
     * pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of up to 50 tags to assign to the gateway. Each tag is a key-value
     * pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of up to 50 tags to assign to the gateway. Each tag is a key-value
     * pair.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of up to 50 tags to assign to the gateway. Each tag is a key-value
     * pair.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of up to 50 tags to assign to the gateway. Each tag is a key-value
     * pair.</p>
     */
    inline CreateGatewayRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of up to 50 tags to assign to the gateway. Each tag is a key-value
     * pair.</p>
     */
    inline CreateGatewayRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of up to 50 tags to assign to the gateway. Each tag is a key-value
     * pair.</p>
     */
    inline CreateGatewayRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of up to 50 tags to assign to the gateway. Each tag is a key-value
     * pair.</p>
     */
    inline CreateGatewayRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_activationKey;
    bool m_activationKeyHasBeenSet = false;

    Aws::String m_gatewayDisplayName;
    bool m_gatewayDisplayNameHasBeenSet = false;

    GatewayType m_gatewayType;
    bool m_gatewayTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
