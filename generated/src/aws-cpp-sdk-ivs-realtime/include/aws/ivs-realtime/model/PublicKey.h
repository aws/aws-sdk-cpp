/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p>Object specifying a public key used to sign stage participant
   * tokens.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/PublicKey">AWS
   * API Reference</a></p>
   */
  class PublicKey
  {
  public:
    AWS_IVSREALTIME_API PublicKey() = default;
    AWS_IVSREALTIME_API PublicKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API PublicKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Public key ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    PublicKey& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Public key name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PublicKey& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Public key material.</p>
     */
    inline const Aws::String& GetPublicKeyMaterial() const { return m_publicKeyMaterial; }
    inline bool PublicKeyMaterialHasBeenSet() const { return m_publicKeyMaterialHasBeenSet; }
    template<typename PublicKeyMaterialT = Aws::String>
    void SetPublicKeyMaterial(PublicKeyMaterialT&& value) { m_publicKeyMaterialHasBeenSet = true; m_publicKeyMaterial = std::forward<PublicKeyMaterialT>(value); }
    template<typename PublicKeyMaterialT = Aws::String>
    PublicKey& WithPublicKeyMaterial(PublicKeyMaterialT&& value) { SetPublicKeyMaterial(std::forward<PublicKeyMaterialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key fingerprint, a short string used to identify or verify the
     * full public key.</p>
     */
    inline const Aws::String& GetFingerprint() const { return m_fingerprint; }
    inline bool FingerprintHasBeenSet() const { return m_fingerprintHasBeenSet; }
    template<typename FingerprintT = Aws::String>
    void SetFingerprint(FingerprintT&& value) { m_fingerprintHasBeenSet = true; m_fingerprint = std::forward<FingerprintT>(value); }
    template<typename FingerprintT = Aws::String>
    PublicKey& WithFingerprint(FingerprintT&& value) { SetFingerprint(std::forward<FingerprintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/best-practices-and-strats.html">Best
     * practices and strategies</a> in <i>Tagging AWS Resources and Tag Editor</i> for
     * details, including restrictions that apply to tags and "Tag naming limits and
     * requirements"; Amazon IVS has no constraints on tags beyond what is documented
     * there.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    PublicKey& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    PublicKey& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_publicKeyMaterial;
    bool m_publicKeyMaterialHasBeenSet = false;

    Aws::String m_fingerprint;
    bool m_fingerprintHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
