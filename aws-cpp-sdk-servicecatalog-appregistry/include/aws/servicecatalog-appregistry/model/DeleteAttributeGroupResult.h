/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
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
  class AWS_APPREGISTRY_API DeleteAttributeGroupResult
  {
  public:
    DeleteAttributeGroupResult();
    DeleteAttributeGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteAttributeGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name or ID of the attribute group that holds the attributes to describe
     * the application.</p>
     */
    inline const AttributeGroupSummary& GetAttributeGroup() const{ return m_attributeGroup; }

    /**
     * <p>The name or ID of the attribute group that holds the attributes to describe
     * the application.</p>
     */
    inline void SetAttributeGroup(const AttributeGroupSummary& value) { m_attributeGroup = value; }

    /**
     * <p>The name or ID of the attribute group that holds the attributes to describe
     * the application.</p>
     */
    inline void SetAttributeGroup(AttributeGroupSummary&& value) { m_attributeGroup = std::move(value); }

    /**
     * <p>The name or ID of the attribute group that holds the attributes to describe
     * the application.</p>
     */
    inline DeleteAttributeGroupResult& WithAttributeGroup(const AttributeGroupSummary& value) { SetAttributeGroup(value); return *this;}

    /**
     * <p>The name or ID of the attribute group that holds the attributes to describe
     * the application.</p>
     */
    inline DeleteAttributeGroupResult& WithAttributeGroup(AttributeGroupSummary&& value) { SetAttributeGroup(std::move(value)); return *this;}

  private:

    AttributeGroupSummary m_attributeGroup;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
