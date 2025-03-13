/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dataexchange/model/KmsKeyToGrant.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>Source details for an Amazon S3 data access asset.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/S3DataAccessAssetSourceEntry">AWS
   * API Reference</a></p>
   */
  class S3DataAccessAssetSourceEntry
  {
  public:
    AWS_DATAEXCHANGE_API S3DataAccessAssetSourceEntry() = default;
    AWS_DATAEXCHANGE_API S3DataAccessAssetSourceEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API S3DataAccessAssetSourceEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 bucket used for hosting shared data in the Amazon S3 data
     * access.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    S3DataAccessAssetSourceEntry& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Organizes Amazon S3 asset key prefixes stored in an Amazon S3 bucket.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeyPrefixes() const { return m_keyPrefixes; }
    inline bool KeyPrefixesHasBeenSet() const { return m_keyPrefixesHasBeenSet; }
    template<typename KeyPrefixesT = Aws::Vector<Aws::String>>
    void SetKeyPrefixes(KeyPrefixesT&& value) { m_keyPrefixesHasBeenSet = true; m_keyPrefixes = std::forward<KeyPrefixesT>(value); }
    template<typename KeyPrefixesT = Aws::Vector<Aws::String>>
    S3DataAccessAssetSourceEntry& WithKeyPrefixes(KeyPrefixesT&& value) { SetKeyPrefixes(std::forward<KeyPrefixesT>(value)); return *this;}
    template<typename KeyPrefixesT = Aws::String>
    S3DataAccessAssetSourceEntry& AddKeyPrefixes(KeyPrefixesT&& value) { m_keyPrefixesHasBeenSet = true; m_keyPrefixes.emplace_back(std::forward<KeyPrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The keys used to create the Amazon S3 data access.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeys() const { return m_keys; }
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }
    template<typename KeysT = Aws::Vector<Aws::String>>
    void SetKeys(KeysT&& value) { m_keysHasBeenSet = true; m_keys = std::forward<KeysT>(value); }
    template<typename KeysT = Aws::Vector<Aws::String>>
    S3DataAccessAssetSourceEntry& WithKeys(KeysT&& value) { SetKeys(std::forward<KeysT>(value)); return *this;}
    template<typename KeysT = Aws::String>
    S3DataAccessAssetSourceEntry& AddKeys(KeysT&& value) { m_keysHasBeenSet = true; m_keys.emplace_back(std::forward<KeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of AWS KMS CMKs (Key Management System Customer Managed Keys) and ARNs
     * used to encrypt S3 objects being shared in this S3 Data Access asset.</p>
     */
    inline const Aws::Vector<KmsKeyToGrant>& GetKmsKeysToGrant() const { return m_kmsKeysToGrant; }
    inline bool KmsKeysToGrantHasBeenSet() const { return m_kmsKeysToGrantHasBeenSet; }
    template<typename KmsKeysToGrantT = Aws::Vector<KmsKeyToGrant>>
    void SetKmsKeysToGrant(KmsKeysToGrantT&& value) { m_kmsKeysToGrantHasBeenSet = true; m_kmsKeysToGrant = std::forward<KmsKeysToGrantT>(value); }
    template<typename KmsKeysToGrantT = Aws::Vector<KmsKeyToGrant>>
    S3DataAccessAssetSourceEntry& WithKmsKeysToGrant(KmsKeysToGrantT&& value) { SetKmsKeysToGrant(std::forward<KmsKeysToGrantT>(value)); return *this;}
    template<typename KmsKeysToGrantT = KmsKeyToGrant>
    S3DataAccessAssetSourceEntry& AddKmsKeysToGrant(KmsKeysToGrantT&& value) { m_kmsKeysToGrantHasBeenSet = true; m_kmsKeysToGrant.emplace_back(std::forward<KmsKeysToGrantT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::Vector<Aws::String> m_keyPrefixes;
    bool m_keyPrefixesHasBeenSet = false;

    Aws::Vector<Aws::String> m_keys;
    bool m_keysHasBeenSet = false;

    Aws::Vector<KmsKeyToGrant> m_kmsKeysToGrant;
    bool m_kmsKeysToGrantHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
