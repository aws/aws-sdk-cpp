/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/EC2ResourceUtilization.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Resource utilization of current resource. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ResourceUtilization">AWS
   * API Reference</a></p>
   */
  class ResourceUtilization
  {
  public:
    AWS_COSTEXPLORER_API ResourceUtilization();
    AWS_COSTEXPLORER_API ResourceUtilization(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ResourceUtilization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The utilization of current Amazon EC2 instance. </p>
     */
    inline const EC2ResourceUtilization& GetEC2ResourceUtilization() const{ return m_eC2ResourceUtilization; }

    /**
     * <p>The utilization of current Amazon EC2 instance. </p>
     */
    inline bool EC2ResourceUtilizationHasBeenSet() const { return m_eC2ResourceUtilizationHasBeenSet; }

    /**
     * <p>The utilization of current Amazon EC2 instance. </p>
     */
    inline void SetEC2ResourceUtilization(const EC2ResourceUtilization& value) { m_eC2ResourceUtilizationHasBeenSet = true; m_eC2ResourceUtilization = value; }

    /**
     * <p>The utilization of current Amazon EC2 instance. </p>
     */
    inline void SetEC2ResourceUtilization(EC2ResourceUtilization&& value) { m_eC2ResourceUtilizationHasBeenSet = true; m_eC2ResourceUtilization = std::move(value); }

    /**
     * <p>The utilization of current Amazon EC2 instance. </p>
     */
    inline ResourceUtilization& WithEC2ResourceUtilization(const EC2ResourceUtilization& value) { SetEC2ResourceUtilization(value); return *this;}

    /**
     * <p>The utilization of current Amazon EC2 instance. </p>
     */
    inline ResourceUtilization& WithEC2ResourceUtilization(EC2ResourceUtilization&& value) { SetEC2ResourceUtilization(std::move(value)); return *this;}

  private:

    EC2ResourceUtilization m_eC2ResourceUtilization;
    bool m_eC2ResourceUtilizationHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
