﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_IOTTHINGSGRAPH_API CreateFlowTemplateResult
  {
  public:
    CreateFlowTemplateResult();
    CreateFlowTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateFlowTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The summary object that describes the created workflow.</p>
     */
    inline const FlowTemplateSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>The summary object that describes the created workflow.</p>
     */
    inline void SetSummary(const FlowTemplateSummary& value) { m_summary = value; }

    /**
     * <p>The summary object that describes the created workflow.</p>
     */
    inline void SetSummary(FlowTemplateSummary&& value) { m_summary = std::move(value); }

    /**
     * <p>The summary object that describes the created workflow.</p>
     */
    inline CreateFlowTemplateResult& WithSummary(const FlowTemplateSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>The summary object that describes the created workflow.</p>
     */
    inline CreateFlowTemplateResult& WithSummary(FlowTemplateSummary&& value) { SetSummary(std::move(value)); return *this;}

  private:

    FlowTemplateSummary m_summary;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
