/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The name and ARN of a group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GroupNameAndArn">AWS
   * API Reference</a></p>
   */
  class GroupNameAndArn
  {
  public:
    AWS_IOT_API GroupNameAndArn();
    AWS_IOT_API GroupNameAndArn(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API GroupNameAndArn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The group name.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The group name.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The group name.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The group name.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The group name.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The group name.</p>
     */
    inline GroupNameAndArn& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The group name.</p>
     */
    inline GroupNameAndArn& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The group name.</p>
     */
    inline GroupNameAndArn& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The group ARN.</p>
     */
    inline const Aws::String& GetGroupArn() const{ return m_groupArn; }

    /**
     * <p>The group ARN.</p>
     */
    inline bool GroupArnHasBeenSet() const { return m_groupArnHasBeenSet; }

    /**
     * <p>The group ARN.</p>
     */
    inline void SetGroupArn(const Aws::String& value) { m_groupArnHasBeenSet = true; m_groupArn = value; }

    /**
     * <p>The group ARN.</p>
     */
    inline void SetGroupArn(Aws::String&& value) { m_groupArnHasBeenSet = true; m_groupArn = std::move(value); }

    /**
     * <p>The group ARN.</p>
     */
    inline void SetGroupArn(const char* value) { m_groupArnHasBeenSet = true; m_groupArn.assign(value); }

    /**
     * <p>The group ARN.</p>
     */
    inline GroupNameAndArn& WithGroupArn(const Aws::String& value) { SetGroupArn(value); return *this;}

    /**
     * <p>The group ARN.</p>
     */
    inline GroupNameAndArn& WithGroupArn(Aws::String&& value) { SetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The group ARN.</p>
     */
    inline GroupNameAndArn& WithGroupArn(const char* value) { SetGroupArn(value); return *this;}

  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_groupArn;
    bool m_groupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
