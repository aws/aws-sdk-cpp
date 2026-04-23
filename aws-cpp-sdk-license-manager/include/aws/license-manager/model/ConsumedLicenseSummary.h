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
#include <aws/license-manager/model/ResourceType.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>Details about license consumption.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ConsumedLicenseSummary">AWS
   * API Reference</a></p>
   */
  class AWS_LICENSEMANAGER_API ConsumedLicenseSummary
  {
  public:
    ConsumedLicenseSummary();
    ConsumedLicenseSummary(Aws::Utils::Json::JsonView jsonValue);
    ConsumedLicenseSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Resource type of the resource consuming a license (instance, host, or
     * AMI).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Resource type of the resource consuming a license (instance, host, or
     * AMI).</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Resource type of the resource consuming a license (instance, host, or
     * AMI).</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Resource type of the resource consuming a license (instance, host, or
     * AMI).</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Resource type of the resource consuming a license (instance, host, or
     * AMI).</p>
     */
    inline ConsumedLicenseSummary& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>Resource type of the resource consuming a license (instance, host, or
     * AMI).</p>
     */
    inline ConsumedLicenseSummary& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>Number of licenses consumed by a resource.</p>
     */
    inline long long GetConsumedLicenses() const{ return m_consumedLicenses; }

    /**
     * <p>Number of licenses consumed by a resource.</p>
     */
    inline bool ConsumedLicensesHasBeenSet() const { return m_consumedLicensesHasBeenSet; }

    /**
     * <p>Number of licenses consumed by a resource.</p>
     */
    inline void SetConsumedLicenses(long long value) { m_consumedLicensesHasBeenSet = true; m_consumedLicenses = value; }

    /**
     * <p>Number of licenses consumed by a resource.</p>
     */
    inline ConsumedLicenseSummary& WithConsumedLicenses(long long value) { SetConsumedLicenses(value); return *this;}

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    long long m_consumedLicenses;
    bool m_consumedLicensesHasBeenSet;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
