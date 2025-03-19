/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/AccessScopePath.h>
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
   * <p>Describes the Network Access Scope content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkInsightsAccessScopeContent">AWS
   * API Reference</a></p>
   */
  class NetworkInsightsAccessScopeContent
  {
  public:
    AWS_EC2_API NetworkInsightsAccessScopeContent() = default;
    AWS_EC2_API NetworkInsightsAccessScopeContent(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInsightsAccessScopeContent& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeId() const { return m_networkInsightsAccessScopeId; }
    inline bool NetworkInsightsAccessScopeIdHasBeenSet() const { return m_networkInsightsAccessScopeIdHasBeenSet; }
    template<typename NetworkInsightsAccessScopeIdT = Aws::String>
    void SetNetworkInsightsAccessScopeId(NetworkInsightsAccessScopeIdT&& value) { m_networkInsightsAccessScopeIdHasBeenSet = true; m_networkInsightsAccessScopeId = std::forward<NetworkInsightsAccessScopeIdT>(value); }
    template<typename NetworkInsightsAccessScopeIdT = Aws::String>
    NetworkInsightsAccessScopeContent& WithNetworkInsightsAccessScopeId(NetworkInsightsAccessScopeIdT&& value) { SetNetworkInsightsAccessScopeId(std::forward<NetworkInsightsAccessScopeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The paths to match.</p>
     */
    inline const Aws::Vector<AccessScopePath>& GetMatchPaths() const { return m_matchPaths; }
    inline bool MatchPathsHasBeenSet() const { return m_matchPathsHasBeenSet; }
    template<typename MatchPathsT = Aws::Vector<AccessScopePath>>
    void SetMatchPaths(MatchPathsT&& value) { m_matchPathsHasBeenSet = true; m_matchPaths = std::forward<MatchPathsT>(value); }
    template<typename MatchPathsT = Aws::Vector<AccessScopePath>>
    NetworkInsightsAccessScopeContent& WithMatchPaths(MatchPathsT&& value) { SetMatchPaths(std::forward<MatchPathsT>(value)); return *this;}
    template<typename MatchPathsT = AccessScopePath>
    NetworkInsightsAccessScopeContent& AddMatchPaths(MatchPathsT&& value) { m_matchPathsHasBeenSet = true; m_matchPaths.emplace_back(std::forward<MatchPathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The paths to exclude.</p>
     */
    inline const Aws::Vector<AccessScopePath>& GetExcludePaths() const { return m_excludePaths; }
    inline bool ExcludePathsHasBeenSet() const { return m_excludePathsHasBeenSet; }
    template<typename ExcludePathsT = Aws::Vector<AccessScopePath>>
    void SetExcludePaths(ExcludePathsT&& value) { m_excludePathsHasBeenSet = true; m_excludePaths = std::forward<ExcludePathsT>(value); }
    template<typename ExcludePathsT = Aws::Vector<AccessScopePath>>
    NetworkInsightsAccessScopeContent& WithExcludePaths(ExcludePathsT&& value) { SetExcludePaths(std::forward<ExcludePathsT>(value)); return *this;}
    template<typename ExcludePathsT = AccessScopePath>
    NetworkInsightsAccessScopeContent& AddExcludePaths(ExcludePathsT&& value) { m_excludePathsHasBeenSet = true; m_excludePaths.emplace_back(std::forward<ExcludePathsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_networkInsightsAccessScopeId;
    bool m_networkInsightsAccessScopeIdHasBeenSet = false;

    Aws::Vector<AccessScopePath> m_matchPaths;
    bool m_matchPathsHasBeenSet = false;

    Aws::Vector<AccessScopePath> m_excludePaths;
    bool m_excludePathsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
