/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/worklink/model/FleetStatus.h>
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
namespace WorkLink
{
namespace Model
{
  class AWS_WORKLINK_API DescribeFleetMetadataResult
  {
  public:
    DescribeFleetMetadataResult();
    DescribeFleetMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeFleetMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The time that the fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time that the fleet was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>The time that the fleet was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>The time that the fleet was created.</p>
     */
    inline DescribeFleetMetadataResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time that the fleet was created.</p>
     */
    inline DescribeFleetMetadataResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The time that the fleet was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time that the fleet was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>The time that the fleet was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time that the fleet was last updated.</p>
     */
    inline DescribeFleetMetadataResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time that the fleet was last updated.</p>
     */
    inline DescribeFleetMetadataResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetFleetName() const{ return m_fleetName; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetFleetName(const Aws::String& value) { m_fleetName = value; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetFleetName(Aws::String&& value) { m_fleetName = std::move(value); }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetFleetName(const char* value) { m_fleetName.assign(value); }

    /**
     * <p>The name of the fleet.</p>
     */
    inline DescribeFleetMetadataResult& WithFleetName(const Aws::String& value) { SetFleetName(value); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline DescribeFleetMetadataResult& WithFleetName(Aws::String&& value) { SetFleetName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline DescribeFleetMetadataResult& WithFleetName(const char* value) { SetFleetName(value); return *this;}


    /**
     * <p>The name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name to display.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The name to display.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The name to display.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The name to display.</p>
     */
    inline DescribeFleetMetadataResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name to display.</p>
     */
    inline DescribeFleetMetadataResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name to display.</p>
     */
    inline DescribeFleetMetadataResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The option to optimize for better performance by routing traffic through the
     * closest AWS Region to users, which may be outside of your home Region.</p>
     */
    inline bool GetOptimizeForEndUserLocation() const{ return m_optimizeForEndUserLocation; }

    /**
     * <p>The option to optimize for better performance by routing traffic through the
     * closest AWS Region to users, which may be outside of your home Region.</p>
     */
    inline void SetOptimizeForEndUserLocation(bool value) { m_optimizeForEndUserLocation = value; }

    /**
     * <p>The option to optimize for better performance by routing traffic through the
     * closest AWS Region to users, which may be outside of your home Region.</p>
     */
    inline DescribeFleetMetadataResult& WithOptimizeForEndUserLocation(bool value) { SetOptimizeForEndUserLocation(value); return *this;}


    /**
     * <p>The identifier used by users to sign in to the Amazon WorkLink app.</p>
     */
    inline const Aws::String& GetCompanyCode() const{ return m_companyCode; }

    /**
     * <p>The identifier used by users to sign in to the Amazon WorkLink app.</p>
     */
    inline void SetCompanyCode(const Aws::String& value) { m_companyCode = value; }

    /**
     * <p>The identifier used by users to sign in to the Amazon WorkLink app.</p>
     */
    inline void SetCompanyCode(Aws::String&& value) { m_companyCode = std::move(value); }

    /**
     * <p>The identifier used by users to sign in to the Amazon WorkLink app.</p>
     */
    inline void SetCompanyCode(const char* value) { m_companyCode.assign(value); }

    /**
     * <p>The identifier used by users to sign in to the Amazon WorkLink app.</p>
     */
    inline DescribeFleetMetadataResult& WithCompanyCode(const Aws::String& value) { SetCompanyCode(value); return *this;}

    /**
     * <p>The identifier used by users to sign in to the Amazon WorkLink app.</p>
     */
    inline DescribeFleetMetadataResult& WithCompanyCode(Aws::String&& value) { SetCompanyCode(std::move(value)); return *this;}

    /**
     * <p>The identifier used by users to sign in to the Amazon WorkLink app.</p>
     */
    inline DescribeFleetMetadataResult& WithCompanyCode(const char* value) { SetCompanyCode(value); return *this;}


    /**
     * <p>The current state of the fleet.</p>
     */
    inline const FleetStatus& GetFleetStatus() const{ return m_fleetStatus; }

    /**
     * <p>The current state of the fleet.</p>
     */
    inline void SetFleetStatus(const FleetStatus& value) { m_fleetStatus = value; }

    /**
     * <p>The current state of the fleet.</p>
     */
    inline void SetFleetStatus(FleetStatus&& value) { m_fleetStatus = std::move(value); }

    /**
     * <p>The current state of the fleet.</p>
     */
    inline DescribeFleetMetadataResult& WithFleetStatus(const FleetStatus& value) { SetFleetStatus(value); return *this;}

    /**
     * <p>The current state of the fleet.</p>
     */
    inline DescribeFleetMetadataResult& WithFleetStatus(FleetStatus&& value) { SetFleetStatus(std::move(value)); return *this;}


    /**
     * <p>The tags attached to the resource. A tag is a key-value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags attached to the resource. A tag is a key-value pair.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags attached to the resource. A tag is a key-value pair.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags attached to the resource. A tag is a key-value pair.</p>
     */
    inline DescribeFleetMetadataResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags attached to the resource. A tag is a key-value pair.</p>
     */
    inline DescribeFleetMetadataResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags attached to the resource. A tag is a key-value pair.</p>
     */
    inline DescribeFleetMetadataResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags attached to the resource. A tag is a key-value pair.</p>
     */
    inline DescribeFleetMetadataResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the resource. A tag is a key-value pair.</p>
     */
    inline DescribeFleetMetadataResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the resource. A tag is a key-value pair.</p>
     */
    inline DescribeFleetMetadataResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags attached to the resource. A tag is a key-value pair.</p>
     */
    inline DescribeFleetMetadataResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the resource. A tag is a key-value pair.</p>
     */
    inline DescribeFleetMetadataResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the resource. A tag is a key-value pair.</p>
     */
    inline DescribeFleetMetadataResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::Utils::DateTime m_createdTime;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_fleetName;

    Aws::String m_displayName;

    bool m_optimizeForEndUserLocation;

    Aws::String m_companyCode;

    FleetStatus m_fleetStatus;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
