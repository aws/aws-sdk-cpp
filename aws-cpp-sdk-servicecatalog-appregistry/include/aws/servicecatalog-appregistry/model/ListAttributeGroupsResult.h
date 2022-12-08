/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog-appregistry/model/AttributeGroupSummary.h>
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
namespace AppRegistry
{
namespace Model
{
  class ListAttributeGroupsResult
  {
  public:
    AWS_APPREGISTRY_API ListAttributeGroupsResult();
    AWS_APPREGISTRY_API ListAttributeGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API ListAttributeGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This list of attribute groups.</p>
     */
    inline const Aws::Vector<AttributeGroupSummary>& GetAttributeGroups() const{ return m_attributeGroups; }

    /**
     * <p>This list of attribute groups.</p>
     */
    inline void SetAttributeGroups(const Aws::Vector<AttributeGroupSummary>& value) { m_attributeGroups = value; }

    /**
     * <p>This list of attribute groups.</p>
     */
    inline void SetAttributeGroups(Aws::Vector<AttributeGroupSummary>&& value) { m_attributeGroups = std::move(value); }

    /**
     * <p>This list of attribute groups.</p>
     */
    inline ListAttributeGroupsResult& WithAttributeGroups(const Aws::Vector<AttributeGroupSummary>& value) { SetAttributeGroups(value); return *this;}

    /**
     * <p>This list of attribute groups.</p>
     */
    inline ListAttributeGroupsResult& WithAttributeGroups(Aws::Vector<AttributeGroupSummary>&& value) { SetAttributeGroups(std::move(value)); return *this;}

    /**
     * <p>This list of attribute groups.</p>
     */
    inline ListAttributeGroupsResult& AddAttributeGroups(const AttributeGroupSummary& value) { m_attributeGroups.push_back(value); return *this; }

    /**
     * <p>This list of attribute groups.</p>
     */
    inline ListAttributeGroupsResult& AddAttributeGroups(AttributeGroupSummary&& value) { m_attributeGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline ListAttributeGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline ListAttributeGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline ListAttributeGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AttributeGroupSummary> m_attributeGroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
