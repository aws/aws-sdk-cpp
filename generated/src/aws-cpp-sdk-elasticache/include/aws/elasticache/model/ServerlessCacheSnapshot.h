/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticache/model/ServerlessCacheConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>The resource representing a serverless cache snapshot. Available for Valkey,
   * Redis OSS and Serverless Memcached only.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ServerlessCacheSnapshot">AWS
   * API Reference</a></p>
   */
  class ServerlessCacheSnapshot
  {
  public:
    AWS_ELASTICACHE_API ServerlessCacheSnapshot();
    AWS_ELASTICACHE_API ServerlessCacheSnapshot(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API ServerlessCacheSnapshot& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier of a serverless cache snapshot. Available for Valkey, Redis
     * OSS and Serverless Memcached only.</p>
     */
    inline const Aws::String& GetServerlessCacheSnapshotName() const{ return m_serverlessCacheSnapshotName; }
    inline bool ServerlessCacheSnapshotNameHasBeenSet() const { return m_serverlessCacheSnapshotNameHasBeenSet; }
    inline void SetServerlessCacheSnapshotName(const Aws::String& value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName = value; }
    inline void SetServerlessCacheSnapshotName(Aws::String&& value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName = std::move(value); }
    inline void SetServerlessCacheSnapshotName(const char* value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName.assign(value); }
    inline ServerlessCacheSnapshot& WithServerlessCacheSnapshotName(const Aws::String& value) { SetServerlessCacheSnapshotName(value); return *this;}
    inline ServerlessCacheSnapshot& WithServerlessCacheSnapshotName(Aws::String&& value) { SetServerlessCacheSnapshotName(std::move(value)); return *this;}
    inline ServerlessCacheSnapshot& WithServerlessCacheSnapshotName(const char* value) { SetServerlessCacheSnapshotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a serverless cache snapshot. Available for
     * Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }
    inline ServerlessCacheSnapshot& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline ServerlessCacheSnapshot& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline ServerlessCacheSnapshot& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services Key Management Service (KMS) key of a
     * serverless cache snapshot. Available for Valkey, Redis OSS and Serverless
     * Memcached only.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline ServerlessCacheSnapshot& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline ServerlessCacheSnapshot& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline ServerlessCacheSnapshot& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of snapshot of serverless cache. Available for Valkey, Redis OSS and
     * Serverless Memcached only.</p>
     */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::move(value); }
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }
    inline ServerlessCacheSnapshot& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}
    inline ServerlessCacheSnapshot& WithSnapshotType(Aws::String&& value) { SetSnapshotType(std::move(value)); return *this;}
    inline ServerlessCacheSnapshot& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the serverless cache. Available for Valkey, Redis OSS
     * and Serverless Memcached only.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline ServerlessCacheSnapshot& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline ServerlessCacheSnapshot& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline ServerlessCacheSnapshot& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the source serverless cache's metadata and cache data
     * set was obtained for the snapshot. Available for Valkey, Redis OSS and
     * Serverless Memcached only.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline ServerlessCacheSnapshot& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline ServerlessCacheSnapshot& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the serverless cache snapshot will expire. Available for
     * Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiryTime() const{ return m_expiryTime; }
    inline bool ExpiryTimeHasBeenSet() const { return m_expiryTimeHasBeenSet; }
    inline void SetExpiryTime(const Aws::Utils::DateTime& value) { m_expiryTimeHasBeenSet = true; m_expiryTime = value; }
    inline void SetExpiryTime(Aws::Utils::DateTime&& value) { m_expiryTimeHasBeenSet = true; m_expiryTime = std::move(value); }
    inline ServerlessCacheSnapshot& WithExpiryTime(const Aws::Utils::DateTime& value) { SetExpiryTime(value); return *this;}
    inline ServerlessCacheSnapshot& WithExpiryTime(Aws::Utils::DateTime&& value) { SetExpiryTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total size of a serverless cache snapshot, in bytes. Available for
     * Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::String& GetBytesUsedForCache() const{ return m_bytesUsedForCache; }
    inline bool BytesUsedForCacheHasBeenSet() const { return m_bytesUsedForCacheHasBeenSet; }
    inline void SetBytesUsedForCache(const Aws::String& value) { m_bytesUsedForCacheHasBeenSet = true; m_bytesUsedForCache = value; }
    inline void SetBytesUsedForCache(Aws::String&& value) { m_bytesUsedForCacheHasBeenSet = true; m_bytesUsedForCache = std::move(value); }
    inline void SetBytesUsedForCache(const char* value) { m_bytesUsedForCacheHasBeenSet = true; m_bytesUsedForCache.assign(value); }
    inline ServerlessCacheSnapshot& WithBytesUsedForCache(const Aws::String& value) { SetBytesUsedForCache(value); return *this;}
    inline ServerlessCacheSnapshot& WithBytesUsedForCache(Aws::String&& value) { SetBytesUsedForCache(std::move(value)); return *this;}
    inline ServerlessCacheSnapshot& WithBytesUsedForCache(const char* value) { SetBytesUsedForCache(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the serverless cache, at the time the snapshot was
     * taken. Available for Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const ServerlessCacheConfiguration& GetServerlessCacheConfiguration() const{ return m_serverlessCacheConfiguration; }
    inline bool ServerlessCacheConfigurationHasBeenSet() const { return m_serverlessCacheConfigurationHasBeenSet; }
    inline void SetServerlessCacheConfiguration(const ServerlessCacheConfiguration& value) { m_serverlessCacheConfigurationHasBeenSet = true; m_serverlessCacheConfiguration = value; }
    inline void SetServerlessCacheConfiguration(ServerlessCacheConfiguration&& value) { m_serverlessCacheConfigurationHasBeenSet = true; m_serverlessCacheConfiguration = std::move(value); }
    inline ServerlessCacheSnapshot& WithServerlessCacheConfiguration(const ServerlessCacheConfiguration& value) { SetServerlessCacheConfiguration(value); return *this;}
    inline ServerlessCacheSnapshot& WithServerlessCacheConfiguration(ServerlessCacheConfiguration&& value) { SetServerlessCacheConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_serverlessCacheSnapshotName;
    bool m_serverlessCacheSnapshotNameHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_snapshotType;
    bool m_snapshotTypeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_expiryTime;
    bool m_expiryTimeHasBeenSet = false;

    Aws::String m_bytesUsedForCache;
    bool m_bytesUsedForCacheHasBeenSet = false;

    ServerlessCacheConfiguration m_serverlessCacheConfiguration;
    bool m_serverlessCacheConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
