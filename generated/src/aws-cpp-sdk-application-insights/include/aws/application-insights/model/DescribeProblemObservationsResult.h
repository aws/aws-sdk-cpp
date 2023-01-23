/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/model/RelatedObservations.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class DescribeProblemObservationsResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API DescribeProblemObservationsResult();
    AWS_APPLICATIONINSIGHTS_API DescribeProblemObservationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API DescribeProblemObservationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Observations related to the problem.</p>
     */
    inline const RelatedObservations& GetRelatedObservations() const{ return m_relatedObservations; }

    /**
     * <p>Observations related to the problem.</p>
     */
    inline void SetRelatedObservations(const RelatedObservations& value) { m_relatedObservations = value; }

    /**
     * <p>Observations related to the problem.</p>
     */
    inline void SetRelatedObservations(RelatedObservations&& value) { m_relatedObservations = std::move(value); }

    /**
     * <p>Observations related to the problem.</p>
     */
    inline DescribeProblemObservationsResult& WithRelatedObservations(const RelatedObservations& value) { SetRelatedObservations(value); return *this;}

    /**
     * <p>Observations related to the problem.</p>
     */
    inline DescribeProblemObservationsResult& WithRelatedObservations(RelatedObservations&& value) { SetRelatedObservations(std::move(value)); return *this;}

  private:

    RelatedObservations m_relatedObservations;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
