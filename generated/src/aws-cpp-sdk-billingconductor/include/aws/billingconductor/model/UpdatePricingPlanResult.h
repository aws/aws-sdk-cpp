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
  class UpdatePricingPlanResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API UpdatePricingPlanResult();
    AWS_BILLINGCONDUCTOR_API UpdatePricingPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API UpdatePricingPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the updated pricing plan. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated pricing plan. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated pricing plan. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated pricing plan. </p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated pricing plan. </p>
     */
    inline UpdatePricingPlanResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated pricing plan. </p>
     */
    inline UpdatePricingPlanResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated pricing plan. </p>
     */
    inline UpdatePricingPlanResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The name of the pricing plan. The name must be unique to each pricing plan.
     * </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the pricing plan. The name must be unique to each pricing plan.
     * </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p> The name of the pricing plan. The name must be unique to each pricing plan.
     * </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p> The name of the pricing plan. The name must be unique to each pricing plan.
     * </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p> The name of the pricing plan. The name must be unique to each pricing plan.
     * </p>
     */
    inline UpdatePricingPlanResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the pricing plan. The name must be unique to each pricing plan.
     * </p>
     */
    inline UpdatePricingPlanResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the pricing plan. The name must be unique to each pricing plan.
     * </p>
     */
    inline UpdatePricingPlanResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline UpdatePricingPlanResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline UpdatePricingPlanResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline UpdatePricingPlanResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The pricing rules count that's currently associated with this pricing plan
     * list. </p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p> The pricing rules count that's currently associated with this pricing plan
     * list. </p>
     */
    inline void SetSize(long long value) { m_size = value; }

    /**
     * <p> The pricing rules count that's currently associated with this pricing plan
     * list. </p>
     */
    inline UpdatePricingPlanResult& WithSize(long long value) { SetSize(value); return *this;}


    /**
     * <p> The most recent time when the pricing plan was modified. </p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p> The most recent time when the pricing plan was modified. </p>
     */
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTime = value; }

    /**
     * <p> The most recent time when the pricing plan was modified. </p>
     */
    inline UpdatePricingPlanResult& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_description;

    long long m_size;

    long long m_lastModifiedTime;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
