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
  class DeleteAttributeGroupResult
  {
  public:
    AWS_APPREGISTRY_API DeleteAttributeGroupResult();
    AWS_APPREGISTRY_API DeleteAttributeGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API DeleteAttributeGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the deleted attribute group.</p>
     */
    inline const AttributeGroupSummary& GetAttributeGroup() const{ return m_attributeGroup; }

    /**
     * <p>Information about the deleted attribute group.</p>
     */
    inline void SetAttributeGroup(const AttributeGroupSummary& value) { m_attributeGroup = value; }

    /**
     * <p>Information about the deleted attribute group.</p>
     */
    inline void SetAttributeGroup(AttributeGroupSummary&& value) { m_attributeGroup = std::move(value); }

    /**
     * <p>Information about the deleted attribute group.</p>
     */
    inline DeleteAttributeGroupResult& WithAttributeGroup(const AttributeGroupSummary& value) { SetAttributeGroup(value); return *this;}

    /**
     * <p>Information about the deleted attribute group.</p>
     */
    inline DeleteAttributeGroupResult& WithAttributeGroup(AttributeGroupSummary&& value) { SetAttributeGroup(std::move(value)); return *this;}

  private:

    AttributeGroupSummary m_attributeGroup;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
