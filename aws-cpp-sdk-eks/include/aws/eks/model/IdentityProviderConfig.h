/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing an identity provider configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/IdentityProviderConfig">AWS
   * API Reference</a></p>
   */
  class IdentityProviderConfig
  {
  public:
    AWS_EKS_API IdentityProviderConfig();
    AWS_EKS_API IdentityProviderConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API IdentityProviderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the identity provider configuration. The only type available is
     * <code>oidc</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the identity provider configuration. The only type available is
     * <code>oidc</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the identity provider configuration. The only type available is
     * <code>oidc</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the identity provider configuration. The only type available is
     * <code>oidc</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the identity provider configuration. The only type available is
     * <code>oidc</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the identity provider configuration. The only type available is
     * <code>oidc</code>.</p>
     */
    inline IdentityProviderConfig& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the identity provider configuration. The only type available is
     * <code>oidc</code>.</p>
     */
    inline IdentityProviderConfig& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the identity provider configuration. The only type available is
     * <code>oidc</code>.</p>
     */
    inline IdentityProviderConfig& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The name of the identity provider configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the identity provider configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the identity provider configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the identity provider configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the identity provider configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the identity provider configuration.</p>
     */
    inline IdentityProviderConfig& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the identity provider configuration.</p>
     */
    inline IdentityProviderConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the identity provider configuration.</p>
     */
    inline IdentityProviderConfig& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
