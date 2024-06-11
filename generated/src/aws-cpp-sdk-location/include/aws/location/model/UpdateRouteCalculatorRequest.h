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
  class UpdateRouteCalculatorRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API UpdateRouteCalculatorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRouteCalculator"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the route calculator resource to update.</p>
     */
    inline const Aws::String& GetCalculatorName() const{ return m_calculatorName; }
    inline bool CalculatorNameHasBeenSet() const { return m_calculatorNameHasBeenSet; }
    inline void SetCalculatorName(const Aws::String& value) { m_calculatorNameHasBeenSet = true; m_calculatorName = value; }
    inline void SetCalculatorName(Aws::String&& value) { m_calculatorNameHasBeenSet = true; m_calculatorName = std::move(value); }
    inline void SetCalculatorName(const char* value) { m_calculatorNameHasBeenSet = true; m_calculatorName.assign(value); }
    inline UpdateRouteCalculatorRequest& WithCalculatorName(const Aws::String& value) { SetCalculatorName(value); return *this;}
    inline UpdateRouteCalculatorRequest& WithCalculatorName(Aws::String&& value) { SetCalculatorName(std::move(value)); return *this;}
    inline UpdateRouteCalculatorRequest& WithCalculatorName(const char* value) { SetCalculatorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the description for the route calculator resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateRouteCalculatorRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateRouteCalculatorRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateRouteCalculatorRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_calculatorName;
    bool m_calculatorNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
