/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class CreateBillingGroupResult
  {
  public:
    AWS_IOT_API CreateBillingGroupResult();
    AWS_IOT_API CreateBillingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateBillingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name you gave to the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupName() const{ return m_billingGroupName; }
    inline void SetBillingGroupName(const Aws::String& value) { m_billingGroupName = value; }
    inline void SetBillingGroupName(Aws::String&& value) { m_billingGroupName = std::move(value); }
    inline void SetBillingGroupName(const char* value) { m_billingGroupName.assign(value); }
    inline CreateBillingGroupResult& WithBillingGroupName(const Aws::String& value) { SetBillingGroupName(value); return *this;}
    inline CreateBillingGroupResult& WithBillingGroupName(Aws::String&& value) { SetBillingGroupName(std::move(value)); return *this;}
    inline CreateBillingGroupResult& WithBillingGroupName(const char* value) { SetBillingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupArn() const{ return m_billingGroupArn; }
    inline void SetBillingGroupArn(const Aws::String& value) { m_billingGroupArn = value; }
    inline void SetBillingGroupArn(Aws::String&& value) { m_billingGroupArn = std::move(value); }
    inline void SetBillingGroupArn(const char* value) { m_billingGroupArn.assign(value); }
    inline CreateBillingGroupResult& WithBillingGroupArn(const Aws::String& value) { SetBillingGroupArn(value); return *this;}
    inline CreateBillingGroupResult& WithBillingGroupArn(Aws::String&& value) { SetBillingGroupArn(std::move(value)); return *this;}
    inline CreateBillingGroupResult& WithBillingGroupArn(const char* value) { SetBillingGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupId() const{ return m_billingGroupId; }
    inline void SetBillingGroupId(const Aws::String& value) { m_billingGroupId = value; }
    inline void SetBillingGroupId(Aws::String&& value) { m_billingGroupId = std::move(value); }
    inline void SetBillingGroupId(const char* value) { m_billingGroupId.assign(value); }
    inline CreateBillingGroupResult& WithBillingGroupId(const Aws::String& value) { SetBillingGroupId(value); return *this;}
    inline CreateBillingGroupResult& WithBillingGroupId(Aws::String&& value) { SetBillingGroupId(std::move(value)); return *this;}
    inline CreateBillingGroupResult& WithBillingGroupId(const char* value) { SetBillingGroupId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateBillingGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateBillingGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateBillingGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_billingGroupName;

    Aws::String m_billingGroupArn;

    Aws::String m_billingGroupId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
