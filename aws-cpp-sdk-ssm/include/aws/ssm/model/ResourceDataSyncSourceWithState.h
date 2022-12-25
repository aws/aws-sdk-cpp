﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ResourceDataSyncAwsOrganizationsSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The data type name for including resource data sync state. There are four
   * sync states:</p> <p> <code>OrganizationNotExists</code> (Your organization
   * doesn't exist)</p> <p> <code>NoPermissions</code> (The system can't locate the
   * service-linked role. This role is automatically created when a user creates a
   * resource data sync in Amazon Web Services Systems Manager Explorer.)</p> <p>
   * <code>InvalidOrganizationalUnit</code> (You specified or selected an invalid
   * unit in the resource data sync configuration.)</p> <p>
   * <code>TrustedAccessDisabled</code> (You disabled Systems Manager access in the
   * organization in Organizations.)</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResourceDataSyncSourceWithState">AWS
   * API Reference</a></p>
   */
  class ResourceDataSyncSourceWithState
  {
  public:
    AWS_SSM_API ResourceDataSyncSourceWithState();
    AWS_SSM_API ResourceDataSyncSourceWithState(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ResourceDataSyncSourceWithState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of data source for the resource data sync. <code>SourceType</code>
     * is either <code>AwsOrganizations</code> (if an organization is present in
     * Organizations) or <code>singleAccountMultiRegions</code>.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The type of data source for the resource data sync. <code>SourceType</code>
     * is either <code>AwsOrganizations</code> (if an organization is present in
     * Organizations) or <code>singleAccountMultiRegions</code>.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The type of data source for the resource data sync. <code>SourceType</code>
     * is either <code>AwsOrganizations</code> (if an organization is present in
     * Organizations) or <code>singleAccountMultiRegions</code>.</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The type of data source for the resource data sync. <code>SourceType</code>
     * is either <code>AwsOrganizations</code> (if an organization is present in
     * Organizations) or <code>singleAccountMultiRegions</code>.</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The type of data source for the resource data sync. <code>SourceType</code>
     * is either <code>AwsOrganizations</code> (if an organization is present in
     * Organizations) or <code>singleAccountMultiRegions</code>.</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The type of data source for the resource data sync. <code>SourceType</code>
     * is either <code>AwsOrganizations</code> (if an organization is present in
     * Organizations) or <code>singleAccountMultiRegions</code>.</p>
     */
    inline ResourceDataSyncSourceWithState& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The type of data source for the resource data sync. <code>SourceType</code>
     * is either <code>AwsOrganizations</code> (if an organization is present in
     * Organizations) or <code>singleAccountMultiRegions</code>.</p>
     */
    inline ResourceDataSyncSourceWithState& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>The type of data source for the resource data sync. <code>SourceType</code>
     * is either <code>AwsOrganizations</code> (if an organization is present in
     * Organizations) or <code>singleAccountMultiRegions</code>.</p>
     */
    inline ResourceDataSyncSourceWithState& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p>The field name in <code>SyncSource</code> for the
     * <code>ResourceDataSyncAwsOrganizationsSource</code> type.</p>
     */
    inline const ResourceDataSyncAwsOrganizationsSource& GetAwsOrganizationsSource() const{ return m_awsOrganizationsSource; }

    /**
     * <p>The field name in <code>SyncSource</code> for the
     * <code>ResourceDataSyncAwsOrganizationsSource</code> type.</p>
     */
    inline bool AwsOrganizationsSourceHasBeenSet() const { return m_awsOrganizationsSourceHasBeenSet; }

    /**
     * <p>The field name in <code>SyncSource</code> for the
     * <code>ResourceDataSyncAwsOrganizationsSource</code> type.</p>
     */
    inline void SetAwsOrganizationsSource(const ResourceDataSyncAwsOrganizationsSource& value) { m_awsOrganizationsSourceHasBeenSet = true; m_awsOrganizationsSource = value; }

    /**
     * <p>The field name in <code>SyncSource</code> for the
     * <code>ResourceDataSyncAwsOrganizationsSource</code> type.</p>
     */
    inline void SetAwsOrganizationsSource(ResourceDataSyncAwsOrganizationsSource&& value) { m_awsOrganizationsSourceHasBeenSet = true; m_awsOrganizationsSource = std::move(value); }

    /**
     * <p>The field name in <code>SyncSource</code> for the
     * <code>ResourceDataSyncAwsOrganizationsSource</code> type.</p>
     */
    inline ResourceDataSyncSourceWithState& WithAwsOrganizationsSource(const ResourceDataSyncAwsOrganizationsSource& value) { SetAwsOrganizationsSource(value); return *this;}

    /**
     * <p>The field name in <code>SyncSource</code> for the
     * <code>ResourceDataSyncAwsOrganizationsSource</code> type.</p>
     */
    inline ResourceDataSyncSourceWithState& WithAwsOrganizationsSource(ResourceDataSyncAwsOrganizationsSource&& value) { SetAwsOrganizationsSource(std::move(value)); return *this;}


    /**
     * <p>The <code>SyncSource</code> Amazon Web Services Regions included in the
     * resource data sync.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceRegions() const{ return m_sourceRegions; }

    /**
     * <p>The <code>SyncSource</code> Amazon Web Services Regions included in the
     * resource data sync.</p>
     */
    inline bool SourceRegionsHasBeenSet() const { return m_sourceRegionsHasBeenSet; }

    /**
     * <p>The <code>SyncSource</code> Amazon Web Services Regions included in the
     * resource data sync.</p>
     */
    inline void SetSourceRegions(const Aws::Vector<Aws::String>& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions = value; }

    /**
     * <p>The <code>SyncSource</code> Amazon Web Services Regions included in the
     * resource data sync.</p>
     */
    inline void SetSourceRegions(Aws::Vector<Aws::String>&& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions = std::move(value); }

    /**
     * <p>The <code>SyncSource</code> Amazon Web Services Regions included in the
     * resource data sync.</p>
     */
    inline ResourceDataSyncSourceWithState& WithSourceRegions(const Aws::Vector<Aws::String>& value) { SetSourceRegions(value); return *this;}

    /**
     * <p>The <code>SyncSource</code> Amazon Web Services Regions included in the
     * resource data sync.</p>
     */
    inline ResourceDataSyncSourceWithState& WithSourceRegions(Aws::Vector<Aws::String>&& value) { SetSourceRegions(std::move(value)); return *this;}

    /**
     * <p>The <code>SyncSource</code> Amazon Web Services Regions included in the
     * resource data sync.</p>
     */
    inline ResourceDataSyncSourceWithState& AddSourceRegions(const Aws::String& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions.push_back(value); return *this; }

    /**
     * <p>The <code>SyncSource</code> Amazon Web Services Regions included in the
     * resource data sync.</p>
     */
    inline ResourceDataSyncSourceWithState& AddSourceRegions(Aws::String&& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions.push_back(std::move(value)); return *this; }

    /**
     * <p>The <code>SyncSource</code> Amazon Web Services Regions included in the
     * resource data sync.</p>
     */
    inline ResourceDataSyncSourceWithState& AddSourceRegions(const char* value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions.push_back(value); return *this; }


    /**
     * <p>Whether to automatically synchronize and aggregate data from new Amazon Web
     * Services Regions when those Regions come online.</p>
     */
    inline bool GetIncludeFutureRegions() const{ return m_includeFutureRegions; }

    /**
     * <p>Whether to automatically synchronize and aggregate data from new Amazon Web
     * Services Regions when those Regions come online.</p>
     */
    inline bool IncludeFutureRegionsHasBeenSet() const { return m_includeFutureRegionsHasBeenSet; }

    /**
     * <p>Whether to automatically synchronize and aggregate data from new Amazon Web
     * Services Regions when those Regions come online.</p>
     */
    inline void SetIncludeFutureRegions(bool value) { m_includeFutureRegionsHasBeenSet = true; m_includeFutureRegions = value; }

    /**
     * <p>Whether to automatically synchronize and aggregate data from new Amazon Web
     * Services Regions when those Regions come online.</p>
     */
    inline ResourceDataSyncSourceWithState& WithIncludeFutureRegions(bool value) { SetIncludeFutureRegions(value); return *this;}


    /**
     * <p>The data type name for including resource data sync state. There are four
     * sync states:</p> <p> <code>OrganizationNotExists</code>: Your organization
     * doesn't exist.</p> <p> <code>NoPermissions</code>: The system can't locate the
     * service-linked role. This role is automatically created when a user creates a
     * resource data sync in Explorer.</p> <p> <code>InvalidOrganizationalUnit</code>:
     * You specified or selected an invalid unit in the resource data sync
     * configuration.</p> <p> <code>TrustedAccessDisabled</code>: You disabled Systems
     * Manager access in the organization in Organizations.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The data type name for including resource data sync state. There are four
     * sync states:</p> <p> <code>OrganizationNotExists</code>: Your organization
     * doesn't exist.</p> <p> <code>NoPermissions</code>: The system can't locate the
     * service-linked role. This role is automatically created when a user creates a
     * resource data sync in Explorer.</p> <p> <code>InvalidOrganizationalUnit</code>:
     * You specified or selected an invalid unit in the resource data sync
     * configuration.</p> <p> <code>TrustedAccessDisabled</code>: You disabled Systems
     * Manager access in the organization in Organizations.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The data type name for including resource data sync state. There are four
     * sync states:</p> <p> <code>OrganizationNotExists</code>: Your organization
     * doesn't exist.</p> <p> <code>NoPermissions</code>: The system can't locate the
     * service-linked role. This role is automatically created when a user creates a
     * resource data sync in Explorer.</p> <p> <code>InvalidOrganizationalUnit</code>:
     * You specified or selected an invalid unit in the resource data sync
     * configuration.</p> <p> <code>TrustedAccessDisabled</code>: You disabled Systems
     * Manager access in the organization in Organizations.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The data type name for including resource data sync state. There are four
     * sync states:</p> <p> <code>OrganizationNotExists</code>: Your organization
     * doesn't exist.</p> <p> <code>NoPermissions</code>: The system can't locate the
     * service-linked role. This role is automatically created when a user creates a
     * resource data sync in Explorer.</p> <p> <code>InvalidOrganizationalUnit</code>:
     * You specified or selected an invalid unit in the resource data sync
     * configuration.</p> <p> <code>TrustedAccessDisabled</code>: You disabled Systems
     * Manager access in the organization in Organizations.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The data type name for including resource data sync state. There are four
     * sync states:</p> <p> <code>OrganizationNotExists</code>: Your organization
     * doesn't exist.</p> <p> <code>NoPermissions</code>: The system can't locate the
     * service-linked role. This role is automatically created when a user creates a
     * resource data sync in Explorer.</p> <p> <code>InvalidOrganizationalUnit</code>:
     * You specified or selected an invalid unit in the resource data sync
     * configuration.</p> <p> <code>TrustedAccessDisabled</code>: You disabled Systems
     * Manager access in the organization in Organizations.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The data type name for including resource data sync state. There are four
     * sync states:</p> <p> <code>OrganizationNotExists</code>: Your organization
     * doesn't exist.</p> <p> <code>NoPermissions</code>: The system can't locate the
     * service-linked role. This role is automatically created when a user creates a
     * resource data sync in Explorer.</p> <p> <code>InvalidOrganizationalUnit</code>:
     * You specified or selected an invalid unit in the resource data sync
     * configuration.</p> <p> <code>TrustedAccessDisabled</code>: You disabled Systems
     * Manager access in the organization in Organizations.</p>
     */
    inline ResourceDataSyncSourceWithState& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The data type name for including resource data sync state. There are four
     * sync states:</p> <p> <code>OrganizationNotExists</code>: Your organization
     * doesn't exist.</p> <p> <code>NoPermissions</code>: The system can't locate the
     * service-linked role. This role is automatically created when a user creates a
     * resource data sync in Explorer.</p> <p> <code>InvalidOrganizationalUnit</code>:
     * You specified or selected an invalid unit in the resource data sync
     * configuration.</p> <p> <code>TrustedAccessDisabled</code>: You disabled Systems
     * Manager access in the organization in Organizations.</p>
     */
    inline ResourceDataSyncSourceWithState& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The data type name for including resource data sync state. There are four
     * sync states:</p> <p> <code>OrganizationNotExists</code>: Your organization
     * doesn't exist.</p> <p> <code>NoPermissions</code>: The system can't locate the
     * service-linked role. This role is automatically created when a user creates a
     * resource data sync in Explorer.</p> <p> <code>InvalidOrganizationalUnit</code>:
     * You specified or selected an invalid unit in the resource data sync
     * configuration.</p> <p> <code>TrustedAccessDisabled</code>: You disabled Systems
     * Manager access in the organization in Organizations.</p>
     */
    inline ResourceDataSyncSourceWithState& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>When you create a resource data sync, if you choose one of the Organizations
     * options, then Systems Manager automatically enables all OpsData sources in the
     * selected Amazon Web Services Regions for all Amazon Web Services accounts in
     * your organization (or in the selected organization units). For more information,
     * see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/Explorer-resouce-data-sync-multiple-accounts-and-regions.html">About
     * multiple account and Region resource data syncs</a> in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline bool GetEnableAllOpsDataSources() const{ return m_enableAllOpsDataSources; }

    /**
     * <p>When you create a resource data sync, if you choose one of the Organizations
     * options, then Systems Manager automatically enables all OpsData sources in the
     * selected Amazon Web Services Regions for all Amazon Web Services accounts in
     * your organization (or in the selected organization units). For more information,
     * see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/Explorer-resouce-data-sync-multiple-accounts-and-regions.html">About
     * multiple account and Region resource data syncs</a> in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline bool EnableAllOpsDataSourcesHasBeenSet() const { return m_enableAllOpsDataSourcesHasBeenSet; }

    /**
     * <p>When you create a resource data sync, if you choose one of the Organizations
     * options, then Systems Manager automatically enables all OpsData sources in the
     * selected Amazon Web Services Regions for all Amazon Web Services accounts in
     * your organization (or in the selected organization units). For more information,
     * see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/Explorer-resouce-data-sync-multiple-accounts-and-regions.html">About
     * multiple account and Region resource data syncs</a> in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline void SetEnableAllOpsDataSources(bool value) { m_enableAllOpsDataSourcesHasBeenSet = true; m_enableAllOpsDataSources = value; }

    /**
     * <p>When you create a resource data sync, if you choose one of the Organizations
     * options, then Systems Manager automatically enables all OpsData sources in the
     * selected Amazon Web Services Regions for all Amazon Web Services accounts in
     * your organization (or in the selected organization units). For more information,
     * see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/Explorer-resouce-data-sync-multiple-accounts-and-regions.html">About
     * multiple account and Region resource data syncs</a> in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline ResourceDataSyncSourceWithState& WithEnableAllOpsDataSources(bool value) { SetEnableAllOpsDataSources(value); return *this;}

  private:

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    ResourceDataSyncAwsOrganizationsSource m_awsOrganizationsSource;
    bool m_awsOrganizationsSourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceRegions;
    bool m_sourceRegionsHasBeenSet = false;

    bool m_includeFutureRegions;
    bool m_includeFutureRegionsHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    bool m_enableAllOpsDataSources;
    bool m_enableAllOpsDataSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
