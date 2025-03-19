/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BatchAttachObject
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchAttachObject() = default;
    AWS_CLOUDDIRECTORY_API BatchAttachObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchAttachObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parent object reference.</p>
     */
    inline const ObjectReference& GetParentReference() const { return m_parentReference; }
    inline bool ParentReferenceHasBeenSet() const { return m_parentReferenceHasBeenSet; }
    template<typename ParentReferenceT = ObjectReference>
    void SetParentReference(ParentReferenceT&& value) { m_parentReferenceHasBeenSet = true; m_parentReference = std::forward<ParentReferenceT>(value); }
    template<typename ParentReferenceT = ObjectReference>
    BatchAttachObject& WithParentReference(ParentReferenceT&& value) { SetParentReference(std::forward<ParentReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The child object reference that is to be attached to the object.</p>
     */
    inline const ObjectReference& GetChildReference() const { return m_childReference; }
    inline bool ChildReferenceHasBeenSet() const { return m_childReferenceHasBeenSet; }
    template<typename ChildReferenceT = ObjectReference>
    void SetChildReference(ChildReferenceT&& value) { m_childReferenceHasBeenSet = true; m_childReference = std::forward<ChildReferenceT>(value); }
    template<typename ChildReferenceT = ObjectReference>
    BatchAttachObject& WithChildReference(ChildReferenceT&& value) { SetChildReference(std::forward<ChildReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the link.</p>
     */
    inline const Aws::String& GetLinkName() const { return m_linkName; }
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }
    template<typename LinkNameT = Aws::String>
    void SetLinkName(LinkNameT&& value) { m_linkNameHasBeenSet = true; m_linkName = std::forward<LinkNameT>(value); }
    template<typename LinkNameT = Aws::String>
    BatchAttachObject& WithLinkName(LinkNameT&& value) { SetLinkName(std::forward<LinkNameT>(value)); return *this;}
    ///@}
  private:

    ObjectReference m_parentReference;
    bool m_parentReferenceHasBeenSet = false;

    ObjectReference m_childReference;
    bool m_childReferenceHasBeenSet = false;

    Aws::String m_linkName;
    bool m_linkNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
