/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DeviceSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListDevicesResult
  {
  public:
    AWS_SAGEMAKER_API ListDevicesResult();
    AWS_SAGEMAKER_API ListDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary of devices.</p>
     */
    inline const Aws::Vector<DeviceSummary>& GetDeviceSummaries() const{ return m_deviceSummaries; }

    /**
     * <p>Summary of devices.</p>
     */
    inline void SetDeviceSummaries(const Aws::Vector<DeviceSummary>& value) { m_deviceSummaries = value; }

    /**
     * <p>Summary of devices.</p>
     */
    inline void SetDeviceSummaries(Aws::Vector<DeviceSummary>&& value) { m_deviceSummaries = std::move(value); }

    /**
     * <p>Summary of devices.</p>
     */
    inline ListDevicesResult& WithDeviceSummaries(const Aws::Vector<DeviceSummary>& value) { SetDeviceSummaries(value); return *this;}

    /**
     * <p>Summary of devices.</p>
     */
    inline ListDevicesResult& WithDeviceSummaries(Aws::Vector<DeviceSummary>&& value) { SetDeviceSummaries(std::move(value)); return *this;}

    /**
     * <p>Summary of devices.</p>
     */
    inline ListDevicesResult& AddDeviceSummaries(const DeviceSummary& value) { m_deviceSummaries.push_back(value); return *this; }

    /**
     * <p>Summary of devices.</p>
     */
    inline ListDevicesResult& AddDeviceSummaries(DeviceSummary&& value) { m_deviceSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline ListDevicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline ListDevicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline ListDevicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DeviceSummary> m_deviceSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
