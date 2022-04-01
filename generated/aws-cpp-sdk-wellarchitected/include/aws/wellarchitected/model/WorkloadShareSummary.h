﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/PermissionType.h>
#include <aws/wellarchitected/model/ShareStatus.h>
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
   * <p>A workload share summary return object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/WorkloadShareSummary">AWS
   * API Reference</a></p>
   */
  class AWS_WELLARCHITECTED_API WorkloadShareSummary
  {
  public:
    WorkloadShareSummary();
    WorkloadShareSummary(Aws::Utils::Json::JsonView jsonValue);
    WorkloadShareSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetShareId() const{ return m_shareId; }

    
    inline bool ShareIdHasBeenSet() const { return m_shareIdHasBeenSet; }

    
    inline void SetShareId(const Aws::String& value) { m_shareIdHasBeenSet = true; m_shareId = value; }

    
    inline void SetShareId(Aws::String&& value) { m_shareIdHasBeenSet = true; m_shareId = std::move(value); }

    
    inline void SetShareId(const char* value) { m_shareIdHasBeenSet = true; m_shareId.assign(value); }

    
    inline WorkloadShareSummary& WithShareId(const Aws::String& value) { SetShareId(value); return *this;}

    
    inline WorkloadShareSummary& WithShareId(Aws::String&& value) { SetShareId(std::move(value)); return *this;}

    
    inline WorkloadShareSummary& WithShareId(const char* value) { SetShareId(value); return *this;}


    
    inline const Aws::String& GetSharedWith() const{ return m_sharedWith; }

    
    inline bool SharedWithHasBeenSet() const { return m_sharedWithHasBeenSet; }

    
    inline void SetSharedWith(const Aws::String& value) { m_sharedWithHasBeenSet = true; m_sharedWith = value; }

    
    inline void SetSharedWith(Aws::String&& value) { m_sharedWithHasBeenSet = true; m_sharedWith = std::move(value); }

    
    inline void SetSharedWith(const char* value) { m_sharedWithHasBeenSet = true; m_sharedWith.assign(value); }

    
    inline WorkloadShareSummary& WithSharedWith(const Aws::String& value) { SetSharedWith(value); return *this;}

    
    inline WorkloadShareSummary& WithSharedWith(Aws::String&& value) { SetSharedWith(std::move(value)); return *this;}

    
    inline WorkloadShareSummary& WithSharedWith(const char* value) { SetSharedWith(value); return *this;}


    
    inline const PermissionType& GetPermissionType() const{ return m_permissionType; }

    
    inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }

    
    inline void SetPermissionType(const PermissionType& value) { m_permissionTypeHasBeenSet = true; m_permissionType = value; }

    
    inline void SetPermissionType(PermissionType&& value) { m_permissionTypeHasBeenSet = true; m_permissionType = std::move(value); }

    
    inline WorkloadShareSummary& WithPermissionType(const PermissionType& value) { SetPermissionType(value); return *this;}

    
    inline WorkloadShareSummary& WithPermissionType(PermissionType&& value) { SetPermissionType(std::move(value)); return *this;}


    
    inline const ShareStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const ShareStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(ShareStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline WorkloadShareSummary& WithStatus(const ShareStatus& value) { SetStatus(value); return *this;}

    
    inline WorkloadShareSummary& WithStatus(ShareStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_shareId;
    bool m_shareIdHasBeenSet;

    Aws::String m_sharedWith;
    bool m_sharedWithHasBeenSet;

    PermissionType m_permissionType;
    bool m_permissionTypeHasBeenSet;

    ShareStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
