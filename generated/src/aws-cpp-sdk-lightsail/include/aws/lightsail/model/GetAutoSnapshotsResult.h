/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/AutoSnapshotDetails.h>
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
namespace Lightsail
{
namespace Model
{
  class GetAutoSnapshotsResult
  {
  public:
    AWS_LIGHTSAIL_API GetAutoSnapshotsResult();
    AWS_LIGHTSAIL_API GetAutoSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetAutoSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the source instance or disk for the automatic snapshots.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of the source instance or disk for the automatic snapshots.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceName = value; }

    /**
     * <p>The name of the source instance or disk for the automatic snapshots.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceName = std::move(value); }

    /**
     * <p>The name of the source instance or disk for the automatic snapshots.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceName.assign(value); }

    /**
     * <p>The name of the source instance or disk for the automatic snapshots.</p>
     */
    inline GetAutoSnapshotsResult& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of the source instance or disk for the automatic snapshots.</p>
     */
    inline GetAutoSnapshotsResult& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the source instance or disk for the automatic snapshots.</p>
     */
    inline GetAutoSnapshotsResult& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>The resource type (e.g., <code>Instance</code> or <code>Disk</code>).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type (e.g., <code>Instance</code> or <code>Disk</code>).</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceType = value; }

    /**
     * <p>The resource type (e.g., <code>Instance</code> or <code>Disk</code>).</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceType = std::move(value); }

    /**
     * <p>The resource type (e.g., <code>Instance</code> or <code>Disk</code>).</p>
     */
    inline GetAutoSnapshotsResult& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type (e.g., <code>Instance</code> or <code>Disk</code>).</p>
     */
    inline GetAutoSnapshotsResult& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>An array of objects that describe the automatic snapshots that are available
     * for the specified source instance or disk.</p>
     */
    inline const Aws::Vector<AutoSnapshotDetails>& GetAutoSnapshots() const{ return m_autoSnapshots; }

    /**
     * <p>An array of objects that describe the automatic snapshots that are available
     * for the specified source instance or disk.</p>
     */
    inline void SetAutoSnapshots(const Aws::Vector<AutoSnapshotDetails>& value) { m_autoSnapshots = value; }

    /**
     * <p>An array of objects that describe the automatic snapshots that are available
     * for the specified source instance or disk.</p>
     */
    inline void SetAutoSnapshots(Aws::Vector<AutoSnapshotDetails>&& value) { m_autoSnapshots = std::move(value); }

    /**
     * <p>An array of objects that describe the automatic snapshots that are available
     * for the specified source instance or disk.</p>
     */
    inline GetAutoSnapshotsResult& WithAutoSnapshots(const Aws::Vector<AutoSnapshotDetails>& value) { SetAutoSnapshots(value); return *this;}

    /**
     * <p>An array of objects that describe the automatic snapshots that are available
     * for the specified source instance or disk.</p>
     */
    inline GetAutoSnapshotsResult& WithAutoSnapshots(Aws::Vector<AutoSnapshotDetails>&& value) { SetAutoSnapshots(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the automatic snapshots that are available
     * for the specified source instance or disk.</p>
     */
    inline GetAutoSnapshotsResult& AddAutoSnapshots(const AutoSnapshotDetails& value) { m_autoSnapshots.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the automatic snapshots that are available
     * for the specified source instance or disk.</p>
     */
    inline GetAutoSnapshotsResult& AddAutoSnapshots(AutoSnapshotDetails&& value) { m_autoSnapshots.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceName;

    ResourceType m_resourceType;

    Aws::Vector<AutoSnapshotDetails> m_autoSnapshots;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
