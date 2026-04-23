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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A member of an Amazon QuickSight group. Currently, group members must be
   * users. Groups can't be members of another group. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GroupMember">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API GroupMember
  {
  public:
    GroupMember();
    GroupMember(Aws::Utils::Json::JsonView jsonValue);
    GroupMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the group member (user).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the group member (user).</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the group member (user).</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the group member (user).</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the group member (user).</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the group member (user).</p>
     */
    inline GroupMember& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the group member (user).</p>
     */
    inline GroupMember& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the group member (user).</p>
     */
    inline GroupMember& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the group member (user).</p>
     */
    inline const Aws::String& GetMemberName() const{ return m_memberName; }

    /**
     * <p>The name of the group member (user).</p>
     */
    inline bool MemberNameHasBeenSet() const { return m_memberNameHasBeenSet; }

    /**
     * <p>The name of the group member (user).</p>
     */
    inline void SetMemberName(const Aws::String& value) { m_memberNameHasBeenSet = true; m_memberName = value; }

    /**
     * <p>The name of the group member (user).</p>
     */
    inline void SetMemberName(Aws::String&& value) { m_memberNameHasBeenSet = true; m_memberName = std::move(value); }

    /**
     * <p>The name of the group member (user).</p>
     */
    inline void SetMemberName(const char* value) { m_memberNameHasBeenSet = true; m_memberName.assign(value); }

    /**
     * <p>The name of the group member (user).</p>
     */
    inline GroupMember& WithMemberName(const Aws::String& value) { SetMemberName(value); return *this;}

    /**
     * <p>The name of the group member (user).</p>
     */
    inline GroupMember& WithMemberName(Aws::String&& value) { SetMemberName(std::move(value)); return *this;}

    /**
     * <p>The name of the group member (user).</p>
     */
    inline GroupMember& WithMemberName(const char* value) { SetMemberName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_memberName;
    bool m_memberNameHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
