/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class GetSegmentSnapshotRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API GetSegmentSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSegmentSnapshot"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline GetSegmentSnapshotRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline GetSegmentSnapshotRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline GetSegmentSnapshotRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the segment definition.</p>
     */
    inline const Aws::String& GetSegmentDefinitionName() const{ return m_segmentDefinitionName; }
    inline bool SegmentDefinitionNameHasBeenSet() const { return m_segmentDefinitionNameHasBeenSet; }
    inline void SetSegmentDefinitionName(const Aws::String& value) { m_segmentDefinitionNameHasBeenSet = true; m_segmentDefinitionName = value; }
    inline void SetSegmentDefinitionName(Aws::String&& value) { m_segmentDefinitionNameHasBeenSet = true; m_segmentDefinitionName = std::move(value); }
    inline void SetSegmentDefinitionName(const char* value) { m_segmentDefinitionNameHasBeenSet = true; m_segmentDefinitionName.assign(value); }
    inline GetSegmentSnapshotRequest& WithSegmentDefinitionName(const Aws::String& value) { SetSegmentDefinitionName(value); return *this;}
    inline GetSegmentSnapshotRequest& WithSegmentDefinitionName(Aws::String&& value) { SetSegmentDefinitionName(std::move(value)); return *this;}
    inline GetSegmentSnapshotRequest& WithSegmentDefinitionName(const char* value) { SetSegmentDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the segment snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }
    inline GetSegmentSnapshotRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline GetSegmentSnapshotRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline GetSegmentSnapshotRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_segmentDefinitionName;
    bool m_segmentDefinitionNameHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
