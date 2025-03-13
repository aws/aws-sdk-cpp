/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetTypedLinkFacetInformationResult
  {
  public:
    AWS_CLOUDDIRECTORY_API GetTypedLinkFacetInformationResult() = default;
    AWS_CLOUDDIRECTORY_API GetTypedLinkFacetInformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API GetTypedLinkFacetInformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The order of identity attributes for the facet, from most significant to
     * least significant. The ability to filter typed links considers the order that
     * the attributes are defined on the typed link facet. When providing ranges to
     * typed link selection, any inexact ranges must be specified at the end. Any
     * attributes that do not have a range specified are presumed to match the entire
     * range. Filters are interpreted in the order of the attributes on the typed link
     * facet, not the order in which they are supplied to any API calls. For more
     * information about identity attributes, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentityAttributeOrder() const { return m_identityAttributeOrder; }
    template<typename IdentityAttributeOrderT = Aws::Vector<Aws::String>>
    void SetIdentityAttributeOrder(IdentityAttributeOrderT&& value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder = std::forward<IdentityAttributeOrderT>(value); }
    template<typename IdentityAttributeOrderT = Aws::Vector<Aws::String>>
    GetTypedLinkFacetInformationResult& WithIdentityAttributeOrder(IdentityAttributeOrderT&& value) { SetIdentityAttributeOrder(std::forward<IdentityAttributeOrderT>(value)); return *this;}
    template<typename IdentityAttributeOrderT = Aws::String>
    GetTypedLinkFacetInformationResult& AddIdentityAttributeOrder(IdentityAttributeOrderT&& value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder.emplace_back(std::forward<IdentityAttributeOrderT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTypedLinkFacetInformationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_identityAttributeOrder;
    bool m_identityAttributeOrderHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
