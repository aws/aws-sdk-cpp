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
    AWS_DOCDBELASTIC_API ResourcePendingMaintenanceAction();
    AWS_DOCDBELASTIC_API ResourcePendingMaintenanceAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API ResourcePendingMaintenanceAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides information about a pending maintenance action for a resource.</p>
     */
    inline const Aws::Vector<PendingMaintenanceActionDetails>& GetPendingMaintenanceActionDetails() const{ return m_pendingMaintenanceActionDetails; }
    inline bool PendingMaintenanceActionDetailsHasBeenSet() const { return m_pendingMaintenanceActionDetailsHasBeenSet; }
    inline void SetPendingMaintenanceActionDetails(const Aws::Vector<PendingMaintenanceActionDetails>& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails = value; }
    inline void SetPendingMaintenanceActionDetails(Aws::Vector<PendingMaintenanceActionDetails>&& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails = std::move(value); }
    inline ResourcePendingMaintenanceAction& WithPendingMaintenanceActionDetails(const Aws::Vector<PendingMaintenanceActionDetails>& value) { SetPendingMaintenanceActionDetails(value); return *this;}
    inline ResourcePendingMaintenanceAction& WithPendingMaintenanceActionDetails(Aws::Vector<PendingMaintenanceActionDetails>&& value) { SetPendingMaintenanceActionDetails(std::move(value)); return *this;}
    inline ResourcePendingMaintenanceAction& AddPendingMaintenanceActionDetails(const PendingMaintenanceActionDetails& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails.push_back(value); return *this; }
    inline ResourcePendingMaintenanceAction& AddPendingMaintenanceActionDetails(PendingMaintenanceActionDetails&& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon DocumentDB Amazon Resource Name (ARN) of the resource to which the
     * pending maintenance action applies.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline ResourcePendingMaintenanceAction& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline ResourcePendingMaintenanceAction& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline ResourcePendingMaintenanceAction& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
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
