﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/clouddirectory/model/SchemaFacet.h>

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
  class AWS_CLOUDDIRECTORY_API GetObjectInformationResult
  {
  public:
    GetObjectInformationResult();
    GetObjectInformationResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetObjectInformationResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The facets attached to the specified object.</p>
     */
    inline const Aws::Vector<SchemaFacet>& GetSchemaFacets() const{ return m_schemaFacets; }

    /**
     * <p>The facets attached to the specified object.</p>
     */
    inline void SetSchemaFacets(const Aws::Vector<SchemaFacet>& value) { m_schemaFacets = value; }

    /**
     * <p>The facets attached to the specified object.</p>
     */
    inline void SetSchemaFacets(Aws::Vector<SchemaFacet>&& value) { m_schemaFacets = value; }

    /**
     * <p>The facets attached to the specified object.</p>
     */
    inline GetObjectInformationResult& WithSchemaFacets(const Aws::Vector<SchemaFacet>& value) { SetSchemaFacets(value); return *this;}

    /**
     * <p>The facets attached to the specified object.</p>
     */
    inline GetObjectInformationResult& WithSchemaFacets(Aws::Vector<SchemaFacet>&& value) { SetSchemaFacets(value); return *this;}

    /**
     * <p>The facets attached to the specified object.</p>
     */
    inline GetObjectInformationResult& AddSchemaFacets(const SchemaFacet& value) { m_schemaFacets.push_back(value); return *this; }

    /**
     * <p>The facets attached to the specified object.</p>
     */
    inline GetObjectInformationResult& AddSchemaFacets(SchemaFacet&& value) { m_schemaFacets.push_back(value); return *this; }

    /**
     * <p>The ObjectIdentifier of the specified object.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const{ return m_objectIdentifier; }

    /**
     * <p>The ObjectIdentifier of the specified object.</p>
     */
    inline void SetObjectIdentifier(const Aws::String& value) { m_objectIdentifier = value; }

    /**
     * <p>The ObjectIdentifier of the specified object.</p>
     */
    inline void SetObjectIdentifier(Aws::String&& value) { m_objectIdentifier = value; }

    /**
     * <p>The ObjectIdentifier of the specified object.</p>
     */
    inline void SetObjectIdentifier(const char* value) { m_objectIdentifier.assign(value); }

    /**
     * <p>The ObjectIdentifier of the specified object.</p>
     */
    inline GetObjectInformationResult& WithObjectIdentifier(const Aws::String& value) { SetObjectIdentifier(value); return *this;}

    /**
     * <p>The ObjectIdentifier of the specified object.</p>
     */
    inline GetObjectInformationResult& WithObjectIdentifier(Aws::String&& value) { SetObjectIdentifier(value); return *this;}

    /**
     * <p>The ObjectIdentifier of the specified object.</p>
     */
    inline GetObjectInformationResult& WithObjectIdentifier(const char* value) { SetObjectIdentifier(value); return *this;}

  private:
    Aws::Vector<SchemaFacet> m_schemaFacets;
    Aws::String m_objectIdentifier;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
