/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
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
namespace BillingConductor
{
namespace Model
{
  class DeletePricingPlanResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API DeletePricingPlanResult();
    AWS_BILLINGCONDUCTOR_API DeletePricingPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API DeletePricingPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The Amazon Resource Name (ARN) of the deleted pricing plan. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the deleted pricing plan. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the deleted pricing plan. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the deleted pricing plan. </p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the deleted pricing plan. </p>
     */
    inline DeletePricingPlanResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the deleted pricing plan. </p>
     */
    inline DeletePricingPlanResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the deleted pricing plan. </p>
     */
    inline DeletePricingPlanResult& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
