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
  class AWS_GREENGRASS_API AssociateRoleToGroupResult
  {
  public:
    AssociateRoleToGroupResult();
    AssociateRoleToGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AssociateRoleToGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
