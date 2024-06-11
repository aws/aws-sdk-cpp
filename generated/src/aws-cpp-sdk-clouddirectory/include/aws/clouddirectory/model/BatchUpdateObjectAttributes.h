﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BatchUpdateObjectAttributes
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchUpdateObjectAttributes();
    AWS_CLOUDDIRECTORY_API BatchUpdateObjectAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchUpdateObjectAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Reference that identifies the object.</p>
     */
    inline const ObjectReference& GetObjectReference() const{ return m_objectReference; }
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }
    inline void SetObjectReference(const ObjectReference& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }
    inline void SetObjectReference(ObjectReference&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::move(value); }
    inline BatchUpdateObjectAttributes& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}
    inline BatchUpdateObjectAttributes& WithObjectReference(ObjectReference&& value) { SetObjectReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes update structure.</p>
     */
    inline const Aws::Vector<ObjectAttributeUpdate>& GetAttributeUpdates() const{ return m_attributeUpdates; }
    inline bool AttributeUpdatesHasBeenSet() const { return m_attributeUpdatesHasBeenSet; }
    inline void SetAttributeUpdates(const Aws::Vector<ObjectAttributeUpdate>& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = value; }
    inline void SetAttributeUpdates(Aws::Vector<ObjectAttributeUpdate>&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = std::move(value); }
    inline BatchUpdateObjectAttributes& WithAttributeUpdates(const Aws::Vector<ObjectAttributeUpdate>& value) { SetAttributeUpdates(value); return *this;}
    inline BatchUpdateObjectAttributes& WithAttributeUpdates(Aws::Vector<ObjectAttributeUpdate>&& value) { SetAttributeUpdates(std::move(value)); return *this;}
    inline BatchUpdateObjectAttributes& AddAttributeUpdates(const ObjectAttributeUpdate& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.push_back(value); return *this; }
    inline BatchUpdateObjectAttributes& AddAttributeUpdates(ObjectAttributeUpdate&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet = false;

    Aws::Vector<ObjectAttributeUpdate> m_attributeUpdates;
    bool m_attributeUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
