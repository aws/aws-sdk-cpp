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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/ObjectAttributeUpdate.h>
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
   * <p>Represents the output of a <code>BatchUpdate</code> operation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchUpdateObjectAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchUpdateObjectAttributes
  {
  public:
    BatchUpdateObjectAttributes();
    BatchUpdateObjectAttributes(Aws::Utils::Json::JsonView jsonValue);
    BatchUpdateObjectAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reference that identifies the object.</p>
     */
    inline const ObjectReference& GetObjectReference() const{ return m_objectReference; }

    /**
     * <p>Reference that identifies the object.</p>
     */
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }

    /**
     * <p>Reference that identifies the object.</p>
     */
    inline void SetObjectReference(const ObjectReference& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }

    /**
     * <p>Reference that identifies the object.</p>
     */
    inline void SetObjectReference(ObjectReference&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::move(value); }

    /**
     * <p>Reference that identifies the object.</p>
     */
    inline BatchUpdateObjectAttributes& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}

    /**
     * <p>Reference that identifies the object.</p>
     */
    inline BatchUpdateObjectAttributes& WithObjectReference(ObjectReference&& value) { SetObjectReference(std::move(value)); return *this;}


    /**
     * <p>Attributes update structure.</p>
     */
    inline const Aws::Vector<ObjectAttributeUpdate>& GetAttributeUpdates() const{ return m_attributeUpdates; }

    /**
     * <p>Attributes update structure.</p>
     */
    inline bool AttributeUpdatesHasBeenSet() const { return m_attributeUpdatesHasBeenSet; }

    /**
     * <p>Attributes update structure.</p>
     */
    inline void SetAttributeUpdates(const Aws::Vector<ObjectAttributeUpdate>& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = value; }

    /**
     * <p>Attributes update structure.</p>
     */
    inline void SetAttributeUpdates(Aws::Vector<ObjectAttributeUpdate>&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = std::move(value); }

    /**
     * <p>Attributes update structure.</p>
     */
    inline BatchUpdateObjectAttributes& WithAttributeUpdates(const Aws::Vector<ObjectAttributeUpdate>& value) { SetAttributeUpdates(value); return *this;}

    /**
     * <p>Attributes update structure.</p>
     */
    inline BatchUpdateObjectAttributes& WithAttributeUpdates(Aws::Vector<ObjectAttributeUpdate>&& value) { SetAttributeUpdates(std::move(value)); return *this;}

    /**
     * <p>Attributes update structure.</p>
     */
    inline BatchUpdateObjectAttributes& AddAttributeUpdates(const ObjectAttributeUpdate& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.push_back(value); return *this; }

    /**
     * <p>Attributes update structure.</p>
     */
    inline BatchUpdateObjectAttributes& AddAttributeUpdates(ObjectAttributeUpdate&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.push_back(std::move(value)); return *this; }

  private:

    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet;

    Aws::Vector<ObjectAttributeUpdate> m_attributeUpdates;
    bool m_attributeUpdatesHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
