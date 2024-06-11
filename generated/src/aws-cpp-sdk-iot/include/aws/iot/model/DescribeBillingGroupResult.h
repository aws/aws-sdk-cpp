/**
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
  class DescribeBillingGroupResult
  {
  public:
    AWS_IOT_API DescribeBillingGroupResult();
    AWS_IOT_API DescribeBillingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeBillingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupName() const{ return m_billingGroupName; }
    inline void SetBillingGroupName(const Aws::String& value) { m_billingGroupName = value; }
    inline void SetBillingGroupName(Aws::String&& value) { m_billingGroupName = std::move(value); }
    inline void SetBillingGroupName(const char* value) { m_billingGroupName.assign(value); }
    inline DescribeBillingGroupResult& WithBillingGroupName(const Aws::String& value) { SetBillingGroupName(value); return *this;}
    inline DescribeBillingGroupResult& WithBillingGroupName(Aws::String&& value) { SetBillingGroupName(std::move(value)); return *this;}
    inline DescribeBillingGroupResult& WithBillingGroupName(const char* value) { SetBillingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupId() const{ return m_billingGroupId; }
    inline void SetBillingGroupId(const Aws::String& value) { m_billingGroupId = value; }
    inline void SetBillingGroupId(Aws::String&& value) { m_billingGroupId = std::move(value); }
    inline void SetBillingGroupId(const char* value) { m_billingGroupId.assign(value); }
    inline DescribeBillingGroupResult& WithBillingGroupId(const Aws::String& value) { SetBillingGroupId(value); return *this;}
    inline DescribeBillingGroupResult& WithBillingGroupId(Aws::String&& value) { SetBillingGroupId(std::move(value)); return *this;}
    inline DescribeBillingGroupResult& WithBillingGroupId(const char* value) { SetBillingGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupArn() const{ return m_billingGroupArn; }
    inline void SetBillingGroupArn(const Aws::String& value) { m_billingGroupArn = value; }
    inline void SetBillingGroupArn(Aws::String&& value) { m_billingGroupArn = std::move(value); }
    inline void SetBillingGroupArn(const char* value) { m_billingGroupArn.assign(value); }
    inline DescribeBillingGroupResult& WithBillingGroupArn(const Aws::String& value) { SetBillingGroupArn(value); return *this;}
    inline DescribeBillingGroupResult& WithBillingGroupArn(Aws::String&& value) { SetBillingGroupArn(std::move(value)); return *this;}
    inline DescribeBillingGroupResult& WithBillingGroupArn(const char* value) { SetBillingGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the billing group.</p>
     */
    inline long long GetVersion() const{ return m_version; }
    inline void SetVersion(long long value) { m_version = value; }
    inline DescribeBillingGroupResult& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the billing group.</p>
     */
    inline const BillingGroupProperties& GetBillingGroupProperties() const{ return m_billingGroupProperties; }
    inline void SetBillingGroupProperties(const BillingGroupProperties& value) { m_billingGroupProperties = value; }
    inline void SetBillingGroupProperties(BillingGroupProperties&& value) { m_billingGroupProperties = std::move(value); }
    inline DescribeBillingGroupResult& WithBillingGroupProperties(const BillingGroupProperties& value) { SetBillingGroupProperties(value); return *this;}
    inline DescribeBillingGroupResult& WithBillingGroupProperties(BillingGroupProperties&& value) { SetBillingGroupProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the billing group.</p>
     */
    inline const BillingGroupMetadata& GetBillingGroupMetadata() const{ return m_billingGroupMetadata; }
    inline void SetBillingGroupMetadata(const BillingGroupMetadata& value) { m_billingGroupMetadata = value; }
    inline void SetBillingGroupMetadata(BillingGroupMetadata&& value) { m_billingGroupMetadata = std::move(value); }
    inline DescribeBillingGroupResult& WithBillingGroupMetadata(const BillingGroupMetadata& value) { SetBillingGroupMetadata(value); return *this;}
    inline DescribeBillingGroupResult& WithBillingGroupMetadata(BillingGroupMetadata&& value) { SetBillingGroupMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeBillingGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeBillingGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeBillingGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_billingGroupName;

    Aws::String m_billingGroupId;

    Aws::String m_billingGroupArn;

    long long m_version;

    BillingGroupProperties m_billingGroupProperties;

    BillingGroupMetadata m_billingGroupMetadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
