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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/AccountQuota.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeAccountAttributesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API DescribeAccountAttributesResult
  {
  public:
    DescribeAccountAttributesResult();
    DescribeAccountAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAccountAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Account quota information.</p>
     */
    inline const Aws::Vector<AccountQuota>& GetAccountQuotas() const{ return m_accountQuotas; }

    /**
     * <p>Account quota information.</p>
     */
    inline void SetAccountQuotas(const Aws::Vector<AccountQuota>& value) { m_accountQuotas = value; }

    /**
     * <p>Account quota information.</p>
     */
    inline void SetAccountQuotas(Aws::Vector<AccountQuota>&& value) { m_accountQuotas = std::move(value); }

    /**
     * <p>Account quota information.</p>
     */
    inline DescribeAccountAttributesResult& WithAccountQuotas(const Aws::Vector<AccountQuota>& value) { SetAccountQuotas(value); return *this;}

    /**
     * <p>Account quota information.</p>
     */
    inline DescribeAccountAttributesResult& WithAccountQuotas(Aws::Vector<AccountQuota>&& value) { SetAccountQuotas(std::move(value)); return *this;}

    /**
     * <p>Account quota information.</p>
     */
    inline DescribeAccountAttributesResult& AddAccountQuotas(const AccountQuota& value) { m_accountQuotas.push_back(value); return *this; }

    /**
     * <p>Account quota information.</p>
     */
    inline DescribeAccountAttributesResult& AddAccountQuotas(AccountQuota&& value) { m_accountQuotas.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AccountQuota> m_accountQuotas;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
