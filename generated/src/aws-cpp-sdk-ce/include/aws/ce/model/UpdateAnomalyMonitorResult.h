/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CostExplorer
{
namespace Model
{
  class UpdateAnomalyMonitorResult
  {
  public:
    AWS_COSTEXPLORER_API UpdateAnomalyMonitorResult();
    AWS_COSTEXPLORER_API UpdateAnomalyMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API UpdateAnomalyMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A cost anomaly monitor ARN. </p>
     */
    inline const Aws::String& GetMonitorArn() const{ return m_monitorArn; }

    /**
     * <p>A cost anomaly monitor ARN. </p>
     */
    inline void SetMonitorArn(const Aws::String& value) { m_monitorArn = value; }

    /**
     * <p>A cost anomaly monitor ARN. </p>
     */
    inline void SetMonitorArn(Aws::String&& value) { m_monitorArn = std::move(value); }

    /**
     * <p>A cost anomaly monitor ARN. </p>
     */
    inline void SetMonitorArn(const char* value) { m_monitorArn.assign(value); }

    /**
     * <p>A cost anomaly monitor ARN. </p>
     */
    inline UpdateAnomalyMonitorResult& WithMonitorArn(const Aws::String& value) { SetMonitorArn(value); return *this;}

    /**
     * <p>A cost anomaly monitor ARN. </p>
     */
    inline UpdateAnomalyMonitorResult& WithMonitorArn(Aws::String&& value) { SetMonitorArn(std::move(value)); return *this;}

    /**
     * <p>A cost anomaly monitor ARN. </p>
     */
    inline UpdateAnomalyMonitorResult& WithMonitorArn(const char* value) { SetMonitorArn(value); return *this;}

  private:

    Aws::String m_monitorArn;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
