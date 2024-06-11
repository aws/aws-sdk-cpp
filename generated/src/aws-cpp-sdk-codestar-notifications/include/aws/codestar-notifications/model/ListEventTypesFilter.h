/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/codestar-notifications/model/ListEventTypesFilterName.h>
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
   * <p>Information about a filter to apply to the list of returned event types. You
   * can filter by resource type or service name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListEventTypesFilter">AWS
   * API Reference</a></p>
   */
  class ListEventTypesFilter
  {
  public:
    AWS_CODESTARNOTIFICATIONS_API ListEventTypesFilter();
    AWS_CODESTARNOTIFICATIONS_API ListEventTypesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARNOTIFICATIONS_API ListEventTypesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARNOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated name of the filter type you want to filter by.</p>
     */
    inline const ListEventTypesFilterName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const ListEventTypesFilterName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(ListEventTypesFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline ListEventTypesFilter& WithName(const ListEventTypesFilterName& value) { SetName(value); return *this;}
    inline ListEventTypesFilter& WithName(ListEventTypesFilterName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource type (for example, pipeline) or service name (for
     * example, CodePipeline) that you want to filter by.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ListEventTypesFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ListEventTypesFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ListEventTypesFilter& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    ListEventTypesFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
