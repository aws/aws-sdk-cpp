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
   * <p>Attaches the specified object to the specified index inside a
   * <a>BatchRead</a> operation. For more information, see <a>AttachToIndex</a> and
   * <a>BatchReadRequest$Operations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchAttachToIndex">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchAttachToIndex
  {
  public:
    BatchAttachToIndex();
    BatchAttachToIndex(Aws::Utils::Json::JsonView jsonValue);
    BatchAttachToIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to the index that you are attaching the object to.</p>
     */
    inline const ObjectReference& GetIndexReference() const{ return m_indexReference; }

    /**
     * <p>A reference to the index that you are attaching the object to.</p>
     */
    inline bool IndexReferenceHasBeenSet() const { return m_indexReferenceHasBeenSet; }

    /**
     * <p>A reference to the index that you are attaching the object to.</p>
     */
    inline void SetIndexReference(const ObjectReference& value) { m_indexReferenceHasBeenSet = true; m_indexReference = value; }

    /**
     * <p>A reference to the index that you are attaching the object to.</p>
     */
    inline void SetIndexReference(ObjectReference&& value) { m_indexReferenceHasBeenSet = true; m_indexReference = std::move(value); }

    /**
     * <p>A reference to the index that you are attaching the object to.</p>
     */
    inline BatchAttachToIndex& WithIndexReference(const ObjectReference& value) { SetIndexReference(value); return *this;}

    /**
     * <p>A reference to the index that you are attaching the object to.</p>
     */
    inline BatchAttachToIndex& WithIndexReference(ObjectReference&& value) { SetIndexReference(std::move(value)); return *this;}


    /**
     * <p>A reference to the object that you are attaching to the index.</p>
     */
    inline const ObjectReference& GetTargetReference() const{ return m_targetReference; }

    /**
     * <p>A reference to the object that you are attaching to the index.</p>
     */
    inline bool TargetReferenceHasBeenSet() const { return m_targetReferenceHasBeenSet; }

    /**
     * <p>A reference to the object that you are attaching to the index.</p>
     */
    inline void SetTargetReference(const ObjectReference& value) { m_targetReferenceHasBeenSet = true; m_targetReference = value; }

    /**
     * <p>A reference to the object that you are attaching to the index.</p>
     */
    inline void SetTargetReference(ObjectReference&& value) { m_targetReferenceHasBeenSet = true; m_targetReference = std::move(value); }

    /**
     * <p>A reference to the object that you are attaching to the index.</p>
     */
    inline BatchAttachToIndex& WithTargetReference(const ObjectReference& value) { SetTargetReference(value); return *this;}

    /**
     * <p>A reference to the object that you are attaching to the index.</p>
     */
    inline BatchAttachToIndex& WithTargetReference(ObjectReference&& value) { SetTargetReference(std::move(value)); return *this;}

  private:

    ObjectReference m_indexReference;
    bool m_indexReferenceHasBeenSet;

    ObjectReference m_targetReference;
    bool m_targetReferenceHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
