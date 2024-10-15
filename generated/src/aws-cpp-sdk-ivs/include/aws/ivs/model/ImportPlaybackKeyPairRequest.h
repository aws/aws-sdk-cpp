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
  class ImportPlaybackKeyPairRequest : public IVSRequest
  {
  public:
    AWS_IVS_API ImportPlaybackKeyPairRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportPlaybackKeyPair"; }

    AWS_IVS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Playback-key-pair name. The value does not need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ImportPlaybackKeyPairRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ImportPlaybackKeyPairRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ImportPlaybackKeyPairRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public portion of a customer-generated key pair.</p>
     */
    inline const Aws::String& GetPublicKeyMaterial() const{ return m_publicKeyMaterial; }
    inline bool PublicKeyMaterialHasBeenSet() const { return m_publicKeyMaterialHasBeenSet; }
    inline void SetPublicKeyMaterial(const Aws::String& value) { m_publicKeyMaterialHasBeenSet = true; m_publicKeyMaterial = value; }
    inline void SetPublicKeyMaterial(Aws::String&& value) { m_publicKeyMaterialHasBeenSet = true; m_publicKeyMaterial = std::move(value); }
    inline void SetPublicKeyMaterial(const char* value) { m_publicKeyMaterialHasBeenSet = true; m_publicKeyMaterial.assign(value); }
    inline ImportPlaybackKeyPairRequest& WithPublicKeyMaterial(const Aws::String& value) { SetPublicKeyMaterial(value); return *this;}
    inline ImportPlaybackKeyPairRequest& WithPublicKeyMaterial(Aws::String&& value) { SetPublicKeyMaterial(std::move(value)); return *this;}
    inline ImportPlaybackKeyPairRequest& WithPublicKeyMaterial(const char* value) { SetPublicKeyMaterial(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags provided with the request are added to the playback key pair tags.
     * See <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/best-practices-and-strats.html">Best
     * practices and strategies</a> in <i>Tagging Amazon Web Services Resources and Tag
     * Editor</i> for details, including restrictions that apply to tags and "Tag
     * naming limits and requirements"; Amazon IVS has no service-specific constraints
     * beyond what is documented there.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ImportPlaybackKeyPairRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ImportPlaybackKeyPairRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ImportPlaybackKeyPairRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ImportPlaybackKeyPairRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ImportPlaybackKeyPairRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ImportPlaybackKeyPairRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ImportPlaybackKeyPairRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ImportPlaybackKeyPairRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ImportPlaybackKeyPairRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_publicKeyMaterial;
    bool m_publicKeyMaterialHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
