/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/PermissionType.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>A share invitation summary return object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ShareInvitationSummary">AWS
   * API Reference</a></p>
   */
  class AWS_WELLARCHITECTED_API ShareInvitationSummary
  {
  public:
    ShareInvitationSummary();
    ShareInvitationSummary(Aws::Utils::Json::JsonView jsonValue);
    ShareInvitationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline const Aws::String& GetShareInvitationId() const{ return m_shareInvitationId; }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline bool ShareInvitationIdHasBeenSet() const { return m_shareInvitationIdHasBeenSet; }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline void SetShareInvitationId(const Aws::String& value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId = value; }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline void SetShareInvitationId(Aws::String&& value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId = std::move(value); }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline void SetShareInvitationId(const char* value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId.assign(value); }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline ShareInvitationSummary& WithShareInvitationId(const Aws::String& value) { SetShareInvitationId(value); return *this;}

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline ShareInvitationSummary& WithShareInvitationId(Aws::String&& value) { SetShareInvitationId(std::move(value)); return *this;}

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline ShareInvitationSummary& WithShareInvitationId(const char* value) { SetShareInvitationId(value); return *this;}


    
    inline const Aws::String& GetSharedBy() const{ return m_sharedBy; }

    
    inline bool SharedByHasBeenSet() const { return m_sharedByHasBeenSet; }

    
    inline void SetSharedBy(const Aws::String& value) { m_sharedByHasBeenSet = true; m_sharedBy = value; }

    
    inline void SetSharedBy(Aws::String&& value) { m_sharedByHasBeenSet = true; m_sharedBy = std::move(value); }

    
    inline void SetSharedBy(const char* value) { m_sharedByHasBeenSet = true; m_sharedBy.assign(value); }

    
    inline ShareInvitationSummary& WithSharedBy(const Aws::String& value) { SetSharedBy(value); return *this;}

    
    inline ShareInvitationSummary& WithSharedBy(Aws::String&& value) { SetSharedBy(std::move(value)); return *this;}

    
    inline ShareInvitationSummary& WithSharedBy(const char* value) { SetSharedBy(value); return *this;}


    
    inline const Aws::String& GetSharedWith() const{ return m_sharedWith; }

    
    inline bool SharedWithHasBeenSet() const { return m_sharedWithHasBeenSet; }

    
    inline void SetSharedWith(const Aws::String& value) { m_sharedWithHasBeenSet = true; m_sharedWith = value; }

    
    inline void SetSharedWith(Aws::String&& value) { m_sharedWithHasBeenSet = true; m_sharedWith = std::move(value); }

    
    inline void SetSharedWith(const char* value) { m_sharedWithHasBeenSet = true; m_sharedWith.assign(value); }

    
    inline ShareInvitationSummary& WithSharedWith(const Aws::String& value) { SetSharedWith(value); return *this;}

    
    inline ShareInvitationSummary& WithSharedWith(Aws::String&& value) { SetSharedWith(std::move(value)); return *this;}

    
    inline ShareInvitationSummary& WithSharedWith(const char* value) { SetSharedWith(value); return *this;}


    
    inline const PermissionType& GetPermissionType() const{ return m_permissionType; }

    
    inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }

    
    inline void SetPermissionType(const PermissionType& value) { m_permissionTypeHasBeenSet = true; m_permissionType = value; }

    
    inline void SetPermissionType(PermissionType&& value) { m_permissionTypeHasBeenSet = true; m_permissionType = std::move(value); }

    
    inline ShareInvitationSummary& WithPermissionType(const PermissionType& value) { SetPermissionType(value); return *this;}

    
    inline ShareInvitationSummary& WithPermissionType(PermissionType&& value) { SetPermissionType(std::move(value)); return *this;}


    
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }

    
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }

    
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }

    
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }

    
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }

    
    inline ShareInvitationSummary& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}

    
    inline ShareInvitationSummary& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}

    
    inline ShareInvitationSummary& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }

    
    inline ShareInvitationSummary& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline ShareInvitationSummary& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline ShareInvitationSummary& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}

  private:

    Aws::String m_shareInvitationId;
    bool m_shareInvitationIdHasBeenSet;

    Aws::String m_sharedBy;
    bool m_sharedByHasBeenSet;

    Aws::String m_sharedWith;
    bool m_sharedWithHasBeenSet;

    PermissionType m_permissionType;
    bool m_permissionTypeHasBeenSet;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet;

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
