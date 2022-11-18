/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateNodeAsync(...)  SubmitAsync(&OpsWorksCMClient::AssociateNode, __VA_ARGS__)
#define AssociateNodeCallable(REQUEST)  SubmitCallable(&OpsWorksCMClient::AssociateNode, REQUEST)

#define CreateBackupAsync(...)  SubmitAsync(&OpsWorksCMClient::CreateBackup, __VA_ARGS__)
#define CreateBackupCallable(REQUEST)  SubmitCallable(&OpsWorksCMClient::CreateBackup, REQUEST)

#define CreateServerAsync(...)  SubmitAsync(&OpsWorksCMClient::CreateServer, __VA_ARGS__)
#define CreateServerCallable(REQUEST)  SubmitCallable(&OpsWorksCMClient::CreateServer, REQUEST)

#define DeleteBackupAsync(...)  SubmitAsync(&OpsWorksCMClient::DeleteBackup, __VA_ARGS__)
#define DeleteBackupCallable(REQUEST)  SubmitCallable(&OpsWorksCMClient::DeleteBackup, REQUEST)

#define DeleteServerAsync(...)  SubmitAsync(&OpsWorksCMClient::DeleteServer, __VA_ARGS__)
#define DeleteServerCallable(REQUEST)  SubmitCallable(&OpsWorksCMClient::DeleteServer, REQUEST)

#define DescribeAccountAttributesAsync(...)  SubmitAsync(&OpsWorksCMClient::DescribeAccountAttributes, __VA_ARGS__)
#define DescribeAccountAttributesCallable(REQUEST)  SubmitCallable(&OpsWorksCMClient::DescribeAccountAttributes, REQUEST)

#define DescribeBackupsAsync(...)  SubmitAsync(&OpsWorksCMClient::DescribeBackups, __VA_ARGS__)
#define DescribeBackupsCallable(REQUEST)  SubmitCallable(&OpsWorksCMClient::DescribeBackups, REQUEST)

#define DescribeEventsAsync(...)  SubmitAsync(&OpsWorksCMClient::DescribeEvents, __VA_ARGS__)
#define DescribeEventsCallable(REQUEST)  SubmitCallable(&OpsWorksCMClient::DescribeEvents, REQUEST)

#define DescribeNodeAssociationStatusAsync(...)  SubmitAsync(&OpsWorksCMClient::DescribeNodeAssociationStatus, __VA_ARGS__)
#define DescribeNodeAssociationStatusCallable(REQUEST)  SubmitCallable(&OpsWorksCMClient::DescribeNodeAssociationStatus, REQUEST)

#define DescribeServersAsync(...)  SubmitAsync(&OpsWorksCMClient::DescribeServers, __VA_ARGS__)
#define DescribeServersCallable(REQUEST)  SubmitCallable(&OpsWorksCMClient::DescribeServers, REQUEST)

#define DisassociateNodeAsync(...)  SubmitAsync(&OpsWorksCMClient::DisassociateNode, __VA_ARGS__)
#define DisassociateNodeCallable(REQUEST)  SubmitCallable(&OpsWorksCMClient::DisassociateNode, REQUEST)

#define ExportServerEngineAttributeAsync(...)  SubmitAsync(&OpsWorksCMClient::ExportServerEngineAttribute, __VA_ARGS__)
#define ExportServerEngineAttributeCallable(REQUEST)  SubmitCallable(&OpsWorksCMClient::ExportServerEngineAttribute, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&OpsWorksCMClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&OpsWorksCMClient::ListTagsForResource, REQUEST)

#define RestoreServerAsync(...)  SubmitAsync(&OpsWorksCMClient::RestoreServer, __VA_ARGS__)
#define RestoreServerCallable(REQUEST)  SubmitCallable(&OpsWorksCMClient::RestoreServer, REQUEST)

#define StartMaintenanceAsync(...)  SubmitAsync(&OpsWorksCMClient::StartMaintenance, __VA_ARGS__)
#define StartMaintenanceCallable(REQUEST)  SubmitCallable(&OpsWorksCMClient::StartMaintenance, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&OpsWorksCMClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&OpsWorksCMClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&OpsWorksCMClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&OpsWorksCMClient::UntagResource, REQUEST)

#define UpdateServerAsync(...)  SubmitAsync(&OpsWorksCMClient::UpdateServer, __VA_ARGS__)
#define UpdateServerCallable(REQUEST)  SubmitCallable(&OpsWorksCMClient::UpdateServer, REQUEST)

#define UpdateServerEngineAttributesAsync(...)  SubmitAsync(&OpsWorksCMClient::UpdateServerEngineAttributes, __VA_ARGS__)
#define UpdateServerEngineAttributesCallable(REQUEST)  SubmitCallable(&OpsWorksCMClient::UpdateServerEngineAttributes, REQUEST)

