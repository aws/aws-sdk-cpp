/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/model/SystemTemplateDescription.h>
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
  class AWS_IOTTHINGSGRAPH_API GetSystemTemplateResult
  {
  public:
    GetSystemTemplateResult();
    GetSystemTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSystemTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains summary data about the system.</p>
     */
    inline const SystemTemplateDescription& GetDescription() const{ return m_description; }

    /**
     * <p>An object that contains summary data about the system.</p>
     */
    inline void SetDescription(const SystemTemplateDescription& value) { m_description = value; }

    /**
     * <p>An object that contains summary data about the system.</p>
     */
    inline void SetDescription(SystemTemplateDescription&& value) { m_description = std::move(value); }

    /**
     * <p>An object that contains summary data about the system.</p>
     */
    inline GetSystemTemplateResult& WithDescription(const SystemTemplateDescription& value) { SetDescription(value); return *this;}

    /**
     * <p>An object that contains summary data about the system.</p>
     */
    inline GetSystemTemplateResult& WithDescription(SystemTemplateDescription&& value) { SetDescription(std::move(value)); return *this;}

  private:

    SystemTemplateDescription m_description;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
