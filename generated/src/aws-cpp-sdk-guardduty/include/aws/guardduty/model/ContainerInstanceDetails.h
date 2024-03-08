/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
   * <p>Contains information about the Amazon EC2 instance that is running the Amazon
   * ECS container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ContainerInstanceDetails">AWS
   * API Reference</a></p>
   */
  class ContainerInstanceDetails
  {
  public:
    AWS_GUARDDUTY_API ContainerInstanceDetails();
    AWS_GUARDDUTY_API ContainerInstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ContainerInstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents the nodes in the Amazon ECS cluster that has a
     * <code>HEALTHY</code> coverage status.</p>
     */
    inline long long GetCoveredContainerInstances() const{ return m_coveredContainerInstances; }

    /**
     * <p>Represents the nodes in the Amazon ECS cluster that has a
     * <code>HEALTHY</code> coverage status.</p>
     */
    inline bool CoveredContainerInstancesHasBeenSet() const { return m_coveredContainerInstancesHasBeenSet; }

    /**
     * <p>Represents the nodes in the Amazon ECS cluster that has a
     * <code>HEALTHY</code> coverage status.</p>
     */
    inline void SetCoveredContainerInstances(long long value) { m_coveredContainerInstancesHasBeenSet = true; m_coveredContainerInstances = value; }

    /**
     * <p>Represents the nodes in the Amazon ECS cluster that has a
     * <code>HEALTHY</code> coverage status.</p>
     */
    inline ContainerInstanceDetails& WithCoveredContainerInstances(long long value) { SetCoveredContainerInstances(value); return *this;}


    /**
     * <p>Represents total number of nodes in the Amazon ECS cluster.</p>
     */
    inline long long GetCompatibleContainerInstances() const{ return m_compatibleContainerInstances; }

    /**
     * <p>Represents total number of nodes in the Amazon ECS cluster.</p>
     */
    inline bool CompatibleContainerInstancesHasBeenSet() const { return m_compatibleContainerInstancesHasBeenSet; }

    /**
     * <p>Represents total number of nodes in the Amazon ECS cluster.</p>
     */
    inline void SetCompatibleContainerInstances(long long value) { m_compatibleContainerInstancesHasBeenSet = true; m_compatibleContainerInstances = value; }

    /**
     * <p>Represents total number of nodes in the Amazon ECS cluster.</p>
     */
    inline ContainerInstanceDetails& WithCompatibleContainerInstances(long long value) { SetCompatibleContainerInstances(value); return *this;}

  private:

    long long m_coveredContainerInstances;
    bool m_coveredContainerInstancesHasBeenSet = false;

    long long m_compatibleContainerInstances;
    bool m_compatibleContainerInstancesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
