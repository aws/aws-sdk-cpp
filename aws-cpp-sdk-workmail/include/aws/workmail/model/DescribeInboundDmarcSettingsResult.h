/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>

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
namespace WorkMail
{
namespace Model
{
  class AWS_WORKMAIL_API DescribeInboundDmarcSettingsResult
  {
  public:
    DescribeInboundDmarcSettingsResult();
    DescribeInboundDmarcSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeInboundDmarcSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the enforcement setting of the applied policy.</p>
     */
    inline bool GetEnforced() const{ return m_enforced; }

    /**
     * <p>Lists the enforcement setting of the applied policy.</p>
     */
    inline void SetEnforced(bool value) { m_enforced = value; }

    /**
     * <p>Lists the enforcement setting of the applied policy.</p>
     */
    inline DescribeInboundDmarcSettingsResult& WithEnforced(bool value) { SetEnforced(value); return *this;}

  private:

    bool m_enforced;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
