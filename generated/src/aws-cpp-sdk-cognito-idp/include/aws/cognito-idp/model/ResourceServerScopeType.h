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
   * Scopes, M2M, and API authorization with resource servers</a>. </p> <p>This data
   * type is a request parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_CreateResourceServer.html">CreateResourceServer</a>
   * and a response parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeResourceServer.html">DescribeResourceServer</a>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ResourceServerScopeType">AWS
   * API Reference</a></p>
   */
  class ResourceServerScopeType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ResourceServerScopeType();
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
    inline const Aws::String& GetScopeName() const{ return m_scopeName; }
    inline bool ScopeNameHasBeenSet() const { return m_scopeNameHasBeenSet; }
    inline void SetScopeName(const Aws::String& value) { m_scopeNameHasBeenSet = true; m_scopeName = value; }
    inline void SetScopeName(Aws::String&& value) { m_scopeNameHasBeenSet = true; m_scopeName = std::move(value); }
    inline void SetScopeName(const char* value) { m_scopeNameHasBeenSet = true; m_scopeName.assign(value); }
    inline ResourceServerScopeType& WithScopeName(const Aws::String& value) { SetScopeName(value); return *this;}
    inline ResourceServerScopeType& WithScopeName(Aws::String&& value) { SetScopeName(std::move(value)); return *this;}
    inline ResourceServerScopeType& WithScopeName(const char* value) { SetScopeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly description of a custom scope.</p>
     */
    inline const Aws::String& GetScopeDescription() const{ return m_scopeDescription; }
    inline bool ScopeDescriptionHasBeenSet() const { return m_scopeDescriptionHasBeenSet; }
    inline void SetScopeDescription(const Aws::String& value) { m_scopeDescriptionHasBeenSet = true; m_scopeDescription = value; }
    inline void SetScopeDescription(Aws::String&& value) { m_scopeDescriptionHasBeenSet = true; m_scopeDescription = std::move(value); }
    inline void SetScopeDescription(const char* value) { m_scopeDescriptionHasBeenSet = true; m_scopeDescription.assign(value); }
    inline ResourceServerScopeType& WithScopeDescription(const Aws::String& value) { SetScopeDescription(value); return *this;}
    inline ResourceServerScopeType& WithScopeDescription(Aws::String&& value) { SetScopeDescription(std::move(value)); return *this;}
    inline ResourceServerScopeType& WithScopeDescription(const char* value) { SetScopeDescription(value); return *this;}
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
