/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/MemberFrameworkConfiguration.h>
#include <aws/managedblockchain/model/MemberLogPublishingConfiguration.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>Configuration properties of the member.</p> <p>Applies only to Hyperledger
   * Fabric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/MemberConfiguration">AWS
   * API Reference</a></p>
   */
  class MemberConfiguration
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API MemberConfiguration();
    AWS_MANAGEDBLOCKCHAIN_API MemberConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API MemberConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the member.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the member.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the member.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the member.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the member.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the member.</p>
     */
    inline MemberConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the member.</p>
     */
    inline MemberConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the member.</p>
     */
    inline MemberConfiguration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An optional description of the member.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description of the member.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description of the member.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description of the member.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description of the member.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description of the member.</p>
     */
    inline MemberConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description of the member.</p>
     */
    inline MemberConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the member.</p>
     */
    inline MemberConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Configuration properties of the blockchain framework relevant to the
     * member.</p>
     */
    inline const MemberFrameworkConfiguration& GetFrameworkConfiguration() const{ return m_frameworkConfiguration; }

    /**
     * <p>Configuration properties of the blockchain framework relevant to the
     * member.</p>
     */
    inline bool FrameworkConfigurationHasBeenSet() const { return m_frameworkConfigurationHasBeenSet; }

    /**
     * <p>Configuration properties of the blockchain framework relevant to the
     * member.</p>
     */
    inline void SetFrameworkConfiguration(const MemberFrameworkConfiguration& value) { m_frameworkConfigurationHasBeenSet = true; m_frameworkConfiguration = value; }

    /**
     * <p>Configuration properties of the blockchain framework relevant to the
     * member.</p>
     */
    inline void SetFrameworkConfiguration(MemberFrameworkConfiguration&& value) { m_frameworkConfigurationHasBeenSet = true; m_frameworkConfiguration = std::move(value); }

    /**
     * <p>Configuration properties of the blockchain framework relevant to the
     * member.</p>
     */
    inline MemberConfiguration& WithFrameworkConfiguration(const MemberFrameworkConfiguration& value) { SetFrameworkConfiguration(value); return *this;}

    /**
     * <p>Configuration properties of the blockchain framework relevant to the
     * member.</p>
     */
    inline MemberConfiguration& WithFrameworkConfiguration(MemberFrameworkConfiguration&& value) { SetFrameworkConfiguration(std::move(value)); return *this;}


    /**
     * <p>Configuration properties for logging events associated with a member of a
     * Managed Blockchain network.</p>
     */
    inline const MemberLogPublishingConfiguration& GetLogPublishingConfiguration() const{ return m_logPublishingConfiguration; }

    /**
     * <p>Configuration properties for logging events associated with a member of a
     * Managed Blockchain network.</p>
     */
    inline bool LogPublishingConfigurationHasBeenSet() const { return m_logPublishingConfigurationHasBeenSet; }

    /**
     * <p>Configuration properties for logging events associated with a member of a
     * Managed Blockchain network.</p>
     */
    inline void SetLogPublishingConfiguration(const MemberLogPublishingConfiguration& value) { m_logPublishingConfigurationHasBeenSet = true; m_logPublishingConfiguration = value; }

    /**
     * <p>Configuration properties for logging events associated with a member of a
     * Managed Blockchain network.</p>
     */
    inline void SetLogPublishingConfiguration(MemberLogPublishingConfiguration&& value) { m_logPublishingConfigurationHasBeenSet = true; m_logPublishingConfiguration = std::move(value); }

    /**
     * <p>Configuration properties for logging events associated with a member of a
     * Managed Blockchain network.</p>
     */
    inline MemberConfiguration& WithLogPublishingConfiguration(const MemberLogPublishingConfiguration& value) { SetLogPublishingConfiguration(value); return *this;}

    /**
     * <p>Configuration properties for logging events associated with a member of a
     * Managed Blockchain network.</p>
     */
    inline MemberConfiguration& WithLogPublishingConfiguration(MemberLogPublishingConfiguration&& value) { SetLogPublishingConfiguration(std::move(value)); return *this;}


    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p>
     */
    inline MemberConfiguration& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p>
     */
    inline MemberConfiguration& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p>
     */
    inline MemberConfiguration& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p>
     */
    inline MemberConfiguration& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p>
     */
    inline MemberConfiguration& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p>
     */
    inline MemberConfiguration& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p>
     */
    inline MemberConfiguration& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p>
     */
    inline MemberConfiguration& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>When specifying tags during creation, you can specify multiple
     * key-value pairs in a single request, with an overall maximum of 50 tags added to
     * each resource.</p>
     */
    inline MemberConfiguration& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key in Key Management
     * Service (KMS) to use for encryption at rest in the member. This parameter is
     * inherited by any nodes that this member creates. For more information, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/managed-blockchain-encryption-at-rest.html">Encryption
     * at Rest</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>Use one of the following options to specify this
     * parameter:</p> <ul> <li> <p> <b>Undefined or empty string</b> - By default, use
     * an KMS key that is owned and managed by Amazon Web Services on your behalf.</p>
     * </li> <li> <p> <b>A valid symmetric customer managed KMS key</b> - Use the
     * specified KMS key in your account that you create, own, and manage.</p>
     * <p>Amazon Managed Blockchain doesn't support asymmetric keys. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>The following is an example of a KMS key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key in Key Management
     * Service (KMS) to use for encryption at rest in the member. This parameter is
     * inherited by any nodes that this member creates. For more information, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/managed-blockchain-encryption-at-rest.html">Encryption
     * at Rest</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>Use one of the following options to specify this
     * parameter:</p> <ul> <li> <p> <b>Undefined or empty string</b> - By default, use
     * an KMS key that is owned and managed by Amazon Web Services on your behalf.</p>
     * </li> <li> <p> <b>A valid symmetric customer managed KMS key</b> - Use the
     * specified KMS key in your account that you create, own, and manage.</p>
     * <p>Amazon Managed Blockchain doesn't support asymmetric keys. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>The following is an example of a KMS key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key in Key Management
     * Service (KMS) to use for encryption at rest in the member. This parameter is
     * inherited by any nodes that this member creates. For more information, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/managed-blockchain-encryption-at-rest.html">Encryption
     * at Rest</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>Use one of the following options to specify this
     * parameter:</p> <ul> <li> <p> <b>Undefined or empty string</b> - By default, use
     * an KMS key that is owned and managed by Amazon Web Services on your behalf.</p>
     * </li> <li> <p> <b>A valid symmetric customer managed KMS key</b> - Use the
     * specified KMS key in your account that you create, own, and manage.</p>
     * <p>Amazon Managed Blockchain doesn't support asymmetric keys. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>The following is an example of a KMS key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key in Key Management
     * Service (KMS) to use for encryption at rest in the member. This parameter is
     * inherited by any nodes that this member creates. For more information, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/managed-blockchain-encryption-at-rest.html">Encryption
     * at Rest</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>Use one of the following options to specify this
     * parameter:</p> <ul> <li> <p> <b>Undefined or empty string</b> - By default, use
     * an KMS key that is owned and managed by Amazon Web Services on your behalf.</p>
     * </li> <li> <p> <b>A valid symmetric customer managed KMS key</b> - Use the
     * specified KMS key in your account that you create, own, and manage.</p>
     * <p>Amazon Managed Blockchain doesn't support asymmetric keys. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>The following is an example of a KMS key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key in Key Management
     * Service (KMS) to use for encryption at rest in the member. This parameter is
     * inherited by any nodes that this member creates. For more information, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/managed-blockchain-encryption-at-rest.html">Encryption
     * at Rest</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>Use one of the following options to specify this
     * parameter:</p> <ul> <li> <p> <b>Undefined or empty string</b> - By default, use
     * an KMS key that is owned and managed by Amazon Web Services on your behalf.</p>
     * </li> <li> <p> <b>A valid symmetric customer managed KMS key</b> - Use the
     * specified KMS key in your account that you create, own, and manage.</p>
     * <p>Amazon Managed Blockchain doesn't support asymmetric keys. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>The following is an example of a KMS key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key in Key Management
     * Service (KMS) to use for encryption at rest in the member. This parameter is
     * inherited by any nodes that this member creates. For more information, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/managed-blockchain-encryption-at-rest.html">Encryption
     * at Rest</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>Use one of the following options to specify this
     * parameter:</p> <ul> <li> <p> <b>Undefined or empty string</b> - By default, use
     * an KMS key that is owned and managed by Amazon Web Services on your behalf.</p>
     * </li> <li> <p> <b>A valid symmetric customer managed KMS key</b> - Use the
     * specified KMS key in your account that you create, own, and manage.</p>
     * <p>Amazon Managed Blockchain doesn't support asymmetric keys. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>The following is an example of a KMS key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul>
     */
    inline MemberConfiguration& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key in Key Management
     * Service (KMS) to use for encryption at rest in the member. This parameter is
     * inherited by any nodes that this member creates. For more information, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/managed-blockchain-encryption-at-rest.html">Encryption
     * at Rest</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>Use one of the following options to specify this
     * parameter:</p> <ul> <li> <p> <b>Undefined or empty string</b> - By default, use
     * an KMS key that is owned and managed by Amazon Web Services on your behalf.</p>
     * </li> <li> <p> <b>A valid symmetric customer managed KMS key</b> - Use the
     * specified KMS key in your account that you create, own, and manage.</p>
     * <p>Amazon Managed Blockchain doesn't support asymmetric keys. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>The following is an example of a KMS key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul>
     */
    inline MemberConfiguration& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key in Key Management
     * Service (KMS) to use for encryption at rest in the member. This parameter is
     * inherited by any nodes that this member creates. For more information, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/managed-blockchain-encryption-at-rest.html">Encryption
     * at Rest</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p> <p>Use one of the following options to specify this
     * parameter:</p> <ul> <li> <p> <b>Undefined or empty string</b> - By default, use
     * an KMS key that is owned and managed by Amazon Web Services on your behalf.</p>
     * </li> <li> <p> <b>A valid symmetric customer managed KMS key</b> - Use the
     * specified KMS key in your account that you create, own, and manage.</p>
     * <p>Amazon Managed Blockchain doesn't support asymmetric keys. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>The following is an example of a KMS key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul>
     */
    inline MemberConfiguration& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    MemberFrameworkConfiguration m_frameworkConfiguration;
    bool m_frameworkConfigurationHasBeenSet = false;

    MemberLogPublishingConfiguration m_logPublishingConfiguration;
    bool m_logPublishingConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
