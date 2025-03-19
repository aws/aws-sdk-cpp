/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ControlPlaneTagFilter.h>
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
   * <p>The search criteria to be used to return flow modules.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactFlowModuleSearchFilter">AWS
   * API Reference</a></p>
   */
  class ContactFlowModuleSearchFilter
  {
  public:
    AWS_CONNECT_API ContactFlowModuleSearchFilter() = default;
    AWS_CONNECT_API ContactFlowModuleSearchFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactFlowModuleSearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ControlPlaneTagFilter& GetTagFilter() const { return m_tagFilter; }
    inline bool TagFilterHasBeenSet() const { return m_tagFilterHasBeenSet; }
    template<typename TagFilterT = ControlPlaneTagFilter>
    void SetTagFilter(TagFilterT&& value) { m_tagFilterHasBeenSet = true; m_tagFilter = std::forward<TagFilterT>(value); }
    template<typename TagFilterT = ControlPlaneTagFilter>
    ContactFlowModuleSearchFilter& WithTagFilter(TagFilterT&& value) { SetTagFilter(std::forward<TagFilterT>(value)); return *this;}
    ///@}
  private:

    ControlPlaneTagFilter m_tagFilter;
    bool m_tagFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
