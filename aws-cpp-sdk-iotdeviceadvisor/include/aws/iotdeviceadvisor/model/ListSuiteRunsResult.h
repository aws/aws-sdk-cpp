/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotdeviceadvisor/model/SuiteRunInformation.h>
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
namespace IoTDeviceAdvisor
{
namespace Model
{
  class AWS_IOTDEVICEADVISOR_API ListSuiteRunsResult
  {
  public:
    ListSuiteRunsResult();
    ListSuiteRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSuiteRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the runs of the specified Device Advisor test suite.</p>
     */
    inline const Aws::Vector<SuiteRunInformation>& GetSuiteRunsList() const{ return m_suiteRunsList; }

    /**
     * <p>Lists the runs of the specified Device Advisor test suite.</p>
     */
    inline void SetSuiteRunsList(const Aws::Vector<SuiteRunInformation>& value) { m_suiteRunsList = value; }

    /**
     * <p>Lists the runs of the specified Device Advisor test suite.</p>
     */
    inline void SetSuiteRunsList(Aws::Vector<SuiteRunInformation>&& value) { m_suiteRunsList = std::move(value); }

    /**
     * <p>Lists the runs of the specified Device Advisor test suite.</p>
     */
    inline ListSuiteRunsResult& WithSuiteRunsList(const Aws::Vector<SuiteRunInformation>& value) { SetSuiteRunsList(value); return *this;}

    /**
     * <p>Lists the runs of the specified Device Advisor test suite.</p>
     */
    inline ListSuiteRunsResult& WithSuiteRunsList(Aws::Vector<SuiteRunInformation>&& value) { SetSuiteRunsList(std::move(value)); return *this;}

    /**
     * <p>Lists the runs of the specified Device Advisor test suite.</p>
     */
    inline ListSuiteRunsResult& AddSuiteRunsList(const SuiteRunInformation& value) { m_suiteRunsList.push_back(value); return *this; }

    /**
     * <p>Lists the runs of the specified Device Advisor test suite.</p>
     */
    inline ListSuiteRunsResult& AddSuiteRunsList(SuiteRunInformation&& value) { m_suiteRunsList.push_back(std::move(value)); return *this; }


    /**
     * <p>Next pagination token for list suite run response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Next pagination token for list suite run response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Next pagination token for list suite run response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Next pagination token for list suite run response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Next pagination token for list suite run response.</p>
     */
    inline ListSuiteRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Next pagination token for list suite run response.</p>
     */
    inline ListSuiteRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Next pagination token for list suite run response.</p>
     */
    inline ListSuiteRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SuiteRunInformation> m_suiteRunsList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
