﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class UpdateAliasRequest : public KMSRequest
  {
  public:
    AWS_KMS_API UpdateAliasRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAlias"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Identifies the alias that is changing its KMS key. This value must begin with
     * <code>alias/</code> followed by the alias name, such as
     * <code>alias/ExampleAlias</code>. You cannot use <code>UpdateAlias</code> to
     * change the alias name.</p>  <p>Do not include confidential or
     * sensitive information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p> 
     */
    inline const Aws::String& GetAliasName() const { return m_aliasName; }
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
    template<typename AliasNameT = Aws::String>
    void SetAliasName(AliasNameT&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::forward<AliasNameT>(value); }
    template<typename AliasNameT = Aws::String>
    UpdateAliasRequest& WithAliasName(AliasNameT&& value) { SetAliasName(std::forward<AliasNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-mgn-key">customer
     * managed key</a> to associate with the alias. You don't have permission to
     * associate an alias with an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-key">Amazon
     * Web Services managed key</a>.</p> <p>The KMS key must be in the same Amazon Web
     * Services account and Region as the alias. Also, the new target KMS key must be
     * the same type as the current target KMS key (both symmetric or both asymmetric
     * or both HMAC) and they must have the same key usage. </p> <p>Specify the key ID
     * or key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p> <p>To verify that the alias is mapped
     * to the correct KMS key, use <a>ListAliases</a>.</p>
     */
    inline const Aws::String& GetTargetKeyId() const { return m_targetKeyId; }
    inline bool TargetKeyIdHasBeenSet() const { return m_targetKeyIdHasBeenSet; }
    template<typename TargetKeyIdT = Aws::String>
    void SetTargetKeyId(TargetKeyIdT&& value) { m_targetKeyIdHasBeenSet = true; m_targetKeyId = std::forward<TargetKeyIdT>(value); }
    template<typename TargetKeyIdT = Aws::String>
    UpdateAliasRequest& WithTargetKeyId(TargetKeyIdT&& value) { SetTargetKeyId(std::forward<TargetKeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet = false;

    Aws::String m_targetKeyId;
    bool m_targetKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
