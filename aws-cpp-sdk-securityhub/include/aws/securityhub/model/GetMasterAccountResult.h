/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/Invitation.h>
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
namespace SecurityHub
{
namespace Model
{
  class AWS_SECURITYHUB_API GetMasterAccountResult
  {
  public:
    GetMasterAccountResult();
    GetMasterAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetMasterAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of details about the Security Hub master account for the current
     * member account. </p>
     */
    inline const Invitation& GetMaster() const{ return m_master; }

    /**
     * <p>A list of details about the Security Hub master account for the current
     * member account. </p>
     */
    inline void SetMaster(const Invitation& value) { m_master = value; }

    /**
     * <p>A list of details about the Security Hub master account for the current
     * member account. </p>
     */
    inline void SetMaster(Invitation&& value) { m_master = std::move(value); }

    /**
     * <p>A list of details about the Security Hub master account for the current
     * member account. </p>
     */
    inline GetMasterAccountResult& WithMaster(const Invitation& value) { SetMaster(value); return *this;}

    /**
     * <p>A list of details about the Security Hub master account for the current
     * member account. </p>
     */
    inline GetMasterAccountResult& WithMaster(Invitation&& value) { SetMaster(std::move(value)); return *this;}

  private:

    Invitation m_master;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
