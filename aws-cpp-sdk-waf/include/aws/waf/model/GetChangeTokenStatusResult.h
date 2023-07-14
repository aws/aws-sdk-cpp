﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/ChangeTokenStatus.h>
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
namespace WAF
{
namespace Model
{
  class AWS_WAF_API GetChangeTokenStatusResult
  {
  public:
    GetChangeTokenStatusResult();
    GetChangeTokenStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetChangeTokenStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
} // namespace WAF
} // namespace Aws
