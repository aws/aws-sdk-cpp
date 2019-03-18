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
#include <aws/ce/model/EC2Specification.h>
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
   * <p>Hardware specifications for the service that you want recommendations
   * for.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ServiceSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API ServiceSpecification
  {
  public:
    ServiceSpecification();
    ServiceSpecification(Aws::Utils::Json::JsonView jsonValue);
    ServiceSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon EC2 hardware specifications that you want AWS to provide
     * recommendations for.</p>
     */
    inline const EC2Specification& GetEC2Specification() const{ return m_eC2Specification; }

    /**
     * <p>The Amazon EC2 hardware specifications that you want AWS to provide
     * recommendations for.</p>
     */
    inline bool EC2SpecificationHasBeenSet() const { return m_eC2SpecificationHasBeenSet; }

    /**
     * <p>The Amazon EC2 hardware specifications that you want AWS to provide
     * recommendations for.</p>
     */
    inline void SetEC2Specification(const EC2Specification& value) { m_eC2SpecificationHasBeenSet = true; m_eC2Specification = value; }

    /**
     * <p>The Amazon EC2 hardware specifications that you want AWS to provide
     * recommendations for.</p>
     */
    inline void SetEC2Specification(EC2Specification&& value) { m_eC2SpecificationHasBeenSet = true; m_eC2Specification = std::move(value); }

    /**
     * <p>The Amazon EC2 hardware specifications that you want AWS to provide
     * recommendations for.</p>
     */
    inline ServiceSpecification& WithEC2Specification(const EC2Specification& value) { SetEC2Specification(value); return *this;}

    /**
     * <p>The Amazon EC2 hardware specifications that you want AWS to provide
     * recommendations for.</p>
     */
    inline ServiceSpecification& WithEC2Specification(EC2Specification&& value) { SetEC2Specification(std::move(value)); return *this;}

  private:

    EC2Specification m_eC2Specification;
    bool m_eC2SpecificationHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
