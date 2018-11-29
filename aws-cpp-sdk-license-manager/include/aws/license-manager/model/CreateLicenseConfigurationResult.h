/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
  class AWS_LICENSEMANAGER_API CreateLicenseConfigurationResult
  {
  public:
    CreateLicenseConfigurationResult();
    CreateLicenseConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateLicenseConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>ARN of the license configuration object after its creation.</p>
     */
    inline const Aws::String& GetLicenseConfigurationArn() const{ return m_licenseConfigurationArn; }

    /**
     * <p>ARN of the license configuration object after its creation.</p>
     */
    inline void SetLicenseConfigurationArn(const Aws::String& value) { m_licenseConfigurationArn = value; }

    /**
     * <p>ARN of the license configuration object after its creation.</p>
     */
    inline void SetLicenseConfigurationArn(Aws::String&& value) { m_licenseConfigurationArn = std::move(value); }

    /**
     * <p>ARN of the license configuration object after its creation.</p>
     */
    inline void SetLicenseConfigurationArn(const char* value) { m_licenseConfigurationArn.assign(value); }

    /**
     * <p>ARN of the license configuration object after its creation.</p>
     */
    inline CreateLicenseConfigurationResult& WithLicenseConfigurationArn(const Aws::String& value) { SetLicenseConfigurationArn(value); return *this;}

    /**
     * <p>ARN of the license configuration object after its creation.</p>
     */
    inline CreateLicenseConfigurationResult& WithLicenseConfigurationArn(Aws::String&& value) { SetLicenseConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the license configuration object after its creation.</p>
     */
    inline CreateLicenseConfigurationResult& WithLicenseConfigurationArn(const char* value) { SetLicenseConfigurationArn(value); return *this;}

  private:

    Aws::String m_licenseConfigurationArn;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
