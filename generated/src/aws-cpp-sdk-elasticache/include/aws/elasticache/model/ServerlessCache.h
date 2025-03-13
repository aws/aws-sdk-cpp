/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticache/model/CacheUsageLimits.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/Endpoint.h>
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
   * <p>The resource representing a serverless cache.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ServerlessCache">AWS
   * API Reference</a></p>
   */
  class ServerlessCache
  {
  public:
    AWS_ELASTICACHE_API ServerlessCache() = default;
    AWS_ELASTICACHE_API ServerlessCache(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API ServerlessCache& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier of the serverless cache.</p>
     */
    inline const Aws::String& GetServerlessCacheName() const { return m_serverlessCacheName; }
    inline bool ServerlessCacheNameHasBeenSet() const { return m_serverlessCacheNameHasBeenSet; }
    template<typename ServerlessCacheNameT = Aws::String>
    void SetServerlessCacheName(ServerlessCacheNameT&& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = std::forward<ServerlessCacheNameT>(value); }
    template<typename ServerlessCacheNameT = Aws::String>
    ServerlessCache& WithServerlessCacheName(ServerlessCacheNameT&& value) { SetServerlessCacheName(std::forward<ServerlessCacheNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the serverless cache.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ServerlessCache& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the serverless cache was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    ServerlessCache& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the serverless cache. The allowed values are CREATING,
     * AVAILABLE, DELETING, CREATE-FAILED and MODIFYING.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ServerlessCache& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine the serverless cache is compatible with.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    ServerlessCache& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the engine the serverless cache is compatible with.</p>
     */
    inline const Aws::String& GetMajorEngineVersion() const { return m_majorEngineVersion; }
    inline bool MajorEngineVersionHasBeenSet() const { return m_majorEngineVersionHasBeenSet; }
    template<typename MajorEngineVersionT = Aws::String>
    void SetMajorEngineVersion(MajorEngineVersionT&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = std::forward<MajorEngineVersionT>(value); }
    template<typename MajorEngineVersionT = Aws::String>
    ServerlessCache& WithMajorEngineVersion(MajorEngineVersionT&& value) { SetMajorEngineVersion(std::forward<MajorEngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name and version number of the engine the serverless cache is compatible
     * with.</p>
     */
    inline const Aws::String& GetFullEngineVersion() const { return m_fullEngineVersion; }
    inline bool FullEngineVersionHasBeenSet() const { return m_fullEngineVersionHasBeenSet; }
    template<typename FullEngineVersionT = Aws::String>
    void SetFullEngineVersion(FullEngineVersionT&& value) { m_fullEngineVersionHasBeenSet = true; m_fullEngineVersion = std::forward<FullEngineVersionT>(value); }
    template<typename FullEngineVersionT = Aws::String>
    ServerlessCache& WithFullEngineVersion(FullEngineVersionT&& value) { SetFullEngineVersion(std::forward<FullEngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache usage limit for the serverless cache.</p>
     */
    inline const CacheUsageLimits& GetCacheUsageLimits() const { return m_cacheUsageLimits; }
    inline bool CacheUsageLimitsHasBeenSet() const { return m_cacheUsageLimitsHasBeenSet; }
    template<typename CacheUsageLimitsT = CacheUsageLimits>
    void SetCacheUsageLimits(CacheUsageLimitsT&& value) { m_cacheUsageLimitsHasBeenSet = true; m_cacheUsageLimits = std::forward<CacheUsageLimitsT>(value); }
    template<typename CacheUsageLimitsT = CacheUsageLimits>
    ServerlessCache& WithCacheUsageLimits(CacheUsageLimitsT&& value) { SetCacheUsageLimits(std::forward<CacheUsageLimitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services Key Management Service (KMS) key that is
     * used to encrypt data at rest in the serverless cache.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ServerlessCache& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the EC2 security groups associated with the serverless cache.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    ServerlessCache& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    ServerlessCache& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Endpoint& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Endpoint>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Endpoint>
    ServerlessCache& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Endpoint& GetReaderEndpoint() const { return m_readerEndpoint; }
    inline bool ReaderEndpointHasBeenSet() const { return m_readerEndpointHasBeenSet; }
    template<typename ReaderEndpointT = Endpoint>
    void SetReaderEndpoint(ReaderEndpointT&& value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint = std::forward<ReaderEndpointT>(value); }
    template<typename ReaderEndpointT = Endpoint>
    ServerlessCache& WithReaderEndpoint(ReaderEndpointT&& value) { SetReaderEndpoint(std::forward<ReaderEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the serverless cache.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    ServerlessCache& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user group associated with the serverless cache.
     * Available for Valkey and Redis OSS only. Default is NULL.</p>
     */
    inline const Aws::String& GetUserGroupId() const { return m_userGroupId; }
    inline bool UserGroupIdHasBeenSet() const { return m_userGroupIdHasBeenSet; }
    template<typename UserGroupIdT = Aws::String>
    void SetUserGroupId(UserGroupIdT&& value) { m_userGroupIdHasBeenSet = true; m_userGroupId = std::forward<UserGroupIdT>(value); }
    template<typename UserGroupIdT = Aws::String>
    ServerlessCache& WithUserGroupId(UserGroupIdT&& value) { SetUserGroupId(std::forward<UserGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If no subnet IDs are given and your VPC is in us-west-1, then ElastiCache
     * will select 2 default subnets across AZs in your VPC. For all other Regions, if
     * no subnet IDs are given then ElastiCache will select 3 default subnets across
     * AZs in your default VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    ServerlessCache& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    ServerlessCache& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current setting for the number of serverless cache snapshots the system
     * will retain. Available for Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline int GetSnapshotRetentionLimit() const { return m_snapshotRetentionLimit; }
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }
    inline ServerlessCache& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time that a cache snapshot will be created. Default is NULL, i.e.
     * snapshots will not be created at a specific time on a daily basis. Available for
     * Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::String& GetDailySnapshotTime() const { return m_dailySnapshotTime; }
    inline bool DailySnapshotTimeHasBeenSet() const { return m_dailySnapshotTimeHasBeenSet; }
    template<typename DailySnapshotTimeT = Aws::String>
    void SetDailySnapshotTime(DailySnapshotTimeT&& value) { m_dailySnapshotTimeHasBeenSet = true; m_dailySnapshotTime = std::forward<DailySnapshotTimeT>(value); }
    template<typename DailySnapshotTimeT = Aws::String>
    ServerlessCache& WithDailySnapshotTime(DailySnapshotTimeT&& value) { SetDailySnapshotTime(std::forward<DailySnapshotTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serverlessCacheName;
    bool m_serverlessCacheNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_majorEngineVersion;
    bool m_majorEngineVersionHasBeenSet = false;

    Aws::String m_fullEngineVersion;
    bool m_fullEngineVersionHasBeenSet = false;

    CacheUsageLimits m_cacheUsageLimits;
    bool m_cacheUsageLimitsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Endpoint m_endpoint;
    bool m_endpointHasBeenSet = false;

    Endpoint m_readerEndpoint;
    bool m_readerEndpointHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_userGroupId;
    bool m_userGroupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    int m_snapshotRetentionLimit{0};
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_dailySnapshotTime;
    bool m_dailySnapshotTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
