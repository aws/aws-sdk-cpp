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
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Represents the output of a <a>AttachToIndex</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchAttachToIndexResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchAttachToIndexResponse
  {
  public:
    BatchAttachToIndexResponse();
    BatchAttachToIndexResponse(Aws::Utils::Json::JsonView jsonValue);
    BatchAttachToIndexResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>ObjectIdentifier</code> of the object that was attached to the
     * index.</p>
     */
    inline const Aws::String& GetAttachedObjectIdentifier() const{ return m_attachedObjectIdentifier; }

    /**
     * <p>The <code>ObjectIdentifier</code> of the object that was attached to the
     * index.</p>
     */
    inline bool AttachedObjectIdentifierHasBeenSet() const { return m_attachedObjectIdentifierHasBeenSet; }

    /**
     * <p>The <code>ObjectIdentifier</code> of the object that was attached to the
     * index.</p>
     */
    inline void SetAttachedObjectIdentifier(const Aws::String& value) { m_attachedObjectIdentifierHasBeenSet = true; m_attachedObjectIdentifier = value; }

    /**
     * <p>The <code>ObjectIdentifier</code> of the object that was attached to the
     * index.</p>
     */
    inline void SetAttachedObjectIdentifier(Aws::String&& value) { m_attachedObjectIdentifierHasBeenSet = true; m_attachedObjectIdentifier = std::move(value); }

    /**
     * <p>The <code>ObjectIdentifier</code> of the object that was attached to the
     * index.</p>
     */
    inline void SetAttachedObjectIdentifier(const char* value) { m_attachedObjectIdentifierHasBeenSet = true; m_attachedObjectIdentifier.assign(value); }

    /**
     * <p>The <code>ObjectIdentifier</code> of the object that was attached to the
     * index.</p>
     */
    inline BatchAttachToIndexResponse& WithAttachedObjectIdentifier(const Aws::String& value) { SetAttachedObjectIdentifier(value); return *this;}

    /**
     * <p>The <code>ObjectIdentifier</code> of the object that was attached to the
     * index.</p>
     */
    inline BatchAttachToIndexResponse& WithAttachedObjectIdentifier(Aws::String&& value) { SetAttachedObjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>ObjectIdentifier</code> of the object that was attached to the
     * index.</p>
     */
    inline BatchAttachToIndexResponse& WithAttachedObjectIdentifier(const char* value) { SetAttachedObjectIdentifier(value); return *this;}

  private:

    Aws::String m_attachedObjectIdentifier;
    bool m_attachedObjectIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
