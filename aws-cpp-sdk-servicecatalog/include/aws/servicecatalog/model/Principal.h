/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/PrincipalType.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a principal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/Principal">AWS
   * API Reference</a></p>
   */
  class Principal
  {
  public:
    AWS_SERVICECATALOG_API Principal();
    AWS_SERVICECATALOG_API Principal(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Principal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the principal (IAM user, role, or group). This field allows for an
     * ARN with no <code>accountID</code> if the <code>PrincipalType</code> is an
     * <code>IAM_PATTERN</code>. </p>
     */
    inline const Aws::String& GetPrincipalARN() const{ return m_principalARN; }

    /**
     * <p>The ARN of the principal (IAM user, role, or group). This field allows for an
     * ARN with no <code>accountID</code> if the <code>PrincipalType</code> is an
     * <code>IAM_PATTERN</code>. </p>
     */
    inline bool PrincipalARNHasBeenSet() const { return m_principalARNHasBeenSet; }

    /**
     * <p>The ARN of the principal (IAM user, role, or group). This field allows for an
     * ARN with no <code>accountID</code> if the <code>PrincipalType</code> is an
     * <code>IAM_PATTERN</code>. </p>
     */
    inline void SetPrincipalARN(const Aws::String& value) { m_principalARNHasBeenSet = true; m_principalARN = value; }

    /**
     * <p>The ARN of the principal (IAM user, role, or group). This field allows for an
     * ARN with no <code>accountID</code> if the <code>PrincipalType</code> is an
     * <code>IAM_PATTERN</code>. </p>
     */
    inline void SetPrincipalARN(Aws::String&& value) { m_principalARNHasBeenSet = true; m_principalARN = std::move(value); }

    /**
     * <p>The ARN of the principal (IAM user, role, or group). This field allows for an
     * ARN with no <code>accountID</code> if the <code>PrincipalType</code> is an
     * <code>IAM_PATTERN</code>. </p>
     */
    inline void SetPrincipalARN(const char* value) { m_principalARNHasBeenSet = true; m_principalARN.assign(value); }

    /**
     * <p>The ARN of the principal (IAM user, role, or group). This field allows for an
     * ARN with no <code>accountID</code> if the <code>PrincipalType</code> is an
     * <code>IAM_PATTERN</code>. </p>
     */
    inline Principal& WithPrincipalARN(const Aws::String& value) { SetPrincipalARN(value); return *this;}

    /**
     * <p>The ARN of the principal (IAM user, role, or group). This field allows for an
     * ARN with no <code>accountID</code> if the <code>PrincipalType</code> is an
     * <code>IAM_PATTERN</code>. </p>
     */
    inline Principal& WithPrincipalARN(Aws::String&& value) { SetPrincipalARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the principal (IAM user, role, or group). This field allows for an
     * ARN with no <code>accountID</code> if the <code>PrincipalType</code> is an
     * <code>IAM_PATTERN</code>. </p>
     */
    inline Principal& WithPrincipalARN(const char* value) { SetPrincipalARN(value); return *this;}


    /**
     * <p>The principal type. The supported value is <code>IAM</code> if you use a
     * fully defined ARN, or <code>IAM_PATTERN</code> if you use an ARN with no
     * <code>accountID</code>. </p>
     */
    inline const PrincipalType& GetPrincipalType() const{ return m_principalType; }

    /**
     * <p>The principal type. The supported value is <code>IAM</code> if you use a
     * fully defined ARN, or <code>IAM_PATTERN</code> if you use an ARN with no
     * <code>accountID</code>. </p>
     */
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }

    /**
     * <p>The principal type. The supported value is <code>IAM</code> if you use a
     * fully defined ARN, or <code>IAM_PATTERN</code> if you use an ARN with no
     * <code>accountID</code>. </p>
     */
    inline void SetPrincipalType(const PrincipalType& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }

    /**
     * <p>The principal type. The supported value is <code>IAM</code> if you use a
     * fully defined ARN, or <code>IAM_PATTERN</code> if you use an ARN with no
     * <code>accountID</code>. </p>
     */
    inline void SetPrincipalType(PrincipalType&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }

    /**
     * <p>The principal type. The supported value is <code>IAM</code> if you use a
     * fully defined ARN, or <code>IAM_PATTERN</code> if you use an ARN with no
     * <code>accountID</code>. </p>
     */
    inline Principal& WithPrincipalType(const PrincipalType& value) { SetPrincipalType(value); return *this;}

    /**
     * <p>The principal type. The supported value is <code>IAM</code> if you use a
     * fully defined ARN, or <code>IAM_PATTERN</code> if you use an ARN with no
     * <code>accountID</code>. </p>
     */
    inline Principal& WithPrincipalType(PrincipalType&& value) { SetPrincipalType(std::move(value)); return *this;}

  private:

    Aws::String m_principalARN;
    bool m_principalARNHasBeenSet = false;

    PrincipalType m_principalType;
    bool m_principalTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
