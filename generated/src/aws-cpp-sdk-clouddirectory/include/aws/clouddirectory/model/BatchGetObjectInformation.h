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
   * <p>Retrieves metadata about an object inside a <a>BatchRead</a> operation. For
   * more information, see <a>GetObjectInformation</a> and
   * <a>BatchReadRequest$Operations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchGetObjectInformation">AWS
   * API Reference</a></p>
   */
  class BatchGetObjectInformation
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchGetObjectInformation();
    AWS_CLOUDDIRECTORY_API BatchGetObjectInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchGetObjectInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to the object.</p>
     */
    inline const ObjectReference& GetObjectReference() const{ return m_objectReference; }

    /**
     * <p>A reference to the object.</p>
     */
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }

    /**
     * <p>A reference to the object.</p>
     */
    inline void SetObjectReference(const ObjectReference& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }

    /**
     * <p>A reference to the object.</p>
     */
    inline void SetObjectReference(ObjectReference&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::move(value); }

    /**
     * <p>A reference to the object.</p>
     */
    inline BatchGetObjectInformation& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}

    /**
     * <p>A reference to the object.</p>
     */
    inline BatchGetObjectInformation& WithObjectReference(ObjectReference&& value) { SetObjectReference(std::move(value)); return *this;}

  private:

    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
