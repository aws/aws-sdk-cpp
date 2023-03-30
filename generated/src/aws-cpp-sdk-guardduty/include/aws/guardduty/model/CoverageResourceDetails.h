/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/CoverageEksClusterDetails.h>
#include <aws/guardduty/model/ResourceType.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about the resource for each individual EKS cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CoverageResourceDetails">AWS
   * API Reference</a></p>
   */
  class CoverageResourceDetails
  {
  public:
    AWS_GUARDDUTY_API CoverageResourceDetails();
    AWS_GUARDDUTY_API CoverageResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CoverageResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>EKS cluster details involved in the coverage statistics.</p>
     */
    inline const CoverageEksClusterDetails& GetEksClusterDetails() const{ return m_eksClusterDetails; }

    /**
     * <p>EKS cluster details involved in the coverage statistics.</p>
     */
    inline bool EksClusterDetailsHasBeenSet() const { return m_eksClusterDetailsHasBeenSet; }

    /**
     * <p>EKS cluster details involved in the coverage statistics.</p>
     */
    inline void SetEksClusterDetails(const CoverageEksClusterDetails& value) { m_eksClusterDetailsHasBeenSet = true; m_eksClusterDetails = value; }

    /**
     * <p>EKS cluster details involved in the coverage statistics.</p>
     */
    inline void SetEksClusterDetails(CoverageEksClusterDetails&& value) { m_eksClusterDetailsHasBeenSet = true; m_eksClusterDetails = std::move(value); }

    /**
     * <p>EKS cluster details involved in the coverage statistics.</p>
     */
    inline CoverageResourceDetails& WithEksClusterDetails(const CoverageEksClusterDetails& value) { SetEksClusterDetails(value); return *this;}

    /**
     * <p>EKS cluster details involved in the coverage statistics.</p>
     */
    inline CoverageResourceDetails& WithEksClusterDetails(CoverageEksClusterDetails&& value) { SetEksClusterDetails(std::move(value)); return *this;}


    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline CoverageResourceDetails& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline CoverageResourceDetails& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}

  private:

    CoverageEksClusterDetails m_eksClusterDetails;
    bool m_eksClusterDetailsHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
