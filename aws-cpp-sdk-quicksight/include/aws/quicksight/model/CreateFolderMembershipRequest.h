﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/MemberType.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class AWS_QUICKSIGHT_API CreateFolderMembershipRequest : public QuickSightRequest
  {
  public:
    CreateFolderMembershipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFolderMembership"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID for the Amazon Web Services account that contains the folder.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID for the Amazon Web Services account that contains the folder.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID for the Amazon Web Services account that contains the folder.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID for the Amazon Web Services account that contains the folder.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID for the Amazon Web Services account that contains the folder.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID for the Amazon Web Services account that contains the folder.</p>
     */
    inline CreateFolderMembershipRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that contains the folder.</p>
     */
    inline CreateFolderMembershipRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that contains the folder.</p>
     */
    inline CreateFolderMembershipRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID of the folder.</p>
     */
    inline const Aws::String& GetFolderId() const{ return m_folderId; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline bool FolderIdHasBeenSet() const { return m_folderIdHasBeenSet; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(const Aws::String& value) { m_folderIdHasBeenSet = true; m_folderId = value; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(Aws::String&& value) { m_folderIdHasBeenSet = true; m_folderId = std::move(value); }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(const char* value) { m_folderIdHasBeenSet = true; m_folderId.assign(value); }

    /**
     * <p>The ID of the folder.</p>
     */
    inline CreateFolderMembershipRequest& WithFolderId(const Aws::String& value) { SetFolderId(value); return *this;}

    /**
     * <p>The ID of the folder.</p>
     */
    inline CreateFolderMembershipRequest& WithFolderId(Aws::String&& value) { SetFolderId(std::move(value)); return *this;}

    /**
     * <p>The ID of the folder.</p>
     */
    inline CreateFolderMembershipRequest& WithFolderId(const char* value) { SetFolderId(value); return *this;}


    /**
     * <p>The ID of the asset (the dashboard, analysis, or dataset).</p>
     */
    inline const Aws::String& GetMemberId() const{ return m_memberId; }

    /**
     * <p>The ID of the asset (the dashboard, analysis, or dataset).</p>
     */
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }

    /**
     * <p>The ID of the asset (the dashboard, analysis, or dataset).</p>
     */
    inline void SetMemberId(const Aws::String& value) { m_memberIdHasBeenSet = true; m_memberId = value; }

    /**
     * <p>The ID of the asset (the dashboard, analysis, or dataset).</p>
     */
    inline void SetMemberId(Aws::String&& value) { m_memberIdHasBeenSet = true; m_memberId = std::move(value); }

    /**
     * <p>The ID of the asset (the dashboard, analysis, or dataset).</p>
     */
    inline void SetMemberId(const char* value) { m_memberIdHasBeenSet = true; m_memberId.assign(value); }

    /**
     * <p>The ID of the asset (the dashboard, analysis, or dataset).</p>
     */
    inline CreateFolderMembershipRequest& WithMemberId(const Aws::String& value) { SetMemberId(value); return *this;}

    /**
     * <p>The ID of the asset (the dashboard, analysis, or dataset).</p>
     */
    inline CreateFolderMembershipRequest& WithMemberId(Aws::String&& value) { SetMemberId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset (the dashboard, analysis, or dataset).</p>
     */
    inline CreateFolderMembershipRequest& WithMemberId(const char* value) { SetMemberId(value); return *this;}


    /**
     * <p>The type of the member, including <code>DASHBOARD</code>,
     * <code>ANALYSIS</code>, and <code>DATASET</code>.</p>
     */
    inline const MemberType& GetMemberType() const{ return m_memberType; }

    /**
     * <p>The type of the member, including <code>DASHBOARD</code>,
     * <code>ANALYSIS</code>, and <code>DATASET</code>.</p>
     */
    inline bool MemberTypeHasBeenSet() const { return m_memberTypeHasBeenSet; }

    /**
     * <p>The type of the member, including <code>DASHBOARD</code>,
     * <code>ANALYSIS</code>, and <code>DATASET</code>.</p>
     */
    inline void SetMemberType(const MemberType& value) { m_memberTypeHasBeenSet = true; m_memberType = value; }

    /**
     * <p>The type of the member, including <code>DASHBOARD</code>,
     * <code>ANALYSIS</code>, and <code>DATASET</code>.</p>
     */
    inline void SetMemberType(MemberType&& value) { m_memberTypeHasBeenSet = true; m_memberType = std::move(value); }

    /**
     * <p>The type of the member, including <code>DASHBOARD</code>,
     * <code>ANALYSIS</code>, and <code>DATASET</code>.</p>
     */
    inline CreateFolderMembershipRequest& WithMemberType(const MemberType& value) { SetMemberType(value); return *this;}

    /**
     * <p>The type of the member, including <code>DASHBOARD</code>,
     * <code>ANALYSIS</code>, and <code>DATASET</code>.</p>
     */
    inline CreateFolderMembershipRequest& WithMemberType(MemberType&& value) { SetMemberType(std::move(value)); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::String m_folderId;
    bool m_folderIdHasBeenSet;

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet;

    MemberType m_memberType;
    bool m_memberTypeHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
