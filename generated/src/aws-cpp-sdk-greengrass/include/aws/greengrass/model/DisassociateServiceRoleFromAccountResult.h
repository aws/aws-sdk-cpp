/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
namespace Greengrass
{
namespace Model
{
  class DisassociateServiceRoleFromAccountResult
  {
  public:
    AWS_GREENGRASS_API DisassociateServiceRoleFromAccountResult();
    AWS_GREENGRASS_API DisassociateServiceRoleFromAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API DisassociateServiceRoleFromAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The time when the service role was disassociated from the account.
     */
    inline const Aws::String& GetDisassociatedAt() const{ return m_disassociatedAt; }

    /**
     * The time when the service role was disassociated from the account.
     */
    inline void SetDisassociatedAt(const Aws::String& value) { m_disassociatedAt = value; }

    /**
     * The time when the service role was disassociated from the account.
     */
    inline void SetDisassociatedAt(Aws::String&& value) { m_disassociatedAt = std::move(value); }

    /**
     * The time when the service role was disassociated from the account.
     */
    inline void SetDisassociatedAt(const char* value) { m_disassociatedAt.assign(value); }

    /**
     * The time when the service role was disassociated from the account.
     */
    inline DisassociateServiceRoleFromAccountResult& WithDisassociatedAt(const Aws::String& value) { SetDisassociatedAt(value); return *this;}

    /**
     * The time when the service role was disassociated from the account.
     */
    inline DisassociateServiceRoleFromAccountResult& WithDisassociatedAt(Aws::String&& value) { SetDisassociatedAt(std::move(value)); return *this;}

    /**
     * The time when the service role was disassociated from the account.
     */
    inline DisassociateServiceRoleFromAccountResult& WithDisassociatedAt(const char* value) { SetDisassociatedAt(value); return *this;}

  private:

    Aws::String m_disassociatedAt;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
