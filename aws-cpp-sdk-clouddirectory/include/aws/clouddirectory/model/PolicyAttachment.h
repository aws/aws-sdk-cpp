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
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>Contains the <code>PolicyType</code>, <code>PolicyId</code>, and the
   * <code>ObjectIdentifier</code> to which it is attached.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2016-05-10/PolicyAttachment">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API PolicyAttachment
  {
  public:
    PolicyAttachment();
    PolicyAttachment(const Aws::Utils::Json::JsonValue& jsonValue);
    PolicyAttachment& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ID of <code>PolicyAttachment</code>.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The ID of <code>PolicyAttachment</code>.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The ID of <code>PolicyAttachment</code>.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

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
    inline PolicyAttachment& WithPolicyId(Aws::String&& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The ID of <code>PolicyAttachment</code>.</p>
     */
    inline PolicyAttachment& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}

    /**
     * <p>The <code>ObjectIdentifier</code> associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const{ return m_objectIdentifier; }

    /**
     * <p>The <code>ObjectIdentifier</code> associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline void SetObjectIdentifier(const Aws::String& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = value; }

    /**
     * <p>The <code>ObjectIdentifier</code> associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline void SetObjectIdentifier(Aws::String&& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = value; }

    /**
     * <p>The <code>ObjectIdentifier</code> associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline void SetObjectIdentifier(const char* value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier.assign(value); }

    /**
     * <p>The <code>ObjectIdentifier</code> associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline PolicyAttachment& WithObjectIdentifier(const Aws::String& value) { SetObjectIdentifier(value); return *this;}

    /**
     * <p>The <code>ObjectIdentifier</code> associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline PolicyAttachment& WithObjectIdentifier(Aws::String&& value) { SetObjectIdentifier(value); return *this;}

    /**
     * <p>The <code>ObjectIdentifier</code> associated with
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
    inline void SetPolicyType(const Aws::String& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The type of policy that can be associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline void SetPolicyType(Aws::String&& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

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
    inline PolicyAttachment& WithPolicyType(Aws::String&& value) { SetPolicyType(value); return *this;}

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
