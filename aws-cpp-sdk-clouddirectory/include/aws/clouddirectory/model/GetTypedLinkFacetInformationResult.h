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
namespace CloudDirectory
{
namespace Model
{
  class AWS_CLOUDDIRECTORY_API GetTypedLinkFacetInformationResult
  {
  public:
    GetTypedLinkFacetInformationResult();
    GetTypedLinkFacetInformationResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetTypedLinkFacetInformationResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetIdentityAttributeOrder(const Aws::Vector<Aws::String>& value) { m_identityAttributeOrder = value; }

    /**
     * <p>A range filter that you provide for multiple attributes. The ability to
     * filter typed links considers the order that the attributes are defined on the
     * typed link facet. When providing ranges to typed link selection, any inexact
     * ranges must be specified at the end. Any attributes that do not have a range
     * specified are presumed to match the entire range. Filters are interpreted in the
     * order of the attributes on the typed link facet, not the order in which they are
     * supplied to any API calls.</p>
     */
    inline void SetIdentityAttributeOrder(Aws::Vector<Aws::String>&& value) { m_identityAttributeOrder = std::move(value); }

    /**
     * <p>A range filter that you provide for multiple attributes. The ability to
     * filter typed links considers the order that the attributes are defined on the
     * typed link facet. When providing ranges to typed link selection, any inexact
     * ranges must be specified at the end. Any attributes that do not have a range
     * specified are presumed to match the entire range. Filters are interpreted in the
     * order of the attributes on the typed link facet, not the order in which they are
     * supplied to any API calls.</p>
     */
    inline GetTypedLinkFacetInformationResult& WithIdentityAttributeOrder(const Aws::Vector<Aws::String>& value) { SetIdentityAttributeOrder(value); return *this;}

    /**
     * <p>A range filter that you provide for multiple attributes. The ability to
     * filter typed links considers the order that the attributes are defined on the
     * typed link facet. When providing ranges to typed link selection, any inexact
     * ranges must be specified at the end. Any attributes that do not have a range
     * specified are presumed to match the entire range. Filters are interpreted in the
     * order of the attributes on the typed link facet, not the order in which they are
     * supplied to any API calls.</p>
     */
    inline GetTypedLinkFacetInformationResult& WithIdentityAttributeOrder(Aws::Vector<Aws::String>&& value) { SetIdentityAttributeOrder(std::move(value)); return *this;}

    /**
     * <p>A range filter that you provide for multiple attributes. The ability to
     * filter typed links considers the order that the attributes are defined on the
     * typed link facet. When providing ranges to typed link selection, any inexact
     * ranges must be specified at the end. Any attributes that do not have a range
     * specified are presumed to match the entire range. Filters are interpreted in the
     * order of the attributes on the typed link facet, not the order in which they are
     * supplied to any API calls.</p>
     */
    inline GetTypedLinkFacetInformationResult& AddIdentityAttributeOrder(const Aws::String& value) { m_identityAttributeOrder.push_back(value); return *this; }

    /**
     * <p>A range filter that you provide for multiple attributes. The ability to
     * filter typed links considers the order that the attributes are defined on the
     * typed link facet. When providing ranges to typed link selection, any inexact
     * ranges must be specified at the end. Any attributes that do not have a range
     * specified are presumed to match the entire range. Filters are interpreted in the
     * order of the attributes on the typed link facet, not the order in which they are
     * supplied to any API calls.</p>
     */
    inline GetTypedLinkFacetInformationResult& AddIdentityAttributeOrder(Aws::String&& value) { m_identityAttributeOrder.push_back(std::move(value)); return *this; }

    /**
     * <p>A range filter that you provide for multiple attributes. The ability to
     * filter typed links considers the order that the attributes are defined on the
     * typed link facet. When providing ranges to typed link selection, any inexact
     * ranges must be specified at the end. Any attributes that do not have a range
     * specified are presumed to match the entire range. Filters are interpreted in the
     * order of the attributes on the typed link facet, not the order in which they are
     * supplied to any API calls.</p>
     */
    inline GetTypedLinkFacetInformationResult& AddIdentityAttributeOrder(const char* value) { m_identityAttributeOrder.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_identityAttributeOrder;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
