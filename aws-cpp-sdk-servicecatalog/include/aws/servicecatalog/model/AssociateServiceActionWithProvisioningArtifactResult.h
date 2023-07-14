﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API AssociateServiceActionWithProvisioningArtifactResult
  {
  public:
    AssociateServiceActionWithProvisioningArtifactResult();
    AssociateServiceActionWithProvisioningArtifactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AssociateServiceActionWithProvisioningArtifactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
