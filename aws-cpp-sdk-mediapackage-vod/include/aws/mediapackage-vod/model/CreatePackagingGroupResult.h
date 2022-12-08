/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage-vod/model/Authorization.h>
#include <aws/mediapackage-vod/model/EgressAccessLogs.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaPackageVod
{
namespace Model
{
  class CreatePackagingGroupResult
  {
  public:
    AWS_MEDIAPACKAGEVOD_API CreatePackagingGroupResult();
    AWS_MEDIAPACKAGEVOD_API CreatePackagingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEVOD_API CreatePackagingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the PackagingGroup.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The ARN of the PackagingGroup.
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * The ARN of the PackagingGroup.
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * The ARN of the PackagingGroup.
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * The ARN of the PackagingGroup.
     */
    inline CreatePackagingGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The ARN of the PackagingGroup.
     */
    inline CreatePackagingGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The ARN of the PackagingGroup.
     */
    inline CreatePackagingGroupResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Authorization& GetAuthorization() const{ return m_authorization; }

    
    inline void SetAuthorization(const Authorization& value) { m_authorization = value; }

    
    inline void SetAuthorization(Authorization&& value) { m_authorization = std::move(value); }

    
    inline CreatePackagingGroupResult& WithAuthorization(const Authorization& value) { SetAuthorization(value); return *this;}

    
    inline CreatePackagingGroupResult& WithAuthorization(Authorization&& value) { SetAuthorization(std::move(value)); return *this;}


    /**
     * The fully qualified domain name for Assets in the PackagingGroup.
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * The fully qualified domain name for Assets in the PackagingGroup.
     */
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }

    /**
     * The fully qualified domain name for Assets in the PackagingGroup.
     */
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }

    /**
     * The fully qualified domain name for Assets in the PackagingGroup.
     */
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }

    /**
     * The fully qualified domain name for Assets in the PackagingGroup.
     */
    inline CreatePackagingGroupResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * The fully qualified domain name for Assets in the PackagingGroup.
     */
    inline CreatePackagingGroupResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * The fully qualified domain name for Assets in the PackagingGroup.
     */
    inline CreatePackagingGroupResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    
    inline const EgressAccessLogs& GetEgressAccessLogs() const{ return m_egressAccessLogs; }

    
    inline void SetEgressAccessLogs(const EgressAccessLogs& value) { m_egressAccessLogs = value; }

    
    inline void SetEgressAccessLogs(EgressAccessLogs&& value) { m_egressAccessLogs = std::move(value); }

    
    inline CreatePackagingGroupResult& WithEgressAccessLogs(const EgressAccessLogs& value) { SetEgressAccessLogs(value); return *this;}

    
    inline CreatePackagingGroupResult& WithEgressAccessLogs(EgressAccessLogs&& value) { SetEgressAccessLogs(std::move(value)); return *this;}


    /**
     * The ID of the PackagingGroup.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the PackagingGroup.
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * The ID of the PackagingGroup.
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * The ID of the PackagingGroup.
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * The ID of the PackagingGroup.
     */
    inline CreatePackagingGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the PackagingGroup.
     */
    inline CreatePackagingGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the PackagingGroup.
     */
    inline CreatePackagingGroupResult& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    
    inline CreatePackagingGroupResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline CreatePackagingGroupResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreatePackagingGroupResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    
    inline CreatePackagingGroupResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreatePackagingGroupResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreatePackagingGroupResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline CreatePackagingGroupResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreatePackagingGroupResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreatePackagingGroupResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Authorization m_authorization;

    Aws::String m_domainName;

    EgressAccessLogs m_egressAccessLogs;

    Aws::String m_id;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
