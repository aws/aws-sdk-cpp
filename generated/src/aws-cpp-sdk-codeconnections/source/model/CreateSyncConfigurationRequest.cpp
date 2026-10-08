/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeconnections/model/CreateSyncConfigurationRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodeConnections::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateSyncConfigurationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_branchHasBeenSet) {
    mapSize++;
  }
  if (m_configFileHasBeenSet) {
    mapSize++;
  }
  if (m_repositoryLinkIdHasBeenSet) {
    mapSize++;
  }
  if (m_resourceNameHasBeenSet) {
    mapSize++;
  }
  if (m_roleArnHasBeenSet) {
    mapSize++;
  }
  if (m_syncTypeHasBeenSet) {
    mapSize++;
  }
  if (m_publishDeploymentStatusHasBeenSet) {
    mapSize++;
  }
  if (m_triggerResourceUpdateOnHasBeenSet) {
    mapSize++;
  }
  if (m_pullRequestCommentHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_branchHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Branch"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_branch.c_str()));
  }

  if (m_configFileHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ConfigFile"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_configFile.c_str()));
  }

  if (m_repositoryLinkIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RepositoryLinkId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_repositoryLinkId.c_str()));
  }

  if (m_resourceNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourceName.c_str()));
  }

  if (m_roleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_roleArn.c_str()));
  }

  if (m_syncTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SyncType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SyncConfigurationTypeMapper::GetNameForSyncConfigurationType(m_syncType).c_str()));
  }

  if (m_publishDeploymentStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PublishDeploymentStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        PublishDeploymentStatusMapper::GetNameForPublishDeploymentStatus(m_publishDeploymentStatus).c_str()));
  }

  if (m_triggerResourceUpdateOnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TriggerResourceUpdateOn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        TriggerResourceUpdateOnMapper::GetNameForTriggerResourceUpdateOn(m_triggerResourceUpdateOn).c_str()));
  }

  if (m_pullRequestCommentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PullRequestComment"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(PullRequestCommentMapper::GetNameForPullRequestComment(m_pullRequestComment).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateSyncConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
