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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
  class AWS_MARKETPLACEMETERING_API MeterUsageResult
  {
  public:
    MeterUsageResult();
    MeterUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    MeterUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metering record id.</p>
     */
    inline const Aws::String& GetMeteringRecordId() const{ return m_meteringRecordId; }

    /**
     * <p>Metering record id.</p>
     */
    inline void SetMeteringRecordId(const Aws::String& value) { m_meteringRecordId = value; }

    /**
     * <p>Metering record id.</p>
     */
    inline void SetMeteringRecordId(Aws::String&& value) { m_meteringRecordId = std::move(value); }

    /**
     * <p>Metering record id.</p>
     */
    inline void SetMeteringRecordId(const char* value) { m_meteringRecordId.assign(value); }

    /**
     * <p>Metering record id.</p>
     */
    inline MeterUsageResult& WithMeteringRecordId(const Aws::String& value) { SetMeteringRecordId(value); return *this;}

    /**
     * <p>Metering record id.</p>
     */
    inline MeterUsageResult& WithMeteringRecordId(Aws::String&& value) { SetMeteringRecordId(std::move(value)); return *this;}

    /**
     * <p>Metering record id.</p>
     */
    inline MeterUsageResult& WithMeteringRecordId(const char* value) { SetMeteringRecordId(value); return *this;}

  private:

    Aws::String m_meteringRecordId;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
