﻿/*
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
   * <p>A resource server scope.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ResourceServerScopeType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API ResourceServerScopeType
  {
  public:
    ResourceServerScopeType();
    ResourceServerScopeType(Aws::Utils::Json::JsonView jsonValue);
    ResourceServerScopeType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the scope.</p>
     */
    inline const Aws::String& GetScopeName() const{ return m_scopeName; }

    /**
     * <p>The name of the scope.</p>
     */
    inline void SetScopeName(const Aws::String& value) { m_scopeNameHasBeenSet = true; m_scopeName = value; }

    /**
     * <p>The name of the scope.</p>
     */
    inline void SetScopeName(Aws::String&& value) { m_scopeNameHasBeenSet = true; m_scopeName = std::move(value); }

    /**
     * <p>The name of the scope.</p>
     */
    inline void SetScopeName(const char* value) { m_scopeNameHasBeenSet = true; m_scopeName.assign(value); }

    /**
     * <p>The name of the scope.</p>
     */
    inline ResourceServerScopeType& WithScopeName(const Aws::String& value) { SetScopeName(value); return *this;}

    /**
     * <p>The name of the scope.</p>
     */
    inline ResourceServerScopeType& WithScopeName(Aws::String&& value) { SetScopeName(std::move(value)); return *this;}

    /**
     * <p>The name of the scope.</p>
     */
    inline ResourceServerScopeType& WithScopeName(const char* value) { SetScopeName(value); return *this;}


    /**
     * <p>A description of the scope.</p>
     */
    inline const Aws::String& GetScopeDescription() const{ return m_scopeDescription; }

    /**
     * <p>A description of the scope.</p>
     */
    inline void SetScopeDescription(const Aws::String& value) { m_scopeDescriptionHasBeenSet = true; m_scopeDescription = value; }

    /**
     * <p>A description of the scope.</p>
     */
    inline void SetScopeDescription(Aws::String&& value) { m_scopeDescriptionHasBeenSet = true; m_scopeDescription = std::move(value); }

    /**
     * <p>A description of the scope.</p>
     */
    inline void SetScopeDescription(const char* value) { m_scopeDescriptionHasBeenSet = true; m_scopeDescription.assign(value); }

    /**
     * <p>A description of the scope.</p>
     */
    inline ResourceServerScopeType& WithScopeDescription(const Aws::String& value) { SetScopeDescription(value); return *this;}

    /**
     * <p>A description of the scope.</p>
     */
    inline ResourceServerScopeType& WithScopeDescription(Aws::String&& value) { SetScopeDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the scope.</p>
     */
    inline ResourceServerScopeType& WithScopeDescription(const char* value) { SetScopeDescription(value); return *this;}

  private:

    Aws::String m_scopeName;
    bool m_scopeNameHasBeenSet;

    Aws::String m_scopeDescription;
    bool m_scopeDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
