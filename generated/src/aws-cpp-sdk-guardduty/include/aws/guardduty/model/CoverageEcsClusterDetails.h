/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FargateDetails.h>
#include <aws/guardduty/model/ContainerInstanceDetails.h>
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
   * <p>Contains information about Amazon ECS cluster runtime coverage
   * details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CoverageEcsClusterDetails">AWS
   * API Reference</a></p>
   */
  class CoverageEcsClusterDetails
  {
  public:
    AWS_GUARDDUTY_API CoverageEcsClusterDetails();
    AWS_GUARDDUTY_API CoverageEcsClusterDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CoverageEcsClusterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon ECS cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the Amazon ECS cluster.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the Amazon ECS cluster.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the Amazon ECS cluster.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the Amazon ECS cluster.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the Amazon ECS cluster.</p>
     */
    inline CoverageEcsClusterDetails& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the Amazon ECS cluster.</p>
     */
    inline CoverageEcsClusterDetails& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon ECS cluster.</p>
     */
    inline CoverageEcsClusterDetails& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>Information about the Fargate details associated with the Amazon ECS
     * cluster.</p>
     */
    inline const FargateDetails& GetFargateDetails() const{ return m_fargateDetails; }

    /**
     * <p>Information about the Fargate details associated with the Amazon ECS
     * cluster.</p>
     */
    inline bool FargateDetailsHasBeenSet() const { return m_fargateDetailsHasBeenSet; }

    /**
     * <p>Information about the Fargate details associated with the Amazon ECS
     * cluster.</p>
     */
    inline void SetFargateDetails(const FargateDetails& value) { m_fargateDetailsHasBeenSet = true; m_fargateDetails = value; }

    /**
     * <p>Information about the Fargate details associated with the Amazon ECS
     * cluster.</p>
     */
    inline void SetFargateDetails(FargateDetails&& value) { m_fargateDetailsHasBeenSet = true; m_fargateDetails = std::move(value); }

    /**
     * <p>Information about the Fargate details associated with the Amazon ECS
     * cluster.</p>
     */
    inline CoverageEcsClusterDetails& WithFargateDetails(const FargateDetails& value) { SetFargateDetails(value); return *this;}

    /**
     * <p>Information about the Fargate details associated with the Amazon ECS
     * cluster.</p>
     */
    inline CoverageEcsClusterDetails& WithFargateDetails(FargateDetails&& value) { SetFargateDetails(std::move(value)); return *this;}


    /**
     * <p>Information about the Amazon ECS container running on Amazon EC2
     * instance.</p>
     */
    inline const ContainerInstanceDetails& GetContainerInstanceDetails() const{ return m_containerInstanceDetails; }

    /**
     * <p>Information about the Amazon ECS container running on Amazon EC2
     * instance.</p>
     */
    inline bool ContainerInstanceDetailsHasBeenSet() const { return m_containerInstanceDetailsHasBeenSet; }

    /**
     * <p>Information about the Amazon ECS container running on Amazon EC2
     * instance.</p>
     */
    inline void SetContainerInstanceDetails(const ContainerInstanceDetails& value) { m_containerInstanceDetailsHasBeenSet = true; m_containerInstanceDetails = value; }

    /**
     * <p>Information about the Amazon ECS container running on Amazon EC2
     * instance.</p>
     */
    inline void SetContainerInstanceDetails(ContainerInstanceDetails&& value) { m_containerInstanceDetailsHasBeenSet = true; m_containerInstanceDetails = std::move(value); }

    /**
     * <p>Information about the Amazon ECS container running on Amazon EC2
     * instance.</p>
     */
    inline CoverageEcsClusterDetails& WithContainerInstanceDetails(const ContainerInstanceDetails& value) { SetContainerInstanceDetails(value); return *this;}

    /**
     * <p>Information about the Amazon ECS container running on Amazon EC2
     * instance.</p>
     */
    inline CoverageEcsClusterDetails& WithContainerInstanceDetails(ContainerInstanceDetails&& value) { SetContainerInstanceDetails(std::move(value)); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    FargateDetails m_fargateDetails;
    bool m_fargateDetailsHasBeenSet = false;

    ContainerInstanceDetails m_containerInstanceDetails;
    bool m_containerInstanceDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
