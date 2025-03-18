/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>One custom scope associated with a user pool resource server. This data type
   * is a member of <code>ResourceServerScopeType</code>. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-define-resource-servers.html">
   * Scopes, M2M, and API authorization with resource servers</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ResourceServerScopeType">AWS
   * API Reference</a></p>
   */
  class ResourceServerScopeType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ResourceServerScopeType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API ResourceServerScopeType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API ResourceServerScopeType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the scope. Amazon Cognito renders custom scopes in the format
     * <code>resourceServerIdentifier/ScopeName</code>. For example, if this parameter
     * is <code>exampleScope</code> in the resource server with the identifier
     * <code>exampleResourceServer</code>, you request and receive the scope
     * <code>exampleResourceServer/exampleScope</code>.</p>
     */
    inline const Aws::String& GetScopeName() const { return m_scopeName; }
    inline bool ScopeNameHasBeenSet() const { return m_scopeNameHasBeenSet; }
    template<typename ScopeNameT = Aws::String>
    void SetScopeName(ScopeNameT&& value) { m_scopeNameHasBeenSet = true; m_scopeName = std::forward<ScopeNameT>(value); }
    template<typename ScopeNameT = Aws::String>
    ResourceServerScopeType& WithScopeName(ScopeNameT&& value) { SetScopeName(std::forward<ScopeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly description of a custom scope.</p>
     */
    inline const Aws::String& GetScopeDescription() const { return m_scopeDescription; }
    inline bool ScopeDescriptionHasBeenSet() const { return m_scopeDescriptionHasBeenSet; }
    template<typename ScopeDescriptionT = Aws::String>
    void SetScopeDescription(ScopeDescriptionT&& value) { m_scopeDescriptionHasBeenSet = true; m_scopeDescription = std::forward<ScopeDescriptionT>(value); }
    template<typename ScopeDescriptionT = Aws::String>
    ResourceServerScopeType& WithScopeDescription(ScopeDescriptionT&& value) { SetScopeDescription(std::forward<ScopeDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scopeName;
    bool m_scopeNameHasBeenSet = false;

    Aws::String m_scopeDescription;
    bool m_scopeDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
