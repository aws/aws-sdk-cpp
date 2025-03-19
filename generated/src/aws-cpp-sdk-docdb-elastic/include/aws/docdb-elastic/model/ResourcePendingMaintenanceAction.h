/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb-elastic/model/PendingMaintenanceActionDetails.h>
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
namespace DocDBElastic
{
namespace Model
{

  /**
   * <p>Provides information about a pending maintenance action for a
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/ResourcePendingMaintenanceAction">AWS
   * API Reference</a></p>
   */
  class ResourcePendingMaintenanceAction
  {
  public:
    AWS_DOCDBELASTIC_API ResourcePendingMaintenanceAction() = default;
    AWS_DOCDBELASTIC_API ResourcePendingMaintenanceAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API ResourcePendingMaintenanceAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides information about a pending maintenance action for a resource.</p>
     */
    inline const Aws::Vector<PendingMaintenanceActionDetails>& GetPendingMaintenanceActionDetails() const { return m_pendingMaintenanceActionDetails; }
    inline bool PendingMaintenanceActionDetailsHasBeenSet() const { return m_pendingMaintenanceActionDetailsHasBeenSet; }
    template<typename PendingMaintenanceActionDetailsT = Aws::Vector<PendingMaintenanceActionDetails>>
    void SetPendingMaintenanceActionDetails(PendingMaintenanceActionDetailsT&& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails = std::forward<PendingMaintenanceActionDetailsT>(value); }
    template<typename PendingMaintenanceActionDetailsT = Aws::Vector<PendingMaintenanceActionDetails>>
    ResourcePendingMaintenanceAction& WithPendingMaintenanceActionDetails(PendingMaintenanceActionDetailsT&& value) { SetPendingMaintenanceActionDetails(std::forward<PendingMaintenanceActionDetailsT>(value)); return *this;}
    template<typename PendingMaintenanceActionDetailsT = PendingMaintenanceActionDetails>
    ResourcePendingMaintenanceAction& AddPendingMaintenanceActionDetails(PendingMaintenanceActionDetailsT&& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails.emplace_back(std::forward<PendingMaintenanceActionDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon DocumentDB Amazon Resource Name (ARN) of the resource to which the
     * pending maintenance action applies.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    ResourcePendingMaintenanceAction& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PendingMaintenanceActionDetails> m_pendingMaintenanceActionDetails;
    bool m_pendingMaintenanceActionDetailsHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
