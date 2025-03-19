/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ControlPlaneAttributeFilter.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UserHierarchyGroupSearchFilter">AWS
   * API Reference</a></p>
   */
  class UserHierarchyGroupSearchFilter
  {
  public:
    AWS_CONNECT_API UserHierarchyGroupSearchFilter() = default;
    AWS_CONNECT_API UserHierarchyGroupSearchFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UserHierarchyGroupSearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that can be used to specify Tag conditions inside the SearchFilter.
     * This accepts an OR or AND (List of List) input where:</p> <ul> <li> <p>The top
     * level list specifies conditions that need to be applied with <code>OR</code>
     * operator.</p> </li> <li> <p>The inner list specifies conditions that need to be
     * applied with <code>AND</code> operator.</p> </li> </ul>
     */
    inline const ControlPlaneAttributeFilter& GetAttributeFilter() const { return m_attributeFilter; }
    inline bool AttributeFilterHasBeenSet() const { return m_attributeFilterHasBeenSet; }
    template<typename AttributeFilterT = ControlPlaneAttributeFilter>
    void SetAttributeFilter(AttributeFilterT&& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = std::forward<AttributeFilterT>(value); }
    template<typename AttributeFilterT = ControlPlaneAttributeFilter>
    UserHierarchyGroupSearchFilter& WithAttributeFilter(AttributeFilterT&& value) { SetAttributeFilter(std::forward<AttributeFilterT>(value)); return *this;}
    ///@}
  private:

    ControlPlaneAttributeFilter m_attributeFilter;
    bool m_attributeFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
