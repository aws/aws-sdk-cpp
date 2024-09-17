/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PolicyAttachment
  {
  public:
    AWS_CLOUDDIRECTORY_API PolicyAttachment();
    AWS_CLOUDDIRECTORY_API PolicyAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API PolicyAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of <code>PolicyAttachment</code>.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }
    inline PolicyAttachment& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}
    inline PolicyAttachment& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}
    inline PolicyAttachment& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ObjectIdentifier</code> that is associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const{ return m_objectIdentifier; }
    inline bool ObjectIdentifierHasBeenSet() const { return m_objectIdentifierHasBeenSet; }
    inline void SetObjectIdentifier(const Aws::String& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = value; }
    inline void SetObjectIdentifier(Aws::String&& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = std::move(value); }
    inline void SetObjectIdentifier(const char* value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier.assign(value); }
    inline PolicyAttachment& WithObjectIdentifier(const Aws::String& value) { SetObjectIdentifier(value); return *this;}
    inline PolicyAttachment& WithObjectIdentifier(Aws::String&& value) { SetObjectIdentifier(std::move(value)); return *this;}
    inline PolicyAttachment& WithObjectIdentifier(const char* value) { SetObjectIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of policy that can be associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline const Aws::String& GetPolicyType() const{ return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(const Aws::String& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline void SetPolicyType(Aws::String&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }
    inline void SetPolicyType(const char* value) { m_policyTypeHasBeenSet = true; m_policyType.assign(value); }
    inline PolicyAttachment& WithPolicyType(const Aws::String& value) { SetPolicyType(value); return *this;}
    inline PolicyAttachment& WithPolicyType(Aws::String&& value) { SetPolicyType(std::move(value)); return *this;}
    inline PolicyAttachment& WithPolicyType(const char* value) { SetPolicyType(value); return *this;}
    ///@}
  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_objectIdentifier;
    bool m_objectIdentifierHasBeenSet = false;

    Aws::String m_policyType;
    bool m_policyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
