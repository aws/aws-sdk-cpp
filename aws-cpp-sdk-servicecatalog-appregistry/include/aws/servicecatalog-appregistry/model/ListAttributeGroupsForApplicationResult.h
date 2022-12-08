/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog-appregistry/model/AttributeGroupDetails.h>
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
  class ListAttributeGroupsForApplicationResult
  {
  public:
    AWS_APPREGISTRY_API ListAttributeGroupsForApplicationResult();
    AWS_APPREGISTRY_API ListAttributeGroupsForApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API ListAttributeGroupsForApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The details related to a specific attribute group. </p>
     */
    inline const Aws::Vector<AttributeGroupDetails>& GetAttributeGroupsDetails() const{ return m_attributeGroupsDetails; }

    /**
     * <p> The details related to a specific attribute group. </p>
     */
    inline void SetAttributeGroupsDetails(const Aws::Vector<AttributeGroupDetails>& value) { m_attributeGroupsDetails = value; }

    /**
     * <p> The details related to a specific attribute group. </p>
     */
    inline void SetAttributeGroupsDetails(Aws::Vector<AttributeGroupDetails>&& value) { m_attributeGroupsDetails = std::move(value); }

    /**
     * <p> The details related to a specific attribute group. </p>
     */
    inline ListAttributeGroupsForApplicationResult& WithAttributeGroupsDetails(const Aws::Vector<AttributeGroupDetails>& value) { SetAttributeGroupsDetails(value); return *this;}

    /**
     * <p> The details related to a specific attribute group. </p>
     */
    inline ListAttributeGroupsForApplicationResult& WithAttributeGroupsDetails(Aws::Vector<AttributeGroupDetails>&& value) { SetAttributeGroupsDetails(std::move(value)); return *this;}

    /**
     * <p> The details related to a specific attribute group. </p>
     */
    inline ListAttributeGroupsForApplicationResult& AddAttributeGroupsDetails(const AttributeGroupDetails& value) { m_attributeGroupsDetails.push_back(value); return *this; }

    /**
     * <p> The details related to a specific attribute group. </p>
     */
    inline ListAttributeGroupsForApplicationResult& AddAttributeGroupsDetails(AttributeGroupDetails&& value) { m_attributeGroupsDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to get the next page of results after a previous API
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next page of results after a previous API
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next page of results after a previous API
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next page of results after a previous API
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next page of results after a previous API
     * call.</p>
     */
    inline ListAttributeGroupsForApplicationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next page of results after a previous API
     * call.</p>
     */
    inline ListAttributeGroupsForApplicationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next page of results after a previous API
     * call.</p>
     */
    inline ListAttributeGroupsForApplicationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AttributeGroupDetails> m_attributeGroupsDetails;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
