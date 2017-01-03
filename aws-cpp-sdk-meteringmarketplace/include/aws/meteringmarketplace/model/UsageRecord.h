﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MarketplaceMetering
{
namespace Model
{

  /**
   * <p>A UsageRecord indicates a quantity of usage for a given product, customer,
   * dimension and time.</p> <p>Multiple requests with the same UsageRecords as input
   * will be deduplicated to prevent double charges.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/UsageRecord">AWS
   * API Reference</a></p>
   */
  class AWS_MARKETPLACEMETERING_API UsageRecord
  {
  public:
    UsageRecord();
    UsageRecord(const Aws::Utils::Json::JsonValue& jsonValue);
    UsageRecord& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Timestamp of the hour, recorded in UTC. The seconds and milliseconds portions
     * of the timestamp will be ignored.</p> <p>Your application can meter usage for up
     * to one hour in the past.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>Timestamp of the hour, recorded in UTC. The seconds and milliseconds portions
     * of the timestamp will be ignored.</p> <p>Your application can meter usage for up
     * to one hour in the past.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Timestamp of the hour, recorded in UTC. The seconds and milliseconds portions
     * of the timestamp will be ignored.</p> <p>Your application can meter usage for up
     * to one hour in the past.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Timestamp of the hour, recorded in UTC. The seconds and milliseconds portions
     * of the timestamp will be ignored.</p> <p>Your application can meter usage for up
     * to one hour in the past.</p>
     */
    inline UsageRecord& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>Timestamp of the hour, recorded in UTC. The seconds and milliseconds portions
     * of the timestamp will be ignored.</p> <p>Your application can meter usage for up
     * to one hour in the past.</p>
     */
    inline UsageRecord& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The CustomerIdentifier is obtained through the ResolveCustomer operation and
     * represents an individual buyer in your application.</p>
     */
    inline const Aws::String& GetCustomerIdentifier() const{ return m_customerIdentifier; }

    /**
     * <p>The CustomerIdentifier is obtained through the ResolveCustomer operation and
     * represents an individual buyer in your application.</p>
     */
    inline void SetCustomerIdentifier(const Aws::String& value) { m_customerIdentifierHasBeenSet = true; m_customerIdentifier = value; }

    /**
     * <p>The CustomerIdentifier is obtained through the ResolveCustomer operation and
     * represents an individual buyer in your application.</p>
     */
    inline void SetCustomerIdentifier(Aws::String&& value) { m_customerIdentifierHasBeenSet = true; m_customerIdentifier = value; }

    /**
     * <p>The CustomerIdentifier is obtained through the ResolveCustomer operation and
     * represents an individual buyer in your application.</p>
     */
    inline void SetCustomerIdentifier(const char* value) { m_customerIdentifierHasBeenSet = true; m_customerIdentifier.assign(value); }

    /**
     * <p>The CustomerIdentifier is obtained through the ResolveCustomer operation and
     * represents an individual buyer in your application.</p>
     */
    inline UsageRecord& WithCustomerIdentifier(const Aws::String& value) { SetCustomerIdentifier(value); return *this;}

    /**
     * <p>The CustomerIdentifier is obtained through the ResolveCustomer operation and
     * represents an individual buyer in your application.</p>
     */
    inline UsageRecord& WithCustomerIdentifier(Aws::String&& value) { SetCustomerIdentifier(value); return *this;}

    /**
     * <p>The CustomerIdentifier is obtained through the ResolveCustomer operation and
     * represents an individual buyer in your application.</p>
     */
    inline UsageRecord& WithCustomerIdentifier(const char* value) { SetCustomerIdentifier(value); return *this;}

    /**
     * <p>During the process of registering a product on AWS Marketplace, up to eight
     * dimensions are specified. These represent different units of value in your
     * application.</p>
     */
    inline const Aws::String& GetDimension() const{ return m_dimension; }

    /**
     * <p>During the process of registering a product on AWS Marketplace, up to eight
     * dimensions are specified. These represent different units of value in your
     * application.</p>
     */
    inline void SetDimension(const Aws::String& value) { m_dimensionHasBeenSet = true; m_dimension = value; }

    /**
     * <p>During the process of registering a product on AWS Marketplace, up to eight
     * dimensions are specified. These represent different units of value in your
     * application.</p>
     */
    inline void SetDimension(Aws::String&& value) { m_dimensionHasBeenSet = true; m_dimension = value; }

    /**
     * <p>During the process of registering a product on AWS Marketplace, up to eight
     * dimensions are specified. These represent different units of value in your
     * application.</p>
     */
    inline void SetDimension(const char* value) { m_dimensionHasBeenSet = true; m_dimension.assign(value); }

    /**
     * <p>During the process of registering a product on AWS Marketplace, up to eight
     * dimensions are specified. These represent different units of value in your
     * application.</p>
     */
    inline UsageRecord& WithDimension(const Aws::String& value) { SetDimension(value); return *this;}

    /**
     * <p>During the process of registering a product on AWS Marketplace, up to eight
     * dimensions are specified. These represent different units of value in your
     * application.</p>
     */
    inline UsageRecord& WithDimension(Aws::String&& value) { SetDimension(value); return *this;}

    /**
     * <p>During the process of registering a product on AWS Marketplace, up to eight
     * dimensions are specified. These represent different units of value in your
     * application.</p>
     */
    inline UsageRecord& WithDimension(const char* value) { SetDimension(value); return *this;}

    /**
     * <p>The quantity of usage consumed by the customer for the given dimension and
     * time.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The quantity of usage consumed by the customer for the given dimension and
     * time.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The quantity of usage consumed by the customer for the given dimension and
     * time.</p>
     */
    inline UsageRecord& WithQuantity(int value) { SetQuantity(value); return *this;}

  private:
    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;
    Aws::String m_customerIdentifier;
    bool m_customerIdentifierHasBeenSet;
    Aws::String m_dimension;
    bool m_dimensionHasBeenSet;
    int m_quantity;
    bool m_quantityHasBeenSet;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
