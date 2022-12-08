/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
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
namespace CodeCatalyst
{
namespace Model
{
  class GetSubscriptionResult
  {
  public:
    AWS_CODECATALYST_API GetSubscriptionResult();
    AWS_CODECATALYST_API GetSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API GetSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The type of the billing plan for the space.</p>
     */
    inline const Aws::String& GetSubscriptionType() const{ return m_subscriptionType; }

    /**
     * <p>The type of the billing plan for the space.</p>
     */
    inline void SetSubscriptionType(const Aws::String& value) { m_subscriptionType = value; }

    /**
     * <p>The type of the billing plan for the space.</p>
     */
    inline void SetSubscriptionType(Aws::String&& value) { m_subscriptionType = std::move(value); }

    /**
     * <p>The type of the billing plan for the space.</p>
     */
    inline void SetSubscriptionType(const char* value) { m_subscriptionType.assign(value); }

    /**
     * <p>The type of the billing plan for the space.</p>
     */
    inline GetSubscriptionResult& WithSubscriptionType(const Aws::String& value) { SetSubscriptionType(value); return *this;}

    /**
     * <p>The type of the billing plan for the space.</p>
     */
    inline GetSubscriptionResult& WithSubscriptionType(Aws::String&& value) { SetSubscriptionType(std::move(value)); return *this;}

    /**
     * <p>The type of the billing plan for the space.</p>
     */
    inline GetSubscriptionResult& WithSubscriptionType(const char* value) { SetSubscriptionType(value); return *this;}


    /**
     * <p>The display name of the Amazon Web Services account used for billing for the
     * space.</p>
     */
    inline const Aws::String& GetAwsAccountName() const{ return m_awsAccountName; }

    /**
     * <p>The display name of the Amazon Web Services account used for billing for the
     * space.</p>
     */
    inline void SetAwsAccountName(const Aws::String& value) { m_awsAccountName = value; }

    /**
     * <p>The display name of the Amazon Web Services account used for billing for the
     * space.</p>
     */
    inline void SetAwsAccountName(Aws::String&& value) { m_awsAccountName = std::move(value); }

    /**
     * <p>The display name of the Amazon Web Services account used for billing for the
     * space.</p>
     */
    inline void SetAwsAccountName(const char* value) { m_awsAccountName.assign(value); }

    /**
     * <p>The display name of the Amazon Web Services account used for billing for the
     * space.</p>
     */
    inline GetSubscriptionResult& WithAwsAccountName(const Aws::String& value) { SetAwsAccountName(value); return *this;}

    /**
     * <p>The display name of the Amazon Web Services account used for billing for the
     * space.</p>
     */
    inline GetSubscriptionResult& WithAwsAccountName(Aws::String&& value) { SetAwsAccountName(std::move(value)); return *this;}

    /**
     * <p>The display name of the Amazon Web Services account used for billing for the
     * space.</p>
     */
    inline GetSubscriptionResult& WithAwsAccountName(const char* value) { SetAwsAccountName(value); return *this;}

  private:

    Aws::String m_subscriptionType;

    Aws::String m_awsAccountName;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
