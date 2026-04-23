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
   * <p>Detaches the specified policy from the specified directory inside a
   * <a>BatchWrite</a> operation. For more information, see <a>DetachPolicy</a> and
   * <a>BatchWriteRequest$Operations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchDetachPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchDetachPolicy
  {
  public:
    BatchDetachPolicy();
    BatchDetachPolicy(Aws::Utils::Json::JsonView jsonValue);
    BatchDetachPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reference that identifies the policy object.</p>
     */
    inline const ObjectReference& GetPolicyReference() const{ return m_policyReference; }

    /**
     * <p>Reference that identifies the policy object.</p>
     */
    inline bool PolicyReferenceHasBeenSet() const { return m_policyReferenceHasBeenSet; }

    /**
     * <p>Reference that identifies the policy object.</p>
     */
    inline void SetPolicyReference(const ObjectReference& value) { m_policyReferenceHasBeenSet = true; m_policyReference = value; }

    /**
     * <p>Reference that identifies the policy object.</p>
     */
    inline void SetPolicyReference(ObjectReference&& value) { m_policyReferenceHasBeenSet = true; m_policyReference = std::move(value); }

    /**
     * <p>Reference that identifies the policy object.</p>
     */
    inline BatchDetachPolicy& WithPolicyReference(const ObjectReference& value) { SetPolicyReference(value); return *this;}

    /**
     * <p>Reference that identifies the policy object.</p>
     */
    inline BatchDetachPolicy& WithPolicyReference(ObjectReference&& value) { SetPolicyReference(std::move(value)); return *this;}


    /**
     * <p>Reference that identifies the object whose policy object will be
     * detached.</p>
     */
    inline const ObjectReference& GetObjectReference() const{ return m_objectReference; }

    /**
     * <p>Reference that identifies the object whose policy object will be
     * detached.</p>
     */
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }

    /**
     * <p>Reference that identifies the object whose policy object will be
     * detached.</p>
     */
    inline void SetObjectReference(const ObjectReference& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }

    /**
     * <p>Reference that identifies the object whose policy object will be
     * detached.</p>
     */
    inline void SetObjectReference(ObjectReference&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::move(value); }

    /**
     * <p>Reference that identifies the object whose policy object will be
     * detached.</p>
     */
    inline BatchDetachPolicy& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}

    /**
     * <p>Reference that identifies the object whose policy object will be
     * detached.</p>
     */
    inline BatchDetachPolicy& WithObjectReference(ObjectReference&& value) { SetObjectReference(std::move(value)); return *this;}

  private:

    ObjectReference m_policyReference;
    bool m_policyReferenceHasBeenSet;

    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
