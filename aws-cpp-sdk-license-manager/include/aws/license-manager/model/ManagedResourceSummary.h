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
   * <p>Summary for a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ManagedResourceSummary">AWS
   * API Reference</a></p>
   */
  class AWS_LICENSEMANAGER_API ManagedResourceSummary
  {
  public:
    ManagedResourceSummary();
    ManagedResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    ManagedResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Type of resource associated with a license (instance, host, or AMI).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Type of resource associated with a license (instance, host, or AMI).</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Type of resource associated with a license (instance, host, or AMI).</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Type of resource associated with a license (instance, host, or AMI).</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Type of resource associated with a license (instance, host, or AMI).</p>
     */
    inline ManagedResourceSummary& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>Type of resource associated with a license (instance, host, or AMI).</p>
     */
    inline ManagedResourceSummary& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>Number of resources associated with licenses.</p>
     */
    inline long long GetAssociationCount() const{ return m_associationCount; }

    /**
     * <p>Number of resources associated with licenses.</p>
     */
    inline bool AssociationCountHasBeenSet() const { return m_associationCountHasBeenSet; }

    /**
     * <p>Number of resources associated with licenses.</p>
     */
    inline void SetAssociationCount(long long value) { m_associationCountHasBeenSet = true; m_associationCount = value; }

    /**
     * <p>Number of resources associated with licenses.</p>
     */
    inline ManagedResourceSummary& WithAssociationCount(long long value) { SetAssociationCount(value); return *this;}

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    long long m_associationCount;
    bool m_associationCountHasBeenSet;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
