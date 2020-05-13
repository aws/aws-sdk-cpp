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
#include <aws/macie2/Macie2_EXPORTS.h>

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
namespace Macie2
{
namespace Model
{
  class AWS_MACIE2_API DescribeOrganizationConfigurationResult
  {
  public:
    DescribeOrganizationConfigurationResult();
    DescribeOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeOrganizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies whether Amazon Macie is enabled automatically for accounts that are
     * added to the AWS organization.</p>
     */
    inline bool GetAutoEnable() const{ return m_autoEnable; }

    /**
     * <p>Specifies whether Amazon Macie is enabled automatically for accounts that are
     * added to the AWS organization.</p>
     */
    inline void SetAutoEnable(bool value) { m_autoEnable = value; }

    /**
     * <p>Specifies whether Amazon Macie is enabled automatically for accounts that are
     * added to the AWS organization.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithAutoEnable(bool value) { SetAutoEnable(value); return *this;}


    /**
     * <p>Specifies whether the maximum number of Amazon Macie member accounts are
     * already associated with the AWS organization.</p>
     */
    inline bool GetMaxAccountLimitReached() const{ return m_maxAccountLimitReached; }

    /**
     * <p>Specifies whether the maximum number of Amazon Macie member accounts are
     * already associated with the AWS organization.</p>
     */
    inline void SetMaxAccountLimitReached(bool value) { m_maxAccountLimitReached = value; }

    /**
     * <p>Specifies whether the maximum number of Amazon Macie member accounts are
     * already associated with the AWS organization.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithMaxAccountLimitReached(bool value) { SetMaxAccountLimitReached(value); return *this;}

  private:

    bool m_autoEnable;

    bool m_maxAccountLimitReached;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
