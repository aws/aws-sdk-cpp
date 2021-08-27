/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/model/SystemInstanceSummary.h>
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
  class AWS_IOTTHINGSGRAPH_API CreateSystemInstanceResult
  {
  public:
    CreateSystemInstanceResult();
    CreateSystemInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateSystemInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The summary object that describes the new system instance.</p>
     */
    inline const SystemInstanceSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>The summary object that describes the new system instance.</p>
     */
    inline void SetSummary(const SystemInstanceSummary& value) { m_summary = value; }

    /**
     * <p>The summary object that describes the new system instance.</p>
     */
    inline void SetSummary(SystemInstanceSummary&& value) { m_summary = std::move(value); }

    /**
     * <p>The summary object that describes the new system instance.</p>
     */
    inline CreateSystemInstanceResult& WithSummary(const SystemInstanceSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>The summary object that describes the new system instance.</p>
     */
    inline CreateSystemInstanceResult& WithSummary(SystemInstanceSummary&& value) { SetSummary(std::move(value)); return *this;}

  private:

    SystemInstanceSummary m_summary;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
