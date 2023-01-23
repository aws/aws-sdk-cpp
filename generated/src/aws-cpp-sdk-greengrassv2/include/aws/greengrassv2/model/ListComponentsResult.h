/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/Component.h>
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
namespace GreengrassV2
{
namespace Model
{
  class ListComponentsResult
  {
  public:
    AWS_GREENGRASSV2_API ListComponentsResult();
    AWS_GREENGRASSV2_API ListComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API ListComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that summarizes each component.</p>
     */
    inline const Aws::Vector<Component>& GetComponents() const{ return m_components; }

    /**
     * <p>A list that summarizes each component.</p>
     */
    inline void SetComponents(const Aws::Vector<Component>& value) { m_components = value; }

    /**
     * <p>A list that summarizes each component.</p>
     */
    inline void SetComponents(Aws::Vector<Component>&& value) { m_components = std::move(value); }

    /**
     * <p>A list that summarizes each component.</p>
     */
    inline ListComponentsResult& WithComponents(const Aws::Vector<Component>& value) { SetComponents(value); return *this;}

    /**
     * <p>A list that summarizes each component.</p>
     */
    inline ListComponentsResult& WithComponents(Aws::Vector<Component>&& value) { SetComponents(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes each component.</p>
     */
    inline ListComponentsResult& AddComponents(const Component& value) { m_components.push_back(value); return *this; }

    /**
     * <p>A list that summarizes each component.</p>
     */
    inline ListComponentsResult& AddComponents(Component&& value) { m_components.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListComponentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListComponentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListComponentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Component> m_components;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
