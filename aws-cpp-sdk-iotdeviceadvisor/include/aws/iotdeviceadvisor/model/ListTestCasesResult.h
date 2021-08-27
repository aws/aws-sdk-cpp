/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotdeviceadvisor/model/TestCaseCategory.h>
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
  class AWS_IOTDEVICEADVISOR_API ListTestCasesResult
  {
  public:
    ListTestCasesResult();
    ListTestCasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTestCasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Gets the category of test case.</p>
     */
    inline const Aws::Vector<TestCaseCategory>& GetCategories() const{ return m_categories; }

    /**
     * <p>Gets the category of test case.</p>
     */
    inline void SetCategories(const Aws::Vector<TestCaseCategory>& value) { m_categories = value; }

    /**
     * <p>Gets the category of test case.</p>
     */
    inline void SetCategories(Aws::Vector<TestCaseCategory>&& value) { m_categories = std::move(value); }

    /**
     * <p>Gets the category of test case.</p>
     */
    inline ListTestCasesResult& WithCategories(const Aws::Vector<TestCaseCategory>& value) { SetCategories(value); return *this;}

    /**
     * <p>Gets the category of test case.</p>
     */
    inline ListTestCasesResult& WithCategories(Aws::Vector<TestCaseCategory>&& value) { SetCategories(std::move(value)); return *this;}

    /**
     * <p>Gets the category of test case.</p>
     */
    inline ListTestCasesResult& AddCategories(const TestCaseCategory& value) { m_categories.push_back(value); return *this; }

    /**
     * <p>Gets the category of test case.</p>
     */
    inline ListTestCasesResult& AddCategories(TestCaseCategory&& value) { m_categories.push_back(std::move(value)); return *this; }


    /**
     * <p>Gets the configuration of root test group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRootGroupConfiguration() const{ return m_rootGroupConfiguration; }

    /**
     * <p>Gets the configuration of root test group.</p>
     */
    inline void SetRootGroupConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_rootGroupConfiguration = value; }

    /**
     * <p>Gets the configuration of root test group.</p>
     */
    inline void SetRootGroupConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_rootGroupConfiguration = std::move(value); }

    /**
     * <p>Gets the configuration of root test group.</p>
     */
    inline ListTestCasesResult& WithRootGroupConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetRootGroupConfiguration(value); return *this;}

    /**
     * <p>Gets the configuration of root test group.</p>
     */
    inline ListTestCasesResult& WithRootGroupConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetRootGroupConfiguration(std::move(value)); return *this;}

    /**
     * <p>Gets the configuration of root test group.</p>
     */
    inline ListTestCasesResult& AddRootGroupConfiguration(const Aws::String& key, const Aws::String& value) { m_rootGroupConfiguration.emplace(key, value); return *this; }

    /**
     * <p>Gets the configuration of root test group.</p>
     */
    inline ListTestCasesResult& AddRootGroupConfiguration(Aws::String&& key, const Aws::String& value) { m_rootGroupConfiguration.emplace(std::move(key), value); return *this; }

    /**
     * <p>Gets the configuration of root test group.</p>
     */
    inline ListTestCasesResult& AddRootGroupConfiguration(const Aws::String& key, Aws::String&& value) { m_rootGroupConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Gets the configuration of root test group.</p>
     */
    inline ListTestCasesResult& AddRootGroupConfiguration(Aws::String&& key, Aws::String&& value) { m_rootGroupConfiguration.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Gets the configuration of root test group.</p>
     */
    inline ListTestCasesResult& AddRootGroupConfiguration(const char* key, Aws::String&& value) { m_rootGroupConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Gets the configuration of root test group.</p>
     */
    inline ListTestCasesResult& AddRootGroupConfiguration(Aws::String&& key, const char* value) { m_rootGroupConfiguration.emplace(std::move(key), value); return *this; }

    /**
     * <p>Gets the configuration of root test group.</p>
     */
    inline ListTestCasesResult& AddRootGroupConfiguration(const char* key, const char* value) { m_rootGroupConfiguration.emplace(key, value); return *this; }


    /**
     * <p>Gets the configuration of test group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetGroupConfiguration() const{ return m_groupConfiguration; }

    /**
     * <p>Gets the configuration of test group.</p>
     */
    inline void SetGroupConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_groupConfiguration = value; }

    /**
     * <p>Gets the configuration of test group.</p>
     */
    inline void SetGroupConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_groupConfiguration = std::move(value); }

    /**
     * <p>Gets the configuration of test group.</p>
     */
    inline ListTestCasesResult& WithGroupConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetGroupConfiguration(value); return *this;}

    /**
     * <p>Gets the configuration of test group.</p>
     */
    inline ListTestCasesResult& WithGroupConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetGroupConfiguration(std::move(value)); return *this;}

    /**
     * <p>Gets the configuration of test group.</p>
     */
    inline ListTestCasesResult& AddGroupConfiguration(const Aws::String& key, const Aws::String& value) { m_groupConfiguration.emplace(key, value); return *this; }

    /**
     * <p>Gets the configuration of test group.</p>
     */
    inline ListTestCasesResult& AddGroupConfiguration(Aws::String&& key, const Aws::String& value) { m_groupConfiguration.emplace(std::move(key), value); return *this; }

    /**
     * <p>Gets the configuration of test group.</p>
     */
    inline ListTestCasesResult& AddGroupConfiguration(const Aws::String& key, Aws::String&& value) { m_groupConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Gets the configuration of test group.</p>
     */
    inline ListTestCasesResult& AddGroupConfiguration(Aws::String&& key, Aws::String&& value) { m_groupConfiguration.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Gets the configuration of test group.</p>
     */
    inline ListTestCasesResult& AddGroupConfiguration(const char* key, Aws::String&& value) { m_groupConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Gets the configuration of test group.</p>
     */
    inline ListTestCasesResult& AddGroupConfiguration(Aws::String&& key, const char* value) { m_groupConfiguration.emplace(std::move(key), value); return *this; }

    /**
     * <p>Gets the configuration of test group.</p>
     */
    inline ListTestCasesResult& AddGroupConfiguration(const char* key, const char* value) { m_groupConfiguration.emplace(key, value); return *this; }


    /**
     * <p>Test cases next token response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Test cases next token response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Test cases next token response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Test cases next token response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Test cases next token response.</p>
     */
    inline ListTestCasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Test cases next token response.</p>
     */
    inline ListTestCasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Test cases next token response.</p>
     */
    inline ListTestCasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TestCaseCategory> m_categories;

    Aws::Map<Aws::String, Aws::String> m_rootGroupConfiguration;

    Aws::Map<Aws::String, Aws::String> m_groupConfiguration;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
