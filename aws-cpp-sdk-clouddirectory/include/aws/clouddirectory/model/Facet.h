/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/ObjectType.h>

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
   * <p>A structure that contains <code>Name</code>, <code>ARN</code>,
   * <code>Attributes</code>, <a>Rule</a>s, and
   * <code>ObjectTypes</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2016-05-10/Facet">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API Facet
  {
  public:
    Facet();
    Facet(const Aws::Utils::Json::JsonValue& jsonValue);
    Facet& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the <a>Facet</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the <a>Facet</a>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the <a>Facet</a>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the <a>Facet</a>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the <a>Facet</a>.</p>
     */
    inline Facet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <a>Facet</a>.</p>
     */
    inline Facet& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <a>Facet</a>.</p>
     */
    inline Facet& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Object type associated with the facet. See
     * <a>CreateFacetRequest$ObjectType</a> for more details.</p>
     */
    inline const ObjectType& GetObjectType() const{ return m_objectType; }

    /**
     * <p>Object type associated with the facet. See
     * <a>CreateFacetRequest$ObjectType</a> for more details.</p>
     */
    inline void SetObjectType(const ObjectType& value) { m_objectTypeHasBeenSet = true; m_objectType = value; }

    /**
     * <p>Object type associated with the facet. See
     * <a>CreateFacetRequest$ObjectType</a> for more details.</p>
     */
    inline void SetObjectType(ObjectType&& value) { m_objectTypeHasBeenSet = true; m_objectType = value; }

    /**
     * <p>Object type associated with the facet. See
     * <a>CreateFacetRequest$ObjectType</a> for more details.</p>
     */
    inline Facet& WithObjectType(const ObjectType& value) { SetObjectType(value); return *this;}

    /**
     * <p>Object type associated with the facet. See
     * <a>CreateFacetRequest$ObjectType</a> for more details.</p>
     */
    inline Facet& WithObjectType(ObjectType&& value) { SetObjectType(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    ObjectType m_objectType;
    bool m_objectTypeHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
