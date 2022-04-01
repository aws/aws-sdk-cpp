﻿/**
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
  class AWS_LOCATIONSERVICE_API DeleteRouteCalculatorRequest : public LocationServiceRequest
  {
  public:
    DeleteRouteCalculatorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRouteCalculator"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the route calculator resource to be deleted.</p>
     */
    inline const Aws::String& GetCalculatorName() const{ return m_calculatorName; }

    /**
     * <p>The name of the route calculator resource to be deleted.</p>
     */
    inline bool CalculatorNameHasBeenSet() const { return m_calculatorNameHasBeenSet; }

    /**
     * <p>The name of the route calculator resource to be deleted.</p>
     */
    inline void SetCalculatorName(const Aws::String& value) { m_calculatorNameHasBeenSet = true; m_calculatorName = value; }

    /**
     * <p>The name of the route calculator resource to be deleted.</p>
     */
    inline void SetCalculatorName(Aws::String&& value) { m_calculatorNameHasBeenSet = true; m_calculatorName = std::move(value); }

    /**
     * <p>The name of the route calculator resource to be deleted.</p>
     */
    inline void SetCalculatorName(const char* value) { m_calculatorNameHasBeenSet = true; m_calculatorName.assign(value); }

    /**
     * <p>The name of the route calculator resource to be deleted.</p>
     */
    inline DeleteRouteCalculatorRequest& WithCalculatorName(const Aws::String& value) { SetCalculatorName(value); return *this;}

    /**
     * <p>The name of the route calculator resource to be deleted.</p>
     */
    inline DeleteRouteCalculatorRequest& WithCalculatorName(Aws::String&& value) { SetCalculatorName(std::move(value)); return *this;}

    /**
     * <p>The name of the route calculator resource to be deleted.</p>
     */
    inline DeleteRouteCalculatorRequest& WithCalculatorName(const char* value) { SetCalculatorName(value); return *this;}

  private:

    Aws::String m_calculatorName;
    bool m_calculatorNameHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
