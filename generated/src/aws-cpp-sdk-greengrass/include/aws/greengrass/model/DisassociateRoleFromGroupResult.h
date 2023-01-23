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
  class DisassociateRoleFromGroupResult
  {
  public:
    AWS_GREENGRASS_API DisassociateRoleFromGroupResult();
    AWS_GREENGRASS_API DisassociateRoleFromGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API DisassociateRoleFromGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The time, in milliseconds since the epoch, when the role was disassociated from
     * the group.
     */
    inline const Aws::String& GetDisassociatedAt() const{ return m_disassociatedAt; }

    /**
     * The time, in milliseconds since the epoch, when the role was disassociated from
     * the group.
     */
    inline void SetDisassociatedAt(const Aws::String& value) { m_disassociatedAt = value; }

    /**
     * The time, in milliseconds since the epoch, when the role was disassociated from
     * the group.
     */
    inline void SetDisassociatedAt(Aws::String&& value) { m_disassociatedAt = std::move(value); }

    /**
     * The time, in milliseconds since the epoch, when the role was disassociated from
     * the group.
     */
    inline void SetDisassociatedAt(const char* value) { m_disassociatedAt.assign(value); }

    /**
     * The time, in milliseconds since the epoch, when the role was disassociated from
     * the group.
     */
    inline DisassociateRoleFromGroupResult& WithDisassociatedAt(const Aws::String& value) { SetDisassociatedAt(value); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the role was disassociated from
     * the group.
     */
    inline DisassociateRoleFromGroupResult& WithDisassociatedAt(Aws::String&& value) { SetDisassociatedAt(std::move(value)); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the role was disassociated from
     * the group.
     */
    inline DisassociateRoleFromGroupResult& WithDisassociatedAt(const char* value) { SetDisassociatedAt(value); return *this;}

  private:

    Aws::String m_disassociatedAt;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
