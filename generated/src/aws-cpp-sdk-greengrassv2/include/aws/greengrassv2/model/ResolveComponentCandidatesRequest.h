/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/GreengrassV2Request.h>
#include <aws/greengrassv2/model/ComponentPlatform.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrassv2/model/ComponentCandidate.h>
#include <utility>

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

  /**
   */
  class ResolveComponentCandidatesRequest : public GreengrassV2Request
  {
  public:
    AWS_GREENGRASSV2_API ResolveComponentCandidatesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResolveComponentCandidates"; }

    AWS_GREENGRASSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The platform to use to resolve compatible components.</p>
     */
    inline const ComponentPlatform& GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    template<typename PlatformT = ComponentPlatform>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = ComponentPlatform>
    ResolveComponentCandidatesRequest& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of components to resolve.</p>
     */
    inline const Aws::Vector<ComponentCandidate>& GetComponentCandidates() const { return m_componentCandidates; }
    inline bool ComponentCandidatesHasBeenSet() const { return m_componentCandidatesHasBeenSet; }
    template<typename ComponentCandidatesT = Aws::Vector<ComponentCandidate>>
    void SetComponentCandidates(ComponentCandidatesT&& value) { m_componentCandidatesHasBeenSet = true; m_componentCandidates = std::forward<ComponentCandidatesT>(value); }
    template<typename ComponentCandidatesT = Aws::Vector<ComponentCandidate>>
    ResolveComponentCandidatesRequest& WithComponentCandidates(ComponentCandidatesT&& value) { SetComponentCandidates(std::forward<ComponentCandidatesT>(value)); return *this;}
    template<typename ComponentCandidatesT = ComponentCandidate>
    ResolveComponentCandidatesRequest& AddComponentCandidates(ComponentCandidatesT&& value) { m_componentCandidatesHasBeenSet = true; m_componentCandidates.emplace_back(std::forward<ComponentCandidatesT>(value)); return *this; }
    ///@}
  private:

    ComponentPlatform m_platform;
    bool m_platformHasBeenSet = false;

    Aws::Vector<ComponentCandidate> m_componentCandidates;
    bool m_componentCandidatesHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
