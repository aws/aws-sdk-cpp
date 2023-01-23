/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotdeviceadvisor/model/SuiteDefinitionInformation.h>
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
  class ListSuiteDefinitionsResult
  {
  public:
    AWS_IOTDEVICEADVISOR_API ListSuiteDefinitionsResult();
    AWS_IOTDEVICEADVISOR_API ListSuiteDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDEVICEADVISOR_API ListSuiteDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that provide summaries of information about the suite
     * definitions in the list.</p>
     */
    inline const Aws::Vector<SuiteDefinitionInformation>& GetSuiteDefinitionInformationList() const{ return m_suiteDefinitionInformationList; }

    /**
     * <p>An array of objects that provide summaries of information about the suite
     * definitions in the list.</p>
     */
    inline void SetSuiteDefinitionInformationList(const Aws::Vector<SuiteDefinitionInformation>& value) { m_suiteDefinitionInformationList = value; }

    /**
     * <p>An array of objects that provide summaries of information about the suite
     * definitions in the list.</p>
     */
    inline void SetSuiteDefinitionInformationList(Aws::Vector<SuiteDefinitionInformation>&& value) { m_suiteDefinitionInformationList = std::move(value); }

    /**
     * <p>An array of objects that provide summaries of information about the suite
     * definitions in the list.</p>
     */
    inline ListSuiteDefinitionsResult& WithSuiteDefinitionInformationList(const Aws::Vector<SuiteDefinitionInformation>& value) { SetSuiteDefinitionInformationList(value); return *this;}

    /**
     * <p>An array of objects that provide summaries of information about the suite
     * definitions in the list.</p>
     */
    inline ListSuiteDefinitionsResult& WithSuiteDefinitionInformationList(Aws::Vector<SuiteDefinitionInformation>&& value) { SetSuiteDefinitionInformationList(std::move(value)); return *this;}

    /**
     * <p>An array of objects that provide summaries of information about the suite
     * definitions in the list.</p>
     */
    inline ListSuiteDefinitionsResult& AddSuiteDefinitionInformationList(const SuiteDefinitionInformation& value) { m_suiteDefinitionInformationList.push_back(value); return *this; }

    /**
     * <p>An array of objects that provide summaries of information about the suite
     * definitions in the list.</p>
     */
    inline ListSuiteDefinitionsResult& AddSuiteDefinitionInformationList(SuiteDefinitionInformation&& value) { m_suiteDefinitionInformationList.push_back(std::move(value)); return *this; }


    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline ListSuiteDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline ListSuiteDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline ListSuiteDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SuiteDefinitionInformation> m_suiteDefinitionInformationList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
