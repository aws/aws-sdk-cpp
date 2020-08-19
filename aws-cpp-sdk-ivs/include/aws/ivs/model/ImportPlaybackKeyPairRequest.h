/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace IVS
{
namespace Model
{

  /**
   */
  class AWS_IVS_API ImportPlaybackKeyPairRequest : public IVSRequest
  {
  public:
    ImportPlaybackKeyPairRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportPlaybackKeyPair"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The public portion of a customer-generated key pair.</p>
     */
    inline const Aws::String& GetPublicKeyMaterial() const{ return m_publicKeyMaterial; }

    /**
     * <p>The public portion of a customer-generated key pair.</p>
     */
    inline bool PublicKeyMaterialHasBeenSet() const { return m_publicKeyMaterialHasBeenSet; }

    /**
     * <p>The public portion of a customer-generated key pair.</p>
     */
    inline void SetPublicKeyMaterial(const Aws::String& value) { m_publicKeyMaterialHasBeenSet = true; m_publicKeyMaterial = value; }

    /**
     * <p>The public portion of a customer-generated key pair.</p>
     */
    inline void SetPublicKeyMaterial(Aws::String&& value) { m_publicKeyMaterialHasBeenSet = true; m_publicKeyMaterial = std::move(value); }

    /**
     * <p>The public portion of a customer-generated key pair.</p>
     */
    inline void SetPublicKeyMaterial(const char* value) { m_publicKeyMaterialHasBeenSet = true; m_publicKeyMaterial.assign(value); }

    /**
     * <p>The public portion of a customer-generated key pair.</p>
     */
    inline ImportPlaybackKeyPairRequest& WithPublicKeyMaterial(const Aws::String& value) { SetPublicKeyMaterial(value); return *this;}

    /**
     * <p>The public portion of a customer-generated key pair.</p>
     */
    inline ImportPlaybackKeyPairRequest& WithPublicKeyMaterial(Aws::String&& value) { SetPublicKeyMaterial(std::move(value)); return *this;}

    /**
     * <p>The public portion of a customer-generated key pair.</p>
     */
    inline ImportPlaybackKeyPairRequest& WithPublicKeyMaterial(const char* value) { SetPublicKeyMaterial(value); return *this;}


    /**
     * <p>An arbitrary string (a nickname) assigned to a playback key pair that helps
     * the customer identify that resource. The value does not need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>An arbitrary string (a nickname) assigned to a playback key pair that helps
     * the customer identify that resource. The value does not need to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>An arbitrary string (a nickname) assigned to a playback key pair that helps
     * the customer identify that resource. The value does not need to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>An arbitrary string (a nickname) assigned to a playback key pair that helps
     * the customer identify that resource. The value does not need to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>An arbitrary string (a nickname) assigned to a playback key pair that helps
     * the customer identify that resource. The value does not need to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>An arbitrary string (a nickname) assigned to a playback key pair that helps
     * the customer identify that resource. The value does not need to be unique.</p>
     */
    inline ImportPlaybackKeyPairRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>An arbitrary string (a nickname) assigned to a playback key pair that helps
     * the customer identify that resource. The value does not need to be unique.</p>
     */
    inline ImportPlaybackKeyPairRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>An arbitrary string (a nickname) assigned to a playback key pair that helps
     * the customer identify that resource. The value does not need to be unique.</p>
     */
    inline ImportPlaybackKeyPairRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Any tags provided with the request are added to the playback key pair
     * tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags provided with the request are added to the playback key pair
     * tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags provided with the request are added to the playback key pair
     * tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags provided with the request are added to the playback key pair
     * tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags provided with the request are added to the playback key pair
     * tags.</p>
     */
    inline ImportPlaybackKeyPairRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags provided with the request are added to the playback key pair
     * tags.</p>
     */
    inline ImportPlaybackKeyPairRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags provided with the request are added to the playback key pair
     * tags.</p>
     */
    inline ImportPlaybackKeyPairRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Any tags provided with the request are added to the playback key pair
     * tags.</p>
     */
    inline ImportPlaybackKeyPairRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Any tags provided with the request are added to the playback key pair
     * tags.</p>
     */
    inline ImportPlaybackKeyPairRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Any tags provided with the request are added to the playback key pair
     * tags.</p>
     */
    inline ImportPlaybackKeyPairRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Any tags provided with the request are added to the playback key pair
     * tags.</p>
     */
    inline ImportPlaybackKeyPairRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Any tags provided with the request are added to the playback key pair
     * tags.</p>
     */
    inline ImportPlaybackKeyPairRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Any tags provided with the request are added to the playback key pair
     * tags.</p>
     */
    inline ImportPlaybackKeyPairRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_publicKeyMaterial;
    bool m_publicKeyMaterialHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
