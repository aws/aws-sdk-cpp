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
    AWS_CLOUDDIRECTORY_API PolicyAttachment() = default;
    AWS_CLOUDDIRECTORY_API PolicyAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API PolicyAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of <code>PolicyAttachment</code>.</p>
     */
    inline const Aws::String& GetPolicyId() const { return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    template<typename PolicyIdT = Aws::String>
    void SetPolicyId(PolicyIdT&& value) { m_policyIdHasBeenSet = true; m_policyId = std::forward<PolicyIdT>(value); }
    template<typename PolicyIdT = Aws::String>
    PolicyAttachment& WithPolicyId(PolicyIdT&& value) { SetPolicyId(std::forward<PolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ObjectIdentifier</code> that is associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const { return m_objectIdentifier; }
    inline bool ObjectIdentifierHasBeenSet() const { return m_objectIdentifierHasBeenSet; }
    template<typename ObjectIdentifierT = Aws::String>
    void SetObjectIdentifier(ObjectIdentifierT&& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = std::forward<ObjectIdentifierT>(value); }
    template<typename ObjectIdentifierT = Aws::String>
    PolicyAttachment& WithObjectIdentifier(ObjectIdentifierT&& value) { SetObjectIdentifier(std::forward<ObjectIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of policy that can be associated with
     * <code>PolicyAttachment</code>.</p>
     */
    inline const Aws::String& GetPolicyType() const { return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    template<typename PolicyTypeT = Aws::String>
    void SetPolicyType(PolicyTypeT&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::forward<PolicyTypeT>(value); }
    template<typename PolicyTypeT = Aws::String>
    PolicyAttachment& WithPolicyType(PolicyTypeT&& value) { SetPolicyType(std::forward<PolicyTypeT>(value)); return *this;}
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
