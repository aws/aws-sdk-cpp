/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class DescribeRouteCalculatorRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API DescribeRouteCalculatorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRouteCalculator"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the route calculator resource.</p>
     */
    inline const Aws::String& GetCalculatorName() const { return m_calculatorName; }
    inline bool CalculatorNameHasBeenSet() const { return m_calculatorNameHasBeenSet; }
    template<typename CalculatorNameT = Aws::String>
    void SetCalculatorName(CalculatorNameT&& value) { m_calculatorNameHasBeenSet = true; m_calculatorName = std::forward<CalculatorNameT>(value); }
    template<typename CalculatorNameT = Aws::String>
    DescribeRouteCalculatorRequest& WithCalculatorName(CalculatorNameT&& value) { SetCalculatorName(std::forward<CalculatorNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_calculatorName;
    bool m_calculatorNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
