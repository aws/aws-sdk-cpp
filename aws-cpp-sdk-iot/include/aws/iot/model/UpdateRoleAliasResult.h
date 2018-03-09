/*
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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API UpdateRoleAliasResult
  {
  public:
    UpdateRoleAliasResult();
    UpdateRoleAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateRoleAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The role alias.</p>
     */
    inline const Aws::String& GetRoleAlias() const{ return m_roleAlias; }

    /**
     * <p>The role alias.</p>
     */
    inline void SetRoleAlias(const Aws::String& value) { m_roleAlias = value; }

    /**
     * <p>The role alias.</p>
     */
    inline void SetRoleAlias(Aws::String&& value) { m_roleAlias = std::move(value); }

    /**
     * <p>The role alias.</p>
     */
    inline void SetRoleAlias(const char* value) { m_roleAlias.assign(value); }

    /**
     * <p>The role alias.</p>
     */
    inline UpdateRoleAliasResult& WithRoleAlias(const Aws::String& value) { SetRoleAlias(value); return *this;}

    /**
     * <p>The role alias.</p>
     */
    inline UpdateRoleAliasResult& WithRoleAlias(Aws::String&& value) { SetRoleAlias(std::move(value)); return *this;}

    /**
     * <p>The role alias.</p>
     */
    inline UpdateRoleAliasResult& WithRoleAlias(const char* value) { SetRoleAlias(value); return *this;}


    /**
     * <p>The role alias ARN.</p>
     */
    inline const Aws::String& GetRoleAliasArn() const{ return m_roleAliasArn; }

    /**
     * <p>The role alias ARN.</p>
     */
    inline void SetRoleAliasArn(const Aws::String& value) { m_roleAliasArn = value; }

    /**
     * <p>The role alias ARN.</p>
     */
    inline void SetRoleAliasArn(Aws::String&& value) { m_roleAliasArn = std::move(value); }

    /**
     * <p>The role alias ARN.</p>
     */
    inline void SetRoleAliasArn(const char* value) { m_roleAliasArn.assign(value); }

    /**
     * <p>The role alias ARN.</p>
     */
    inline UpdateRoleAliasResult& WithRoleAliasArn(const Aws::String& value) { SetRoleAliasArn(value); return *this;}

    /**
     * <p>The role alias ARN.</p>
     */
    inline UpdateRoleAliasResult& WithRoleAliasArn(Aws::String&& value) { SetRoleAliasArn(std::move(value)); return *this;}

    /**
     * <p>The role alias ARN.</p>
     */
    inline UpdateRoleAliasResult& WithRoleAliasArn(const char* value) { SetRoleAliasArn(value); return *this;}

  private:

    Aws::String m_roleAlias;

    Aws::String m_roleAliasArn;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
