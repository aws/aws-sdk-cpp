/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/OfferingClass.h>
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
   * <p>The Amazon EC2 hardware specifications that you want Amazon Web Services to
   * provide recommendations for.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/EC2Specification">AWS
   * API Reference</a></p>
   */
  class EC2Specification
  {
  public:
    AWS_COSTEXPLORER_API EC2Specification() = default;
    AWS_COSTEXPLORER_API EC2Specification(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API EC2Specification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether you want a recommendation for standard or convertible
     * reservations.</p>
     */
    inline OfferingClass GetOfferingClass() const { return m_offeringClass; }
    inline bool OfferingClassHasBeenSet() const { return m_offeringClassHasBeenSet; }
    inline void SetOfferingClass(OfferingClass value) { m_offeringClassHasBeenSet = true; m_offeringClass = value; }
    inline EC2Specification& WithOfferingClass(OfferingClass value) { SetOfferingClass(value); return *this;}
    ///@}
  private:

    OfferingClass m_offeringClass{OfferingClass::NOT_SET};
    bool m_offeringClassHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
