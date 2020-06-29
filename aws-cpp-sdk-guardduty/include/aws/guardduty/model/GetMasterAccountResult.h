/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/Master.h>
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
namespace GuardDuty
{
namespace Model
{
  class AWS_GUARDDUTY_API GetMasterAccountResult
  {
  public:
    GetMasterAccountResult();
    GetMasterAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetMasterAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The master account details.</p>
     */
    inline const Master& GetMaster() const{ return m_master; }

    /**
     * <p>The master account details.</p>
     */
    inline void SetMaster(const Master& value) { m_master = value; }

    /**
     * <p>The master account details.</p>
     */
    inline void SetMaster(Master&& value) { m_master = std::move(value); }

    /**
     * <p>The master account details.</p>
     */
    inline GetMasterAccountResult& WithMaster(const Master& value) { SetMaster(value); return *this;}

    /**
     * <p>The master account details.</p>
     */
    inline GetMasterAccountResult& WithMaster(Master&& value) { SetMaster(std::move(value)); return *this;}

  private:

    Master m_master;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
