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
  class ListSuiteRunsResult
  {
  public:
    AWS_IOTDEVICEADVISOR_API ListSuiteRunsResult();
    AWS_IOTDEVICEADVISOR_API ListSuiteRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDEVICEADVISOR_API ListSuiteRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that provide summaries of information about the suite
     * runs in the list.</p>
     */
    inline const Aws::Vector<SuiteRunInformation>& GetSuiteRunsList() const{ return m_suiteRunsList; }

    /**
     * <p>An array of objects that provide summaries of information about the suite
     * runs in the list.</p>
     */
    inline void SetSuiteRunsList(const Aws::Vector<SuiteRunInformation>& value) { m_suiteRunsList = value; }

    /**
     * <p>An array of objects that provide summaries of information about the suite
     * runs in the list.</p>
     */
    inline void SetSuiteRunsList(Aws::Vector<SuiteRunInformation>&& value) { m_suiteRunsList = std::move(value); }

    /**
     * <p>An array of objects that provide summaries of information about the suite
     * runs in the list.</p>
     */
    inline ListSuiteRunsResult& WithSuiteRunsList(const Aws::Vector<SuiteRunInformation>& value) { SetSuiteRunsList(value); return *this;}

    /**
     * <p>An array of objects that provide summaries of information about the suite
     * runs in the list.</p>
     */
    inline ListSuiteRunsResult& WithSuiteRunsList(Aws::Vector<SuiteRunInformation>&& value) { SetSuiteRunsList(std::move(value)); return *this;}

    /**
     * <p>An array of objects that provide summaries of information about the suite
     * runs in the list.</p>
     */
    inline ListSuiteRunsResult& AddSuiteRunsList(const SuiteRunInformation& value) { m_suiteRunsList.push_back(value); return *this; }

    /**
     * <p>An array of objects that provide summaries of information about the suite
     * runs in the list.</p>
     */
    inline ListSuiteRunsResult& AddSuiteRunsList(SuiteRunInformation&& value) { m_suiteRunsList.push_back(std::move(value)); return *this; }


    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline ListSuiteRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline ListSuiteRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline ListSuiteRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SuiteRunInformation> m_suiteRunsList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
