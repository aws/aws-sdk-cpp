/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/InstanceConfiguration.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>The EC2 instance configuration used for recommendations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/Ec2InstanceConfiguration">AWS
   * API Reference</a></p>
   */
  class Ec2InstanceConfiguration
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API Ec2InstanceConfiguration();
    AWS_COSTOPTIMIZATIONHUB_API Ec2InstanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Ec2InstanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the instance.</p>
     */
    inline const InstanceConfiguration& GetInstance() const{ return m_instance; }

    /**
     * <p>Details about the instance.</p>
     */
    inline bool InstanceHasBeenSet() const { return m_instanceHasBeenSet; }

    /**
     * <p>Details about the instance.</p>
     */
    inline void SetInstance(const InstanceConfiguration& value) { m_instanceHasBeenSet = true; m_instance = value; }

    /**
     * <p>Details about the instance.</p>
     */
    inline void SetInstance(InstanceConfiguration&& value) { m_instanceHasBeenSet = true; m_instance = std::move(value); }

    /**
     * <p>Details about the instance.</p>
     */
    inline Ec2InstanceConfiguration& WithInstance(const InstanceConfiguration& value) { SetInstance(value); return *this;}

    /**
     * <p>Details about the instance.</p>
     */
    inline Ec2InstanceConfiguration& WithInstance(InstanceConfiguration&& value) { SetInstance(std::move(value)); return *this;}

  private:

    InstanceConfiguration m_instance;
    bool m_instanceHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
