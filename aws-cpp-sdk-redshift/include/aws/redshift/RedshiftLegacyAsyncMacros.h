/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptReservedNodeExchangeAsync(...)  SubmitAsync(&RedshiftClient::AcceptReservedNodeExchange, __VA_ARGS__)
#define AcceptReservedNodeExchangeCallable(REQUEST)  SubmitCallable(&RedshiftClient::AcceptReservedNodeExchange, REQUEST)

#define AddPartnerAsync(...)  SubmitAsync(&RedshiftClient::AddPartner, __VA_ARGS__)
#define AddPartnerCallable(REQUEST)  SubmitCallable(&RedshiftClient::AddPartner, REQUEST)

#define AssociateDataShareConsumerAsync(...)  SubmitAsync(&RedshiftClient::AssociateDataShareConsumer, __VA_ARGS__)
#define AssociateDataShareConsumerCallable(REQUEST)  SubmitCallable(&RedshiftClient::AssociateDataShareConsumer, REQUEST)

#define AuthorizeClusterSecurityGroupIngressAsync(...)  SubmitAsync(&RedshiftClient::AuthorizeClusterSecurityGroupIngress, __VA_ARGS__)
#define AuthorizeClusterSecurityGroupIngressCallable(REQUEST)  SubmitCallable(&RedshiftClient::AuthorizeClusterSecurityGroupIngress, REQUEST)

#define AuthorizeDataShareAsync(...)  SubmitAsync(&RedshiftClient::AuthorizeDataShare, __VA_ARGS__)
#define AuthorizeDataShareCallable(REQUEST)  SubmitCallable(&RedshiftClient::AuthorizeDataShare, REQUEST)

#define AuthorizeEndpointAccessAsync(...)  SubmitAsync(&RedshiftClient::AuthorizeEndpointAccess, __VA_ARGS__)
#define AuthorizeEndpointAccessCallable(REQUEST)  SubmitCallable(&RedshiftClient::AuthorizeEndpointAccess, REQUEST)

#define AuthorizeSnapshotAccessAsync(...)  SubmitAsync(&RedshiftClient::AuthorizeSnapshotAccess, __VA_ARGS__)
#define AuthorizeSnapshotAccessCallable(REQUEST)  SubmitCallable(&RedshiftClient::AuthorizeSnapshotAccess, REQUEST)

#define BatchDeleteClusterSnapshotsAsync(...)  SubmitAsync(&RedshiftClient::BatchDeleteClusterSnapshots, __VA_ARGS__)
#define BatchDeleteClusterSnapshotsCallable(REQUEST)  SubmitCallable(&RedshiftClient::BatchDeleteClusterSnapshots, REQUEST)

#define BatchModifyClusterSnapshotsAsync(...)  SubmitAsync(&RedshiftClient::BatchModifyClusterSnapshots, __VA_ARGS__)
#define BatchModifyClusterSnapshotsCallable(REQUEST)  SubmitCallable(&RedshiftClient::BatchModifyClusterSnapshots, REQUEST)

#define CancelResizeAsync(...)  SubmitAsync(&RedshiftClient::CancelResize, __VA_ARGS__)
#define CancelResizeCallable(REQUEST)  SubmitCallable(&RedshiftClient::CancelResize, REQUEST)

#define CopyClusterSnapshotAsync(...)  SubmitAsync(&RedshiftClient::CopyClusterSnapshot, __VA_ARGS__)
#define CopyClusterSnapshotCallable(REQUEST)  SubmitCallable(&RedshiftClient::CopyClusterSnapshot, REQUEST)

#define CreateAuthenticationProfileAsync(...)  SubmitAsync(&RedshiftClient::CreateAuthenticationProfile, __VA_ARGS__)
#define CreateAuthenticationProfileCallable(REQUEST)  SubmitCallable(&RedshiftClient::CreateAuthenticationProfile, REQUEST)

#define CreateClusterAsync(...)  SubmitAsync(&RedshiftClient::CreateCluster, __VA_ARGS__)
#define CreateClusterCallable(REQUEST)  SubmitCallable(&RedshiftClient::CreateCluster, REQUEST)

#define CreateClusterParameterGroupAsync(...)  SubmitAsync(&RedshiftClient::CreateClusterParameterGroup, __VA_ARGS__)
#define CreateClusterParameterGroupCallable(REQUEST)  SubmitCallable(&RedshiftClient::CreateClusterParameterGroup, REQUEST)

#define CreateClusterSecurityGroupAsync(...)  SubmitAsync(&RedshiftClient::CreateClusterSecurityGroup, __VA_ARGS__)
#define CreateClusterSecurityGroupCallable(REQUEST)  SubmitCallable(&RedshiftClient::CreateClusterSecurityGroup, REQUEST)

#define CreateClusterSnapshotAsync(...)  SubmitAsync(&RedshiftClient::CreateClusterSnapshot, __VA_ARGS__)
#define CreateClusterSnapshotCallable(REQUEST)  SubmitCallable(&RedshiftClient::CreateClusterSnapshot, REQUEST)

#define CreateClusterSubnetGroupAsync(...)  SubmitAsync(&RedshiftClient::CreateClusterSubnetGroup, __VA_ARGS__)
#define CreateClusterSubnetGroupCallable(REQUEST)  SubmitCallable(&RedshiftClient::CreateClusterSubnetGroup, REQUEST)

#define CreateEndpointAccessAsync(...)  SubmitAsync(&RedshiftClient::CreateEndpointAccess, __VA_ARGS__)
#define CreateEndpointAccessCallable(REQUEST)  SubmitCallable(&RedshiftClient::CreateEndpointAccess, REQUEST)

#define CreateEventSubscriptionAsync(...)  SubmitAsync(&RedshiftClient::CreateEventSubscription, __VA_ARGS__)
#define CreateEventSubscriptionCallable(REQUEST)  SubmitCallable(&RedshiftClient::CreateEventSubscription, REQUEST)

#define CreateHsmClientCertificateAsync(...)  SubmitAsync(&RedshiftClient::CreateHsmClientCertificate, __VA_ARGS__)
#define CreateHsmClientCertificateCallable(REQUEST)  SubmitCallable(&RedshiftClient::CreateHsmClientCertificate, REQUEST)

#define CreateHsmConfigurationAsync(...)  SubmitAsync(&RedshiftClient::CreateHsmConfiguration, __VA_ARGS__)
#define CreateHsmConfigurationCallable(REQUEST)  SubmitCallable(&RedshiftClient::CreateHsmConfiguration, REQUEST)

#define CreateScheduledActionAsync(...)  SubmitAsync(&RedshiftClient::CreateScheduledAction, __VA_ARGS__)
#define CreateScheduledActionCallable(REQUEST)  SubmitCallable(&RedshiftClient::CreateScheduledAction, REQUEST)

#define CreateSnapshotCopyGrantAsync(...)  SubmitAsync(&RedshiftClient::CreateSnapshotCopyGrant, __VA_ARGS__)
#define CreateSnapshotCopyGrantCallable(REQUEST)  SubmitCallable(&RedshiftClient::CreateSnapshotCopyGrant, REQUEST)

#define CreateSnapshotScheduleAsync(...)  SubmitAsync(&RedshiftClient::CreateSnapshotSchedule, __VA_ARGS__)
#define CreateSnapshotScheduleCallable(REQUEST)  SubmitCallable(&RedshiftClient::CreateSnapshotSchedule, REQUEST)

#define CreateTagsAsync(...)  SubmitAsync(&RedshiftClient::CreateTags, __VA_ARGS__)
#define CreateTagsCallable(REQUEST)  SubmitCallable(&RedshiftClient::CreateTags, REQUEST)

#define CreateUsageLimitAsync(...)  SubmitAsync(&RedshiftClient::CreateUsageLimit, __VA_ARGS__)
#define CreateUsageLimitCallable(REQUEST)  SubmitCallable(&RedshiftClient::CreateUsageLimit, REQUEST)

#define DeauthorizeDataShareAsync(...)  SubmitAsync(&RedshiftClient::DeauthorizeDataShare, __VA_ARGS__)
#define DeauthorizeDataShareCallable(REQUEST)  SubmitCallable(&RedshiftClient::DeauthorizeDataShare, REQUEST)

#define DeleteAuthenticationProfileAsync(...)  SubmitAsync(&RedshiftClient::DeleteAuthenticationProfile, __VA_ARGS__)
#define DeleteAuthenticationProfileCallable(REQUEST)  SubmitCallable(&RedshiftClient::DeleteAuthenticationProfile, REQUEST)

#define DeleteClusterAsync(...)  SubmitAsync(&RedshiftClient::DeleteCluster, __VA_ARGS__)
#define DeleteClusterCallable(REQUEST)  SubmitCallable(&RedshiftClient::DeleteCluster, REQUEST)

#define DeleteClusterParameterGroupAsync(...)  SubmitAsync(&RedshiftClient::DeleteClusterParameterGroup, __VA_ARGS__)
#define DeleteClusterParameterGroupCallable(REQUEST)  SubmitCallable(&RedshiftClient::DeleteClusterParameterGroup, REQUEST)

#define DeleteClusterSecurityGroupAsync(...)  SubmitAsync(&RedshiftClient::DeleteClusterSecurityGroup, __VA_ARGS__)
#define DeleteClusterSecurityGroupCallable(REQUEST)  SubmitCallable(&RedshiftClient::DeleteClusterSecurityGroup, REQUEST)

#define DeleteClusterSnapshotAsync(...)  SubmitAsync(&RedshiftClient::DeleteClusterSnapshot, __VA_ARGS__)
#define DeleteClusterSnapshotCallable(REQUEST)  SubmitCallable(&RedshiftClient::DeleteClusterSnapshot, REQUEST)

#define DeleteClusterSubnetGroupAsync(...)  SubmitAsync(&RedshiftClient::DeleteClusterSubnetGroup, __VA_ARGS__)
#define DeleteClusterSubnetGroupCallable(REQUEST)  SubmitCallable(&RedshiftClient::DeleteClusterSubnetGroup, REQUEST)

#define DeleteEndpointAccessAsync(...)  SubmitAsync(&RedshiftClient::DeleteEndpointAccess, __VA_ARGS__)
#define DeleteEndpointAccessCallable(REQUEST)  SubmitCallable(&RedshiftClient::DeleteEndpointAccess, REQUEST)

#define DeleteEventSubscriptionAsync(...)  SubmitAsync(&RedshiftClient::DeleteEventSubscription, __VA_ARGS__)
#define DeleteEventSubscriptionCallable(REQUEST)  SubmitCallable(&RedshiftClient::DeleteEventSubscription, REQUEST)

#define DeleteHsmClientCertificateAsync(...)  SubmitAsync(&RedshiftClient::DeleteHsmClientCertificate, __VA_ARGS__)
#define DeleteHsmClientCertificateCallable(REQUEST)  SubmitCallable(&RedshiftClient::DeleteHsmClientCertificate, REQUEST)

#define DeleteHsmConfigurationAsync(...)  SubmitAsync(&RedshiftClient::DeleteHsmConfiguration, __VA_ARGS__)
#define DeleteHsmConfigurationCallable(REQUEST)  SubmitCallable(&RedshiftClient::DeleteHsmConfiguration, REQUEST)

#define DeletePartnerAsync(...)  SubmitAsync(&RedshiftClient::DeletePartner, __VA_ARGS__)
#define DeletePartnerCallable(REQUEST)  SubmitCallable(&RedshiftClient::DeletePartner, REQUEST)

#define DeleteScheduledActionAsync(...)  SubmitAsync(&RedshiftClient::DeleteScheduledAction, __VA_ARGS__)
#define DeleteScheduledActionCallable(REQUEST)  SubmitCallable(&RedshiftClient::DeleteScheduledAction, REQUEST)

#define DeleteSnapshotCopyGrantAsync(...)  SubmitAsync(&RedshiftClient::DeleteSnapshotCopyGrant, __VA_ARGS__)
#define DeleteSnapshotCopyGrantCallable(REQUEST)  SubmitCallable(&RedshiftClient::DeleteSnapshotCopyGrant, REQUEST)

#define DeleteSnapshotScheduleAsync(...)  SubmitAsync(&RedshiftClient::DeleteSnapshotSchedule, __VA_ARGS__)
#define DeleteSnapshotScheduleCallable(REQUEST)  SubmitCallable(&RedshiftClient::DeleteSnapshotSchedule, REQUEST)

#define DeleteTagsAsync(...)  SubmitAsync(&RedshiftClient::DeleteTags, __VA_ARGS__)
#define DeleteTagsCallable(REQUEST)  SubmitCallable(&RedshiftClient::DeleteTags, REQUEST)

#define DeleteUsageLimitAsync(...)  SubmitAsync(&RedshiftClient::DeleteUsageLimit, __VA_ARGS__)
#define DeleteUsageLimitCallable(REQUEST)  SubmitCallable(&RedshiftClient::DeleteUsageLimit, REQUEST)

#define DescribeAccountAttributesAsync(...)  SubmitAsync(&RedshiftClient::DescribeAccountAttributes, __VA_ARGS__)
#define DescribeAccountAttributesCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeAccountAttributes, REQUEST)

#define DescribeAuthenticationProfilesAsync(...)  SubmitAsync(&RedshiftClient::DescribeAuthenticationProfiles, __VA_ARGS__)
#define DescribeAuthenticationProfilesCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeAuthenticationProfiles, REQUEST)

#define DescribeClusterDbRevisionsAsync(...)  SubmitAsync(&RedshiftClient::DescribeClusterDbRevisions, __VA_ARGS__)
#define DescribeClusterDbRevisionsCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeClusterDbRevisions, REQUEST)

#define DescribeClusterParameterGroupsAsync(...)  SubmitAsync(&RedshiftClient::DescribeClusterParameterGroups, __VA_ARGS__)
#define DescribeClusterParameterGroupsCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeClusterParameterGroups, REQUEST)

#define DescribeClusterParametersAsync(...)  SubmitAsync(&RedshiftClient::DescribeClusterParameters, __VA_ARGS__)
#define DescribeClusterParametersCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeClusterParameters, REQUEST)

#define DescribeClusterSecurityGroupsAsync(...)  SubmitAsync(&RedshiftClient::DescribeClusterSecurityGroups, __VA_ARGS__)
#define DescribeClusterSecurityGroupsCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeClusterSecurityGroups, REQUEST)

#define DescribeClusterSnapshotsAsync(...)  SubmitAsync(&RedshiftClient::DescribeClusterSnapshots, __VA_ARGS__)
#define DescribeClusterSnapshotsCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeClusterSnapshots, REQUEST)

#define DescribeClusterSubnetGroupsAsync(...)  SubmitAsync(&RedshiftClient::DescribeClusterSubnetGroups, __VA_ARGS__)
#define DescribeClusterSubnetGroupsCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeClusterSubnetGroups, REQUEST)

#define DescribeClusterTracksAsync(...)  SubmitAsync(&RedshiftClient::DescribeClusterTracks, __VA_ARGS__)
#define DescribeClusterTracksCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeClusterTracks, REQUEST)

#define DescribeClusterVersionsAsync(...)  SubmitAsync(&RedshiftClient::DescribeClusterVersions, __VA_ARGS__)
#define DescribeClusterVersionsCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeClusterVersions, REQUEST)

#define DescribeClustersAsync(...)  SubmitAsync(&RedshiftClient::DescribeClusters, __VA_ARGS__)
#define DescribeClustersCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeClusters, REQUEST)

#define DescribeDataSharesAsync(...)  SubmitAsync(&RedshiftClient::DescribeDataShares, __VA_ARGS__)
#define DescribeDataSharesCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeDataShares, REQUEST)

#define DescribeDataSharesForConsumerAsync(...)  SubmitAsync(&RedshiftClient::DescribeDataSharesForConsumer, __VA_ARGS__)
#define DescribeDataSharesForConsumerCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeDataSharesForConsumer, REQUEST)

#define DescribeDataSharesForProducerAsync(...)  SubmitAsync(&RedshiftClient::DescribeDataSharesForProducer, __VA_ARGS__)
#define DescribeDataSharesForProducerCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeDataSharesForProducer, REQUEST)

#define DescribeDefaultClusterParametersAsync(...)  SubmitAsync(&RedshiftClient::DescribeDefaultClusterParameters, __VA_ARGS__)
#define DescribeDefaultClusterParametersCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeDefaultClusterParameters, REQUEST)

#define DescribeEndpointAccessAsync(...)  SubmitAsync(&RedshiftClient::DescribeEndpointAccess, __VA_ARGS__)
#define DescribeEndpointAccessCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeEndpointAccess, REQUEST)

#define DescribeEndpointAuthorizationAsync(...)  SubmitAsync(&RedshiftClient::DescribeEndpointAuthorization, __VA_ARGS__)
#define DescribeEndpointAuthorizationCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeEndpointAuthorization, REQUEST)

#define DescribeEventCategoriesAsync(...)  SubmitAsync(&RedshiftClient::DescribeEventCategories, __VA_ARGS__)
#define DescribeEventCategoriesCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeEventCategories, REQUEST)

#define DescribeEventSubscriptionsAsync(...)  SubmitAsync(&RedshiftClient::DescribeEventSubscriptions, __VA_ARGS__)
#define DescribeEventSubscriptionsCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeEventSubscriptions, REQUEST)

#define DescribeEventsAsync(...)  SubmitAsync(&RedshiftClient::DescribeEvents, __VA_ARGS__)
#define DescribeEventsCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeEvents, REQUEST)

#define DescribeHsmClientCertificatesAsync(...)  SubmitAsync(&RedshiftClient::DescribeHsmClientCertificates, __VA_ARGS__)
#define DescribeHsmClientCertificatesCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeHsmClientCertificates, REQUEST)

#define DescribeHsmConfigurationsAsync(...)  SubmitAsync(&RedshiftClient::DescribeHsmConfigurations, __VA_ARGS__)
#define DescribeHsmConfigurationsCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeHsmConfigurations, REQUEST)

#define DescribeLoggingStatusAsync(...)  SubmitAsync(&RedshiftClient::DescribeLoggingStatus, __VA_ARGS__)
#define DescribeLoggingStatusCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeLoggingStatus, REQUEST)

#define DescribeNodeConfigurationOptionsAsync(...)  SubmitAsync(&RedshiftClient::DescribeNodeConfigurationOptions, __VA_ARGS__)
#define DescribeNodeConfigurationOptionsCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeNodeConfigurationOptions, REQUEST)

#define DescribeOrderableClusterOptionsAsync(...)  SubmitAsync(&RedshiftClient::DescribeOrderableClusterOptions, __VA_ARGS__)
#define DescribeOrderableClusterOptionsCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeOrderableClusterOptions, REQUEST)

#define DescribePartnersAsync(...)  SubmitAsync(&RedshiftClient::DescribePartners, __VA_ARGS__)
#define DescribePartnersCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribePartners, REQUEST)

#define DescribeReservedNodeExchangeStatusAsync(...)  SubmitAsync(&RedshiftClient::DescribeReservedNodeExchangeStatus, __VA_ARGS__)
#define DescribeReservedNodeExchangeStatusCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeReservedNodeExchangeStatus, REQUEST)

#define DescribeReservedNodeOfferingsAsync(...)  SubmitAsync(&RedshiftClient::DescribeReservedNodeOfferings, __VA_ARGS__)
#define DescribeReservedNodeOfferingsCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeReservedNodeOfferings, REQUEST)

#define DescribeReservedNodesAsync(...)  SubmitAsync(&RedshiftClient::DescribeReservedNodes, __VA_ARGS__)
#define DescribeReservedNodesCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeReservedNodes, REQUEST)

#define DescribeResizeAsync(...)  SubmitAsync(&RedshiftClient::DescribeResize, __VA_ARGS__)
#define DescribeResizeCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeResize, REQUEST)

#define DescribeScheduledActionsAsync(...)  SubmitAsync(&RedshiftClient::DescribeScheduledActions, __VA_ARGS__)
#define DescribeScheduledActionsCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeScheduledActions, REQUEST)

#define DescribeSnapshotCopyGrantsAsync(...)  SubmitAsync(&RedshiftClient::DescribeSnapshotCopyGrants, __VA_ARGS__)
#define DescribeSnapshotCopyGrantsCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeSnapshotCopyGrants, REQUEST)

#define DescribeSnapshotSchedulesAsync(...)  SubmitAsync(&RedshiftClient::DescribeSnapshotSchedules, __VA_ARGS__)
#define DescribeSnapshotSchedulesCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeSnapshotSchedules, REQUEST)

#define DescribeStorageAsync(...)  SubmitAsync(&RedshiftClient::DescribeStorage, __VA_ARGS__)
#define DescribeStorageCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeStorage, REQUEST)

#define DescribeTableRestoreStatusAsync(...)  SubmitAsync(&RedshiftClient::DescribeTableRestoreStatus, __VA_ARGS__)
#define DescribeTableRestoreStatusCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeTableRestoreStatus, REQUEST)

#define DescribeTagsAsync(...)  SubmitAsync(&RedshiftClient::DescribeTags, __VA_ARGS__)
#define DescribeTagsCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeTags, REQUEST)

#define DescribeUsageLimitsAsync(...)  SubmitAsync(&RedshiftClient::DescribeUsageLimits, __VA_ARGS__)
#define DescribeUsageLimitsCallable(REQUEST)  SubmitCallable(&RedshiftClient::DescribeUsageLimits, REQUEST)

#define DisableLoggingAsync(...)  SubmitAsync(&RedshiftClient::DisableLogging, __VA_ARGS__)
#define DisableLoggingCallable(REQUEST)  SubmitCallable(&RedshiftClient::DisableLogging, REQUEST)

#define DisableSnapshotCopyAsync(...)  SubmitAsync(&RedshiftClient::DisableSnapshotCopy, __VA_ARGS__)
#define DisableSnapshotCopyCallable(REQUEST)  SubmitCallable(&RedshiftClient::DisableSnapshotCopy, REQUEST)

#define DisassociateDataShareConsumerAsync(...)  SubmitAsync(&RedshiftClient::DisassociateDataShareConsumer, __VA_ARGS__)
#define DisassociateDataShareConsumerCallable(REQUEST)  SubmitCallable(&RedshiftClient::DisassociateDataShareConsumer, REQUEST)

#define EnableLoggingAsync(...)  SubmitAsync(&RedshiftClient::EnableLogging, __VA_ARGS__)
#define EnableLoggingCallable(REQUEST)  SubmitCallable(&RedshiftClient::EnableLogging, REQUEST)

#define EnableSnapshotCopyAsync(...)  SubmitAsync(&RedshiftClient::EnableSnapshotCopy, __VA_ARGS__)
#define EnableSnapshotCopyCallable(REQUEST)  SubmitCallable(&RedshiftClient::EnableSnapshotCopy, REQUEST)

#define GetClusterCredentialsAsync(...)  SubmitAsync(&RedshiftClient::GetClusterCredentials, __VA_ARGS__)
#define GetClusterCredentialsCallable(REQUEST)  SubmitCallable(&RedshiftClient::GetClusterCredentials, REQUEST)

#define GetClusterCredentialsWithIAMAsync(...)  SubmitAsync(&RedshiftClient::GetClusterCredentialsWithIAM, __VA_ARGS__)
#define GetClusterCredentialsWithIAMCallable(REQUEST)  SubmitCallable(&RedshiftClient::GetClusterCredentialsWithIAM, REQUEST)

#define GetReservedNodeExchangeConfigurationOptionsAsync(...)  SubmitAsync(&RedshiftClient::GetReservedNodeExchangeConfigurationOptions, __VA_ARGS__)
#define GetReservedNodeExchangeConfigurationOptionsCallable(REQUEST)  SubmitCallable(&RedshiftClient::GetReservedNodeExchangeConfigurationOptions, REQUEST)

#define GetReservedNodeExchangeOfferingsAsync(...)  SubmitAsync(&RedshiftClient::GetReservedNodeExchangeOfferings, __VA_ARGS__)
#define GetReservedNodeExchangeOfferingsCallable(REQUEST)  SubmitCallable(&RedshiftClient::GetReservedNodeExchangeOfferings, REQUEST)

#define ModifyAquaConfigurationAsync(...)  SubmitAsync(&RedshiftClient::ModifyAquaConfiguration, __VA_ARGS__)
#define ModifyAquaConfigurationCallable(REQUEST)  SubmitCallable(&RedshiftClient::ModifyAquaConfiguration, REQUEST)

#define ModifyAuthenticationProfileAsync(...)  SubmitAsync(&RedshiftClient::ModifyAuthenticationProfile, __VA_ARGS__)
#define ModifyAuthenticationProfileCallable(REQUEST)  SubmitCallable(&RedshiftClient::ModifyAuthenticationProfile, REQUEST)

#define ModifyClusterAsync(...)  SubmitAsync(&RedshiftClient::ModifyCluster, __VA_ARGS__)
#define ModifyClusterCallable(REQUEST)  SubmitCallable(&RedshiftClient::ModifyCluster, REQUEST)

#define ModifyClusterDbRevisionAsync(...)  SubmitAsync(&RedshiftClient::ModifyClusterDbRevision, __VA_ARGS__)
#define ModifyClusterDbRevisionCallable(REQUEST)  SubmitCallable(&RedshiftClient::ModifyClusterDbRevision, REQUEST)

#define ModifyClusterIamRolesAsync(...)  SubmitAsync(&RedshiftClient::ModifyClusterIamRoles, __VA_ARGS__)
#define ModifyClusterIamRolesCallable(REQUEST)  SubmitCallable(&RedshiftClient::ModifyClusterIamRoles, REQUEST)

#define ModifyClusterMaintenanceAsync(...)  SubmitAsync(&RedshiftClient::ModifyClusterMaintenance, __VA_ARGS__)
#define ModifyClusterMaintenanceCallable(REQUEST)  SubmitCallable(&RedshiftClient::ModifyClusterMaintenance, REQUEST)

#define ModifyClusterParameterGroupAsync(...)  SubmitAsync(&RedshiftClient::ModifyClusterParameterGroup, __VA_ARGS__)
#define ModifyClusterParameterGroupCallable(REQUEST)  SubmitCallable(&RedshiftClient::ModifyClusterParameterGroup, REQUEST)

#define ModifyClusterSnapshotAsync(...)  SubmitAsync(&RedshiftClient::ModifyClusterSnapshot, __VA_ARGS__)
#define ModifyClusterSnapshotCallable(REQUEST)  SubmitCallable(&RedshiftClient::ModifyClusterSnapshot, REQUEST)

#define ModifyClusterSnapshotScheduleAsync(...)  SubmitAsync(&RedshiftClient::ModifyClusterSnapshotSchedule, __VA_ARGS__)
#define ModifyClusterSnapshotScheduleCallable(REQUEST)  SubmitCallable(&RedshiftClient::ModifyClusterSnapshotSchedule, REQUEST)

#define ModifyClusterSubnetGroupAsync(...)  SubmitAsync(&RedshiftClient::ModifyClusterSubnetGroup, __VA_ARGS__)
#define ModifyClusterSubnetGroupCallable(REQUEST)  SubmitCallable(&RedshiftClient::ModifyClusterSubnetGroup, REQUEST)

#define ModifyEndpointAccessAsync(...)  SubmitAsync(&RedshiftClient::ModifyEndpointAccess, __VA_ARGS__)
#define ModifyEndpointAccessCallable(REQUEST)  SubmitCallable(&RedshiftClient::ModifyEndpointAccess, REQUEST)

#define ModifyEventSubscriptionAsync(...)  SubmitAsync(&RedshiftClient::ModifyEventSubscription, __VA_ARGS__)
#define ModifyEventSubscriptionCallable(REQUEST)  SubmitCallable(&RedshiftClient::ModifyEventSubscription, REQUEST)

#define ModifyScheduledActionAsync(...)  SubmitAsync(&RedshiftClient::ModifyScheduledAction, __VA_ARGS__)
#define ModifyScheduledActionCallable(REQUEST)  SubmitCallable(&RedshiftClient::ModifyScheduledAction, REQUEST)

#define ModifySnapshotCopyRetentionPeriodAsync(...)  SubmitAsync(&RedshiftClient::ModifySnapshotCopyRetentionPeriod, __VA_ARGS__)
#define ModifySnapshotCopyRetentionPeriodCallable(REQUEST)  SubmitCallable(&RedshiftClient::ModifySnapshotCopyRetentionPeriod, REQUEST)

#define ModifySnapshotScheduleAsync(...)  SubmitAsync(&RedshiftClient::ModifySnapshotSchedule, __VA_ARGS__)
#define ModifySnapshotScheduleCallable(REQUEST)  SubmitCallable(&RedshiftClient::ModifySnapshotSchedule, REQUEST)

#define ModifyUsageLimitAsync(...)  SubmitAsync(&RedshiftClient::ModifyUsageLimit, __VA_ARGS__)
#define ModifyUsageLimitCallable(REQUEST)  SubmitCallable(&RedshiftClient::ModifyUsageLimit, REQUEST)

#define PauseClusterAsync(...)  SubmitAsync(&RedshiftClient::PauseCluster, __VA_ARGS__)
#define PauseClusterCallable(REQUEST)  SubmitCallable(&RedshiftClient::PauseCluster, REQUEST)

#define PurchaseReservedNodeOfferingAsync(...)  SubmitAsync(&RedshiftClient::PurchaseReservedNodeOffering, __VA_ARGS__)
#define PurchaseReservedNodeOfferingCallable(REQUEST)  SubmitCallable(&RedshiftClient::PurchaseReservedNodeOffering, REQUEST)

#define RebootClusterAsync(...)  SubmitAsync(&RedshiftClient::RebootCluster, __VA_ARGS__)
#define RebootClusterCallable(REQUEST)  SubmitCallable(&RedshiftClient::RebootCluster, REQUEST)

#define RejectDataShareAsync(...)  SubmitAsync(&RedshiftClient::RejectDataShare, __VA_ARGS__)
#define RejectDataShareCallable(REQUEST)  SubmitCallable(&RedshiftClient::RejectDataShare, REQUEST)

#define ResetClusterParameterGroupAsync(...)  SubmitAsync(&RedshiftClient::ResetClusterParameterGroup, __VA_ARGS__)
#define ResetClusterParameterGroupCallable(REQUEST)  SubmitCallable(&RedshiftClient::ResetClusterParameterGroup, REQUEST)

#define ResizeClusterAsync(...)  SubmitAsync(&RedshiftClient::ResizeCluster, __VA_ARGS__)
#define ResizeClusterCallable(REQUEST)  SubmitCallable(&RedshiftClient::ResizeCluster, REQUEST)

#define RestoreFromClusterSnapshotAsync(...)  SubmitAsync(&RedshiftClient::RestoreFromClusterSnapshot, __VA_ARGS__)
#define RestoreFromClusterSnapshotCallable(REQUEST)  SubmitCallable(&RedshiftClient::RestoreFromClusterSnapshot, REQUEST)

#define RestoreTableFromClusterSnapshotAsync(...)  SubmitAsync(&RedshiftClient::RestoreTableFromClusterSnapshot, __VA_ARGS__)
#define RestoreTableFromClusterSnapshotCallable(REQUEST)  SubmitCallable(&RedshiftClient::RestoreTableFromClusterSnapshot, REQUEST)

#define ResumeClusterAsync(...)  SubmitAsync(&RedshiftClient::ResumeCluster, __VA_ARGS__)
#define ResumeClusterCallable(REQUEST)  SubmitCallable(&RedshiftClient::ResumeCluster, REQUEST)

#define RevokeClusterSecurityGroupIngressAsync(...)  SubmitAsync(&RedshiftClient::RevokeClusterSecurityGroupIngress, __VA_ARGS__)
#define RevokeClusterSecurityGroupIngressCallable(REQUEST)  SubmitCallable(&RedshiftClient::RevokeClusterSecurityGroupIngress, REQUEST)

#define RevokeEndpointAccessAsync(...)  SubmitAsync(&RedshiftClient::RevokeEndpointAccess, __VA_ARGS__)
#define RevokeEndpointAccessCallable(REQUEST)  SubmitCallable(&RedshiftClient::RevokeEndpointAccess, REQUEST)

#define RevokeSnapshotAccessAsync(...)  SubmitAsync(&RedshiftClient::RevokeSnapshotAccess, __VA_ARGS__)
#define RevokeSnapshotAccessCallable(REQUEST)  SubmitCallable(&RedshiftClient::RevokeSnapshotAccess, REQUEST)

#define RotateEncryptionKeyAsync(...)  SubmitAsync(&RedshiftClient::RotateEncryptionKey, __VA_ARGS__)
#define RotateEncryptionKeyCallable(REQUEST)  SubmitCallable(&RedshiftClient::RotateEncryptionKey, REQUEST)

#define UpdatePartnerStatusAsync(...)  SubmitAsync(&RedshiftClient::UpdatePartnerStatus, __VA_ARGS__)
#define UpdatePartnerStatusCallable(REQUEST)  SubmitCallable(&RedshiftClient::UpdatePartnerStatus, REQUEST)

