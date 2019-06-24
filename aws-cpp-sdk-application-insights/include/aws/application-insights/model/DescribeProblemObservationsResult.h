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
  class AWS_APPLICATIONINSIGHTS_API DescribeProblemObservationsResult
  {
  public:
    DescribeProblemObservationsResult();
    DescribeProblemObservationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeProblemObservationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
