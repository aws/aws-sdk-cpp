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
    AWS_ELASTICACHE_API ServerlessCacheSnapshot() = default;
    AWS_ELASTICACHE_API ServerlessCacheSnapshot(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API ServerlessCacheSnapshot& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier of a serverless cache snapshot. Available for Valkey, Redis
     * OSS and Serverless Memcached only.</p>
     */
    inline const Aws::String& GetServerlessCacheSnapshotName() const { return m_serverlessCacheSnapshotName; }
    inline bool ServerlessCacheSnapshotNameHasBeenSet() const { return m_serverlessCacheSnapshotNameHasBeenSet; }
    template<typename ServerlessCacheSnapshotNameT = Aws::String>
    void SetServerlessCacheSnapshotName(ServerlessCacheSnapshotNameT&& value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName = std::forward<ServerlessCacheSnapshotNameT>(value); }
    template<typename ServerlessCacheSnapshotNameT = Aws::String>
    ServerlessCacheSnapshot& WithServerlessCacheSnapshotName(ServerlessCacheSnapshotNameT&& value) { SetServerlessCacheSnapshotName(std::forward<ServerlessCacheSnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a serverless cache snapshot. Available for
     * Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    ServerlessCacheSnapshot& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services Key Management Service (KMS) key of a
     * serverless cache snapshot. Available for Valkey, Redis OSS and Serverless
     * Memcached only.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ServerlessCacheSnapshot& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of snapshot of serverless cache. Available for Valkey, Redis OSS and
     * Serverless Memcached only.</p>
     */
    inline const Aws::String& GetSnapshotType() const { return m_snapshotType; }
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }
    template<typename SnapshotTypeT = Aws::String>
    void SetSnapshotType(SnapshotTypeT&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::forward<SnapshotTypeT>(value); }
    template<typename SnapshotTypeT = Aws::String>
    ServerlessCacheSnapshot& WithSnapshotType(SnapshotTypeT&& value) { SetSnapshotType(std::forward<SnapshotTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the serverless cache. Available for Valkey, Redis OSS
     * and Serverless Memcached only.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ServerlessCacheSnapshot& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the source serverless cache's metadata and cache data
     * set was obtained for the snapshot. Available for Valkey, Redis OSS and
     * Serverless Memcached only.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    ServerlessCacheSnapshot& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the serverless cache snapshot will expire. Available for
     * Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiryTime() const { return m_expiryTime; }
    inline bool ExpiryTimeHasBeenSet() const { return m_expiryTimeHasBeenSet; }
    template<typename ExpiryTimeT = Aws::Utils::DateTime>
    void SetExpiryTime(ExpiryTimeT&& value) { m_expiryTimeHasBeenSet = true; m_expiryTime = std::forward<ExpiryTimeT>(value); }
    template<typename ExpiryTimeT = Aws::Utils::DateTime>
    ServerlessCacheSnapshot& WithExpiryTime(ExpiryTimeT&& value) { SetExpiryTime(std::forward<ExpiryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total size of a serverless cache snapshot, in bytes. Available for
     * Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::String& GetBytesUsedForCache() const { return m_bytesUsedForCache; }
    inline bool BytesUsedForCacheHasBeenSet() const { return m_bytesUsedForCacheHasBeenSet; }
    template<typename BytesUsedForCacheT = Aws::String>
    void SetBytesUsedForCache(BytesUsedForCacheT&& value) { m_bytesUsedForCacheHasBeenSet = true; m_bytesUsedForCache = std::forward<BytesUsedForCacheT>(value); }
    template<typename BytesUsedForCacheT = Aws::String>
    ServerlessCacheSnapshot& WithBytesUsedForCache(BytesUsedForCacheT&& value) { SetBytesUsedForCache(std::forward<BytesUsedForCacheT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the serverless cache, at the time the snapshot was
     * taken. Available for Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const ServerlessCacheConfiguration& GetServerlessCacheConfiguration() const { return m_serverlessCacheConfiguration; }
    inline bool ServerlessCacheConfigurationHasBeenSet() const { return m_serverlessCacheConfigurationHasBeenSet; }
    template<typename ServerlessCacheConfigurationT = ServerlessCacheConfiguration>
    void SetServerlessCacheConfiguration(ServerlessCacheConfigurationT&& value) { m_serverlessCacheConfigurationHasBeenSet = true; m_serverlessCacheConfiguration = std::forward<ServerlessCacheConfigurationT>(value); }
    template<typename ServerlessCacheConfigurationT = ServerlessCacheConfiguration>
    ServerlessCacheSnapshot& WithServerlessCacheConfiguration(ServerlessCacheConfigurationT&& value) { SetServerlessCacheConfiguration(std::forward<ServerlessCacheConfigurationT>(value)); return *this;}
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

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_expiryTime{};
    bool m_expiryTimeHasBeenSet = false;

    Aws::String m_bytesUsedForCache;
    bool m_bytesUsedForCacheHasBeenSet = false;

    ServerlessCacheConfiguration m_serverlessCacheConfiguration;
    bool m_serverlessCacheConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
