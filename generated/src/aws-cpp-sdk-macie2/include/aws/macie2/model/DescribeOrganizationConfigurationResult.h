/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeOrganizationConfigurationResult
  {
  public:
    AWS_MACIE2_API DescribeOrganizationConfigurationResult();
    AWS_MACIE2_API DescribeOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API DescribeOrganizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies whether Amazon Macie is enabled automatically for accounts that are
     * added to the organization.</p>
     */
    inline bool GetAutoEnable() const{ return m_autoEnable; }

    /**
     * <p>Specifies whether Amazon Macie is enabled automatically for accounts that are
     * added to the organization.</p>
     */
    inline void SetAutoEnable(bool value) { m_autoEnable = value; }

    /**
     * <p>Specifies whether Amazon Macie is enabled automatically for accounts that are
     * added to the organization.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithAutoEnable(bool value) { SetAutoEnable(value); return *this;}


    /**
     * <p>Specifies whether the maximum number of Amazon Macie member accounts are part
     * of the organization.</p>
     */
    inline bool GetMaxAccountLimitReached() const{ return m_maxAccountLimitReached; }

    /**
     * <p>Specifies whether the maximum number of Amazon Macie member accounts are part
     * of the organization.</p>
     */
    inline void SetMaxAccountLimitReached(bool value) { m_maxAccountLimitReached = value; }

    /**
     * <p>Specifies whether the maximum number of Amazon Macie member accounts are part
     * of the organization.</p>
     */
    inline DescribeOrganizationConfigurationResult& WithMaxAccountLimitReached(bool value) { SetMaxAccountLimitReached(value); return *this;}

  private:

    bool m_autoEnable;

    bool m_maxAccountLimitReached;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
