/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EKS
{
namespace Model
{
  enum class ConnectorConfigProvider
  {
    NOT_SET,
    EKS_ANYWHERE,
    ANTHOS,
    GKE,
    AKS,
    OPENSHIFT,
    TANZU,
    RANCHER,
    EC2,
    OTHER
  };

namespace ConnectorConfigProviderMapper
{
AWS_EKS_API ConnectorConfigProvider GetConnectorConfigProviderForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForConnectorConfigProvider(ConnectorConfigProvider value);
} // namespace ConnectorConfigProviderMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
