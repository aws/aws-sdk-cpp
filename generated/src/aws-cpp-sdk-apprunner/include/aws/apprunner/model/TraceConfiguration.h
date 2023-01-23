/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/TracingVendor.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Describes the configuration of the tracing feature within an App Runner
   * observability configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/TraceConfiguration">AWS
   * API Reference</a></p>
   */
  class TraceConfiguration
  {
  public:
    AWS_APPRUNNER_API TraceConfiguration();
    AWS_APPRUNNER_API TraceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API TraceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The implementation provider chosen for tracing App Runner services.</p>
     */
    inline const TracingVendor& GetVendor() const{ return m_vendor; }

    /**
     * <p>The implementation provider chosen for tracing App Runner services.</p>
     */
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }

    /**
     * <p>The implementation provider chosen for tracing App Runner services.</p>
     */
    inline void SetVendor(const TracingVendor& value) { m_vendorHasBeenSet = true; m_vendor = value; }

    /**
     * <p>The implementation provider chosen for tracing App Runner services.</p>
     */
    inline void SetVendor(TracingVendor&& value) { m_vendorHasBeenSet = true; m_vendor = std::move(value); }

    /**
     * <p>The implementation provider chosen for tracing App Runner services.</p>
     */
    inline TraceConfiguration& WithVendor(const TracingVendor& value) { SetVendor(value); return *this;}

    /**
     * <p>The implementation provider chosen for tracing App Runner services.</p>
     */
    inline TraceConfiguration& WithVendor(TracingVendor&& value) { SetVendor(std::move(value)); return *this;}

  private:

    TracingVendor m_vendor;
    bool m_vendorHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
