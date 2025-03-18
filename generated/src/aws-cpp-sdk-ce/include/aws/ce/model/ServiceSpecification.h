/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ServiceSpecification
  {
  public:
    AWS_COSTEXPLORER_API ServiceSpecification() = default;
    AWS_COSTEXPLORER_API ServiceSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ServiceSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon EC2 hardware specifications that you want Amazon Web Services to
     * provide recommendations for.</p>
     */
    inline const EC2Specification& GetEC2Specification() const { return m_eC2Specification; }
    inline bool EC2SpecificationHasBeenSet() const { return m_eC2SpecificationHasBeenSet; }
    template<typename EC2SpecificationT = EC2Specification>
    void SetEC2Specification(EC2SpecificationT&& value) { m_eC2SpecificationHasBeenSet = true; m_eC2Specification = std::forward<EC2SpecificationT>(value); }
    template<typename EC2SpecificationT = EC2Specification>
    ServiceSpecification& WithEC2Specification(EC2SpecificationT&& value) { SetEC2Specification(std::forward<EC2SpecificationT>(value)); return *this;}
    ///@}
  private:

    EC2Specification m_eC2Specification;
    bool m_eC2SpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
