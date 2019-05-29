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
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/model/FlowTemplateSummary.h>
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
namespace IoTThingsGraph
{
namespace Model
{
  class AWS_IOTTHINGSGRAPH_API UpdateFlowTemplateResult
  {
  public:
    UpdateFlowTemplateResult();
    UpdateFlowTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateFlowTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing summary information about the updated workflow.</p>
     */
    inline const FlowTemplateSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>An object containing summary information about the updated workflow.</p>
     */
    inline void SetSummary(const FlowTemplateSummary& value) { m_summary = value; }

    /**
     * <p>An object containing summary information about the updated workflow.</p>
     */
    inline void SetSummary(FlowTemplateSummary&& value) { m_summary = std::move(value); }

    /**
     * <p>An object containing summary information about the updated workflow.</p>
     */
    inline UpdateFlowTemplateResult& WithSummary(const FlowTemplateSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>An object containing summary information about the updated workflow.</p>
     */
    inline UpdateFlowTemplateResult& WithSummary(FlowTemplateSummary&& value) { SetSummary(std::move(value)); return *this;}

  private:

    FlowTemplateSummary m_summary;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
