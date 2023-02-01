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
  class CreateAnomalyMonitorResult
  {
  public:
    AWS_COSTEXPLORER_API CreateAnomalyMonitorResult();
    AWS_COSTEXPLORER_API CreateAnomalyMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API CreateAnomalyMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of your newly created cost anomaly detection
     * monitor.</p>
     */
    inline const Aws::String& GetMonitorArn() const{ return m_monitorArn; }

    /**
     * <p>The unique identifier of your newly created cost anomaly detection
     * monitor.</p>
     */
    inline void SetMonitorArn(const Aws::String& value) { m_monitorArn = value; }

    /**
     * <p>The unique identifier of your newly created cost anomaly detection
     * monitor.</p>
     */
    inline void SetMonitorArn(Aws::String&& value) { m_monitorArn = std::move(value); }

    /**
     * <p>The unique identifier of your newly created cost anomaly detection
     * monitor.</p>
     */
    inline void SetMonitorArn(const char* value) { m_monitorArn.assign(value); }

    /**
     * <p>The unique identifier of your newly created cost anomaly detection
     * monitor.</p>
     */
    inline CreateAnomalyMonitorResult& WithMonitorArn(const Aws::String& value) { SetMonitorArn(value); return *this;}

    /**
     * <p>The unique identifier of your newly created cost anomaly detection
     * monitor.</p>
     */
    inline CreateAnomalyMonitorResult& WithMonitorArn(Aws::String&& value) { SetMonitorArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of your newly created cost anomaly detection
     * monitor.</p>
     */
    inline CreateAnomalyMonitorResult& WithMonitorArn(const char* value) { SetMonitorArn(value); return *this;}

  private:

    Aws::String m_monitorArn;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
