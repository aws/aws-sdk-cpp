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
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EFS
{
namespace Model
{
  class AWS_EFS_API DescribeMountTargetSecurityGroupsResult
  {
  public:
    DescribeMountTargetSecurityGroupsResult();
    DescribeMountTargetSecurityGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeMountTargetSecurityGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>An array of security groups.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroups = value; }

    /**
     * <p>An array of security groups.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroups = std::move(value); }

    /**
     * <p>An array of security groups.</p>
     */
    inline DescribeMountTargetSecurityGroupsResult& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>An array of security groups.</p>
     */
    inline DescribeMountTargetSecurityGroupsResult& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>An array of security groups.</p>
     */
    inline DescribeMountTargetSecurityGroupsResult& AddSecurityGroups(const Aws::String& value) { m_securityGroups.push_back(value); return *this; }

    /**
     * <p>An array of security groups.</p>
     */
    inline DescribeMountTargetSecurityGroupsResult& AddSecurityGroups(Aws::String&& value) { m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of security groups.</p>
     */
    inline DescribeMountTargetSecurityGroupsResult& AddSecurityGroups(const char* value) { m_securityGroups.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_securityGroups;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
