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
   * <p>Contains the <code>PolicyType</code>, <code>PolicyId</code>, and the
   * <code>ObjectIdentifier</code> to which it is attached. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/PolicyAttachment">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API PolicyAttachment
  {
  public:
    PolicyAttachment();
    PolicyAttachment(Aws::Utils::Json::JsonView jsonValue);
    PolicyAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of <code>PolicyAttachment</code>.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The ID of <code>PolicyAttachment</code>.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The ID of <code>PolicyAttachment</code>.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The ID of <code>PolicyAttachment</code>.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The ID of <code>PolicyAttachment</code>.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The ID of <code>PolicyAttachment</code>.</p>
     */
    inline PolicyAttachment& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The ID of <code>PolicyAttachment</code>.</p>
     */
    inline PolicyAttachment& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of <code>PolicyAttachment</code>.</p>
     */
    inline PolicyAttachment& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>The <code>ObjectIdentifier</code> that is associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const{ return m_objectIdentifier; }

    /**
     * <p>The <code>ObjectIdentifier</code> that is associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline bool ObjectIdentifierHasBeenSet() const { return m_objectIdentifierHasBeenSet; }

    /**
     * <p>The <code>ObjectIdentifier</code> that is associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline void SetObjectIdentifier(const Aws::String& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = value; }

    /**
     * <p>The <code>ObjectIdentifier</code> that is associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline void SetObjectIdentifier(Aws::String&& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = std::move(value); }

    /**
     * <p>The <code>ObjectIdentifier</code> that is associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline void SetObjectIdentifier(const char* value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier.assign(value); }

    /**
     * <p>The <code>ObjectIdentifier</code> that is associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline PolicyAttachment& WithObjectIdentifier(const Aws::String& value) { SetObjectIdentifier(value); return *this;}

    /**
     * <p>The <code>ObjectIdentifier</code> that is associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline PolicyAttachment& WithObjectIdentifier(Aws::String&& value) { SetObjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>ObjectIdentifier</code> that is associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline PolicyAttachment& WithObjectIdentifier(const char* value) { SetObjectIdentifier(value); return *this;}


    /**
     * <p>The type of policy that can be associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline const Aws::String& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The type of policy that can be associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p>The type of policy that can be associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline void SetPolicyType(const Aws::String& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The type of policy that can be associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline void SetPolicyType(Aws::String&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>The type of policy that can be associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline void SetPolicyType(const char* value) { m_policyTypeHasBeenSet = true; m_policyType.assign(value); }

    /**
     * <p>The type of policy that can be associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline PolicyAttachment& WithPolicyType(const Aws::String& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The type of policy that can be associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline PolicyAttachment& WithPolicyType(Aws::String&& value) { SetPolicyType(std::move(value)); return *this;}

    /**
     * <p>The type of policy that can be associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline PolicyAttachment& WithPolicyType(const char* value) { SetPolicyType(value); return *this;}

  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet;

    Aws::String m_objectIdentifier;
    bool m_objectIdentifierHasBeenSet;

    Aws::String m_policyType;
    bool m_policyTypeHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
