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
    AWS_ELASTICACHE_API ServerlessCache();
    AWS_ELASTICACHE_API ServerlessCache(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API ServerlessCache& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The unique identifier of the serverless cache.</p>
     */
    inline const Aws::String& GetServerlessCacheName() const{ return m_serverlessCacheName; }

    /**
     * <p>The unique identifier of the serverless cache.</p>
     */
    inline bool ServerlessCacheNameHasBeenSet() const { return m_serverlessCacheNameHasBeenSet; }

    /**
     * <p>The unique identifier of the serverless cache.</p>
     */
    inline void SetServerlessCacheName(const Aws::String& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = value; }

    /**
     * <p>The unique identifier of the serverless cache.</p>
     */
    inline void SetServerlessCacheName(Aws::String&& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = std::move(value); }

    /**
     * <p>The unique identifier of the serverless cache.</p>
     */
    inline void SetServerlessCacheName(const char* value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName.assign(value); }

    /**
     * <p>The unique identifier of the serverless cache.</p>
     */
    inline ServerlessCache& WithServerlessCacheName(const Aws::String& value) { SetServerlessCacheName(value); return *this;}

    /**
     * <p>The unique identifier of the serverless cache.</p>
     */
    inline ServerlessCache& WithServerlessCacheName(Aws::String&& value) { SetServerlessCacheName(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the serverless cache.</p>
     */
    inline ServerlessCache& WithServerlessCacheName(const char* value) { SetServerlessCacheName(value); return *this;}


    /**
     * <p>A description of the serverless cache.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the serverless cache.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the serverless cache.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the serverless cache.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the serverless cache.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the serverless cache.</p>
     */
    inline ServerlessCache& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the serverless cache.</p>
     */
    inline ServerlessCache& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the serverless cache.</p>
     */
    inline ServerlessCache& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>When the serverless cache was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>When the serverless cache was created. </p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>When the serverless cache was created. </p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>When the serverless cache was created. </p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>When the serverless cache was created. </p>
     */
    inline ServerlessCache& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>When the serverless cache was created. </p>
     */
    inline ServerlessCache& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The current status of the serverless cache. The allowed values are CREATING,
     * AVAILABLE, DELETING, CREATE-FAILED and MODIFYING.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the serverless cache. The allowed values are CREATING,
     * AVAILABLE, DELETING, CREATE-FAILED and MODIFYING.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the serverless cache. The allowed values are CREATING,
     * AVAILABLE, DELETING, CREATE-FAILED and MODIFYING.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the serverless cache. The allowed values are CREATING,
     * AVAILABLE, DELETING, CREATE-FAILED and MODIFYING.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the serverless cache. The allowed values are CREATING,
     * AVAILABLE, DELETING, CREATE-FAILED and MODIFYING.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The current status of the serverless cache. The allowed values are CREATING,
     * AVAILABLE, DELETING, CREATE-FAILED and MODIFYING.</p>
     */
    inline ServerlessCache& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the serverless cache. The allowed values are CREATING,
     * AVAILABLE, DELETING, CREATE-FAILED and MODIFYING.</p>
     */
    inline ServerlessCache& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the serverless cache. The allowed values are CREATING,
     * AVAILABLE, DELETING, CREATE-FAILED and MODIFYING.</p>
     */
    inline ServerlessCache& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The engine the serverless cache is compatible with.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The engine the serverless cache is compatible with.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The engine the serverless cache is compatible with.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The engine the serverless cache is compatible with.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The engine the serverless cache is compatible with.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The engine the serverless cache is compatible with.</p>
     */
    inline ServerlessCache& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The engine the serverless cache is compatible with.</p>
     */
    inline ServerlessCache& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The engine the serverless cache is compatible with.</p>
     */
    inline ServerlessCache& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The version number of the engine the serverless cache is compatible with.</p>
     */
    inline const Aws::String& GetMajorEngineVersion() const{ return m_majorEngineVersion; }

    /**
     * <p>The version number of the engine the serverless cache is compatible with.</p>
     */
    inline bool MajorEngineVersionHasBeenSet() const { return m_majorEngineVersionHasBeenSet; }

    /**
     * <p>The version number of the engine the serverless cache is compatible with.</p>
     */
    inline void SetMajorEngineVersion(const Aws::String& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = value; }

    /**
     * <p>The version number of the engine the serverless cache is compatible with.</p>
     */
    inline void SetMajorEngineVersion(Aws::String&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = std::move(value); }

    /**
     * <p>The version number of the engine the serverless cache is compatible with.</p>
     */
    inline void SetMajorEngineVersion(const char* value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion.assign(value); }

    /**
     * <p>The version number of the engine the serverless cache is compatible with.</p>
     */
    inline ServerlessCache& WithMajorEngineVersion(const Aws::String& value) { SetMajorEngineVersion(value); return *this;}

    /**
     * <p>The version number of the engine the serverless cache is compatible with.</p>
     */
    inline ServerlessCache& WithMajorEngineVersion(Aws::String&& value) { SetMajorEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the engine the serverless cache is compatible with.</p>
     */
    inline ServerlessCache& WithMajorEngineVersion(const char* value) { SetMajorEngineVersion(value); return *this;}


    /**
     * <p>The name and version number of the engine the serverless cache is compatible
     * with.</p>
     */
    inline const Aws::String& GetFullEngineVersion() const{ return m_fullEngineVersion; }

    /**
     * <p>The name and version number of the engine the serverless cache is compatible
     * with.</p>
     */
    inline bool FullEngineVersionHasBeenSet() const { return m_fullEngineVersionHasBeenSet; }

    /**
     * <p>The name and version number of the engine the serverless cache is compatible
     * with.</p>
     */
    inline void SetFullEngineVersion(const Aws::String& value) { m_fullEngineVersionHasBeenSet = true; m_fullEngineVersion = value; }

    /**
     * <p>The name and version number of the engine the serverless cache is compatible
     * with.</p>
     */
    inline void SetFullEngineVersion(Aws::String&& value) { m_fullEngineVersionHasBeenSet = true; m_fullEngineVersion = std::move(value); }

    /**
     * <p>The name and version number of the engine the serverless cache is compatible
     * with.</p>
     */
    inline void SetFullEngineVersion(const char* value) { m_fullEngineVersionHasBeenSet = true; m_fullEngineVersion.assign(value); }

    /**
     * <p>The name and version number of the engine the serverless cache is compatible
     * with.</p>
     */
    inline ServerlessCache& WithFullEngineVersion(const Aws::String& value) { SetFullEngineVersion(value); return *this;}

    /**
     * <p>The name and version number of the engine the serverless cache is compatible
     * with.</p>
     */
    inline ServerlessCache& WithFullEngineVersion(Aws::String&& value) { SetFullEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The name and version number of the engine the serverless cache is compatible
     * with.</p>
     */
    inline ServerlessCache& WithFullEngineVersion(const char* value) { SetFullEngineVersion(value); return *this;}


    /**
     * <p>The cache usage limit for the serverless cache.</p>
     */
    inline const CacheUsageLimits& GetCacheUsageLimits() const{ return m_cacheUsageLimits; }

    /**
     * <p>The cache usage limit for the serverless cache.</p>
     */
    inline bool CacheUsageLimitsHasBeenSet() const { return m_cacheUsageLimitsHasBeenSet; }

    /**
     * <p>The cache usage limit for the serverless cache.</p>
     */
    inline void SetCacheUsageLimits(const CacheUsageLimits& value) { m_cacheUsageLimitsHasBeenSet = true; m_cacheUsageLimits = value; }

    /**
     * <p>The cache usage limit for the serverless cache.</p>
     */
    inline void SetCacheUsageLimits(CacheUsageLimits&& value) { m_cacheUsageLimitsHasBeenSet = true; m_cacheUsageLimits = std::move(value); }

    /**
     * <p>The cache usage limit for the serverless cache.</p>
     */
    inline ServerlessCache& WithCacheUsageLimits(const CacheUsageLimits& value) { SetCacheUsageLimits(value); return *this;}

    /**
     * <p>The cache usage limit for the serverless cache.</p>
     */
    inline ServerlessCache& WithCacheUsageLimits(CacheUsageLimits&& value) { SetCacheUsageLimits(std::move(value)); return *this;}


    /**
     * <p>The ID of the Amazon Web Services Key Management Service (KMS) key that is
     * used to encrypt data at rest in the serverless cache.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (KMS) key that is
     * used to encrypt data at rest in the serverless cache.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (KMS) key that is
     * used to encrypt data at rest in the serverless cache.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (KMS) key that is
     * used to encrypt data at rest in the serverless cache.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (KMS) key that is
     * used to encrypt data at rest in the serverless cache.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (KMS) key that is
     * used to encrypt data at rest in the serverless cache.</p>
     */
    inline ServerlessCache& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (KMS) key that is
     * used to encrypt data at rest in the serverless cache.</p>
     */
    inline ServerlessCache& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Key Management Service (KMS) key that is
     * used to encrypt data at rest in the serverless cache.</p>
     */
    inline ServerlessCache& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The IDs of the EC2 security groups associated with the serverless cache.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The IDs of the EC2 security groups associated with the serverless cache.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The IDs of the EC2 security groups associated with the serverless cache.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The IDs of the EC2 security groups associated with the serverless cache.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The IDs of the EC2 security groups associated with the serverless cache.</p>
     */
    inline ServerlessCache& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The IDs of the EC2 security groups associated with the serverless cache.</p>
     */
    inline ServerlessCache& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the EC2 security groups associated with the serverless cache.</p>
     */
    inline ServerlessCache& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the EC2 security groups associated with the serverless cache.</p>
     */
    inline ServerlessCache& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the EC2 security groups associated with the serverless cache.</p>
     */
    inline ServerlessCache& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }

    
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    
    inline void SetEndpoint(const Endpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    
    inline void SetEndpoint(Endpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    
    inline ServerlessCache& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}

    
    inline ServerlessCache& WithEndpoint(Endpoint&& value) { SetEndpoint(std::move(value)); return *this;}


    
    inline const Endpoint& GetReaderEndpoint() const{ return m_readerEndpoint; }

    
    inline bool ReaderEndpointHasBeenSet() const { return m_readerEndpointHasBeenSet; }

    
    inline void SetReaderEndpoint(const Endpoint& value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint = value; }

    
    inline void SetReaderEndpoint(Endpoint&& value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint = std::move(value); }

    
    inline ServerlessCache& WithReaderEndpoint(const Endpoint& value) { SetReaderEndpoint(value); return *this;}

    
    inline ServerlessCache& WithReaderEndpoint(Endpoint&& value) { SetReaderEndpoint(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the serverless cache.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the serverless cache.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the serverless cache.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the serverless cache.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the serverless cache.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the serverless cache.</p>
     */
    inline ServerlessCache& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the serverless cache.</p>
     */
    inline ServerlessCache& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the serverless cache.</p>
     */
    inline ServerlessCache& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The identifier of the user group associated with the serverless cache.
     * Available for Redis only. Default is NULL.</p>
     */
    inline const Aws::String& GetUserGroupId() const{ return m_userGroupId; }

    /**
     * <p>The identifier of the user group associated with the serverless cache.
     * Available for Redis only. Default is NULL.</p>
     */
    inline bool UserGroupIdHasBeenSet() const { return m_userGroupIdHasBeenSet; }

    /**
     * <p>The identifier of the user group associated with the serverless cache.
     * Available for Redis only. Default is NULL.</p>
     */
    inline void SetUserGroupId(const Aws::String& value) { m_userGroupIdHasBeenSet = true; m_userGroupId = value; }

    /**
     * <p>The identifier of the user group associated with the serverless cache.
     * Available for Redis only. Default is NULL.</p>
     */
    inline void SetUserGroupId(Aws::String&& value) { m_userGroupIdHasBeenSet = true; m_userGroupId = std::move(value); }

    /**
     * <p>The identifier of the user group associated with the serverless cache.
     * Available for Redis only. Default is NULL.</p>
     */
    inline void SetUserGroupId(const char* value) { m_userGroupIdHasBeenSet = true; m_userGroupId.assign(value); }

    /**
     * <p>The identifier of the user group associated with the serverless cache.
     * Available for Redis only. Default is NULL.</p>
     */
    inline ServerlessCache& WithUserGroupId(const Aws::String& value) { SetUserGroupId(value); return *this;}

    /**
     * <p>The identifier of the user group associated with the serverless cache.
     * Available for Redis only. Default is NULL.</p>
     */
    inline ServerlessCache& WithUserGroupId(Aws::String&& value) { SetUserGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user group associated with the serverless cache.
     * Available for Redis only. Default is NULL.</p>
     */
    inline ServerlessCache& WithUserGroupId(const char* value) { SetUserGroupId(value); return *this;}


    /**
     * <p>If no subnet IDs are given and your VPC is in us-west-1, then ElastiCache
     * will select 2 default subnets across AZs in your VPC. For all other Regions, if
     * no subnet IDs are given then ElastiCache will select 3 default subnets across
     * AZs in your default VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>If no subnet IDs are given and your VPC is in us-west-1, then ElastiCache
     * will select 2 default subnets across AZs in your VPC. For all other Regions, if
     * no subnet IDs are given then ElastiCache will select 3 default subnets across
     * AZs in your default VPC.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>If no subnet IDs are given and your VPC is in us-west-1, then ElastiCache
     * will select 2 default subnets across AZs in your VPC. For all other Regions, if
     * no subnet IDs are given then ElastiCache will select 3 default subnets across
     * AZs in your default VPC.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>If no subnet IDs are given and your VPC is in us-west-1, then ElastiCache
     * will select 2 default subnets across AZs in your VPC. For all other Regions, if
     * no subnet IDs are given then ElastiCache will select 3 default subnets across
     * AZs in your default VPC.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>If no subnet IDs are given and your VPC is in us-west-1, then ElastiCache
     * will select 2 default subnets across AZs in your VPC. For all other Regions, if
     * no subnet IDs are given then ElastiCache will select 3 default subnets across
     * AZs in your default VPC.</p>
     */
    inline ServerlessCache& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>If no subnet IDs are given and your VPC is in us-west-1, then ElastiCache
     * will select 2 default subnets across AZs in your VPC. For all other Regions, if
     * no subnet IDs are given then ElastiCache will select 3 default subnets across
     * AZs in your default VPC.</p>
     */
    inline ServerlessCache& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>If no subnet IDs are given and your VPC is in us-west-1, then ElastiCache
     * will select 2 default subnets across AZs in your VPC. For all other Regions, if
     * no subnet IDs are given then ElastiCache will select 3 default subnets across
     * AZs in your default VPC.</p>
     */
    inline ServerlessCache& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>If no subnet IDs are given and your VPC is in us-west-1, then ElastiCache
     * will select 2 default subnets across AZs in your VPC. For all other Regions, if
     * no subnet IDs are given then ElastiCache will select 3 default subnets across
     * AZs in your default VPC.</p>
     */
    inline ServerlessCache& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>If no subnet IDs are given and your VPC is in us-west-1, then ElastiCache
     * will select 2 default subnets across AZs in your VPC. For all other Regions, if
     * no subnet IDs are given then ElastiCache will select 3 default subnets across
     * AZs in your default VPC.</p>
     */
    inline ServerlessCache& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The current setting for the number of serverless cache snapshots the system
     * will retain. Available for Redis only.</p>
     */
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }

    /**
     * <p>The current setting for the number of serverless cache snapshots the system
     * will retain. Available for Redis only.</p>
     */
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }

    /**
     * <p>The current setting for the number of serverless cache snapshots the system
     * will retain. Available for Redis only.</p>
     */
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }

    /**
     * <p>The current setting for the number of serverless cache snapshots the system
     * will retain. Available for Redis only.</p>
     */
    inline ServerlessCache& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}


    /**
     * <p>The daily time that a cache snapshot will be created. Default is NULL, i.e.
     * snapshots will not be created at a specific time on a daily basis. Available for
     * Redis only.</p>
     */
    inline const Aws::String& GetDailySnapshotTime() const{ return m_dailySnapshotTime; }

    /**
     * <p>The daily time that a cache snapshot will be created. Default is NULL, i.e.
     * snapshots will not be created at a specific time on a daily basis. Available for
     * Redis only.</p>
     */
    inline bool DailySnapshotTimeHasBeenSet() const { return m_dailySnapshotTimeHasBeenSet; }

    /**
     * <p>The daily time that a cache snapshot will be created. Default is NULL, i.e.
     * snapshots will not be created at a specific time on a daily basis. Available for
     * Redis only.</p>
     */
    inline void SetDailySnapshotTime(const Aws::String& value) { m_dailySnapshotTimeHasBeenSet = true; m_dailySnapshotTime = value; }

    /**
     * <p>The daily time that a cache snapshot will be created. Default is NULL, i.e.
     * snapshots will not be created at a specific time on a daily basis. Available for
     * Redis only.</p>
     */
    inline void SetDailySnapshotTime(Aws::String&& value) { m_dailySnapshotTimeHasBeenSet = true; m_dailySnapshotTime = std::move(value); }

    /**
     * <p>The daily time that a cache snapshot will be created. Default is NULL, i.e.
     * snapshots will not be created at a specific time on a daily basis. Available for
     * Redis only.</p>
     */
    inline void SetDailySnapshotTime(const char* value) { m_dailySnapshotTimeHasBeenSet = true; m_dailySnapshotTime.assign(value); }

    /**
     * <p>The daily time that a cache snapshot will be created. Default is NULL, i.e.
     * snapshots will not be created at a specific time on a daily basis. Available for
     * Redis only.</p>
     */
    inline ServerlessCache& WithDailySnapshotTime(const Aws::String& value) { SetDailySnapshotTime(value); return *this;}

    /**
     * <p>The daily time that a cache snapshot will be created. Default is NULL, i.e.
     * snapshots will not be created at a specific time on a daily basis. Available for
     * Redis only.</p>
     */
    inline ServerlessCache& WithDailySnapshotTime(Aws::String&& value) { SetDailySnapshotTime(std::move(value)); return *this;}

    /**
     * <p>The daily time that a cache snapshot will be created. Default is NULL, i.e.
     * snapshots will not be created at a specific time on a daily basis. Available for
     * Redis only.</p>
     */
    inline ServerlessCache& WithDailySnapshotTime(const char* value) { SetDailySnapshotTime(value); return *this;}

  private:

    Aws::String m_serverlessCacheName;
    bool m_serverlessCacheNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
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

    int m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_dailySnapshotTime;
    bool m_dailySnapshotTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
