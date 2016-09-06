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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
  class AWS_LAMBDA_API UpdateAliasResult
  {
  public:
    UpdateAliasResult();
    UpdateAliasResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateAliasResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetAliasArn(const Aws::String& value) { m_aliasArn = value; }

    /**
     * <p>Lambda function ARN that is qualified using the alias name as the suffix. For
     * example, if you create an alias called <code>BETA</code> that points to a
     * helloworld function version, the ARN is
     * <code>arn:aws:lambda:aws-regions:acct-id:function:helloworld:BETA</code>.</p>
     */
    inline void SetAliasArn(Aws::String&& value) { m_aliasArn = value; }

    /**
     * <p>Lambda function ARN that is qualified using the alias name as the suffix. For
     * example, if you create an alias called <code>BETA</code> that points to a
     * helloworld function version, the ARN is
     * <code>arn:aws:lambda:aws-regions:acct-id:function:helloworld:BETA</code>.</p>
     */
    inline void SetAliasArn(const char* value) { m_aliasArn.assign(value); }

    /**
     * <p>Lambda function ARN that is qualified using the alias name as the suffix. For
     * example, if you create an alias called <code>BETA</code> that points to a
     * helloworld function version, the ARN is
     * <code>arn:aws:lambda:aws-regions:acct-id:function:helloworld:BETA</code>.</p>
     */
    inline UpdateAliasResult& WithAliasArn(const Aws::String& value) { SetAliasArn(value); return *this;}

    /**
     * <p>Lambda function ARN that is qualified using the alias name as the suffix. For
     * example, if you create an alias called <code>BETA</code> that points to a
     * helloworld function version, the ARN is
     * <code>arn:aws:lambda:aws-regions:acct-id:function:helloworld:BETA</code>.</p>
     */
    inline UpdateAliasResult& WithAliasArn(Aws::String&& value) { SetAliasArn(value); return *this;}

    /**
     * <p>Lambda function ARN that is qualified using the alias name as the suffix. For
     * example, if you create an alias called <code>BETA</code> that points to a
     * helloworld function version, the ARN is
     * <code>arn:aws:lambda:aws-regions:acct-id:function:helloworld:BETA</code>.</p>
     */
    inline UpdateAliasResult& WithAliasArn(const char* value) { SetAliasArn(value); return *this;}

    /**
     * <p>Alias name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Alias name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Alias name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = value; }

    /**
     * <p>Alias name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Alias name.</p>
     */
    inline UpdateAliasResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Alias name.</p>
     */
    inline UpdateAliasResult& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Alias name.</p>
     */
    inline UpdateAliasResult& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Function version to which the alias points.</p>
     */
    inline const Aws::String& GetFunctionVersion() const{ return m_functionVersion; }

    /**
     * <p>Function version to which the alias points.</p>
     */
    inline void SetFunctionVersion(const Aws::String& value) { m_functionVersion = value; }

    /**
     * <p>Function version to which the alias points.</p>
     */
    inline void SetFunctionVersion(Aws::String&& value) { m_functionVersion = value; }

    /**
     * <p>Function version to which the alias points.</p>
     */
    inline void SetFunctionVersion(const char* value) { m_functionVersion.assign(value); }

    /**
     * <p>Function version to which the alias points.</p>
     */
    inline UpdateAliasResult& WithFunctionVersion(const Aws::String& value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>Function version to which the alias points.</p>
     */
    inline UpdateAliasResult& WithFunctionVersion(Aws::String&& value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>Function version to which the alias points.</p>
     */
    inline UpdateAliasResult& WithFunctionVersion(const char* value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>Alias description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Alias description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>Alias description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = value; }

    /**
     * <p>Alias description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>Alias description.</p>
     */
    inline UpdateAliasResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Alias description.</p>
     */
    inline UpdateAliasResult& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>Alias description.</p>
     */
    inline UpdateAliasResult& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:
    Aws::String m_aliasArn;
    Aws::String m_name;
    Aws::String m_functionVersion;
    Aws::String m_description;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
