/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/meteringmarketplace/model/UsageAllocation.h>
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
namespace MarketplaceMetering
{
namespace Model
{

  /**
   * <p>A <code>UsageRecord</code> indicates a quantity of usage for a given product,
   * customer, dimension and time.</p> <p>Multiple requests with the same
   * <code>UsageRecords</code> as input will be de-duplicated to prevent double
   * charges.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/UsageRecord">AWS
   * API Reference</a></p>
   */
  class UsageRecord
  {
  public:
    AWS_MARKETPLACEMETERING_API UsageRecord();
    AWS_MARKETPLACEMETERING_API UsageRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEMETERING_API UsageRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEMETERING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Timestamp, in UTC, for which the usage is being reported.</p> <p>Your
     * application can meter usage for up to one hour in the past. Make sure the
     * <code>timestamp</code> value is not before the start of the software usage.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>Timestamp, in UTC, for which the usage is being reported.</p> <p>Your
     * application can meter usage for up to one hour in the past. Make sure the
     * <code>timestamp</code> value is not before the start of the software usage.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>Timestamp, in UTC, for which the usage is being reported.</p> <p>Your
     * application can meter usage for up to one hour in the past. Make sure the
     * <code>timestamp</code> value is not before the start of the software usage.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Timestamp, in UTC, for which the usage is being reported.</p> <p>Your
     * application can meter usage for up to one hour in the past. Make sure the
     * <code>timestamp</code> value is not before the start of the software usage.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>Timestamp, in UTC, for which the usage is being reported.</p> <p>Your
     * application can meter usage for up to one hour in the past. Make sure the
     * <code>timestamp</code> value is not before the start of the software usage.</p>
     */
    inline UsageRecord& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>Timestamp, in UTC, for which the usage is being reported.</p> <p>Your
     * application can meter usage for up to one hour in the past. Make sure the
     * <code>timestamp</code> value is not before the start of the software usage.</p>
     */
    inline UsageRecord& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>The <code>CustomerIdentifier</code> is obtained through the
     * <code>ResolveCustomer</code> operation and represents an individual buyer in
     * your application.</p>
     */
    inline const Aws::String& GetCustomerIdentifier() const{ return m_customerIdentifier; }

    /**
     * <p>The <code>CustomerIdentifier</code> is obtained through the
     * <code>ResolveCustomer</code> operation and represents an individual buyer in
     * your application.</p>
     */
    inline bool CustomerIdentifierHasBeenSet() const { return m_customerIdentifierHasBeenSet; }

    /**
     * <p>The <code>CustomerIdentifier</code> is obtained through the
     * <code>ResolveCustomer</code> operation and represents an individual buyer in
     * your application.</p>
     */
    inline void SetCustomerIdentifier(const Aws::String& value) { m_customerIdentifierHasBeenSet = true; m_customerIdentifier = value; }

    /**
     * <p>The <code>CustomerIdentifier</code> is obtained through the
     * <code>ResolveCustomer</code> operation and represents an individual buyer in
     * your application.</p>
     */
    inline void SetCustomerIdentifier(Aws::String&& value) { m_customerIdentifierHasBeenSet = true; m_customerIdentifier = std::move(value); }

    /**
     * <p>The <code>CustomerIdentifier</code> is obtained through the
     * <code>ResolveCustomer</code> operation and represents an individual buyer in
     * your application.</p>
     */
    inline void SetCustomerIdentifier(const char* value) { m_customerIdentifierHasBeenSet = true; m_customerIdentifier.assign(value); }

    /**
     * <p>The <code>CustomerIdentifier</code> is obtained through the
     * <code>ResolveCustomer</code> operation and represents an individual buyer in
     * your application.</p>
     */
    inline UsageRecord& WithCustomerIdentifier(const Aws::String& value) { SetCustomerIdentifier(value); return *this;}

    /**
     * <p>The <code>CustomerIdentifier</code> is obtained through the
     * <code>ResolveCustomer</code> operation and represents an individual buyer in
     * your application.</p>
     */
    inline UsageRecord& WithCustomerIdentifier(Aws::String&& value) { SetCustomerIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>CustomerIdentifier</code> is obtained through the
     * <code>ResolveCustomer</code> operation and represents an individual buyer in
     * your application.</p>
     */
    inline UsageRecord& WithCustomerIdentifier(const char* value) { SetCustomerIdentifier(value); return *this;}


    /**
     * <p>During the process of registering a product on AWS Marketplace, dimensions
     * are specified. These represent different units of value in your application.</p>
     */
    inline const Aws::String& GetDimension() const{ return m_dimension; }

    /**
     * <p>During the process of registering a product on AWS Marketplace, dimensions
     * are specified. These represent different units of value in your application.</p>
     */
    inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }

    /**
     * <p>During the process of registering a product on AWS Marketplace, dimensions
     * are specified. These represent different units of value in your application.</p>
     */
    inline void SetDimension(const Aws::String& value) { m_dimensionHasBeenSet = true; m_dimension = value; }

    /**
     * <p>During the process of registering a product on AWS Marketplace, dimensions
     * are specified. These represent different units of value in your application.</p>
     */
    inline void SetDimension(Aws::String&& value) { m_dimensionHasBeenSet = true; m_dimension = std::move(value); }

    /**
     * <p>During the process of registering a product on AWS Marketplace, dimensions
     * are specified. These represent different units of value in your application.</p>
     */
    inline void SetDimension(const char* value) { m_dimensionHasBeenSet = true; m_dimension.assign(value); }

    /**
     * <p>During the process of registering a product on AWS Marketplace, dimensions
     * are specified. These represent different units of value in your application.</p>
     */
    inline UsageRecord& WithDimension(const Aws::String& value) { SetDimension(value); return *this;}

    /**
     * <p>During the process of registering a product on AWS Marketplace, dimensions
     * are specified. These represent different units of value in your application.</p>
     */
    inline UsageRecord& WithDimension(Aws::String&& value) { SetDimension(std::move(value)); return *this;}

    /**
     * <p>During the process of registering a product on AWS Marketplace, dimensions
     * are specified. These represent different units of value in your application.</p>
     */
    inline UsageRecord& WithDimension(const char* value) { SetDimension(value); return *this;}


    /**
     * <p>The quantity of usage consumed by the customer for the given dimension and
     * time. Defaults to <code>0</code> if not specified.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The quantity of usage consumed by the customer for the given dimension and
     * time. Defaults to <code>0</code> if not specified.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The quantity of usage consumed by the customer for the given dimension and
     * time. Defaults to <code>0</code> if not specified.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The quantity of usage consumed by the customer for the given dimension and
     * time. Defaults to <code>0</code> if not specified.</p>
     */
    inline UsageRecord& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>The set of <code>UsageAllocations</code> to submit. The sum of all
     * <code>UsageAllocation</code> quantities must equal the Quantity of the
     * <code>UsageRecord</code>.</p>
     */
    inline const Aws::Vector<UsageAllocation>& GetUsageAllocations() const{ return m_usageAllocations; }

    /**
     * <p>The set of <code>UsageAllocations</code> to submit. The sum of all
     * <code>UsageAllocation</code> quantities must equal the Quantity of the
     * <code>UsageRecord</code>.</p>
     */
    inline bool UsageAllocationsHasBeenSet() const { return m_usageAllocationsHasBeenSet; }

    /**
     * <p>The set of <code>UsageAllocations</code> to submit. The sum of all
     * <code>UsageAllocation</code> quantities must equal the Quantity of the
     * <code>UsageRecord</code>.</p>
     */
    inline void SetUsageAllocations(const Aws::Vector<UsageAllocation>& value) { m_usageAllocationsHasBeenSet = true; m_usageAllocations = value; }

    /**
     * <p>The set of <code>UsageAllocations</code> to submit. The sum of all
     * <code>UsageAllocation</code> quantities must equal the Quantity of the
     * <code>UsageRecord</code>.</p>
     */
    inline void SetUsageAllocations(Aws::Vector<UsageAllocation>&& value) { m_usageAllocationsHasBeenSet = true; m_usageAllocations = std::move(value); }

    /**
     * <p>The set of <code>UsageAllocations</code> to submit. The sum of all
     * <code>UsageAllocation</code> quantities must equal the Quantity of the
     * <code>UsageRecord</code>.</p>
     */
    inline UsageRecord& WithUsageAllocations(const Aws::Vector<UsageAllocation>& value) { SetUsageAllocations(value); return *this;}

    /**
     * <p>The set of <code>UsageAllocations</code> to submit. The sum of all
     * <code>UsageAllocation</code> quantities must equal the Quantity of the
     * <code>UsageRecord</code>.</p>
     */
    inline UsageRecord& WithUsageAllocations(Aws::Vector<UsageAllocation>&& value) { SetUsageAllocations(std::move(value)); return *this;}

    /**
     * <p>The set of <code>UsageAllocations</code> to submit. The sum of all
     * <code>UsageAllocation</code> quantities must equal the Quantity of the
     * <code>UsageRecord</code>.</p>
     */
    inline UsageRecord& AddUsageAllocations(const UsageAllocation& value) { m_usageAllocationsHasBeenSet = true; m_usageAllocations.push_back(value); return *this; }

    /**
     * <p>The set of <code>UsageAllocations</code> to submit. The sum of all
     * <code>UsageAllocation</code> quantities must equal the Quantity of the
     * <code>UsageRecord</code>.</p>
     */
    inline UsageRecord& AddUsageAllocations(UsageAllocation&& value) { m_usageAllocationsHasBeenSet = true; m_usageAllocations.push_back(std::move(value)); return *this; }

  private:

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::String m_customerIdentifier;
    bool m_customerIdentifierHasBeenSet = false;

    Aws::String m_dimension;
    bool m_dimensionHasBeenSet = false;

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<UsageAllocation> m_usageAllocations;
    bool m_usageAllocationsHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
