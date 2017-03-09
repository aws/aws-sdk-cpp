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
#include <aws/clouddirectory/model/BatchCreateObjectResponse.h>
#include <aws/clouddirectory/model/BatchAttachObjectResponse.h>
#include <aws/clouddirectory/model/BatchDetachObjectResponse.h>
#include <aws/clouddirectory/model/BatchUpdateObjectAttributesResponse.h>
#include <aws/clouddirectory/model/BatchDeleteObjectResponse.h>
#include <aws/clouddirectory/model/BatchAddFacetToObjectResponse.h>
#include <aws/clouddirectory/model/BatchRemoveFacetFromObjectResponse.h>

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
   * <p>Represents the output of a <code>BatchWrite</code> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2016-05-10/BatchWriteOperationResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchWriteOperationResponse
  {
  public:
    BatchWriteOperationResponse();
    BatchWriteOperationResponse(const Aws::Utils::Json::JsonValue& jsonValue);
    BatchWriteOperationResponse& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Creates an object in a <a>Directory</a>.</p>
     */
    inline const BatchCreateObjectResponse& GetCreateObject() const{ return m_createObject; }

    /**
     * <p>Creates an object in a <a>Directory</a>.</p>
     */
    inline void SetCreateObject(const BatchCreateObjectResponse& value) { m_createObjectHasBeenSet = true; m_createObject = value; }

    /**
     * <p>Creates an object in a <a>Directory</a>.</p>
     */
    inline void SetCreateObject(BatchCreateObjectResponse&& value) { m_createObjectHasBeenSet = true; m_createObject = value; }

    /**
     * <p>Creates an object in a <a>Directory</a>.</p>
     */
    inline BatchWriteOperationResponse& WithCreateObject(const BatchCreateObjectResponse& value) { SetCreateObject(value); return *this;}

    /**
     * <p>Creates an object in a <a>Directory</a>.</p>
     */
    inline BatchWriteOperationResponse& WithCreateObject(BatchCreateObjectResponse&& value) { SetCreateObject(value); return *this;}

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline const BatchAttachObjectResponse& GetAttachObject() const{ return m_attachObject; }

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline void SetAttachObject(const BatchAttachObjectResponse& value) { m_attachObjectHasBeenSet = true; m_attachObject = value; }

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline void SetAttachObject(BatchAttachObjectResponse&& value) { m_attachObjectHasBeenSet = true; m_attachObject = value; }

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline BatchWriteOperationResponse& WithAttachObject(const BatchAttachObjectResponse& value) { SetAttachObject(value); return *this;}

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline BatchWriteOperationResponse& WithAttachObject(BatchAttachObjectResponse&& value) { SetAttachObject(value); return *this;}

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline const BatchDetachObjectResponse& GetDetachObject() const{ return m_detachObject; }

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline void SetDetachObject(const BatchDetachObjectResponse& value) { m_detachObjectHasBeenSet = true; m_detachObject = value; }

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline void SetDetachObject(BatchDetachObjectResponse&& value) { m_detachObjectHasBeenSet = true; m_detachObject = value; }

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline BatchWriteOperationResponse& WithDetachObject(const BatchDetachObjectResponse& value) { SetDetachObject(value); return *this;}

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline BatchWriteOperationResponse& WithDetachObject(BatchDetachObjectResponse&& value) { SetDetachObject(value); return *this;}

    /**
     * <p>Updates a given object’s attributes.</p>
     */
    inline const BatchUpdateObjectAttributesResponse& GetUpdateObjectAttributes() const{ return m_updateObjectAttributes; }

    /**
     * <p>Updates a given object’s attributes.</p>
     */
    inline void SetUpdateObjectAttributes(const BatchUpdateObjectAttributesResponse& value) { m_updateObjectAttributesHasBeenSet = true; m_updateObjectAttributes = value; }

    /**
     * <p>Updates a given object’s attributes.</p>
     */
    inline void SetUpdateObjectAttributes(BatchUpdateObjectAttributesResponse&& value) { m_updateObjectAttributesHasBeenSet = true; m_updateObjectAttributes = value; }

    /**
     * <p>Updates a given object’s attributes.</p>
     */
    inline BatchWriteOperationResponse& WithUpdateObjectAttributes(const BatchUpdateObjectAttributesResponse& value) { SetUpdateObjectAttributes(value); return *this;}

    /**
     * <p>Updates a given object’s attributes.</p>
     */
    inline BatchWriteOperationResponse& WithUpdateObjectAttributes(BatchUpdateObjectAttributesResponse&& value) { SetUpdateObjectAttributes(value); return *this;}

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline const BatchDeleteObjectResponse& GetDeleteObject() const{ return m_deleteObject; }

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline void SetDeleteObject(const BatchDeleteObjectResponse& value) { m_deleteObjectHasBeenSet = true; m_deleteObject = value; }

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline void SetDeleteObject(BatchDeleteObjectResponse&& value) { m_deleteObjectHasBeenSet = true; m_deleteObject = value; }

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline BatchWriteOperationResponse& WithDeleteObject(const BatchDeleteObjectResponse& value) { SetDeleteObject(value); return *this;}

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline BatchWriteOperationResponse& WithDeleteObject(BatchDeleteObjectResponse&& value) { SetDeleteObject(value); return *this;}

    /**
     * <p>Result of an add facet to object batch operation.</p>
     */
    inline const BatchAddFacetToObjectResponse& GetAddFacetToObject() const{ return m_addFacetToObject; }

    /**
     * <p>Result of an add facet to object batch operation.</p>
     */
    inline void SetAddFacetToObject(const BatchAddFacetToObjectResponse& value) { m_addFacetToObjectHasBeenSet = true; m_addFacetToObject = value; }

    /**
     * <p>Result of an add facet to object batch operation.</p>
     */
    inline void SetAddFacetToObject(BatchAddFacetToObjectResponse&& value) { m_addFacetToObjectHasBeenSet = true; m_addFacetToObject = value; }

    /**
     * <p>Result of an add facet to object batch operation.</p>
     */
    inline BatchWriteOperationResponse& WithAddFacetToObject(const BatchAddFacetToObjectResponse& value) { SetAddFacetToObject(value); return *this;}

    /**
     * <p>Result of an add facet to object batch operation.</p>
     */
    inline BatchWriteOperationResponse& WithAddFacetToObject(BatchAddFacetToObjectResponse&& value) { SetAddFacetToObject(value); return *this;}

    /**
     * <p>Result of a batch remove facet from object operation.</p>
     */
    inline const BatchRemoveFacetFromObjectResponse& GetRemoveFacetFromObject() const{ return m_removeFacetFromObject; }

    /**
     * <p>Result of a batch remove facet from object operation.</p>
     */
    inline void SetRemoveFacetFromObject(const BatchRemoveFacetFromObjectResponse& value) { m_removeFacetFromObjectHasBeenSet = true; m_removeFacetFromObject = value; }

    /**
     * <p>Result of a batch remove facet from object operation.</p>
     */
    inline void SetRemoveFacetFromObject(BatchRemoveFacetFromObjectResponse&& value) { m_removeFacetFromObjectHasBeenSet = true; m_removeFacetFromObject = value; }

    /**
     * <p>Result of a batch remove facet from object operation.</p>
     */
    inline BatchWriteOperationResponse& WithRemoveFacetFromObject(const BatchRemoveFacetFromObjectResponse& value) { SetRemoveFacetFromObject(value); return *this;}

    /**
     * <p>Result of a batch remove facet from object operation.</p>
     */
    inline BatchWriteOperationResponse& WithRemoveFacetFromObject(BatchRemoveFacetFromObjectResponse&& value) { SetRemoveFacetFromObject(value); return *this;}

  private:
    BatchCreateObjectResponse m_createObject;
    bool m_createObjectHasBeenSet;
    BatchAttachObjectResponse m_attachObject;
    bool m_attachObjectHasBeenSet;
    BatchDetachObjectResponse m_detachObject;
    bool m_detachObjectHasBeenSet;
    BatchUpdateObjectAttributesResponse m_updateObjectAttributes;
    bool m_updateObjectAttributesHasBeenSet;
    BatchDeleteObjectResponse m_deleteObject;
    bool m_deleteObjectHasBeenSet;
    BatchAddFacetToObjectResponse m_addFacetToObject;
    bool m_addFacetToObjectHasBeenSet;
    BatchRemoveFacetFromObjectResponse m_removeFacetFromObject;
    bool m_removeFacetFromObjectHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
