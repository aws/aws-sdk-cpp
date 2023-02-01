/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>

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
namespace LicenseManager
{
namespace Model
{
  class DeleteLicenseConfigurationResult
  {
  public:
    AWS_LICENSEMANAGER_API DeleteLicenseConfigurationResult();
    AWS_LICENSEMANAGER_API DeleteLicenseConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API DeleteLicenseConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
