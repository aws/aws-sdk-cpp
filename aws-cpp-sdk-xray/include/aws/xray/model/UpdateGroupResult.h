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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/Group.h>
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
namespace XRay
{
namespace Model
{
  class AWS_XRAY_API UpdateGroupResult
  {
  public:
    UpdateGroupResult();
    UpdateGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The group that was updated. Contains the name of the group that was updated,
     * the ARN of the group that was updated, and the updated filter expression
     * assigned to the group.</p>
     */
    inline const Group& GetGroup() const{ return m_group; }

    /**
     * <p>The group that was updated. Contains the name of the group that was updated,
     * the ARN of the group that was updated, and the updated filter expression
     * assigned to the group.</p>
     */
    inline void SetGroup(const Group& value) { m_group = value; }

    /**
     * <p>The group that was updated. Contains the name of the group that was updated,
     * the ARN of the group that was updated, and the updated filter expression
     * assigned to the group.</p>
     */
    inline void SetGroup(Group&& value) { m_group = std::move(value); }

    /**
     * <p>The group that was updated. Contains the name of the group that was updated,
     * the ARN of the group that was updated, and the updated filter expression
     * assigned to the group.</p>
     */
    inline UpdateGroupResult& WithGroup(const Group& value) { SetGroup(value); return *this;}

    /**
     * <p>The group that was updated. Contains the name of the group that was updated,
     * the ARN of the group that was updated, and the updated filter expression
     * assigned to the group.</p>
     */
    inline UpdateGroupResult& WithGroup(Group&& value) { SetGroup(std::move(value)); return *this;}

  private:

    Group m_group;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
