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
   * <p>Represents the output of a <code>BatchUpdate</code> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2016-05-10/BatchUpdateObjectAttributesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchUpdateObjectAttributesResponse
  {
  public:
    BatchUpdateObjectAttributesResponse();
    BatchUpdateObjectAttributesResponse(const Aws::Utils::Json::JsonValue& jsonValue);
    BatchUpdateObjectAttributesResponse& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>ID associated with the object.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const{ return m_objectIdentifier; }

    /**
     * <p>ID associated with the object.</p>
     */
    inline void SetObjectIdentifier(const Aws::String& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = value; }

    /**
     * <p>ID associated with the object.</p>
     */
    inline void SetObjectIdentifier(Aws::String&& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = value; }

    /**
     * <p>ID associated with the object.</p>
     */
    inline void SetObjectIdentifier(const char* value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier.assign(value); }

    /**
     * <p>ID associated with the object.</p>
     */
    inline BatchUpdateObjectAttributesResponse& WithObjectIdentifier(const Aws::String& value) { SetObjectIdentifier(value); return *this;}

    /**
     * <p>ID associated with the object.</p>
     */
    inline BatchUpdateObjectAttributesResponse& WithObjectIdentifier(Aws::String&& value) { SetObjectIdentifier(value); return *this;}

    /**
     * <p>ID associated with the object.</p>
     */
    inline BatchUpdateObjectAttributesResponse& WithObjectIdentifier(const char* value) { SetObjectIdentifier(value); return *this;}

  private:
    Aws::String m_objectIdentifier;
    bool m_objectIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
