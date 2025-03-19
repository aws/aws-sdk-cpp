/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/SchemaFacet.h>
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
  class GetObjectInformationResult
  {
  public:
    AWS_CLOUDDIRECTORY_API GetObjectInformationResult() = default;
    AWS_CLOUDDIRECTORY_API GetObjectInformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API GetObjectInformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The facets attached to the specified object. Although the response does not
     * include minor version information, the most recently applied minor version of
     * each Facet is in effect. See <a>GetAppliedSchemaVersion</a> for details.</p>
     */
    inline const Aws::Vector<SchemaFacet>& GetSchemaFacets() const { return m_schemaFacets; }
    template<typename SchemaFacetsT = Aws::Vector<SchemaFacet>>
    void SetSchemaFacets(SchemaFacetsT&& value) { m_schemaFacetsHasBeenSet = true; m_schemaFacets = std::forward<SchemaFacetsT>(value); }
    template<typename SchemaFacetsT = Aws::Vector<SchemaFacet>>
    GetObjectInformationResult& WithSchemaFacets(SchemaFacetsT&& value) { SetSchemaFacets(std::forward<SchemaFacetsT>(value)); return *this;}
    template<typename SchemaFacetsT = SchemaFacet>
    GetObjectInformationResult& AddSchemaFacets(SchemaFacetsT&& value) { m_schemaFacetsHasBeenSet = true; m_schemaFacets.emplace_back(std::forward<SchemaFacetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>ObjectIdentifier</code> of the specified object.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const { return m_objectIdentifier; }
    template<typename ObjectIdentifierT = Aws::String>
    void SetObjectIdentifier(ObjectIdentifierT&& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = std::forward<ObjectIdentifierT>(value); }
    template<typename ObjectIdentifierT = Aws::String>
    GetObjectInformationResult& WithObjectIdentifier(ObjectIdentifierT&& value) { SetObjectIdentifier(std::forward<ObjectIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetObjectInformationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SchemaFacet> m_schemaFacets;
    bool m_schemaFacetsHasBeenSet = false;

    Aws::String m_objectIdentifier;
    bool m_objectIdentifierHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
