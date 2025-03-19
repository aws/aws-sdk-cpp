/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/PathComponent.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a finding for a Network Access Scope.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AccessScopeAnalysisFinding">AWS
   * API Reference</a></p>
   */
  class AccessScopeAnalysisFinding
  {
  public:
    AWS_EC2_API AccessScopeAnalysisFinding() = default;
    AWS_EC2_API AccessScopeAnalysisFinding(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AccessScopeAnalysisFinding& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeAnalysisId() const { return m_networkInsightsAccessScopeAnalysisId; }
    inline bool NetworkInsightsAccessScopeAnalysisIdHasBeenSet() const { return m_networkInsightsAccessScopeAnalysisIdHasBeenSet; }
    template<typename NetworkInsightsAccessScopeAnalysisIdT = Aws::String>
    void SetNetworkInsightsAccessScopeAnalysisId(NetworkInsightsAccessScopeAnalysisIdT&& value) { m_networkInsightsAccessScopeAnalysisIdHasBeenSet = true; m_networkInsightsAccessScopeAnalysisId = std::forward<NetworkInsightsAccessScopeAnalysisIdT>(value); }
    template<typename NetworkInsightsAccessScopeAnalysisIdT = Aws::String>
    AccessScopeAnalysisFinding& WithNetworkInsightsAccessScopeAnalysisId(NetworkInsightsAccessScopeAnalysisIdT&& value) { SetNetworkInsightsAccessScopeAnalysisId(std::forward<NetworkInsightsAccessScopeAnalysisIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeId() const { return m_networkInsightsAccessScopeId; }
    inline bool NetworkInsightsAccessScopeIdHasBeenSet() const { return m_networkInsightsAccessScopeIdHasBeenSet; }
    template<typename NetworkInsightsAccessScopeIdT = Aws::String>
    void SetNetworkInsightsAccessScopeId(NetworkInsightsAccessScopeIdT&& value) { m_networkInsightsAccessScopeIdHasBeenSet = true; m_networkInsightsAccessScopeId = std::forward<NetworkInsightsAccessScopeIdT>(value); }
    template<typename NetworkInsightsAccessScopeIdT = Aws::String>
    AccessScopeAnalysisFinding& WithNetworkInsightsAccessScopeId(NetworkInsightsAccessScopeIdT&& value) { SetNetworkInsightsAccessScopeId(std::forward<NetworkInsightsAccessScopeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the finding.</p>
     */
    inline const Aws::String& GetFindingId() const { return m_findingId; }
    inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
    template<typename FindingIdT = Aws::String>
    void SetFindingId(FindingIdT&& value) { m_findingIdHasBeenSet = true; m_findingId = std::forward<FindingIdT>(value); }
    template<typename FindingIdT = Aws::String>
    AccessScopeAnalysisFinding& WithFindingId(FindingIdT&& value) { SetFindingId(std::forward<FindingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The finding components.</p>
     */
    inline const Aws::Vector<PathComponent>& GetFindingComponents() const { return m_findingComponents; }
    inline bool FindingComponentsHasBeenSet() const { return m_findingComponentsHasBeenSet; }
    template<typename FindingComponentsT = Aws::Vector<PathComponent>>
    void SetFindingComponents(FindingComponentsT&& value) { m_findingComponentsHasBeenSet = true; m_findingComponents = std::forward<FindingComponentsT>(value); }
    template<typename FindingComponentsT = Aws::Vector<PathComponent>>
    AccessScopeAnalysisFinding& WithFindingComponents(FindingComponentsT&& value) { SetFindingComponents(std::forward<FindingComponentsT>(value)); return *this;}
    template<typename FindingComponentsT = PathComponent>
    AccessScopeAnalysisFinding& AddFindingComponents(FindingComponentsT&& value) { m_findingComponentsHasBeenSet = true; m_findingComponents.emplace_back(std::forward<FindingComponentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_networkInsightsAccessScopeAnalysisId;
    bool m_networkInsightsAccessScopeAnalysisIdHasBeenSet = false;

    Aws::String m_networkInsightsAccessScopeId;
    bool m_networkInsightsAccessScopeIdHasBeenSet = false;

    Aws::String m_findingId;
    bool m_findingIdHasBeenSet = false;

    Aws::Vector<PathComponent> m_findingComponents;
    bool m_findingComponentsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
