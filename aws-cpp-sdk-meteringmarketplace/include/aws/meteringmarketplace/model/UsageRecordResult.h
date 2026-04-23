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
#include <aws/meteringmarketplace/model/UsageRecord.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/meteringmarketplace/model/UsageRecordResultStatus.h>
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
   * <p>A UsageRecordResult indicates the status of a given UsageRecord processed by
   * BatchMeterUsage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/UsageRecordResult">AWS
   * API Reference</a></p>
   */
  class AWS_MARKETPLACEMETERING_API UsageRecordResult
  {
  public:
    UsageRecordResult();
    UsageRecordResult(Aws::Utils::Json::JsonView jsonValue);
    UsageRecordResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The UsageRecord that was part of the BatchMeterUsage request.</p>
     */
    inline const UsageRecord& GetUsageRecord() const{ return m_usageRecord; }

    /**
     * <p>The UsageRecord that was part of the BatchMeterUsage request.</p>
     */
    inline bool UsageRecordHasBeenSet() const { return m_usageRecordHasBeenSet; }

    /**
     * <p>The UsageRecord that was part of the BatchMeterUsage request.</p>
     */
    inline void SetUsageRecord(const UsageRecord& value) { m_usageRecordHasBeenSet = true; m_usageRecord = value; }

    /**
     * <p>The UsageRecord that was part of the BatchMeterUsage request.</p>
     */
    inline void SetUsageRecord(UsageRecord&& value) { m_usageRecordHasBeenSet = true; m_usageRecord = std::move(value); }

    /**
     * <p>The UsageRecord that was part of the BatchMeterUsage request.</p>
     */
    inline UsageRecordResult& WithUsageRecord(const UsageRecord& value) { SetUsageRecord(value); return *this;}

    /**
     * <p>The UsageRecord that was part of the BatchMeterUsage request.</p>
     */
    inline UsageRecordResult& WithUsageRecord(UsageRecord&& value) { SetUsageRecord(std::move(value)); return *this;}


    /**
     * <p>The MeteringRecordId is a unique identifier for this metering event.</p>
     */
    inline const Aws::String& GetMeteringRecordId() const{ return m_meteringRecordId; }

    /**
     * <p>The MeteringRecordId is a unique identifier for this metering event.</p>
     */
    inline bool MeteringRecordIdHasBeenSet() const { return m_meteringRecordIdHasBeenSet; }

    /**
     * <p>The MeteringRecordId is a unique identifier for this metering event.</p>
     */
    inline void SetMeteringRecordId(const Aws::String& value) { m_meteringRecordIdHasBeenSet = true; m_meteringRecordId = value; }

    /**
     * <p>The MeteringRecordId is a unique identifier for this metering event.</p>
     */
    inline void SetMeteringRecordId(Aws::String&& value) { m_meteringRecordIdHasBeenSet = true; m_meteringRecordId = std::move(value); }

    /**
     * <p>The MeteringRecordId is a unique identifier for this metering event.</p>
     */
    inline void SetMeteringRecordId(const char* value) { m_meteringRecordIdHasBeenSet = true; m_meteringRecordId.assign(value); }

    /**
     * <p>The MeteringRecordId is a unique identifier for this metering event.</p>
     */
    inline UsageRecordResult& WithMeteringRecordId(const Aws::String& value) { SetMeteringRecordId(value); return *this;}

    /**
     * <p>The MeteringRecordId is a unique identifier for this metering event.</p>
     */
    inline UsageRecordResult& WithMeteringRecordId(Aws::String&& value) { SetMeteringRecordId(std::move(value)); return *this;}

    /**
     * <p>The MeteringRecordId is a unique identifier for this metering event.</p>
     */
    inline UsageRecordResult& WithMeteringRecordId(const char* value) { SetMeteringRecordId(value); return *this;}


    /**
     * <p>The UsageRecordResult Status indicates the status of an individual
     * UsageRecord processed by BatchMeterUsage.</p> <ul> <li> <p> <i>Success</i>- The
     * UsageRecord was accepted and honored by BatchMeterUsage.</p> </li> <li> <p>
     * <i>CustomerNotSubscribed</i>- The CustomerIdentifier specified is not subscribed
     * to your product. The UsageRecord was not honored. Future UsageRecords for this
     * customer will fail until the customer subscribes to your product.</p> </li> <li>
     * <p> <i>DuplicateRecord</i>- Indicates that the UsageRecord was invalid and not
     * honored. A previously metered UsageRecord had the same customer, dimension, and
     * time, but a different quantity.</p> </li> </ul>
     */
    inline const UsageRecordResultStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The UsageRecordResult Status indicates the status of an individual
     * UsageRecord processed by BatchMeterUsage.</p> <ul> <li> <p> <i>Success</i>- The
     * UsageRecord was accepted and honored by BatchMeterUsage.</p> </li> <li> <p>
     * <i>CustomerNotSubscribed</i>- The CustomerIdentifier specified is not subscribed
     * to your product. The UsageRecord was not honored. Future UsageRecords for this
     * customer will fail until the customer subscribes to your product.</p> </li> <li>
     * <p> <i>DuplicateRecord</i>- Indicates that the UsageRecord was invalid and not
     * honored. A previously metered UsageRecord had the same customer, dimension, and
     * time, but a different quantity.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The UsageRecordResult Status indicates the status of an individual
     * UsageRecord processed by BatchMeterUsage.</p> <ul> <li> <p> <i>Success</i>- The
     * UsageRecord was accepted and honored by BatchMeterUsage.</p> </li> <li> <p>
     * <i>CustomerNotSubscribed</i>- The CustomerIdentifier specified is not subscribed
     * to your product. The UsageRecord was not honored. Future UsageRecords for this
     * customer will fail until the customer subscribes to your product.</p> </li> <li>
     * <p> <i>DuplicateRecord</i>- Indicates that the UsageRecord was invalid and not
     * honored. A previously metered UsageRecord had the same customer, dimension, and
     * time, but a different quantity.</p> </li> </ul>
     */
    inline void SetStatus(const UsageRecordResultStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The UsageRecordResult Status indicates the status of an individual
     * UsageRecord processed by BatchMeterUsage.</p> <ul> <li> <p> <i>Success</i>- The
     * UsageRecord was accepted and honored by BatchMeterUsage.</p> </li> <li> <p>
     * <i>CustomerNotSubscribed</i>- The CustomerIdentifier specified is not subscribed
     * to your product. The UsageRecord was not honored. Future UsageRecords for this
     * customer will fail until the customer subscribes to your product.</p> </li> <li>
     * <p> <i>DuplicateRecord</i>- Indicates that the UsageRecord was invalid and not
     * honored. A previously metered UsageRecord had the same customer, dimension, and
     * time, but a different quantity.</p> </li> </ul>
     */
    inline void SetStatus(UsageRecordResultStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The UsageRecordResult Status indicates the status of an individual
     * UsageRecord processed by BatchMeterUsage.</p> <ul> <li> <p> <i>Success</i>- The
     * UsageRecord was accepted and honored by BatchMeterUsage.</p> </li> <li> <p>
     * <i>CustomerNotSubscribed</i>- The CustomerIdentifier specified is not subscribed
     * to your product. The UsageRecord was not honored. Future UsageRecords for this
     * customer will fail until the customer subscribes to your product.</p> </li> <li>
     * <p> <i>DuplicateRecord</i>- Indicates that the UsageRecord was invalid and not
     * honored. A previously metered UsageRecord had the same customer, dimension, and
     * time, but a different quantity.</p> </li> </ul>
     */
    inline UsageRecordResult& WithStatus(const UsageRecordResultStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The UsageRecordResult Status indicates the status of an individual
     * UsageRecord processed by BatchMeterUsage.</p> <ul> <li> <p> <i>Success</i>- The
     * UsageRecord was accepted and honored by BatchMeterUsage.</p> </li> <li> <p>
     * <i>CustomerNotSubscribed</i>- The CustomerIdentifier specified is not subscribed
     * to your product. The UsageRecord was not honored. Future UsageRecords for this
     * customer will fail until the customer subscribes to your product.</p> </li> <li>
     * <p> <i>DuplicateRecord</i>- Indicates that the UsageRecord was invalid and not
     * honored. A previously metered UsageRecord had the same customer, dimension, and
     * time, but a different quantity.</p> </li> </ul>
     */
    inline UsageRecordResult& WithStatus(UsageRecordResultStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    UsageRecord m_usageRecord;
    bool m_usageRecordHasBeenSet;

    Aws::String m_meteringRecordId;
    bool m_meteringRecordIdHasBeenSet;

    UsageRecordResultStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
