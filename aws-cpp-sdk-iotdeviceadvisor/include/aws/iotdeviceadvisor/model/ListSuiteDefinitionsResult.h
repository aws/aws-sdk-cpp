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
  class AWS_IOTDEVICEADVISOR_API ListSuiteDefinitionsResult
  {
  public:
    ListSuiteDefinitionsResult();
    ListSuiteDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSuiteDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists test suite information using List suite definition.</p>
     */
    inline const Aws::Vector<SuiteDefinitionInformation>& GetSuiteDefinitionInformationList() const{ return m_suiteDefinitionInformationList; }

    /**
     * <p>Lists test suite information using List suite definition.</p>
     */
    inline void SetSuiteDefinitionInformationList(const Aws::Vector<SuiteDefinitionInformation>& value) { m_suiteDefinitionInformationList = value; }

    /**
     * <p>Lists test suite information using List suite definition.</p>
     */
    inline void SetSuiteDefinitionInformationList(Aws::Vector<SuiteDefinitionInformation>&& value) { m_suiteDefinitionInformationList = std::move(value); }

    /**
     * <p>Lists test suite information using List suite definition.</p>
     */
    inline ListSuiteDefinitionsResult& WithSuiteDefinitionInformationList(const Aws::Vector<SuiteDefinitionInformation>& value) { SetSuiteDefinitionInformationList(value); return *this;}

    /**
     * <p>Lists test suite information using List suite definition.</p>
     */
    inline ListSuiteDefinitionsResult& WithSuiteDefinitionInformationList(Aws::Vector<SuiteDefinitionInformation>&& value) { SetSuiteDefinitionInformationList(std::move(value)); return *this;}

    /**
     * <p>Lists test suite information using List suite definition.</p>
     */
    inline ListSuiteDefinitionsResult& AddSuiteDefinitionInformationList(const SuiteDefinitionInformation& value) { m_suiteDefinitionInformationList.push_back(value); return *this; }

    /**
     * <p>Lists test suite information using List suite definition.</p>
     */
    inline ListSuiteDefinitionsResult& AddSuiteDefinitionInformationList(SuiteDefinitionInformation&& value) { m_suiteDefinitionInformationList.push_back(std::move(value)); return *this; }


    /**
     * <p>Creates a Device Advisor test suite.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Creates a Device Advisor test suite.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Creates a Device Advisor test suite.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Creates a Device Advisor test suite.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Creates a Device Advisor test suite.</p>
     */
    inline ListSuiteDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Creates a Device Advisor test suite.</p>
     */
    inline ListSuiteDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Creates a Device Advisor test suite.</p>
     */
    inline ListSuiteDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SuiteDefinitionInformation> m_suiteDefinitionInformationList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
