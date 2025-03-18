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
   * <p>The Amazon S3 data access that is the asset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/S3DataAccessAsset">AWS
   * API Reference</a></p>
   */
  class S3DataAccessAsset
  {
  public:
    AWS_DATAEXCHANGE_API S3DataAccessAsset() = default;
    AWS_DATAEXCHANGE_API S3DataAccessAsset(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API S3DataAccessAsset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 bucket hosting data to be shared in the S3 data access.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    S3DataAccessAsset& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket used for hosting shared data in the Amazon S3 data
     * access.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeyPrefixes() const { return m_keyPrefixes; }
    inline bool KeyPrefixesHasBeenSet() const { return m_keyPrefixesHasBeenSet; }
    template<typename KeyPrefixesT = Aws::Vector<Aws::String>>
    void SetKeyPrefixes(KeyPrefixesT&& value) { m_keyPrefixesHasBeenSet = true; m_keyPrefixes = std::forward<KeyPrefixesT>(value); }
    template<typename KeyPrefixesT = Aws::Vector<Aws::String>>
    S3DataAccessAsset& WithKeyPrefixes(KeyPrefixesT&& value) { SetKeyPrefixes(std::forward<KeyPrefixesT>(value)); return *this;}
    template<typename KeyPrefixesT = Aws::String>
    S3DataAccessAsset& AddKeyPrefixes(KeyPrefixesT&& value) { m_keyPrefixesHasBeenSet = true; m_keyPrefixes.emplace_back(std::forward<KeyPrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>S3 keys made available using this asset.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeys() const { return m_keys; }
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }
    template<typename KeysT = Aws::Vector<Aws::String>>
    void SetKeys(KeysT&& value) { m_keysHasBeenSet = true; m_keys = std::forward<KeysT>(value); }
    template<typename KeysT = Aws::Vector<Aws::String>>
    S3DataAccessAsset& WithKeys(KeysT&& value) { SetKeys(std::forward<KeysT>(value)); return *this;}
    template<typename KeysT = Aws::String>
    S3DataAccessAsset& AddKeys(KeysT&& value) { m_keysHasBeenSet = true; m_keys.emplace_back(std::forward<KeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The automatically-generated bucket-style alias for your Amazon S3 Access
     * Point. Customers can access their entitled data using the S3 Access Point
     * alias.</p>
     */
    inline const Aws::String& GetS3AccessPointAlias() const { return m_s3AccessPointAlias; }
    inline bool S3AccessPointAliasHasBeenSet() const { return m_s3AccessPointAliasHasBeenSet; }
    template<typename S3AccessPointAliasT = Aws::String>
    void SetS3AccessPointAlias(S3AccessPointAliasT&& value) { m_s3AccessPointAliasHasBeenSet = true; m_s3AccessPointAlias = std::forward<S3AccessPointAliasT>(value); }
    template<typename S3AccessPointAliasT = Aws::String>
    S3DataAccessAsset& WithS3AccessPointAlias(S3AccessPointAliasT&& value) { SetS3AccessPointAlias(std::forward<S3AccessPointAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for your Amazon S3 Access Point. Customers can also access their
     * entitled data using the S3 Access Point ARN.</p>
     */
    inline const Aws::String& GetS3AccessPointArn() const { return m_s3AccessPointArn; }
    inline bool S3AccessPointArnHasBeenSet() const { return m_s3AccessPointArnHasBeenSet; }
    template<typename S3AccessPointArnT = Aws::String>
    void SetS3AccessPointArn(S3AccessPointArnT&& value) { m_s3AccessPointArnHasBeenSet = true; m_s3AccessPointArn = std::forward<S3AccessPointArnT>(value); }
    template<typename S3AccessPointArnT = Aws::String>
    S3DataAccessAsset& WithS3AccessPointArn(S3AccessPointArnT&& value) { SetS3AccessPointArn(std::forward<S3AccessPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of AWS KMS CMKs (Key Management System Customer Managed Keys) and ARNs
     * used to encrypt S3 objects being shared in this S3 Data Access asset. Providers
     * must include all AWS KMS keys used to encrypt these shared S3 objects.</p>
     */
    inline const Aws::Vector<KmsKeyToGrant>& GetKmsKeysToGrant() const { return m_kmsKeysToGrant; }
    inline bool KmsKeysToGrantHasBeenSet() const { return m_kmsKeysToGrantHasBeenSet; }
    template<typename KmsKeysToGrantT = Aws::Vector<KmsKeyToGrant>>
    void SetKmsKeysToGrant(KmsKeysToGrantT&& value) { m_kmsKeysToGrantHasBeenSet = true; m_kmsKeysToGrant = std::forward<KmsKeysToGrantT>(value); }
    template<typename KmsKeysToGrantT = Aws::Vector<KmsKeyToGrant>>
    S3DataAccessAsset& WithKmsKeysToGrant(KmsKeysToGrantT&& value) { SetKmsKeysToGrant(std::forward<KmsKeysToGrantT>(value)); return *this;}
    template<typename KmsKeysToGrantT = KmsKeyToGrant>
    S3DataAccessAsset& AddKmsKeysToGrant(KmsKeysToGrantT&& value) { m_kmsKeysToGrantHasBeenSet = true; m_kmsKeysToGrant.emplace_back(std::forward<KmsKeysToGrantT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::Vector<Aws::String> m_keyPrefixes;
    bool m_keyPrefixesHasBeenSet = false;

    Aws::Vector<Aws::String> m_keys;
    bool m_keysHasBeenSet = false;

    Aws::String m_s3AccessPointAlias;
    bool m_s3AccessPointAliasHasBeenSet = false;

    Aws::String m_s3AccessPointArn;
    bool m_s3AccessPointArnHasBeenSet = false;

    Aws::Vector<KmsKeyToGrant> m_kmsKeysToGrant;
    bool m_kmsKeysToGrantHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
