/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/codestar-notifications/model/ListNotificationRulesFilterName.h>
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
   * <p>Information about a filter to apply to the list of returned notification
   * rules. You can filter by event type, owner, resource, or target.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListNotificationRulesFilter">AWS
   * API Reference</a></p>
   */
  class ListNotificationRulesFilter
  {
  public:
    AWS_CODESTARNOTIFICATIONS_API ListNotificationRulesFilter();
    AWS_CODESTARNOTIFICATIONS_API ListNotificationRulesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARNOTIFICATIONS_API ListNotificationRulesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARNOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the attribute you want to use to filter the returned notification
     * rules.</p>
     */
    inline const ListNotificationRulesFilterName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const ListNotificationRulesFilterName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(ListNotificationRulesFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline ListNotificationRulesFilter& WithName(const ListNotificationRulesFilterName& value) { SetName(value); return *this;}
    inline ListNotificationRulesFilter& WithName(ListNotificationRulesFilterName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the attribute you want to use to filter the returned
     * notification rules. For example, if you specify filtering by <i>RESOURCE</i> in
     * Name, you might specify the ARN of a pipeline in CodePipeline for the value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ListNotificationRulesFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ListNotificationRulesFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ListNotificationRulesFilter& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    ListNotificationRulesFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
