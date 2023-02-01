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
    AWS_EC2_API NetworkInsightsAccessScopeContent();
    AWS_EC2_API NetworkInsightsAccessScopeContent(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInsightsAccessScopeContent& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline NetworkInsightsAccessScopeContent& WithNetworkInsightsAccessScopeId(const Aws::String& value) { SetNetworkInsightsAccessScopeId(value); return *this;}

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline NetworkInsightsAccessScopeContent& WithNetworkInsightsAccessScopeId(Aws::String&& value) { SetNetworkInsightsAccessScopeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline NetworkInsightsAccessScopeContent& WithNetworkInsightsAccessScopeId(const char* value) { SetNetworkInsightsAccessScopeId(value); return *this;}


    /**
     * <p>The paths to match.</p>
     */
    inline const Aws::Vector<AccessScopePath>& GetMatchPaths() const{ return m_matchPaths; }

    /**
     * <p>The paths to match.</p>
     */
    inline bool MatchPathsHasBeenSet() const { return m_matchPathsHasBeenSet; }

    /**
     * <p>The paths to match.</p>
     */
    inline void SetMatchPaths(const Aws::Vector<AccessScopePath>& value) { m_matchPathsHasBeenSet = true; m_matchPaths = value; }

    /**
     * <p>The paths to match.</p>
     */
    inline void SetMatchPaths(Aws::Vector<AccessScopePath>&& value) { m_matchPathsHasBeenSet = true; m_matchPaths = std::move(value); }

    /**
     * <p>The paths to match.</p>
     */
    inline NetworkInsightsAccessScopeContent& WithMatchPaths(const Aws::Vector<AccessScopePath>& value) { SetMatchPaths(value); return *this;}

    /**
     * <p>The paths to match.</p>
     */
    inline NetworkInsightsAccessScopeContent& WithMatchPaths(Aws::Vector<AccessScopePath>&& value) { SetMatchPaths(std::move(value)); return *this;}

    /**
     * <p>The paths to match.</p>
     */
    inline NetworkInsightsAccessScopeContent& AddMatchPaths(const AccessScopePath& value) { m_matchPathsHasBeenSet = true; m_matchPaths.push_back(value); return *this; }

    /**
     * <p>The paths to match.</p>
     */
    inline NetworkInsightsAccessScopeContent& AddMatchPaths(AccessScopePath&& value) { m_matchPathsHasBeenSet = true; m_matchPaths.push_back(std::move(value)); return *this; }


    /**
     * <p>The paths to exclude.</p>
     */
    inline const Aws::Vector<AccessScopePath>& GetExcludePaths() const{ return m_excludePaths; }

    /**
     * <p>The paths to exclude.</p>
     */
    inline bool ExcludePathsHasBeenSet() const { return m_excludePathsHasBeenSet; }

    /**
     * <p>The paths to exclude.</p>
     */
    inline void SetExcludePaths(const Aws::Vector<AccessScopePath>& value) { m_excludePathsHasBeenSet = true; m_excludePaths = value; }

    /**
     * <p>The paths to exclude.</p>
     */
    inline void SetExcludePaths(Aws::Vector<AccessScopePath>&& value) { m_excludePathsHasBeenSet = true; m_excludePaths = std::move(value); }

    /**
     * <p>The paths to exclude.</p>
     */
    inline NetworkInsightsAccessScopeContent& WithExcludePaths(const Aws::Vector<AccessScopePath>& value) { SetExcludePaths(value); return *this;}

    /**
     * <p>The paths to exclude.</p>
     */
    inline NetworkInsightsAccessScopeContent& WithExcludePaths(Aws::Vector<AccessScopePath>&& value) { SetExcludePaths(std::move(value)); return *this;}

    /**
     * <p>The paths to exclude.</p>
     */
    inline NetworkInsightsAccessScopeContent& AddExcludePaths(const AccessScopePath& value) { m_excludePathsHasBeenSet = true; m_excludePaths.push_back(value); return *this; }

    /**
     * <p>The paths to exclude.</p>
     */
    inline NetworkInsightsAccessScopeContent& AddExcludePaths(AccessScopePath&& value) { m_excludePathsHasBeenSet = true; m_excludePaths.push_back(std::move(value)); return *this; }

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
