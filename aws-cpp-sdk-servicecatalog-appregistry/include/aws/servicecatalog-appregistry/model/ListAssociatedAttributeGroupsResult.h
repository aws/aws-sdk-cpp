/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace AppRegistry
{
namespace Model
{
  class ListAssociatedAttributeGroupsResult
  {
  public:
    AWS_APPREGISTRY_API ListAssociatedAttributeGroupsResult();
    AWS_APPREGISTRY_API ListAssociatedAttributeGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API ListAssociatedAttributeGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of attribute group IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributeGroups() const{ return m_attributeGroups; }

    /**
     * <p>A list of attribute group IDs.</p>
     */
    inline void SetAttributeGroups(const Aws::Vector<Aws::String>& value) { m_attributeGroups = value; }

    /**
     * <p>A list of attribute group IDs.</p>
     */
    inline void SetAttributeGroups(Aws::Vector<Aws::String>&& value) { m_attributeGroups = std::move(value); }

    /**
     * <p>A list of attribute group IDs.</p>
     */
    inline ListAssociatedAttributeGroupsResult& WithAttributeGroups(const Aws::Vector<Aws::String>& value) { SetAttributeGroups(value); return *this;}

    /**
     * <p>A list of attribute group IDs.</p>
     */
    inline ListAssociatedAttributeGroupsResult& WithAttributeGroups(Aws::Vector<Aws::String>&& value) { SetAttributeGroups(std::move(value)); return *this;}

    /**
     * <p>A list of attribute group IDs.</p>
     */
    inline ListAssociatedAttributeGroupsResult& AddAttributeGroups(const Aws::String& value) { m_attributeGroups.push_back(value); return *this; }

    /**
     * <p>A list of attribute group IDs.</p>
     */
    inline ListAssociatedAttributeGroupsResult& AddAttributeGroups(Aws::String&& value) { m_attributeGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of attribute group IDs.</p>
     */
    inline ListAssociatedAttributeGroupsResult& AddAttributeGroups(const char* value) { m_attributeGroups.push_back(value); return *this; }


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
    inline ListAssociatedAttributeGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline ListAssociatedAttributeGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline ListAssociatedAttributeGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_attributeGroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
