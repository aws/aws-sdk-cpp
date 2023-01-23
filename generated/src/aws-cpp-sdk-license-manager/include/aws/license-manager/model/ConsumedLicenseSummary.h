/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ConsumedLicenseSummary
  {
  public:
    AWS_LICENSEMANAGER_API ConsumedLicenseSummary();
    AWS_LICENSEMANAGER_API ConsumedLicenseSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API ConsumedLicenseSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Resource type of the resource consuming a license.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Resource type of the resource consuming a license.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Resource type of the resource consuming a license.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Resource type of the resource consuming a license.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Resource type of the resource consuming a license.</p>
     */
    inline ConsumedLicenseSummary& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>Resource type of the resource consuming a license.</p>
     */
    inline ConsumedLicenseSummary& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>Number of licenses consumed by the resource.</p>
     */
    inline long long GetConsumedLicenses() const{ return m_consumedLicenses; }

    /**
     * <p>Number of licenses consumed by the resource.</p>
     */
    inline bool ConsumedLicensesHasBeenSet() const { return m_consumedLicensesHasBeenSet; }

    /**
     * <p>Number of licenses consumed by the resource.</p>
     */
    inline void SetConsumedLicenses(long long value) { m_consumedLicensesHasBeenSet = true; m_consumedLicenses = value; }

    /**
     * <p>Number of licenses consumed by the resource.</p>
     */
    inline ConsumedLicenseSummary& WithConsumedLicenses(long long value) { SetConsumedLicenses(value); return *this;}

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    long long m_consumedLicenses;
    bool m_consumedLicensesHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
