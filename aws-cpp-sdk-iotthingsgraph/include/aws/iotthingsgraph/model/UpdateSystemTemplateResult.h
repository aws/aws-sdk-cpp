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
#include <aws/iotthingsgraph/model/SystemTemplateSummary.h>
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
  class AWS_IOTTHINGSGRAPH_API UpdateSystemTemplateResult
  {
  public:
    UpdateSystemTemplateResult();
    UpdateSystemTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateSystemTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing summary information about the updated system.</p>
     */
    inline const SystemTemplateSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>An object containing summary information about the updated system.</p>
     */
    inline void SetSummary(const SystemTemplateSummary& value) { m_summary = value; }

    /**
     * <p>An object containing summary information about the updated system.</p>
     */
    inline void SetSummary(SystemTemplateSummary&& value) { m_summary = std::move(value); }

    /**
     * <p>An object containing summary information about the updated system.</p>
     */
    inline UpdateSystemTemplateResult& WithSummary(const SystemTemplateSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>An object containing summary information about the updated system.</p>
     */
    inline UpdateSystemTemplateResult& WithSummary(SystemTemplateSummary&& value) { SetSummary(std::move(value)); return *this;}

  private:

    SystemTemplateSummary m_summary;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
