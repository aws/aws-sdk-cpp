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
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/meteringmarketplace/MarketplaceMeteringRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace MarketplaceMetering
{
namespace Model
{

  /**
   */
  class AWS_MARKETPLACEMETERING_API MeterUsageRequest : public MarketplaceMeteringRequest
  {
  public:
    MeterUsageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "MeterUsage"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code should be the same as the one used during the publishing of a new
     * product.</p>
     */
    inline const Aws::String& GetProductCode() const{ return m_productCode; }

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code should be the same as the one used during the publishing of a new
     * product.</p>
     */
    inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code should be the same as the one used during the publishing of a new
     * product.</p>
     */
    inline void SetProductCode(const Aws::String& value) { m_productCodeHasBeenSet = true; m_productCode = value; }

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code should be the same as the one used during the publishing of a new
     * product.</p>
     */
    inline void SetProductCode(Aws::String&& value) { m_productCodeHasBeenSet = true; m_productCode = std::move(value); }

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code should be the same as the one used during the publishing of a new
     * product.</p>
     */
    inline void SetProductCode(const char* value) { m_productCodeHasBeenSet = true; m_productCode.assign(value); }

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code should be the same as the one used during the publishing of a new
     * product.</p>
     */
    inline MeterUsageRequest& WithProductCode(const Aws::String& value) { SetProductCode(value); return *this;}

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code should be the same as the one used during the publishing of a new
     * product.</p>
     */
    inline MeterUsageRequest& WithProductCode(Aws::String&& value) { SetProductCode(std::move(value)); return *this;}

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code should be the same as the one used during the publishing of a new
     * product.</p>
     */
    inline MeterUsageRequest& WithProductCode(const char* value) { SetProductCode(value); return *this;}


    /**
     * <p>Timestamp, in UTC, for which the usage is being reported. Your application
     * can meter usage for up to one hour in the past. Make sure the timestamp value is
     * not before the start of the software usage.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>Timestamp, in UTC, for which the usage is being reported. Your application
     * can meter usage for up to one hour in the past. Make sure the timestamp value is
     * not before the start of the software usage.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>Timestamp, in UTC, for which the usage is being reported. Your application
     * can meter usage for up to one hour in the past. Make sure the timestamp value is
     * not before the start of the software usage.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Timestamp, in UTC, for which the usage is being reported. Your application
     * can meter usage for up to one hour in the past. Make sure the timestamp value is
     * not before the start of the software usage.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>Timestamp, in UTC, for which the usage is being reported. Your application
     * can meter usage for up to one hour in the past. Make sure the timestamp value is
     * not before the start of the software usage.</p>
     */
    inline MeterUsageRequest& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>Timestamp, in UTC, for which the usage is being reported. Your application
     * can meter usage for up to one hour in the past. Make sure the timestamp value is
     * not before the start of the software usage.</p>
     */
    inline MeterUsageRequest& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>It will be one of the fcp dimension name provided during the publishing of
     * the product.</p>
     */
    inline const Aws::String& GetUsageDimension() const{ return m_usageDimension; }

    /**
     * <p>It will be one of the fcp dimension name provided during the publishing of
     * the product.</p>
     */
    inline bool UsageDimensionHasBeenSet() const { return m_usageDimensionHasBeenSet; }

    /**
     * <p>It will be one of the fcp dimension name provided during the publishing of
     * the product.</p>
     */
    inline void SetUsageDimension(const Aws::String& value) { m_usageDimensionHasBeenSet = true; m_usageDimension = value; }

    /**
     * <p>It will be one of the fcp dimension name provided during the publishing of
     * the product.</p>
     */
    inline void SetUsageDimension(Aws::String&& value) { m_usageDimensionHasBeenSet = true; m_usageDimension = std::move(value); }

    /**
     * <p>It will be one of the fcp dimension name provided during the publishing of
     * the product.</p>
     */
    inline void SetUsageDimension(const char* value) { m_usageDimensionHasBeenSet = true; m_usageDimension.assign(value); }

    /**
     * <p>It will be one of the fcp dimension name provided during the publishing of
     * the product.</p>
     */
    inline MeterUsageRequest& WithUsageDimension(const Aws::String& value) { SetUsageDimension(value); return *this;}

    /**
     * <p>It will be one of the fcp dimension name provided during the publishing of
     * the product.</p>
     */
    inline MeterUsageRequest& WithUsageDimension(Aws::String&& value) { SetUsageDimension(std::move(value)); return *this;}

    /**
     * <p>It will be one of the fcp dimension name provided during the publishing of
     * the product.</p>
     */
    inline MeterUsageRequest& WithUsageDimension(const char* value) { SetUsageDimension(value); return *this;}


    /**
     * <p>Consumption value for the hour. Defaults to <code>0</code> if not
     * specified.</p>
     */
    inline int GetUsageQuantity() const{ return m_usageQuantity; }

    /**
     * <p>Consumption value for the hour. Defaults to <code>0</code> if not
     * specified.</p>
     */
    inline bool UsageQuantityHasBeenSet() const { return m_usageQuantityHasBeenSet; }

    /**
     * <p>Consumption value for the hour. Defaults to <code>0</code> if not
     * specified.</p>
     */
    inline void SetUsageQuantity(int value) { m_usageQuantityHasBeenSet = true; m_usageQuantity = value; }

    /**
     * <p>Consumption value for the hour. Defaults to <code>0</code> if not
     * specified.</p>
     */
    inline MeterUsageRequest& WithUsageQuantity(int value) { SetUsageQuantity(value); return *this;}


    /**
     * <p>Checks whether you have the permissions required for the action, but does not
     * make the request. If you have the permissions, the request returns
     * DryRunOperation; otherwise, it returns UnauthorizedException. Defaults to
     * <code>false</code> if not specified.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the permissions required for the action, but does not
     * make the request. If you have the permissions, the request returns
     * DryRunOperation; otherwise, it returns UnauthorizedException. Defaults to
     * <code>false</code> if not specified.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the permissions required for the action, but does not
     * make the request. If you have the permissions, the request returns
     * DryRunOperation; otherwise, it returns UnauthorizedException. Defaults to
     * <code>false</code> if not specified.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the permissions required for the action, but does not
     * make the request. If you have the permissions, the request returns
     * DryRunOperation; otherwise, it returns UnauthorizedException. Defaults to
     * <code>false</code> if not specified.</p>
     */
    inline MeterUsageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_productCode;
    bool m_productCodeHasBeenSet;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;

    Aws::String m_usageDimension;
    bool m_usageDimensionHasBeenSet;

    int m_usageQuantity;
    bool m_usageQuantityHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
