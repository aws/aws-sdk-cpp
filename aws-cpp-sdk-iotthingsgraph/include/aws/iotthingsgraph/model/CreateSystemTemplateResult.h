/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_IOTTHINGSGRAPH_API CreateSystemTemplateResult
  {
  public:
    CreateSystemTemplateResult();
    CreateSystemTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateSystemTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The summary object that describes the created system.</p>
     */
    inline const SystemTemplateSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>The summary object that describes the created system.</p>
     */
    inline void SetSummary(const SystemTemplateSummary& value) { m_summary = value; }

    /**
     * <p>The summary object that describes the created system.</p>
     */
    inline void SetSummary(SystemTemplateSummary&& value) { m_summary = std::move(value); }

    /**
     * <p>The summary object that describes the created system.</p>
     */
    inline CreateSystemTemplateResult& WithSummary(const SystemTemplateSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>The summary object that describes the created system.</p>
     */
    inline CreateSystemTemplateResult& WithSummary(SystemTemplateSummary&& value) { SetSummary(std::move(value)); return *this;}

  private:

    SystemTemplateSummary m_summary;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
