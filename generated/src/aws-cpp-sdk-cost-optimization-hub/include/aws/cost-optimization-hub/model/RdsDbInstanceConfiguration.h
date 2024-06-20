/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/DbInstanceConfiguration.h>
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
   * <p>The Amazon RDS DB instance configuration used for
   * recommendations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/RdsDbInstanceConfiguration">AWS
   * API Reference</a></p>
   */
  class RdsDbInstanceConfiguration
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API RdsDbInstanceConfiguration();
    AWS_COSTOPTIMIZATIONHUB_API RdsDbInstanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API RdsDbInstanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the instance configuration.</p>
     */
    inline const DbInstanceConfiguration& GetInstance() const{ return m_instance; }
    inline bool InstanceHasBeenSet() const { return m_instanceHasBeenSet; }
    inline void SetInstance(const DbInstanceConfiguration& value) { m_instanceHasBeenSet = true; m_instance = value; }
    inline void SetInstance(DbInstanceConfiguration&& value) { m_instanceHasBeenSet = true; m_instance = std::move(value); }
    inline RdsDbInstanceConfiguration& WithInstance(const DbInstanceConfiguration& value) { SetInstance(value); return *this;}
    inline RdsDbInstanceConfiguration& WithInstance(DbInstanceConfiguration&& value) { SetInstance(std::move(value)); return *this;}
    ///@}
  private:

    DbInstanceConfiguration m_instance;
    bool m_instanceHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
