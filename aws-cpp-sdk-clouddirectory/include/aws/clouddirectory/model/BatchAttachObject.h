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
#include <aws/clouddirectory/model/ObjectReference.h>
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
   * <p>Represents the output of an <a>AttachObject</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchAttachObject">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchAttachObject
  {
  public:
    BatchAttachObject();
    BatchAttachObject(Aws::Utils::Json::JsonView jsonValue);
    BatchAttachObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The parent object reference.</p>
     */
    inline const ObjectReference& GetParentReference() const{ return m_parentReference; }

    /**
     * <p>The parent object reference.</p>
     */
    inline bool ParentReferenceHasBeenSet() const { return m_parentReferenceHasBeenSet; }

    /**
     * <p>The parent object reference.</p>
     */
    inline void SetParentReference(const ObjectReference& value) { m_parentReferenceHasBeenSet = true; m_parentReference = value; }

    /**
     * <p>The parent object reference.</p>
     */
    inline void SetParentReference(ObjectReference&& value) { m_parentReferenceHasBeenSet = true; m_parentReference = std::move(value); }

    /**
     * <p>The parent object reference.</p>
     */
    inline BatchAttachObject& WithParentReference(const ObjectReference& value) { SetParentReference(value); return *this;}

    /**
     * <p>The parent object reference.</p>
     */
    inline BatchAttachObject& WithParentReference(ObjectReference&& value) { SetParentReference(std::move(value)); return *this;}


    /**
     * <p>The child object reference that is to be attached to the object.</p>
     */
    inline const ObjectReference& GetChildReference() const{ return m_childReference; }

    /**
     * <p>The child object reference that is to be attached to the object.</p>
     */
    inline bool ChildReferenceHasBeenSet() const { return m_childReferenceHasBeenSet; }

    /**
     * <p>The child object reference that is to be attached to the object.</p>
     */
    inline void SetChildReference(const ObjectReference& value) { m_childReferenceHasBeenSet = true; m_childReference = value; }

    /**
     * <p>The child object reference that is to be attached to the object.</p>
     */
    inline void SetChildReference(ObjectReference&& value) { m_childReferenceHasBeenSet = true; m_childReference = std::move(value); }

    /**
     * <p>The child object reference that is to be attached to the object.</p>
     */
    inline BatchAttachObject& WithChildReference(const ObjectReference& value) { SetChildReference(value); return *this;}

    /**
     * <p>The child object reference that is to be attached to the object.</p>
     */
    inline BatchAttachObject& WithChildReference(ObjectReference&& value) { SetChildReference(std::move(value)); return *this;}


    /**
     * <p>The name of the link.</p>
     */
    inline const Aws::String& GetLinkName() const{ return m_linkName; }

    /**
     * <p>The name of the link.</p>
     */
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }

    /**
     * <p>The name of the link.</p>
     */
    inline void SetLinkName(const Aws::String& value) { m_linkNameHasBeenSet = true; m_linkName = value; }

    /**
     * <p>The name of the link.</p>
     */
    inline void SetLinkName(Aws::String&& value) { m_linkNameHasBeenSet = true; m_linkName = std::move(value); }

    /**
     * <p>The name of the link.</p>
     */
    inline void SetLinkName(const char* value) { m_linkNameHasBeenSet = true; m_linkName.assign(value); }

    /**
     * <p>The name of the link.</p>
     */
    inline BatchAttachObject& WithLinkName(const Aws::String& value) { SetLinkName(value); return *this;}

    /**
     * <p>The name of the link.</p>
     */
    inline BatchAttachObject& WithLinkName(Aws::String&& value) { SetLinkName(std::move(value)); return *this;}

    /**
     * <p>The name of the link.</p>
     */
    inline BatchAttachObject& WithLinkName(const char* value) { SetLinkName(value); return *this;}

  private:

    ObjectReference m_parentReference;
    bool m_parentReferenceHasBeenSet;

    ObjectReference m_childReference;
    bool m_childReferenceHasBeenSet;

    Aws::String m_linkName;
    bool m_linkNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
