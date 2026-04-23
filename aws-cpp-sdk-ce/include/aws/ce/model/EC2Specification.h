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
   * <p>The Amazon EC2 hardware specifications that you want AWS to provide
   * recommendations for.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/EC2Specification">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API EC2Specification
  {
  public:
    EC2Specification();
    EC2Specification(Aws::Utils::Json::JsonView jsonValue);
    EC2Specification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether you want a recommendation for standard or convertible
     * reservations.</p>
     */
    inline const OfferingClass& GetOfferingClass() const{ return m_offeringClass; }

    /**
     * <p>Whether you want a recommendation for standard or convertible
     * reservations.</p>
     */
    inline bool OfferingClassHasBeenSet() const { return m_offeringClassHasBeenSet; }

    /**
     * <p>Whether you want a recommendation for standard or convertible
     * reservations.</p>
     */
    inline void SetOfferingClass(const OfferingClass& value) { m_offeringClassHasBeenSet = true; m_offeringClass = value; }

    /**
     * <p>Whether you want a recommendation for standard or convertible
     * reservations.</p>
     */
    inline void SetOfferingClass(OfferingClass&& value) { m_offeringClassHasBeenSet = true; m_offeringClass = std::move(value); }

    /**
     * <p>Whether you want a recommendation for standard or convertible
     * reservations.</p>
     */
    inline EC2Specification& WithOfferingClass(const OfferingClass& value) { SetOfferingClass(value); return *this;}

    /**
     * <p>Whether you want a recommendation for standard or convertible
     * reservations.</p>
     */
    inline EC2Specification& WithOfferingClass(OfferingClass&& value) { SetOfferingClass(std::move(value)); return *this;}

  private:

    OfferingClass m_offeringClass;
    bool m_offeringClassHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
