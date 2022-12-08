/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/ChangeTokenStatus.h>
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
namespace WAFRegional
{
namespace Model
{
  class GetChangeTokenStatusResult
  {
  public:
    AWS_WAFREGIONAL_API GetChangeTokenStatusResult();
    AWS_WAFREGIONAL_API GetChangeTokenStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetChangeTokenStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the change token.</p>
     */
    inline const ChangeTokenStatus& GetChangeTokenStatus() const{ return m_changeTokenStatus; }

    /**
     * <p>The status of the change token.</p>
     */
    inline void SetChangeTokenStatus(const ChangeTokenStatus& value) { m_changeTokenStatus = value; }

    /**
     * <p>The status of the change token.</p>
     */
    inline void SetChangeTokenStatus(ChangeTokenStatus&& value) { m_changeTokenStatus = std::move(value); }

    /**
     * <p>The status of the change token.</p>
     */
    inline GetChangeTokenStatusResult& WithChangeTokenStatus(const ChangeTokenStatus& value) { SetChangeTokenStatus(value); return *this;}

    /**
     * <p>The status of the change token.</p>
     */
    inline GetChangeTokenStatusResult& WithChangeTokenStatus(ChangeTokenStatus&& value) { SetChangeTokenStatus(std::move(value)); return *this;}

  private:

    ChangeTokenStatus m_changeTokenStatus;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
