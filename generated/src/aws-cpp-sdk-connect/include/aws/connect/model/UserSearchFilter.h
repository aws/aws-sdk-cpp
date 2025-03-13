/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ControlPlaneTagFilter.h>
#include <aws/connect/model/ControlPlaneUserAttributeFilter.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Filters to be applied to search results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UserSearchFilter">AWS
   * API Reference</a></p>
   */
  class UserSearchFilter
  {
  public:
    AWS_CONNECT_API UserSearchFilter() = default;
    AWS_CONNECT_API UserSearchFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UserSearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ControlPlaneTagFilter& GetTagFilter() const { return m_tagFilter; }
    inline bool TagFilterHasBeenSet() const { return m_tagFilterHasBeenSet; }
    template<typename TagFilterT = ControlPlaneTagFilter>
    void SetTagFilter(TagFilterT&& value) { m_tagFilterHasBeenSet = true; m_tagFilter = std::forward<TagFilterT>(value); }
    template<typename TagFilterT = ControlPlaneTagFilter>
    UserSearchFilter& WithTagFilter(TagFilterT&& value) { SetTagFilter(std::forward<TagFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that can be used to specify Tag conditions or Hierarchy Group
     * conditions inside the SearchFilter.</p> <p>This accepts an <code>OR</code> of
     * <code>AND</code> (List of List) input where:</p> <ul> <li> <p>The top level list
     * specifies conditions that need to be applied with <code>OR</code> operator.</p>
     * </li> <li> <p>The inner list specifies conditions that need to be applied with
     * <code>AND</code> operator.</p> </li> </ul>  <p>Only one field can be
     * populated. This object can’t be used along with TagFilter. Request can either
     * contain TagFilter or UserAttributeFilter if SearchFilter is specified,
     * combination of both is not supported and such request will throw
     * AccessDeniedException.</p> 
     */
    inline const ControlPlaneUserAttributeFilter& GetUserAttributeFilter() const { return m_userAttributeFilter; }
    inline bool UserAttributeFilterHasBeenSet() const { return m_userAttributeFilterHasBeenSet; }
    template<typename UserAttributeFilterT = ControlPlaneUserAttributeFilter>
    void SetUserAttributeFilter(UserAttributeFilterT&& value) { m_userAttributeFilterHasBeenSet = true; m_userAttributeFilter = std::forward<UserAttributeFilterT>(value); }
    template<typename UserAttributeFilterT = ControlPlaneUserAttributeFilter>
    UserSearchFilter& WithUserAttributeFilter(UserAttributeFilterT&& value) { SetUserAttributeFilter(std::forward<UserAttributeFilterT>(value)); return *this;}
    ///@}
  private:

    ControlPlaneTagFilter m_tagFilter;
    bool m_tagFilterHasBeenSet = false;

    ControlPlaneUserAttributeFilter m_userAttributeFilter;
    bool m_userAttributeFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
