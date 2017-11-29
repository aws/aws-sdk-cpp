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
#include <aws/iot/model/RoleAliasDescription.h>
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
  class AWS_IOT_API DescribeRoleAliasResult
  {
  public:
    DescribeRoleAliasResult();
    DescribeRoleAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRoleAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The role alias description.</p>
     */
    inline const RoleAliasDescription& GetRoleAliasDescription() const{ return m_roleAliasDescription; }

    /**
     * <p>The role alias description.</p>
     */
    inline void SetRoleAliasDescription(const RoleAliasDescription& value) { m_roleAliasDescription = value; }

    /**
     * <p>The role alias description.</p>
     */
    inline void SetRoleAliasDescription(RoleAliasDescription&& value) { m_roleAliasDescription = std::move(value); }

    /**
     * <p>The role alias description.</p>
     */
    inline DescribeRoleAliasResult& WithRoleAliasDescription(const RoleAliasDescription& value) { SetRoleAliasDescription(value); return *this;}

    /**
     * <p>The role alias description.</p>
     */
    inline DescribeRoleAliasResult& WithRoleAliasDescription(RoleAliasDescription&& value) { SetRoleAliasDescription(std::move(value)); return *this;}

  private:

    RoleAliasDescription m_roleAliasDescription;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
