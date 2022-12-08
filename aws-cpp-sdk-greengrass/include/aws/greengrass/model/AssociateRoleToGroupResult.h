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
  class AssociateRoleToGroupResult
  {
  public:
    AWS_GREENGRASS_API AssociateRoleToGroupResult();
    AWS_GREENGRASS_API AssociateRoleToGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API AssociateRoleToGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The time, in milliseconds since the epoch, when the role ARN was associated with
     * the group.
     */
    inline const Aws::String& GetAssociatedAt() const{ return m_associatedAt; }

    /**
     * The time, in milliseconds since the epoch, when the role ARN was associated with
     * the group.
     */
    inline void SetAssociatedAt(const Aws::String& value) { m_associatedAt = value; }

    /**
     * The time, in milliseconds since the epoch, when the role ARN was associated with
     * the group.
     */
    inline void SetAssociatedAt(Aws::String&& value) { m_associatedAt = std::move(value); }

    /**
     * The time, in milliseconds since the epoch, when the role ARN was associated with
     * the group.
     */
    inline void SetAssociatedAt(const char* value) { m_associatedAt.assign(value); }

    /**
     * The time, in milliseconds since the epoch, when the role ARN was associated with
     * the group.
     */
    inline AssociateRoleToGroupResult& WithAssociatedAt(const Aws::String& value) { SetAssociatedAt(value); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the role ARN was associated with
     * the group.
     */
    inline AssociateRoleToGroupResult& WithAssociatedAt(Aws::String&& value) { SetAssociatedAt(std::move(value)); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the role ARN was associated with
     * the group.
     */
    inline AssociateRoleToGroupResult& WithAssociatedAt(const char* value) { SetAssociatedAt(value); return *this;}

  private:

    Aws::String m_associatedAt;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
