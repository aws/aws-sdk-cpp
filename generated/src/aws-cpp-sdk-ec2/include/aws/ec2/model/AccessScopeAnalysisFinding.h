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
    AWS_EC2_API AccessScopeAnalysisFinding();
    AWS_EC2_API AccessScopeAnalysisFinding(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AccessScopeAnalysisFinding& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeAnalysisId() const{ return m_networkInsightsAccessScopeAnalysisId; }

    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline bool NetworkInsightsAccessScopeAnalysisIdHasBeenSet() const { return m_networkInsightsAccessScopeAnalysisIdHasBeenSet; }

    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline void SetNetworkInsightsAccessScopeAnalysisId(const Aws::String& value) { m_networkInsightsAccessScopeAnalysisIdHasBeenSet = true; m_networkInsightsAccessScopeAnalysisId = value; }

    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline void SetNetworkInsightsAccessScopeAnalysisId(Aws::String&& value) { m_networkInsightsAccessScopeAnalysisIdHasBeenSet = true; m_networkInsightsAccessScopeAnalysisId = std::move(value); }

    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline void SetNetworkInsightsAccessScopeAnalysisId(const char* value) { m_networkInsightsAccessScopeAnalysisIdHasBeenSet = true; m_networkInsightsAccessScopeAnalysisId.assign(value); }

    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline AccessScopeAnalysisFinding& WithNetworkInsightsAccessScopeAnalysisId(const Aws::String& value) { SetNetworkInsightsAccessScopeAnalysisId(value); return *this;}

    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline AccessScopeAnalysisFinding& WithNetworkInsightsAccessScopeAnalysisId(Aws::String&& value) { SetNetworkInsightsAccessScopeAnalysisId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline AccessScopeAnalysisFinding& WithNetworkInsightsAccessScopeAnalysisId(const char* value) { SetNetworkInsightsAccessScopeAnalysisId(value); return *this;}


    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeId() const{ return m_networkInsightsAccessScopeId; }

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline bool NetworkInsightsAccessScopeIdHasBeenSet() const { return m_networkInsightsAccessScopeIdHasBeenSet; }

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline void SetNetworkInsightsAccessScopeId(const Aws::String& value) { m_networkInsightsAccessScopeIdHasBeenSet = true; m_networkInsightsAccessScopeId = value; }

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline void SetNetworkInsightsAccessScopeId(Aws::String&& value) { m_networkInsightsAccessScopeIdHasBeenSet = true; m_networkInsightsAccessScopeId = std::move(value); }

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline void SetNetworkInsightsAccessScopeId(const char* value) { m_networkInsightsAccessScopeIdHasBeenSet = true; m_networkInsightsAccessScopeId.assign(value); }

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline AccessScopeAnalysisFinding& WithNetworkInsightsAccessScopeId(const Aws::String& value) { SetNetworkInsightsAccessScopeId(value); return *this;}

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline AccessScopeAnalysisFinding& WithNetworkInsightsAccessScopeId(Aws::String&& value) { SetNetworkInsightsAccessScopeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline AccessScopeAnalysisFinding& WithNetworkInsightsAccessScopeId(const char* value) { SetNetworkInsightsAccessScopeId(value); return *this;}


    /**
     * <p>The ID of the finding.</p>
     */
    inline const Aws::String& GetFindingId() const{ return m_findingId; }

    /**
     * <p>The ID of the finding.</p>
     */
    inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }

    /**
     * <p>The ID of the finding.</p>
     */
    inline void SetFindingId(const Aws::String& value) { m_findingIdHasBeenSet = true; m_findingId = value; }

    /**
     * <p>The ID of the finding.</p>
     */
    inline void SetFindingId(Aws::String&& value) { m_findingIdHasBeenSet = true; m_findingId = std::move(value); }

    /**
     * <p>The ID of the finding.</p>
     */
    inline void SetFindingId(const char* value) { m_findingIdHasBeenSet = true; m_findingId.assign(value); }

    /**
     * <p>The ID of the finding.</p>
     */
    inline AccessScopeAnalysisFinding& WithFindingId(const Aws::String& value) { SetFindingId(value); return *this;}

    /**
     * <p>The ID of the finding.</p>
     */
    inline AccessScopeAnalysisFinding& WithFindingId(Aws::String&& value) { SetFindingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the finding.</p>
     */
    inline AccessScopeAnalysisFinding& WithFindingId(const char* value) { SetFindingId(value); return *this;}


    /**
     * <p>The finding components.</p>
     */
    inline const Aws::Vector<PathComponent>& GetFindingComponents() const{ return m_findingComponents; }

    /**
     * <p>The finding components.</p>
     */
    inline bool FindingComponentsHasBeenSet() const { return m_findingComponentsHasBeenSet; }

    /**
     * <p>The finding components.</p>
     */
    inline void SetFindingComponents(const Aws::Vector<PathComponent>& value) { m_findingComponentsHasBeenSet = true; m_findingComponents = value; }

    /**
     * <p>The finding components.</p>
     */
    inline void SetFindingComponents(Aws::Vector<PathComponent>&& value) { m_findingComponentsHasBeenSet = true; m_findingComponents = std::move(value); }

    /**
     * <p>The finding components.</p>
     */
    inline AccessScopeAnalysisFinding& WithFindingComponents(const Aws::Vector<PathComponent>& value) { SetFindingComponents(value); return *this;}

    /**
     * <p>The finding components.</p>
     */
    inline AccessScopeAnalysisFinding& WithFindingComponents(Aws::Vector<PathComponent>&& value) { SetFindingComponents(std::move(value)); return *this;}

    /**
     * <p>The finding components.</p>
     */
    inline AccessScopeAnalysisFinding& AddFindingComponents(const PathComponent& value) { m_findingComponentsHasBeenSet = true; m_findingComponents.push_back(value); return *this; }

    /**
     * <p>The finding components.</p>
     */
    inline AccessScopeAnalysisFinding& AddFindingComponents(PathComponent&& value) { m_findingComponentsHasBeenSet = true; m_findingComponents.push_back(std::move(value)); return *this; }

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
