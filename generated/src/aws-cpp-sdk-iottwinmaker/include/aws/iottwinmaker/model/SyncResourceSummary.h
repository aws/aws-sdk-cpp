/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/SyncResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/SyncResourceStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The sync resource summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/SyncResourceSummary">AWS
   * API Reference</a></p>
   */
  class SyncResourceSummary
  {
  public:
    AWS_IOTTWINMAKER_API SyncResourceSummary();
    AWS_IOTTWINMAKER_API SyncResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API SyncResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource type.</p>
     */
    inline const SyncResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(const SyncResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(SyncResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type.</p>
     */
    inline SyncResourceSummary& WithResourceType(const SyncResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline SyncResourceSummary& WithResourceType(SyncResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The external Id.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>The external Id.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>The external Id.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>The external Id.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>The external Id.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>The external Id.</p>
     */
    inline SyncResourceSummary& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The external Id.</p>
     */
    inline SyncResourceSummary& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The external Id.</p>
     */
    inline SyncResourceSummary& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * <p>The resource Id.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The resource Id.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The resource Id.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The resource Id.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The resource Id.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The resource Id.</p>
     */
    inline SyncResourceSummary& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource Id.</p>
     */
    inline SyncResourceSummary& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The resource Id.</p>
     */
    inline SyncResourceSummary& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The sync resource summary status.</p>
     */
    inline const SyncResourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The sync resource summary status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The sync resource summary status.</p>
     */
    inline void SetStatus(const SyncResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The sync resource summary status.</p>
     */
    inline void SetStatus(SyncResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The sync resource summary status.</p>
     */
    inline SyncResourceSummary& WithStatus(const SyncResourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The sync resource summary status.</p>
     */
    inline SyncResourceSummary& WithStatus(SyncResourceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The update date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }

    /**
     * <p>The update date and time.</p>
     */
    inline bool UpdateDateTimeHasBeenSet() const { return m_updateDateTimeHasBeenSet; }

    /**
     * <p>The update date and time.</p>
     */
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = value; }

    /**
     * <p>The update date and time.</p>
     */
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::move(value); }

    /**
     * <p>The update date and time.</p>
     */
    inline SyncResourceSummary& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}

    /**
     * <p>The update date and time.</p>
     */
    inline SyncResourceSummary& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}

  private:

    SyncResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    SyncResourceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updateDateTime;
    bool m_updateDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
