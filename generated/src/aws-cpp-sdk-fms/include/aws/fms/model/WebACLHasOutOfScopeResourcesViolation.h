/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>The violation details for a web ACL that's associated with at least one
   * resource that's out of scope of the Firewall Manager policy. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/WebACLHasOutOfScopeResourcesViolation">AWS
   * API Reference</a></p>
   */
  class WebACLHasOutOfScopeResourcesViolation
  {
  public:
    AWS_FMS_API WebACLHasOutOfScopeResourcesViolation() = default;
    AWS_FMS_API WebACLHasOutOfScopeResourcesViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API WebACLHasOutOfScopeResourcesViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL. </p>
     */
    inline const Aws::String& GetWebACLArn() const { return m_webACLArn; }
    inline bool WebACLArnHasBeenSet() const { return m_webACLArnHasBeenSet; }
    template<typename WebACLArnT = Aws::String>
    void SetWebACLArn(WebACLArnT&& value) { m_webACLArnHasBeenSet = true; m_webACLArn = std::forward<WebACLArnT>(value); }
    template<typename WebACLArnT = Aws::String>
    WebACLHasOutOfScopeResourcesViolation& WithWebACLArn(WebACLArnT&& value) { SetWebACLArn(std::forward<WebACLArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of Amazon Resource Name (ARN) for the resources that are out of
     * scope of the policy and are associated with the web ACL. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOutOfScopeResourceList() const { return m_outOfScopeResourceList; }
    inline bool OutOfScopeResourceListHasBeenSet() const { return m_outOfScopeResourceListHasBeenSet; }
    template<typename OutOfScopeResourceListT = Aws::Vector<Aws::String>>
    void SetOutOfScopeResourceList(OutOfScopeResourceListT&& value) { m_outOfScopeResourceListHasBeenSet = true; m_outOfScopeResourceList = std::forward<OutOfScopeResourceListT>(value); }
    template<typename OutOfScopeResourceListT = Aws::Vector<Aws::String>>
    WebACLHasOutOfScopeResourcesViolation& WithOutOfScopeResourceList(OutOfScopeResourceListT&& value) { SetOutOfScopeResourceList(std::forward<OutOfScopeResourceListT>(value)); return *this;}
    template<typename OutOfScopeResourceListT = Aws::String>
    WebACLHasOutOfScopeResourcesViolation& AddOutOfScopeResourceList(OutOfScopeResourceListT&& value) { m_outOfScopeResourceListHasBeenSet = true; m_outOfScopeResourceList.emplace_back(std::forward<OutOfScopeResourceListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_webACLArn;
    bool m_webACLArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_outOfScopeResourceList;
    bool m_outOfScopeResourceListHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
