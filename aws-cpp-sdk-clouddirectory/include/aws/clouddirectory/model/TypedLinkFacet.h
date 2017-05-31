/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/TypedLinkAttributeDefinition.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Defines the typed links structure and its attributes. To create a typed link
   * facet, use the <a>CreateTypedLinkFacet</a> API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2016-05-10/TypedLinkFacet">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API TypedLinkFacet
  {
  public:
    TypedLinkFacet();
    TypedLinkFacet(const Aws::Utils::Json::JsonValue& jsonValue);
    TypedLinkFacet& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline TypedLinkFacet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline TypedLinkFacet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline TypedLinkFacet& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>An ordered set of attributes that are associate with the typed link. You can
     * use typed link attributes when you need to represent the relationship between
     * two objects or allow for quick filtering of incoming or outgoing typed
     * links.</p>
     */
    inline const Aws::Vector<TypedLinkAttributeDefinition>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>An ordered set of attributes that are associate with the typed link. You can
     * use typed link attributes when you need to represent the relationship between
     * two objects or allow for quick filtering of incoming or outgoing typed
     * links.</p>
     */
    inline void SetAttributes(const Aws::Vector<TypedLinkAttributeDefinition>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>An ordered set of attributes that are associate with the typed link. You can
     * use typed link attributes when you need to represent the relationship between
     * two objects or allow for quick filtering of incoming or outgoing typed
     * links.</p>
     */
    inline void SetAttributes(Aws::Vector<TypedLinkAttributeDefinition>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>An ordered set of attributes that are associate with the typed link. You can
     * use typed link attributes when you need to represent the relationship between
     * two objects or allow for quick filtering of incoming or outgoing typed
     * links.</p>
     */
    inline TypedLinkFacet& WithAttributes(const Aws::Vector<TypedLinkAttributeDefinition>& value) { SetAttributes(value); return *this;}

    /**
     * <p>An ordered set of attributes that are associate with the typed link. You can
     * use typed link attributes when you need to represent the relationship between
     * two objects or allow for quick filtering of incoming or outgoing typed
     * links.</p>
     */
    inline TypedLinkFacet& WithAttributes(Aws::Vector<TypedLinkAttributeDefinition>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>An ordered set of attributes that are associate with the typed link. You can
     * use typed link attributes when you need to represent the relationship between
     * two objects or allow for quick filtering of incoming or outgoing typed
     * links.</p>
     */
    inline TypedLinkFacet& AddAttributes(const TypedLinkAttributeDefinition& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>An ordered set of attributes that are associate with the typed link. You can
     * use typed link attributes when you need to represent the relationship between
     * two objects or allow for quick filtering of incoming or outgoing typed
     * links.</p>
     */
    inline TypedLinkFacet& AddAttributes(TypedLinkAttributeDefinition&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

    /**
     * <p>A range filter that you provide for multiple attributes. The ability to
     * filter typed links considers the order that the attributes are defined on the
     * typed link facet. When providing ranges to typed link selection, any inexact
     * ranges must be specified at the end. Any attributes that do not have a range
     * specified are presumed to match the entire range. Filters are interpreted in the
     * order of the attributes on the typed link facet, not the order in which they are
     * supplied to any API calls.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentityAttributeOrder() const{ return m_identityAttributeOrder; }

    /**
     * <p>A range filter that you provide for multiple attributes. The ability to
     * filter typed links considers the order that the attributes are defined on the
     * typed link facet. When providing ranges to typed link selection, any inexact
     * ranges must be specified at the end. Any attributes that do not have a range
     * specified are presumed to match the entire range. Filters are interpreted in the
     * order of the attributes on the typed link facet, not the order in which they are
     * supplied to any API calls.</p>
     */
    inline void SetIdentityAttributeOrder(const Aws::Vector<Aws::String>& value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder = value; }

    /**
     * <p>A range filter that you provide for multiple attributes. The ability to
     * filter typed links considers the order that the attributes are defined on the
     * typed link facet. When providing ranges to typed link selection, any inexact
     * ranges must be specified at the end. Any attributes that do not have a range
     * specified are presumed to match the entire range. Filters are interpreted in the
     * order of the attributes on the typed link facet, not the order in which they are
     * supplied to any API calls.</p>
     */
    inline void SetIdentityAttributeOrder(Aws::Vector<Aws::String>&& value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder = std::move(value); }

    /**
     * <p>A range filter that you provide for multiple attributes. The ability to
     * filter typed links considers the order that the attributes are defined on the
     * typed link facet. When providing ranges to typed link selection, any inexact
     * ranges must be specified at the end. Any attributes that do not have a range
     * specified are presumed to match the entire range. Filters are interpreted in the
     * order of the attributes on the typed link facet, not the order in which they are
     * supplied to any API calls.</p>
     */
    inline TypedLinkFacet& WithIdentityAttributeOrder(const Aws::Vector<Aws::String>& value) { SetIdentityAttributeOrder(value); return *this;}

    /**
     * <p>A range filter that you provide for multiple attributes. The ability to
     * filter typed links considers the order that the attributes are defined on the
     * typed link facet. When providing ranges to typed link selection, any inexact
     * ranges must be specified at the end. Any attributes that do not have a range
     * specified are presumed to match the entire range. Filters are interpreted in the
     * order of the attributes on the typed link facet, not the order in which they are
     * supplied to any API calls.</p>
     */
    inline TypedLinkFacet& WithIdentityAttributeOrder(Aws::Vector<Aws::String>&& value) { SetIdentityAttributeOrder(std::move(value)); return *this;}

    /**
     * <p>A range filter that you provide for multiple attributes. The ability to
     * filter typed links considers the order that the attributes are defined on the
     * typed link facet. When providing ranges to typed link selection, any inexact
     * ranges must be specified at the end. Any attributes that do not have a range
     * specified are presumed to match the entire range. Filters are interpreted in the
     * order of the attributes on the typed link facet, not the order in which they are
     * supplied to any API calls.</p>
     */
    inline TypedLinkFacet& AddIdentityAttributeOrder(const Aws::String& value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder.push_back(value); return *this; }

    /**
     * <p>A range filter that you provide for multiple attributes. The ability to
     * filter typed links considers the order that the attributes are defined on the
     * typed link facet. When providing ranges to typed link selection, any inexact
     * ranges must be specified at the end. Any attributes that do not have a range
     * specified are presumed to match the entire range. Filters are interpreted in the
     * order of the attributes on the typed link facet, not the order in which they are
     * supplied to any API calls.</p>
     */
    inline TypedLinkFacet& AddIdentityAttributeOrder(Aws::String&& value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder.push_back(std::move(value)); return *this; }

    /**
     * <p>A range filter that you provide for multiple attributes. The ability to
     * filter typed links considers the order that the attributes are defined on the
     * typed link facet. When providing ranges to typed link selection, any inexact
     * ranges must be specified at the end. Any attributes that do not have a range
     * specified are presumed to match the entire range. Filters are interpreted in the
     * order of the attributes on the typed link facet, not the order in which they are
     * supplied to any API calls.</p>
     */
    inline TypedLinkFacet& AddIdentityAttributeOrder(const char* value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder.push_back(value); return *this; }

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::Vector<TypedLinkAttributeDefinition> m_attributes;
    bool m_attributesHasBeenSet;
    Aws::Vector<Aws::String> m_identityAttributeOrder;
    bool m_identityAttributeOrderHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
