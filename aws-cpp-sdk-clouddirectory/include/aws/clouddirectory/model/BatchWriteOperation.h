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
#include <aws/clouddirectory/model/BatchCreateObject.h>
#include <aws/clouddirectory/model/BatchAttachObject.h>
#include <aws/clouddirectory/model/BatchDetachObject.h>
#include <aws/clouddirectory/model/BatchUpdateObjectAttributes.h>
#include <aws/clouddirectory/model/BatchDeleteObject.h>
#include <aws/clouddirectory/model/BatchAddFacetToObject.h>
#include <aws/clouddirectory/model/BatchRemoveFacetFromObject.h>

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
   * <p>Represents the output of a <code>BatchWrite</code> operation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2016-05-10/BatchWriteOperation">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchWriteOperation
  {
  public:
    BatchWriteOperation();
    BatchWriteOperation(const Aws::Utils::Json::JsonValue& jsonValue);
    BatchWriteOperation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Creates an object.</p>
     */
    inline const BatchCreateObject& GetCreateObject() const{ return m_createObject; }

    /**
     * <p>Creates an object.</p>
     */
    inline void SetCreateObject(const BatchCreateObject& value) { m_createObjectHasBeenSet = true; m_createObject = value; }

    /**
     * <p>Creates an object.</p>
     */
    inline void SetCreateObject(BatchCreateObject&& value) { m_createObjectHasBeenSet = true; m_createObject = value; }

    /**
     * <p>Creates an object.</p>
     */
    inline BatchWriteOperation& WithCreateObject(const BatchCreateObject& value) { SetCreateObject(value); return *this;}

    /**
     * <p>Creates an object.</p>
     */
    inline BatchWriteOperation& WithCreateObject(BatchCreateObject&& value) { SetCreateObject(value); return *this;}

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline const BatchAttachObject& GetAttachObject() const{ return m_attachObject; }

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline void SetAttachObject(const BatchAttachObject& value) { m_attachObjectHasBeenSet = true; m_attachObject = value; }

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline void SetAttachObject(BatchAttachObject&& value) { m_attachObjectHasBeenSet = true; m_attachObject = value; }

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline BatchWriteOperation& WithAttachObject(const BatchAttachObject& value) { SetAttachObject(value); return *this;}

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline BatchWriteOperation& WithAttachObject(BatchAttachObject&& value) { SetAttachObject(value); return *this;}

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline const BatchDetachObject& GetDetachObject() const{ return m_detachObject; }

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline void SetDetachObject(const BatchDetachObject& value) { m_detachObjectHasBeenSet = true; m_detachObject = value; }

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline void SetDetachObject(BatchDetachObject&& value) { m_detachObjectHasBeenSet = true; m_detachObject = value; }

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline BatchWriteOperation& WithDetachObject(const BatchDetachObject& value) { SetDetachObject(value); return *this;}

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline BatchWriteOperation& WithDetachObject(BatchDetachObject&& value) { SetDetachObject(value); return *this;}

    /**
     * <p>Update a given object's attributes.</p>
     */
    inline const BatchUpdateObjectAttributes& GetUpdateObjectAttributes() const{ return m_updateObjectAttributes; }

    /**
     * <p>Update a given object's attributes.</p>
     */
    inline void SetUpdateObjectAttributes(const BatchUpdateObjectAttributes& value) { m_updateObjectAttributesHasBeenSet = true; m_updateObjectAttributes = value; }

    /**
     * <p>Update a given object's attributes.</p>
     */
    inline void SetUpdateObjectAttributes(BatchUpdateObjectAttributes&& value) { m_updateObjectAttributesHasBeenSet = true; m_updateObjectAttributes = value; }

    /**
     * <p>Update a given object's attributes.</p>
     */
    inline BatchWriteOperation& WithUpdateObjectAttributes(const BatchUpdateObjectAttributes& value) { SetUpdateObjectAttributes(value); return *this;}

    /**
     * <p>Update a given object's attributes.</p>
     */
    inline BatchWriteOperation& WithUpdateObjectAttributes(BatchUpdateObjectAttributes&& value) { SetUpdateObjectAttributes(value); return *this;}

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline const BatchDeleteObject& GetDeleteObject() const{ return m_deleteObject; }

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline void SetDeleteObject(const BatchDeleteObject& value) { m_deleteObjectHasBeenSet = true; m_deleteObject = value; }

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline void SetDeleteObject(BatchDeleteObject&& value) { m_deleteObjectHasBeenSet = true; m_deleteObject = value; }

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline BatchWriteOperation& WithDeleteObject(const BatchDeleteObject& value) { SetDeleteObject(value); return *this;}

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline BatchWriteOperation& WithDeleteObject(BatchDeleteObject&& value) { SetDeleteObject(value); return *this;}

    /**
     * <p>Batch operation adding a facet to an object.</p>
     */
    inline const BatchAddFacetToObject& GetAddFacetToObject() const{ return m_addFacetToObject; }

    /**
     * <p>Batch operation adding a facet to an object.</p>
     */
    inline void SetAddFacetToObject(const BatchAddFacetToObject& value) { m_addFacetToObjectHasBeenSet = true; m_addFacetToObject = value; }

    /**
     * <p>Batch operation adding a facet to an object.</p>
     */
    inline void SetAddFacetToObject(BatchAddFacetToObject&& value) { m_addFacetToObjectHasBeenSet = true; m_addFacetToObject = value; }

    /**
     * <p>Batch operation adding a facet to an object.</p>
     */
    inline BatchWriteOperation& WithAddFacetToObject(const BatchAddFacetToObject& value) { SetAddFacetToObject(value); return *this;}

    /**
     * <p>Batch operation adding a facet to an object.</p>
     */
    inline BatchWriteOperation& WithAddFacetToObject(BatchAddFacetToObject&& value) { SetAddFacetToObject(value); return *this;}

    /**
     * <p>Batch operation removing a facet from an object.</p>
     */
    inline const BatchRemoveFacetFromObject& GetRemoveFacetFromObject() const{ return m_removeFacetFromObject; }

    /**
     * <p>Batch operation removing a facet from an object.</p>
     */
    inline void SetRemoveFacetFromObject(const BatchRemoveFacetFromObject& value) { m_removeFacetFromObjectHasBeenSet = true; m_removeFacetFromObject = value; }

    /**
     * <p>Batch operation removing a facet from an object.</p>
     */
    inline void SetRemoveFacetFromObject(BatchRemoveFacetFromObject&& value) { m_removeFacetFromObjectHasBeenSet = true; m_removeFacetFromObject = value; }

    /**
     * <p>Batch operation removing a facet from an object.</p>
     */
    inline BatchWriteOperation& WithRemoveFacetFromObject(const BatchRemoveFacetFromObject& value) { SetRemoveFacetFromObject(value); return *this;}

    /**
     * <p>Batch operation removing a facet from an object.</p>
     */
    inline BatchWriteOperation& WithRemoveFacetFromObject(BatchRemoveFacetFromObject&& value) { SetRemoveFacetFromObject(value); return *this;}

  private:
    BatchCreateObject m_createObject;
    bool m_createObjectHasBeenSet;
    BatchAttachObject m_attachObject;
    bool m_attachObjectHasBeenSet;
    BatchDetachObject m_detachObject;
    bool m_detachObjectHasBeenSet;
    BatchUpdateObjectAttributes m_updateObjectAttributes;
    bool m_updateObjectAttributesHasBeenSet;
    BatchDeleteObject m_deleteObject;
    bool m_deleteObjectHasBeenSet;
    BatchAddFacetToObject m_addFacetToObject;
    bool m_addFacetToObjectHasBeenSet;
    BatchRemoveFacetFromObject m_removeFacetFromObject;
    bool m_removeFacetFromObjectHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
