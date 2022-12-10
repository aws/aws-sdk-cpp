/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/ComponentSummary.h>
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
namespace SsmSap
{
namespace Model
{
  class ListComponentsResult
  {
  public:
    AWS_SSMSAP_API ListComponentsResult();
    AWS_SSMSAP_API ListComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API ListComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const Aws::Vector<ComponentSummary>& GetComponents() const{ return m_components; }

    /**
     * <p/>
     */
    inline void SetComponents(const Aws::Vector<ComponentSummary>& value) { m_components = value; }

    /**
     * <p/>
     */
    inline void SetComponents(Aws::Vector<ComponentSummary>&& value) { m_components = std::move(value); }

    /**
     * <p/>
     */
    inline ListComponentsResult& WithComponents(const Aws::Vector<ComponentSummary>& value) { SetComponents(value); return *this;}

    /**
     * <p/>
     */
    inline ListComponentsResult& WithComponents(Aws::Vector<ComponentSummary>&& value) { SetComponents(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ListComponentsResult& AddComponents(const ComponentSummary& value) { m_components.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline ListComponentsResult& AddComponents(ComponentSummary&& value) { m_components.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p/>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p/>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p/>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p/>
     */
    inline ListComponentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p/>
     */
    inline ListComponentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ListComponentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ComponentSummary> m_components;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
