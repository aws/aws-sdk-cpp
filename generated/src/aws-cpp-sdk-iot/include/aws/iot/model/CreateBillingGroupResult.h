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


    /**
     * <p>The name you gave to the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupName() const{ return m_billingGroupName; }

    /**
     * <p>The name you gave to the billing group.</p>
     */
    inline void SetBillingGroupName(const Aws::String& value) { m_billingGroupName = value; }

    /**
     * <p>The name you gave to the billing group.</p>
     */
    inline void SetBillingGroupName(Aws::String&& value) { m_billingGroupName = std::move(value); }

    /**
     * <p>The name you gave to the billing group.</p>
     */
    inline void SetBillingGroupName(const char* value) { m_billingGroupName.assign(value); }

    /**
     * <p>The name you gave to the billing group.</p>
     */
    inline CreateBillingGroupResult& WithBillingGroupName(const Aws::String& value) { SetBillingGroupName(value); return *this;}

    /**
     * <p>The name you gave to the billing group.</p>
     */
    inline CreateBillingGroupResult& WithBillingGroupName(Aws::String&& value) { SetBillingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name you gave to the billing group.</p>
     */
    inline CreateBillingGroupResult& WithBillingGroupName(const char* value) { SetBillingGroupName(value); return *this;}


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
    inline CreateBillingGroupResult& WithBillingGroupArn(const Aws::String& value) { SetBillingGroupArn(value); return *this;}

    /**
     * <p>The ARN of the billing group.</p>
     */
    inline CreateBillingGroupResult& WithBillingGroupArn(Aws::String&& value) { SetBillingGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the billing group.</p>
     */
    inline CreateBillingGroupResult& WithBillingGroupArn(const char* value) { SetBillingGroupArn(value); return *this;}


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
    inline CreateBillingGroupResult& WithBillingGroupId(const Aws::String& value) { SetBillingGroupId(value); return *this;}

    /**
     * <p>The ID of the billing group.</p>
     */
    inline CreateBillingGroupResult& WithBillingGroupId(Aws::String&& value) { SetBillingGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the billing group.</p>
     */
    inline CreateBillingGroupResult& WithBillingGroupId(const char* value) { SetBillingGroupId(value); return *this;}

  private:

    Aws::String m_billingGroupName;

    Aws::String m_billingGroupArn;

    Aws::String m_billingGroupId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
