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
#include <aws/lambda/Lambda_EXPORTS.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>Provides configuration information about a Lambda function version alias.</p>
   */
  class AWS_LAMBDA_API AliasConfiguration
  {
  public:
    AliasConfiguration();
    AliasConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    AliasConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Lambda function ARN that is qualified using the alias name as the suffix. For
     * example, if you create an alias called <code>BETA</code> that points to a
     * helloworld function version, the ARN is
     * <code>arn:aws:lambda:aws-regions:acct-id:function:helloworld:BETA</code>.</p>
     */
    inline const Aws::String& GetAliasArn() const{ return m_aliasArn; }

    /**
     * <p>Lambda function ARN that is qualified using the alias name as the suffix. For
     * example, if you create an alias called <code>BETA</code> that points to a
     * helloworld function version, the ARN is
     * <code>arn:aws:lambda:aws-regions:acct-id:function:helloworld:BETA</code>.</p>
     */
    inline void SetAliasArn(const Aws::String& value) { m_aliasArnHasBeenSet = true; m_aliasArn = value; }

    /**
     * <p>Lambda function ARN that is qualified using the alias name as the suffix. For
     * example, if you create an alias called <code>BETA</code> that points to a
     * helloworld function version, the ARN is
     * <code>arn:aws:lambda:aws-regions:acct-id:function:helloworld:BETA</code>.</p>
     */
    inline void SetAliasArn(Aws::String&& value) { m_aliasArnHasBeenSet = true; m_aliasArn = value; }

    /**
     * <p>Lambda function ARN that is qualified using the alias name as the suffix. For
     * example, if you create an alias called <code>BETA</code> that points to a
     * helloworld function version, the ARN is
     * <code>arn:aws:lambda:aws-regions:acct-id:function:helloworld:BETA</code>.</p>
     */
    inline void SetAliasArn(const char* value) { m_aliasArnHasBeenSet = true; m_aliasArn.assign(value); }

    /**
     * <p>Lambda function ARN that is qualified using the alias name as the suffix. For
     * example, if you create an alias called <code>BETA</code> that points to a
     * helloworld function version, the ARN is
     * <code>arn:aws:lambda:aws-regions:acct-id:function:helloworld:BETA</code>.</p>
     */
    inline AliasConfiguration& WithAliasArn(const Aws::String& value) { SetAliasArn(value); return *this;}

    /**
     * <p>Lambda function ARN that is qualified using the alias name as the suffix. For
     * example, if you create an alias called <code>BETA</code> that points to a
     * helloworld function version, the ARN is
     * <code>arn:aws:lambda:aws-regions:acct-id:function:helloworld:BETA</code>.</p>
     */
    inline AliasConfiguration& WithAliasArn(Aws::String&& value) { SetAliasArn(value); return *this;}

    /**
     * <p>Lambda function ARN that is qualified using the alias name as the suffix. For
     * example, if you create an alias called <code>BETA</code> that points to a
     * helloworld function version, the ARN is
     * <code>arn:aws:lambda:aws-regions:acct-id:function:helloworld:BETA</code>.</p>
     */
    inline AliasConfiguration& WithAliasArn(const char* value) { SetAliasArn(value); return *this;}

    /**
     * <p>Alias name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Alias name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Alias name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Alias name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Alias name.</p>
     */
    inline AliasConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Alias name.</p>
     */
    inline AliasConfiguration& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Alias name.</p>
     */
    inline AliasConfiguration& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Function version to which the alias points.</p>
     */
    inline const Aws::String& GetFunctionVersion() const{ return m_functionVersion; }

    /**
     * <p>Function version to which the alias points.</p>
     */
    inline void SetFunctionVersion(const Aws::String& value) { m_functionVersionHasBeenSet = true; m_functionVersion = value; }

    /**
     * <p>Function version to which the alias points.</p>
     */
    inline void SetFunctionVersion(Aws::String&& value) { m_functionVersionHasBeenSet = true; m_functionVersion = value; }

    /**
     * <p>Function version to which the alias points.</p>
     */
    inline void SetFunctionVersion(const char* value) { m_functionVersionHasBeenSet = true; m_functionVersion.assign(value); }

    /**
     * <p>Function version to which the alias points.</p>
     */
    inline AliasConfiguration& WithFunctionVersion(const Aws::String& value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>Function version to which the alias points.</p>
     */
    inline AliasConfiguration& WithFunctionVersion(Aws::String&& value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>Function version to which the alias points.</p>
     */
    inline AliasConfiguration& WithFunctionVersion(const char* value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>Alias description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Alias description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Alias description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Alias description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Alias description.</p>
     */
    inline AliasConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Alias description.</p>
     */
    inline AliasConfiguration& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>Alias description.</p>
     */
    inline AliasConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:
    Aws::String m_aliasArn;
    bool m_aliasArnHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_functionVersion;
    bool m_functionVersionHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
