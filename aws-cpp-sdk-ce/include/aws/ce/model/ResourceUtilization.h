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
  class AWS_COSTEXPLORER_API ResourceUtilization
  {
  public:
    ResourceUtilization();
    ResourceUtilization(Aws::Utils::Json::JsonView jsonValue);
    ResourceUtilization& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Utilization of current Amazon EC2 Instance </p>
     */
    inline const EC2ResourceUtilization& GetEC2ResourceUtilization() const{ return m_eC2ResourceUtilization; }

    /**
     * <p>Utilization of current Amazon EC2 Instance </p>
     */
    inline bool EC2ResourceUtilizationHasBeenSet() const { return m_eC2ResourceUtilizationHasBeenSet; }

    /**
     * <p>Utilization of current Amazon EC2 Instance </p>
     */
    inline void SetEC2ResourceUtilization(const EC2ResourceUtilization& value) { m_eC2ResourceUtilizationHasBeenSet = true; m_eC2ResourceUtilization = value; }

    /**
     * <p>Utilization of current Amazon EC2 Instance </p>
     */
    inline void SetEC2ResourceUtilization(EC2ResourceUtilization&& value) { m_eC2ResourceUtilizationHasBeenSet = true; m_eC2ResourceUtilization = std::move(value); }

    /**
     * <p>Utilization of current Amazon EC2 Instance </p>
     */
    inline ResourceUtilization& WithEC2ResourceUtilization(const EC2ResourceUtilization& value) { SetEC2ResourceUtilization(value); return *this;}

    /**
     * <p>Utilization of current Amazon EC2 Instance </p>
     */
    inline ResourceUtilization& WithEC2ResourceUtilization(EC2ResourceUtilization&& value) { SetEC2ResourceUtilization(std::move(value)); return *this;}

  private:

    EC2ResourceUtilization m_eC2ResourceUtilization;
    bool m_eC2ResourceUtilizationHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
