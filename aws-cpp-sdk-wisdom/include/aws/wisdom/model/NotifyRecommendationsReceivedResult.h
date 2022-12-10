/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wisdom/model/NotifyRecommendationsReceivedError.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class NotifyRecommendationsReceivedResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API NotifyRecommendationsReceivedResult();
    AWS_CONNECTWISDOMSERVICE_API NotifyRecommendationsReceivedResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API NotifyRecommendationsReceivedResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifiers of recommendations that are causing errors.</p>
     */
    inline const Aws::Vector<NotifyRecommendationsReceivedError>& GetErrors() const{ return m_errors; }

    /**
     * <p>The identifiers of recommendations that are causing errors.</p>
     */
    inline void SetErrors(const Aws::Vector<NotifyRecommendationsReceivedError>& value) { m_errors = value; }

    /**
     * <p>The identifiers of recommendations that are causing errors.</p>
     */
    inline void SetErrors(Aws::Vector<NotifyRecommendationsReceivedError>&& value) { m_errors = std::move(value); }

    /**
     * <p>The identifiers of recommendations that are causing errors.</p>
     */
    inline NotifyRecommendationsReceivedResult& WithErrors(const Aws::Vector<NotifyRecommendationsReceivedError>& value) { SetErrors(value); return *this;}

    /**
     * <p>The identifiers of recommendations that are causing errors.</p>
     */
    inline NotifyRecommendationsReceivedResult& WithErrors(Aws::Vector<NotifyRecommendationsReceivedError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>The identifiers of recommendations that are causing errors.</p>
     */
    inline NotifyRecommendationsReceivedResult& AddErrors(const NotifyRecommendationsReceivedError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>The identifiers of recommendations that are causing errors.</p>
     */
    inline NotifyRecommendationsReceivedResult& AddErrors(NotifyRecommendationsReceivedError&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendationIds() const{ return m_recommendationIds; }

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline void SetRecommendationIds(const Aws::Vector<Aws::String>& value) { m_recommendationIds = value; }

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline void SetRecommendationIds(Aws::Vector<Aws::String>&& value) { m_recommendationIds = std::move(value); }

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline NotifyRecommendationsReceivedResult& WithRecommendationIds(const Aws::Vector<Aws::String>& value) { SetRecommendationIds(value); return *this;}

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline NotifyRecommendationsReceivedResult& WithRecommendationIds(Aws::Vector<Aws::String>&& value) { SetRecommendationIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline NotifyRecommendationsReceivedResult& AddRecommendationIds(const Aws::String& value) { m_recommendationIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline NotifyRecommendationsReceivedResult& AddRecommendationIds(Aws::String&& value) { m_recommendationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline NotifyRecommendationsReceivedResult& AddRecommendationIds(const char* value) { m_recommendationIds.push_back(value); return *this; }

  private:

    Aws::Vector<NotifyRecommendationsReceivedError> m_errors;

    Aws::Vector<Aws::String> m_recommendationIds;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
