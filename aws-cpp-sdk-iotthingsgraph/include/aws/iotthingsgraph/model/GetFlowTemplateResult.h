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
#include <aws/iotthingsgraph/model/FlowTemplateDescription.h>
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
  class AWS_IOTTHINGSGRAPH_API GetFlowTemplateResult
  {
  public:
    GetFlowTemplateResult();
    GetFlowTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetFlowTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The object that describes the specified workflow.</p>
     */
    inline const FlowTemplateDescription& GetDescription() const{ return m_description; }

    /**
     * <p>The object that describes the specified workflow.</p>
     */
    inline void SetDescription(const FlowTemplateDescription& value) { m_description = value; }

    /**
     * <p>The object that describes the specified workflow.</p>
     */
    inline void SetDescription(FlowTemplateDescription&& value) { m_description = std::move(value); }

    /**
     * <p>The object that describes the specified workflow.</p>
     */
    inline GetFlowTemplateResult& WithDescription(const FlowTemplateDescription& value) { SetDescription(value); return *this;}

    /**
     * <p>The object that describes the specified workflow.</p>
     */
    inline GetFlowTemplateResult& WithDescription(FlowTemplateDescription&& value) { SetDescription(std::move(value)); return *this;}

  private:

    FlowTemplateDescription m_description;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
