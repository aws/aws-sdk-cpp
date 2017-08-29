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
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API DescribeDocumentPermissionResult
  {
  public:
    DescribeDocumentPermissionResult();
    DescribeDocumentPermissionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDocumentPermissionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The account IDs that have permission to use this document. The ID can be
     * either an AWS account or <i>All</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The account IDs that have permission to use this document. The ID can be
     * either an AWS account or <i>All</i>.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIds = value; }

    /**
     * <p>The account IDs that have permission to use this document. The ID can be
     * either an AWS account or <i>All</i>.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIds = std::move(value); }

    /**
     * <p>The account IDs that have permission to use this document. The ID can be
     * either an AWS account or <i>All</i>.</p>
     */
    inline DescribeDocumentPermissionResult& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The account IDs that have permission to use this document. The ID can be
     * either an AWS account or <i>All</i>.</p>
     */
    inline DescribeDocumentPermissionResult& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The account IDs that have permission to use this document. The ID can be
     * either an AWS account or <i>All</i>.</p>
     */
    inline DescribeDocumentPermissionResult& AddAccountIds(const Aws::String& value) { m_accountIds.push_back(value); return *this; }

    /**
     * <p>The account IDs that have permission to use this document. The ID can be
     * either an AWS account or <i>All</i>.</p>
     */
    inline DescribeDocumentPermissionResult& AddAccountIds(Aws::String&& value) { m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The account IDs that have permission to use this document. The ID can be
     * either an AWS account or <i>All</i>.</p>
     */
    inline DescribeDocumentPermissionResult& AddAccountIds(const char* value) { m_accountIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_accountIds;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
