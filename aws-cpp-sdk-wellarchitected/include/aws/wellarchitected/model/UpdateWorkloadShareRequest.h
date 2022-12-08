/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/PermissionType.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Input for Update Workload Share</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateWorkloadShareInput">AWS
   * API Reference</a></p>
   */
  class UpdateWorkloadShareRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API UpdateWorkloadShareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkloadShare"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetShareId() const{ return m_shareId; }

    
    inline bool ShareIdHasBeenSet() const { return m_shareIdHasBeenSet; }

    
    inline void SetShareId(const Aws::String& value) { m_shareIdHasBeenSet = true; m_shareId = value; }

    
    inline void SetShareId(Aws::String&& value) { m_shareIdHasBeenSet = true; m_shareId = std::move(value); }

    
    inline void SetShareId(const char* value) { m_shareIdHasBeenSet = true; m_shareId.assign(value); }

    
    inline UpdateWorkloadShareRequest& WithShareId(const Aws::String& value) { SetShareId(value); return *this;}

    
    inline UpdateWorkloadShareRequest& WithShareId(Aws::String&& value) { SetShareId(std::move(value)); return *this;}

    
    inline UpdateWorkloadShareRequest& WithShareId(const char* value) { SetShareId(value); return *this;}


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }

    
    inline UpdateWorkloadShareRequest& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline UpdateWorkloadShareRequest& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline UpdateWorkloadShareRequest& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline const PermissionType& GetPermissionType() const{ return m_permissionType; }

    
    inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }

    
    inline void SetPermissionType(const PermissionType& value) { m_permissionTypeHasBeenSet = true; m_permissionType = value; }

    
    inline void SetPermissionType(PermissionType&& value) { m_permissionTypeHasBeenSet = true; m_permissionType = std::move(value); }

    
    inline UpdateWorkloadShareRequest& WithPermissionType(const PermissionType& value) { SetPermissionType(value); return *this;}

    
    inline UpdateWorkloadShareRequest& WithPermissionType(PermissionType&& value) { SetPermissionType(std::move(value)); return *this;}

  private:

    Aws::String m_shareId;
    bool m_shareIdHasBeenSet = false;

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    PermissionType m_permissionType;
    bool m_permissionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
