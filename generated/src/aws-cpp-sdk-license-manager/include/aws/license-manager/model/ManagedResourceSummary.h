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
   * <p>Summary information about a managed resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ManagedResourceSummary">AWS
   * API Reference</a></p>
   */
  class ManagedResourceSummary
  {
  public:
    AWS_LICENSEMANAGER_API ManagedResourceSummary() = default;
    AWS_LICENSEMANAGER_API ManagedResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API ManagedResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Type of resource associated with a license.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline ManagedResourceSummary& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of resources associated with licenses.</p>
     */
    inline long long GetAssociationCount() const { return m_associationCount; }
    inline bool AssociationCountHasBeenSet() const { return m_associationCountHasBeenSet; }
    inline void SetAssociationCount(long long value) { m_associationCountHasBeenSet = true; m_associationCount = value; }
    inline ManagedResourceSummary& WithAssociationCount(long long value) { SetAssociationCount(value); return *this;}
    ///@}
  private:

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    long long m_associationCount{0};
    bool m_associationCountHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
