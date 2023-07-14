﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/BillingGroupProperties.h>
#include <aws/iot/model/BillingGroupMetadata.h>
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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API DescribeBillingGroupResult
  {
  public:
    DescribeBillingGroupResult();
    DescribeBillingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeBillingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupName() const{ return m_billingGroupName; }

    /**
     * <p>The name of the billing group.</p>
     */
    inline void SetBillingGroupName(const Aws::String& value) { m_billingGroupName = value; }

    /**
     * <p>The name of the billing group.</p>
     */
    inline void SetBillingGroupName(Aws::String&& value) { m_billingGroupName = std::move(value); }

    /**
     * <p>The name of the billing group.</p>
     */
    inline void SetBillingGroupName(const char* value) { m_billingGroupName.assign(value); }

    /**
     * <p>The name of the billing group.</p>
     */
    inline DescribeBillingGroupResult& WithBillingGroupName(const Aws::String& value) { SetBillingGroupName(value); return *this;}

    /**
     * <p>The name of the billing group.</p>
     */
    inline DescribeBillingGroupResult& WithBillingGroupName(Aws::String&& value) { SetBillingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the billing group.</p>
     */
    inline DescribeBillingGroupResult& WithBillingGroupName(const char* value) { SetBillingGroupName(value); return *this;}


    /**
     * <p>The ID of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupId() const{ return m_billingGroupId; }

    /**
     * <p>The ID of the billing group.</p>
     */
    inline void SetBillingGroupId(const Aws::String& value) { m_billingGroupId = value; }

    /**
     * <p>The ID of the billing group.</p>
     */
    inline void SetBillingGroupId(Aws::String&& value) { m_billingGroupId = std::move(value); }

    /**
     * <p>The ID of the billing group.</p>
     */
    inline void SetBillingGroupId(const char* value) { m_billingGroupId.assign(value); }

    /**
     * <p>The ID of the billing group.</p>
     */
    inline DescribeBillingGroupResult& WithBillingGroupId(const Aws::String& value) { SetBillingGroupId(value); return *this;}

    /**
     * <p>The ID of the billing group.</p>
     */
    inline DescribeBillingGroupResult& WithBillingGroupId(Aws::String&& value) { SetBillingGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the billing group.</p>
     */
    inline DescribeBillingGroupResult& WithBillingGroupId(const char* value) { SetBillingGroupId(value); return *this;}


    /**
     * <p>The ARN of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupArn() const{ return m_billingGroupArn; }

    /**
     * <p>The ARN of the billing group.</p>
     */
    inline void SetBillingGroupArn(const Aws::String& value) { m_billingGroupArn = value; }

    /**
     * <p>The ARN of the billing group.</p>
     */
    inline void SetBillingGroupArn(Aws::String&& value) { m_billingGroupArn = std::move(value); }

    /**
     * <p>The ARN of the billing group.</p>
     */
    inline void SetBillingGroupArn(const char* value) { m_billingGroupArn.assign(value); }

    /**
     * <p>The ARN of the billing group.</p>
     */
    inline DescribeBillingGroupResult& WithBillingGroupArn(const Aws::String& value) { SetBillingGroupArn(value); return *this;}

    /**
     * <p>The ARN of the billing group.</p>
     */
    inline DescribeBillingGroupResult& WithBillingGroupArn(Aws::String&& value) { SetBillingGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the billing group.</p>
     */
    inline DescribeBillingGroupResult& WithBillingGroupArn(const char* value) { SetBillingGroupArn(value); return *this;}


    /**
     * <p>The version of the billing group.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The version of the billing group.</p>
     */
    inline void SetVersion(long long value) { m_version = value; }

    /**
     * <p>The version of the billing group.</p>
     */
    inline DescribeBillingGroupResult& WithVersion(long long value) { SetVersion(value); return *this;}


    /**
     * <p>The properties of the billing group.</p>
     */
    inline const BillingGroupProperties& GetBillingGroupProperties() const{ return m_billingGroupProperties; }

    /**
     * <p>The properties of the billing group.</p>
     */
    inline void SetBillingGroupProperties(const BillingGroupProperties& value) { m_billingGroupProperties = value; }

    /**
     * <p>The properties of the billing group.</p>
     */
    inline void SetBillingGroupProperties(BillingGroupProperties&& value) { m_billingGroupProperties = std::move(value); }

    /**
     * <p>The properties of the billing group.</p>
     */
    inline DescribeBillingGroupResult& WithBillingGroupProperties(const BillingGroupProperties& value) { SetBillingGroupProperties(value); return *this;}

    /**
     * <p>The properties of the billing group.</p>
     */
    inline DescribeBillingGroupResult& WithBillingGroupProperties(BillingGroupProperties&& value) { SetBillingGroupProperties(std::move(value)); return *this;}


    /**
     * <p>Additional information about the billing group.</p>
     */
    inline const BillingGroupMetadata& GetBillingGroupMetadata() const{ return m_billingGroupMetadata; }

    /**
     * <p>Additional information about the billing group.</p>
     */
    inline void SetBillingGroupMetadata(const BillingGroupMetadata& value) { m_billingGroupMetadata = value; }

    /**
     * <p>Additional information about the billing group.</p>
     */
    inline void SetBillingGroupMetadata(BillingGroupMetadata&& value) { m_billingGroupMetadata = std::move(value); }

    /**
     * <p>Additional information about the billing group.</p>
     */
    inline DescribeBillingGroupResult& WithBillingGroupMetadata(const BillingGroupMetadata& value) { SetBillingGroupMetadata(value); return *this;}

    /**
     * <p>Additional information about the billing group.</p>
     */
    inline DescribeBillingGroupResult& WithBillingGroupMetadata(BillingGroupMetadata&& value) { SetBillingGroupMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_billingGroupName;

    Aws::String m_billingGroupId;

    Aws::String m_billingGroupArn;

    long long m_version;

    BillingGroupProperties m_billingGroupProperties;

    BillingGroupMetadata m_billingGroupMetadata;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
