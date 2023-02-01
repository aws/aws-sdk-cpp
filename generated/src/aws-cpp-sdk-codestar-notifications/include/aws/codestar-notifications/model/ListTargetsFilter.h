/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/codestar-notifications/model/ListTargetsFilterName.h>
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
namespace CodeStarNotifications
{
namespace Model
{

  /**
   * <p>Information about a filter to apply to the list of returned targets. You can
   * filter by target type, address, or status. For example, to filter results to
   * notification rules that have active Chatbot topics as targets, you could specify
   * a ListTargetsFilter Name as <code>TargetType</code> and a Value of
   * <code>SNS</code>, and a Name of <code>TARGET_STATUS</code> and a Value of
   * <code>ACTIVE</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListTargetsFilter">AWS
   * API Reference</a></p>
   */
  class ListTargetsFilter
  {
  public:
    AWS_CODESTARNOTIFICATIONS_API ListTargetsFilter();
    AWS_CODESTARNOTIFICATIONS_API ListTargetsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARNOTIFICATIONS_API ListTargetsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARNOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the attribute you want to use to filter the returned targets.</p>
     */
    inline const ListTargetsFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the attribute you want to use to filter the returned targets.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the attribute you want to use to filter the returned targets.</p>
     */
    inline void SetName(const ListTargetsFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the attribute you want to use to filter the returned targets.</p>
     */
    inline void SetName(ListTargetsFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the attribute you want to use to filter the returned targets.</p>
     */
    inline ListTargetsFilter& WithName(const ListTargetsFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the attribute you want to use to filter the returned targets.</p>
     */
    inline ListTargetsFilter& WithName(ListTargetsFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value of the attribute you want to use to filter the returned targets.
     * For example, if you specify <code>SNS</code> for the Target type, you could
     * specify an Amazon Resource Name (ARN) for a topic as the value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the attribute you want to use to filter the returned targets.
     * For example, if you specify <code>SNS</code> for the Target type, you could
     * specify an Amazon Resource Name (ARN) for a topic as the value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the attribute you want to use to filter the returned targets.
     * For example, if you specify <code>SNS</code> for the Target type, you could
     * specify an Amazon Resource Name (ARN) for a topic as the value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the attribute you want to use to filter the returned targets.
     * For example, if you specify <code>SNS</code> for the Target type, you could
     * specify an Amazon Resource Name (ARN) for a topic as the value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the attribute you want to use to filter the returned targets.
     * For example, if you specify <code>SNS</code> for the Target type, you could
     * specify an Amazon Resource Name (ARN) for a topic as the value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the attribute you want to use to filter the returned targets.
     * For example, if you specify <code>SNS</code> for the Target type, you could
     * specify an Amazon Resource Name (ARN) for a topic as the value.</p>
     */
    inline ListTargetsFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the attribute you want to use to filter the returned targets.
     * For example, if you specify <code>SNS</code> for the Target type, you could
     * specify an Amazon Resource Name (ARN) for a topic as the value.</p>
     */
    inline ListTargetsFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the attribute you want to use to filter the returned targets.
     * For example, if you specify <code>SNS</code> for the Target type, you could
     * specify an Amazon Resource Name (ARN) for a topic as the value.</p>
     */
    inline ListTargetsFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    ListTargetsFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
