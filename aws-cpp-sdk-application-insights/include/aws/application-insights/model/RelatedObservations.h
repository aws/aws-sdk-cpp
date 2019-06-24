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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-insights/model/Observation.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ApplicationInsights
{
namespace Model
{

  /**
   * <p>Describes observations related to the problem.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/RelatedObservations">AWS
   * API Reference</a></p>
   */
  class AWS_APPLICATIONINSIGHTS_API RelatedObservations
  {
  public:
    RelatedObservations();
    RelatedObservations(Aws::Utils::Json::JsonView jsonValue);
    RelatedObservations& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of observations related to the problem.</p>
     */
    inline const Aws::Vector<Observation>& GetObservationList() const{ return m_observationList; }

    /**
     * <p>The list of observations related to the problem.</p>
     */
    inline bool ObservationListHasBeenSet() const { return m_observationListHasBeenSet; }

    /**
     * <p>The list of observations related to the problem.</p>
     */
    inline void SetObservationList(const Aws::Vector<Observation>& value) { m_observationListHasBeenSet = true; m_observationList = value; }

    /**
     * <p>The list of observations related to the problem.</p>
     */
    inline void SetObservationList(Aws::Vector<Observation>&& value) { m_observationListHasBeenSet = true; m_observationList = std::move(value); }

    /**
     * <p>The list of observations related to the problem.</p>
     */
    inline RelatedObservations& WithObservationList(const Aws::Vector<Observation>& value) { SetObservationList(value); return *this;}

    /**
     * <p>The list of observations related to the problem.</p>
     */
    inline RelatedObservations& WithObservationList(Aws::Vector<Observation>&& value) { SetObservationList(std::move(value)); return *this;}

    /**
     * <p>The list of observations related to the problem.</p>
     */
    inline RelatedObservations& AddObservationList(const Observation& value) { m_observationListHasBeenSet = true; m_observationList.push_back(value); return *this; }

    /**
     * <p>The list of observations related to the problem.</p>
     */
    inline RelatedObservations& AddObservationList(Observation&& value) { m_observationListHasBeenSet = true; m_observationList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Observation> m_observationList;
    bool m_observationListHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
