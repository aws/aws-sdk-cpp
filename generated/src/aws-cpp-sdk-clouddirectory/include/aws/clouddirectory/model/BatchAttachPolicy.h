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
   * <p>Attaches a policy object to a regular object inside a <a>BatchRead</a>
   * operation. For more information, see <a>AttachPolicy</a> and
   * <a>BatchReadRequest$Operations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchAttachPolicy">AWS
   * API Reference</a></p>
   */
  class BatchAttachPolicy
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchAttachPolicy();
    AWS_CLOUDDIRECTORY_API BatchAttachPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchAttachPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reference that is associated with the policy object.</p>
     */
    inline const ObjectReference& GetPolicyReference() const{ return m_policyReference; }
    inline bool PolicyReferenceHasBeenSet() const { return m_policyReferenceHasBeenSet; }
    inline void SetPolicyReference(const ObjectReference& value) { m_policyReferenceHasBeenSet = true; m_policyReference = value; }
    inline void SetPolicyReference(ObjectReference&& value) { m_policyReferenceHasBeenSet = true; m_policyReference = std::move(value); }
    inline BatchAttachPolicy& WithPolicyReference(const ObjectReference& value) { SetPolicyReference(value); return *this;}
    inline BatchAttachPolicy& WithPolicyReference(ObjectReference&& value) { SetPolicyReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference that identifies the object to which the policy will be
     * attached.</p>
     */
    inline const ObjectReference& GetObjectReference() const{ return m_objectReference; }
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }
    inline void SetObjectReference(const ObjectReference& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }
    inline void SetObjectReference(ObjectReference&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::move(value); }
    inline BatchAttachPolicy& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}
    inline BatchAttachPolicy& WithObjectReference(ObjectReference&& value) { SetObjectReference(std::move(value)); return *this;}
    ///@}
  private:

    ObjectReference m_policyReference;
    bool m_policyReferenceHasBeenSet = false;

    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
