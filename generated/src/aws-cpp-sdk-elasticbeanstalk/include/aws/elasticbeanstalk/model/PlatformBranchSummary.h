/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Summary information about a platform branch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/PlatformBranchSummary">AWS
   * API Reference</a></p>
   */
  class PlatformBranchSummary
  {
  public:
    AWS_ELASTICBEANSTALK_API PlatformBranchSummary() = default;
    AWS_ELASTICBEANSTALK_API PlatformBranchSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API PlatformBranchSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the platform to which this platform branch belongs.</p>
     */
    inline const Aws::String& GetPlatformName() const { return m_platformName; }
    inline bool PlatformNameHasBeenSet() const { return m_platformNameHasBeenSet; }
    template<typename PlatformNameT = Aws::String>
    void SetPlatformName(PlatformNameT&& value) { m_platformNameHasBeenSet = true; m_platformName = std::forward<PlatformNameT>(value); }
    template<typename PlatformNameT = Aws::String>
    PlatformBranchSummary& WithPlatformName(PlatformNameT&& value) { SetPlatformName(std::forward<PlatformNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the platform branch.</p>
     */
    inline const Aws::String& GetBranchName() const { return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    template<typename BranchNameT = Aws::String>
    void SetBranchName(BranchNameT&& value) { m_branchNameHasBeenSet = true; m_branchName = std::forward<BranchNameT>(value); }
    template<typename BranchNameT = Aws::String>
    PlatformBranchSummary& WithBranchName(BranchNameT&& value) { SetBranchName(std::forward<BranchNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support life cycle state of the platform branch.</p> <p>Possible values:
     * <code>beta</code> | <code>supported</code> | <code>deprecated</code> |
     * <code>retired</code> </p>
     */
    inline const Aws::String& GetLifecycleState() const { return m_lifecycleState; }
    inline bool LifecycleStateHasBeenSet() const { return m_lifecycleStateHasBeenSet; }
    template<typename LifecycleStateT = Aws::String>
    void SetLifecycleState(LifecycleStateT&& value) { m_lifecycleStateHasBeenSet = true; m_lifecycleState = std::forward<LifecycleStateT>(value); }
    template<typename LifecycleStateT = Aws::String>
    PlatformBranchSummary& WithLifecycleState(LifecycleStateT&& value) { SetLifecycleState(std::forward<LifecycleStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ordinal number that designates the order in which platform branches have
     * been added to a platform. This can be helpful, for example, if your code calls
     * the <code>ListPlatformBranches</code> action and then displays a list of
     * platform branches.</p> <p>A larger <code>BranchOrder</code> value designates a
     * newer platform branch within the platform.</p>
     */
    inline int GetBranchOrder() const { return m_branchOrder; }
    inline bool BranchOrderHasBeenSet() const { return m_branchOrderHasBeenSet; }
    inline void SetBranchOrder(int value) { m_branchOrderHasBeenSet = true; m_branchOrder = value; }
    inline PlatformBranchSummary& WithBranchOrder(int value) { SetBranchOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment tiers that platform versions in this branch support.</p>
     * <p>Possible values: <code>WebServer/Standard</code> |
     * <code>Worker/SQS/HTTP</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedTierList() const { return m_supportedTierList; }
    inline bool SupportedTierListHasBeenSet() const { return m_supportedTierListHasBeenSet; }
    template<typename SupportedTierListT = Aws::Vector<Aws::String>>
    void SetSupportedTierList(SupportedTierListT&& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList = std::forward<SupportedTierListT>(value); }
    template<typename SupportedTierListT = Aws::Vector<Aws::String>>
    PlatformBranchSummary& WithSupportedTierList(SupportedTierListT&& value) { SetSupportedTierList(std::forward<SupportedTierListT>(value)); return *this;}
    template<typename SupportedTierListT = Aws::String>
    PlatformBranchSummary& AddSupportedTierList(SupportedTierListT&& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList.emplace_back(std::forward<SupportedTierListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_platformName;
    bool m_platformNameHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::String m_lifecycleState;
    bool m_lifecycleStateHasBeenSet = false;

    int m_branchOrder{0};
    bool m_branchOrderHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedTierList;
    bool m_supportedTierListHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
