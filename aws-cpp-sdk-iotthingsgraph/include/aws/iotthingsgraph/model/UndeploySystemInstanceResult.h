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
  class AWS_IOTTHINGSGRAPH_API UndeploySystemInstanceResult
  {
  public:
    UndeploySystemInstanceResult();
    UndeploySystemInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UndeploySystemInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains summary information about the system instance that
     * was removed from its target.</p>
     */
    inline const SystemInstanceSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>An object that contains summary information about the system instance that
     * was removed from its target.</p>
     */
    inline void SetSummary(const SystemInstanceSummary& value) { m_summary = value; }

    /**
     * <p>An object that contains summary information about the system instance that
     * was removed from its target.</p>
     */
    inline void SetSummary(SystemInstanceSummary&& value) { m_summary = std::move(value); }

    /**
     * <p>An object that contains summary information about the system instance that
     * was removed from its target.</p>
     */
    inline UndeploySystemInstanceResult& WithSummary(const SystemInstanceSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>An object that contains summary information about the system instance that
     * was removed from its target.</p>
     */
    inline UndeploySystemInstanceResult& WithSummary(SystemInstanceSummary&& value) { SetSummary(std::move(value)); return *this;}

  private:

    SystemInstanceSummary m_summary;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
