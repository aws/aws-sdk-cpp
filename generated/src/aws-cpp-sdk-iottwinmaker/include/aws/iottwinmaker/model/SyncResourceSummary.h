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
    AWS_IOTTWINMAKER_API SyncResourceSummary() = default;
    AWS_IOTTWINMAKER_API SyncResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API SyncResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource type.</p>
     */
    inline SyncResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(SyncResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline SyncResourceSummary& WithResourceType(SyncResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID.</p>
     */
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    SyncResourceSummary& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    SyncResourceSummary& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sync resource summary status.</p>
     */
    inline const SyncResourceStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = SyncResourceStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = SyncResourceStatus>
    SyncResourceSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const { return m_updateDateTime; }
    inline bool UpdateDateTimeHasBeenSet() const { return m_updateDateTimeHasBeenSet; }
    template<typename UpdateDateTimeT = Aws::Utils::DateTime>
    void SetUpdateDateTime(UpdateDateTimeT&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::forward<UpdateDateTimeT>(value); }
    template<typename UpdateDateTimeT = Aws::Utils::DateTime>
    SyncResourceSummary& WithUpdateDateTime(UpdateDateTimeT&& value) { SetUpdateDateTime(std::forward<UpdateDateTimeT>(value)); return *this;}
    ///@}
  private:

    SyncResourceType m_resourceType{SyncResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    SyncResourceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updateDateTime{};
    bool m_updateDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
