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
    AWS_GREENGRASSV2_API ResolveComponentCandidatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResolveComponentCandidates"; }

    AWS_GREENGRASSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The platform to use to resolve compatible components.</p>
     */
    inline const ComponentPlatform& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform to use to resolve compatible components.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The platform to use to resolve compatible components.</p>
     */
    inline void SetPlatform(const ComponentPlatform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform to use to resolve compatible components.</p>
     */
    inline void SetPlatform(ComponentPlatform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform to use to resolve compatible components.</p>
     */
    inline ResolveComponentCandidatesRequest& WithPlatform(const ComponentPlatform& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform to use to resolve compatible components.</p>
     */
    inline ResolveComponentCandidatesRequest& WithPlatform(ComponentPlatform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>The list of components to resolve.</p>
     */
    inline const Aws::Vector<ComponentCandidate>& GetComponentCandidates() const{ return m_componentCandidates; }

    /**
     * <p>The list of components to resolve.</p>
     */
    inline bool ComponentCandidatesHasBeenSet() const { return m_componentCandidatesHasBeenSet; }

    /**
     * <p>The list of components to resolve.</p>
     */
    inline void SetComponentCandidates(const Aws::Vector<ComponentCandidate>& value) { m_componentCandidatesHasBeenSet = true; m_componentCandidates = value; }

    /**
     * <p>The list of components to resolve.</p>
     */
    inline void SetComponentCandidates(Aws::Vector<ComponentCandidate>&& value) { m_componentCandidatesHasBeenSet = true; m_componentCandidates = std::move(value); }

    /**
     * <p>The list of components to resolve.</p>
     */
    inline ResolveComponentCandidatesRequest& WithComponentCandidates(const Aws::Vector<ComponentCandidate>& value) { SetComponentCandidates(value); return *this;}

    /**
     * <p>The list of components to resolve.</p>
     */
    inline ResolveComponentCandidatesRequest& WithComponentCandidates(Aws::Vector<ComponentCandidate>&& value) { SetComponentCandidates(std::move(value)); return *this;}

    /**
     * <p>The list of components to resolve.</p>
     */
    inline ResolveComponentCandidatesRequest& AddComponentCandidates(const ComponentCandidate& value) { m_componentCandidatesHasBeenSet = true; m_componentCandidates.push_back(value); return *this; }

    /**
     * <p>The list of components to resolve.</p>
     */
    inline ResolveComponentCandidatesRequest& AddComponentCandidates(ComponentCandidate&& value) { m_componentCandidatesHasBeenSet = true; m_componentCandidates.push_back(std::move(value)); return *this; }

  private:

    ComponentPlatform m_platform;
    bool m_platformHasBeenSet = false;

    Aws::Vector<ComponentCandidate> m_componentCandidates;
    bool m_componentCandidatesHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
