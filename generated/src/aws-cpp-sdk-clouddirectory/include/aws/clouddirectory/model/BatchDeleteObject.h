/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/ObjectReference.h>
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
   * <p>Represents the output of a <a>DeleteObject</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchDeleteObject">AWS
   * API Reference</a></p>
   */
  class BatchDeleteObject
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchDeleteObject();
    AWS_CLOUDDIRECTORY_API BatchDeleteObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchDeleteObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The reference that identifies the object.</p>
     */
    inline const ObjectReference& GetObjectReference() const{ return m_objectReference; }

    /**
     * <p>The reference that identifies the object.</p>
     */
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }

    /**
     * <p>The reference that identifies the object.</p>
     */
    inline void SetObjectReference(const ObjectReference& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }

    /**
     * <p>The reference that identifies the object.</p>
     */
    inline void SetObjectReference(ObjectReference&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::move(value); }

    /**
     * <p>The reference that identifies the object.</p>
     */
    inline BatchDeleteObject& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}

    /**
     * <p>The reference that identifies the object.</p>
     */
    inline BatchDeleteObject& WithObjectReference(ObjectReference&& value) { SetObjectReference(std::move(value)); return *this;}

  private:

    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
