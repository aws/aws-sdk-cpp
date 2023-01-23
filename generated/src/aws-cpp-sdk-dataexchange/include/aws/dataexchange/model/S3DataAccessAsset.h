/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_DATAEXCHANGE_API S3DataAccessAsset();
    AWS_DATAEXCHANGE_API S3DataAccessAsset(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API S3DataAccessAsset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket hosting data to be shared in the S3 data access.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The Amazon S3 bucket hosting data to be shared in the S3 data access.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket hosting data to be shared in the S3 data access.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The Amazon S3 bucket hosting data to be shared in the S3 data access.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket hosting data to be shared in the S3 data access.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket hosting data to be shared in the S3 data access.</p>
     */
    inline S3DataAccessAsset& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket hosting data to be shared in the S3 data access.</p>
     */
    inline S3DataAccessAsset& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket hosting data to be shared in the S3 data access.</p>
     */
    inline S3DataAccessAsset& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The Amazon S3 bucket used for hosting shared data in the Amazon S3 data
     * access.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeyPrefixes() const{ return m_keyPrefixes; }

    /**
     * <p>The Amazon S3 bucket used for hosting shared data in the Amazon S3 data
     * access.</p>
     */
    inline bool KeyPrefixesHasBeenSet() const { return m_keyPrefixesHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket used for hosting shared data in the Amazon S3 data
     * access.</p>
     */
    inline void SetKeyPrefixes(const Aws::Vector<Aws::String>& value) { m_keyPrefixesHasBeenSet = true; m_keyPrefixes = value; }

    /**
     * <p>The Amazon S3 bucket used for hosting shared data in the Amazon S3 data
     * access.</p>
     */
    inline void SetKeyPrefixes(Aws::Vector<Aws::String>&& value) { m_keyPrefixesHasBeenSet = true; m_keyPrefixes = std::move(value); }

    /**
     * <p>The Amazon S3 bucket used for hosting shared data in the Amazon S3 data
     * access.</p>
     */
    inline S3DataAccessAsset& WithKeyPrefixes(const Aws::Vector<Aws::String>& value) { SetKeyPrefixes(value); return *this;}

    /**
     * <p>The Amazon S3 bucket used for hosting shared data in the Amazon S3 data
     * access.</p>
     */
    inline S3DataAccessAsset& WithKeyPrefixes(Aws::Vector<Aws::String>&& value) { SetKeyPrefixes(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket used for hosting shared data in the Amazon S3 data
     * access.</p>
     */
    inline S3DataAccessAsset& AddKeyPrefixes(const Aws::String& value) { m_keyPrefixesHasBeenSet = true; m_keyPrefixes.push_back(value); return *this; }

    /**
     * <p>The Amazon S3 bucket used for hosting shared data in the Amazon S3 data
     * access.</p>
     */
    inline S3DataAccessAsset& AddKeyPrefixes(Aws::String&& value) { m_keyPrefixesHasBeenSet = true; m_keyPrefixes.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon S3 bucket used for hosting shared data in the Amazon S3 data
     * access.</p>
     */
    inline S3DataAccessAsset& AddKeyPrefixes(const char* value) { m_keyPrefixesHasBeenSet = true; m_keyPrefixes.push_back(value); return *this; }


    /**
     * <p>S3 keys made available using this asset.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeys() const{ return m_keys; }

    /**
     * <p>S3 keys made available using this asset.</p>
     */
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }

    /**
     * <p>S3 keys made available using this asset.</p>
     */
    inline void SetKeys(const Aws::Vector<Aws::String>& value) { m_keysHasBeenSet = true; m_keys = value; }

    /**
     * <p>S3 keys made available using this asset.</p>
     */
    inline void SetKeys(Aws::Vector<Aws::String>&& value) { m_keysHasBeenSet = true; m_keys = std::move(value); }

    /**
     * <p>S3 keys made available using this asset.</p>
     */
    inline S3DataAccessAsset& WithKeys(const Aws::Vector<Aws::String>& value) { SetKeys(value); return *this;}

    /**
     * <p>S3 keys made available using this asset.</p>
     */
    inline S3DataAccessAsset& WithKeys(Aws::Vector<Aws::String>&& value) { SetKeys(std::move(value)); return *this;}

    /**
     * <p>S3 keys made available using this asset.</p>
     */
    inline S3DataAccessAsset& AddKeys(const Aws::String& value) { m_keysHasBeenSet = true; m_keys.push_back(value); return *this; }

    /**
     * <p>S3 keys made available using this asset.</p>
     */
    inline S3DataAccessAsset& AddKeys(Aws::String&& value) { m_keysHasBeenSet = true; m_keys.push_back(std::move(value)); return *this; }

    /**
     * <p>S3 keys made available using this asset.</p>
     */
    inline S3DataAccessAsset& AddKeys(const char* value) { m_keysHasBeenSet = true; m_keys.push_back(value); return *this; }


    /**
     * <p>The automatically-generated bucket-style alias for your Amazon S3 Access
     * Point. Customers can access their entitled data using the S3 Access Point
     * alias.</p>
     */
    inline const Aws::String& GetS3AccessPointAlias() const{ return m_s3AccessPointAlias; }

    /**
     * <p>The automatically-generated bucket-style alias for your Amazon S3 Access
     * Point. Customers can access their entitled data using the S3 Access Point
     * alias.</p>
     */
    inline bool S3AccessPointAliasHasBeenSet() const { return m_s3AccessPointAliasHasBeenSet; }

    /**
     * <p>The automatically-generated bucket-style alias for your Amazon S3 Access
     * Point. Customers can access their entitled data using the S3 Access Point
     * alias.</p>
     */
    inline void SetS3AccessPointAlias(const Aws::String& value) { m_s3AccessPointAliasHasBeenSet = true; m_s3AccessPointAlias = value; }

    /**
     * <p>The automatically-generated bucket-style alias for your Amazon S3 Access
     * Point. Customers can access their entitled data using the S3 Access Point
     * alias.</p>
     */
    inline void SetS3AccessPointAlias(Aws::String&& value) { m_s3AccessPointAliasHasBeenSet = true; m_s3AccessPointAlias = std::move(value); }

    /**
     * <p>The automatically-generated bucket-style alias for your Amazon S3 Access
     * Point. Customers can access their entitled data using the S3 Access Point
     * alias.</p>
     */
    inline void SetS3AccessPointAlias(const char* value) { m_s3AccessPointAliasHasBeenSet = true; m_s3AccessPointAlias.assign(value); }

    /**
     * <p>The automatically-generated bucket-style alias for your Amazon S3 Access
     * Point. Customers can access their entitled data using the S3 Access Point
     * alias.</p>
     */
    inline S3DataAccessAsset& WithS3AccessPointAlias(const Aws::String& value) { SetS3AccessPointAlias(value); return *this;}

    /**
     * <p>The automatically-generated bucket-style alias for your Amazon S3 Access
     * Point. Customers can access their entitled data using the S3 Access Point
     * alias.</p>
     */
    inline S3DataAccessAsset& WithS3AccessPointAlias(Aws::String&& value) { SetS3AccessPointAlias(std::move(value)); return *this;}

    /**
     * <p>The automatically-generated bucket-style alias for your Amazon S3 Access
     * Point. Customers can access their entitled data using the S3 Access Point
     * alias.</p>
     */
    inline S3DataAccessAsset& WithS3AccessPointAlias(const char* value) { SetS3AccessPointAlias(value); return *this;}


    /**
     * <p>The ARN for your Amazon S3 Access Point. Customers can also access their
     * entitled data using the S3 Access Point ARN.</p>
     */
    inline const Aws::String& GetS3AccessPointArn() const{ return m_s3AccessPointArn; }

    /**
     * <p>The ARN for your Amazon S3 Access Point. Customers can also access their
     * entitled data using the S3 Access Point ARN.</p>
     */
    inline bool S3AccessPointArnHasBeenSet() const { return m_s3AccessPointArnHasBeenSet; }

    /**
     * <p>The ARN for your Amazon S3 Access Point. Customers can also access their
     * entitled data using the S3 Access Point ARN.</p>
     */
    inline void SetS3AccessPointArn(const Aws::String& value) { m_s3AccessPointArnHasBeenSet = true; m_s3AccessPointArn = value; }

    /**
     * <p>The ARN for your Amazon S3 Access Point. Customers can also access their
     * entitled data using the S3 Access Point ARN.</p>
     */
    inline void SetS3AccessPointArn(Aws::String&& value) { m_s3AccessPointArnHasBeenSet = true; m_s3AccessPointArn = std::move(value); }

    /**
     * <p>The ARN for your Amazon S3 Access Point. Customers can also access their
     * entitled data using the S3 Access Point ARN.</p>
     */
    inline void SetS3AccessPointArn(const char* value) { m_s3AccessPointArnHasBeenSet = true; m_s3AccessPointArn.assign(value); }

    /**
     * <p>The ARN for your Amazon S3 Access Point. Customers can also access their
     * entitled data using the S3 Access Point ARN.</p>
     */
    inline S3DataAccessAsset& WithS3AccessPointArn(const Aws::String& value) { SetS3AccessPointArn(value); return *this;}

    /**
     * <p>The ARN for your Amazon S3 Access Point. Customers can also access their
     * entitled data using the S3 Access Point ARN.</p>
     */
    inline S3DataAccessAsset& WithS3AccessPointArn(Aws::String&& value) { SetS3AccessPointArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for your Amazon S3 Access Point. Customers can also access their
     * entitled data using the S3 Access Point ARN.</p>
     */
    inline S3DataAccessAsset& WithS3AccessPointArn(const char* value) { SetS3AccessPointArn(value); return *this;}

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
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
