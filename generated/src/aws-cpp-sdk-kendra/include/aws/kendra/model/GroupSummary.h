/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Summary information for groups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/GroupSummary">AWS
   * API Reference</a></p>
   */
  class GroupSummary
  {
  public:
    AWS_KENDRA_API GroupSummary();
    AWS_KENDRA_API GroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API GroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the group you want group summary information on.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The identifier of the group you want group summary information on.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The identifier of the group you want group summary information on.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The identifier of the group you want group summary information on.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The identifier of the group you want group summary information on.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The identifier of the group you want group summary information on.</p>
     */
    inline GroupSummary& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The identifier of the group you want group summary information on.</p>
     */
    inline GroupSummary& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the group you want group summary information on.</p>
     */
    inline GroupSummary& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>The timestamp identifier used for the latest <code>PUT</code> or
     * <code>DELETE</code> action.</p>
     */
    inline long long GetOrderingId() const{ return m_orderingId; }

    /**
     * <p>The timestamp identifier used for the latest <code>PUT</code> or
     * <code>DELETE</code> action.</p>
     */
    inline bool OrderingIdHasBeenSet() const { return m_orderingIdHasBeenSet; }

    /**
     * <p>The timestamp identifier used for the latest <code>PUT</code> or
     * <code>DELETE</code> action.</p>
     */
    inline void SetOrderingId(long long value) { m_orderingIdHasBeenSet = true; m_orderingId = value; }

    /**
     * <p>The timestamp identifier used for the latest <code>PUT</code> or
     * <code>DELETE</code> action.</p>
     */
    inline GroupSummary& WithOrderingId(long long value) { SetOrderingId(value); return *this;}

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    long long m_orderingId;
    bool m_orderingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
