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
    AWS_ELASTICBEANSTALK_API PlatformBranchSummary();
    AWS_ELASTICBEANSTALK_API PlatformBranchSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API PlatformBranchSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the platform to which this platform branch belongs.</p>
     */
    inline const Aws::String& GetPlatformName() const{ return m_platformName; }

    /**
     * <p>The name of the platform to which this platform branch belongs.</p>
     */
    inline bool PlatformNameHasBeenSet() const { return m_platformNameHasBeenSet; }

    /**
     * <p>The name of the platform to which this platform branch belongs.</p>
     */
    inline void SetPlatformName(const Aws::String& value) { m_platformNameHasBeenSet = true; m_platformName = value; }

    /**
     * <p>The name of the platform to which this platform branch belongs.</p>
     */
    inline void SetPlatformName(Aws::String&& value) { m_platformNameHasBeenSet = true; m_platformName = std::move(value); }

    /**
     * <p>The name of the platform to which this platform branch belongs.</p>
     */
    inline void SetPlatformName(const char* value) { m_platformNameHasBeenSet = true; m_platformName.assign(value); }

    /**
     * <p>The name of the platform to which this platform branch belongs.</p>
     */
    inline PlatformBranchSummary& WithPlatformName(const Aws::String& value) { SetPlatformName(value); return *this;}

    /**
     * <p>The name of the platform to which this platform branch belongs.</p>
     */
    inline PlatformBranchSummary& WithPlatformName(Aws::String&& value) { SetPlatformName(std::move(value)); return *this;}

    /**
     * <p>The name of the platform to which this platform branch belongs.</p>
     */
    inline PlatformBranchSummary& WithPlatformName(const char* value) { SetPlatformName(value); return *this;}


    /**
     * <p>The name of the platform branch.</p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p>The name of the platform branch.</p>
     */
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }

    /**
     * <p>The name of the platform branch.</p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p>The name of the platform branch.</p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }

    /**
     * <p>The name of the platform branch.</p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p>The name of the platform branch.</p>
     */
    inline PlatformBranchSummary& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p>The name of the platform branch.</p>
     */
    inline PlatformBranchSummary& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p>The name of the platform branch.</p>
     */
    inline PlatformBranchSummary& WithBranchName(const char* value) { SetBranchName(value); return *this;}


    /**
     * <p>The support life cycle state of the platform branch.</p> <p>Possible values:
     * <code>beta</code> | <code>supported</code> | <code>deprecated</code> |
     * <code>retired</code> </p>
     */
    inline const Aws::String& GetLifecycleState() const{ return m_lifecycleState; }

    /**
     * <p>The support life cycle state of the platform branch.</p> <p>Possible values:
     * <code>beta</code> | <code>supported</code> | <code>deprecated</code> |
     * <code>retired</code> </p>
     */
    inline bool LifecycleStateHasBeenSet() const { return m_lifecycleStateHasBeenSet; }

    /**
     * <p>The support life cycle state of the platform branch.</p> <p>Possible values:
     * <code>beta</code> | <code>supported</code> | <code>deprecated</code> |
     * <code>retired</code> </p>
     */
    inline void SetLifecycleState(const Aws::String& value) { m_lifecycleStateHasBeenSet = true; m_lifecycleState = value; }

    /**
     * <p>The support life cycle state of the platform branch.</p> <p>Possible values:
     * <code>beta</code> | <code>supported</code> | <code>deprecated</code> |
     * <code>retired</code> </p>
     */
    inline void SetLifecycleState(Aws::String&& value) { m_lifecycleStateHasBeenSet = true; m_lifecycleState = std::move(value); }

    /**
     * <p>The support life cycle state of the platform branch.</p> <p>Possible values:
     * <code>beta</code> | <code>supported</code> | <code>deprecated</code> |
     * <code>retired</code> </p>
     */
    inline void SetLifecycleState(const char* value) { m_lifecycleStateHasBeenSet = true; m_lifecycleState.assign(value); }

    /**
     * <p>The support life cycle state of the platform branch.</p> <p>Possible values:
     * <code>beta</code> | <code>supported</code> | <code>deprecated</code> |
     * <code>retired</code> </p>
     */
    inline PlatformBranchSummary& WithLifecycleState(const Aws::String& value) { SetLifecycleState(value); return *this;}

    /**
     * <p>The support life cycle state of the platform branch.</p> <p>Possible values:
     * <code>beta</code> | <code>supported</code> | <code>deprecated</code> |
     * <code>retired</code> </p>
     */
    inline PlatformBranchSummary& WithLifecycleState(Aws::String&& value) { SetLifecycleState(std::move(value)); return *this;}

    /**
     * <p>The support life cycle state of the platform branch.</p> <p>Possible values:
     * <code>beta</code> | <code>supported</code> | <code>deprecated</code> |
     * <code>retired</code> </p>
     */
    inline PlatformBranchSummary& WithLifecycleState(const char* value) { SetLifecycleState(value); return *this;}


    /**
     * <p>An ordinal number that designates the order in which platform branches have
     * been added to a platform. This can be helpful, for example, if your code calls
     * the <code>ListPlatformBranches</code> action and then displays a list of
     * platform branches.</p> <p>A larger <code>BranchOrder</code> value designates a
     * newer platform branch within the platform.</p>
     */
    inline int GetBranchOrder() const{ return m_branchOrder; }

    /**
     * <p>An ordinal number that designates the order in which platform branches have
     * been added to a platform. This can be helpful, for example, if your code calls
     * the <code>ListPlatformBranches</code> action and then displays a list of
     * platform branches.</p> <p>A larger <code>BranchOrder</code> value designates a
     * newer platform branch within the platform.</p>
     */
    inline bool BranchOrderHasBeenSet() const { return m_branchOrderHasBeenSet; }

    /**
     * <p>An ordinal number that designates the order in which platform branches have
     * been added to a platform. This can be helpful, for example, if your code calls
     * the <code>ListPlatformBranches</code> action and then displays a list of
     * platform branches.</p> <p>A larger <code>BranchOrder</code> value designates a
     * newer platform branch within the platform.</p>
     */
    inline void SetBranchOrder(int value) { m_branchOrderHasBeenSet = true; m_branchOrder = value; }

    /**
     * <p>An ordinal number that designates the order in which platform branches have
     * been added to a platform. This can be helpful, for example, if your code calls
     * the <code>ListPlatformBranches</code> action and then displays a list of
     * platform branches.</p> <p>A larger <code>BranchOrder</code> value designates a
     * newer platform branch within the platform.</p>
     */
    inline PlatformBranchSummary& WithBranchOrder(int value) { SetBranchOrder(value); return *this;}


    /**
     * <p>The environment tiers that platform versions in this branch support.</p>
     * <p>Possible values: <code>WebServer/Standard</code> |
     * <code>Worker/SQS/HTTP</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedTierList() const{ return m_supportedTierList; }

    /**
     * <p>The environment tiers that platform versions in this branch support.</p>
     * <p>Possible values: <code>WebServer/Standard</code> |
     * <code>Worker/SQS/HTTP</code> </p>
     */
    inline bool SupportedTierListHasBeenSet() const { return m_supportedTierListHasBeenSet; }

    /**
     * <p>The environment tiers that platform versions in this branch support.</p>
     * <p>Possible values: <code>WebServer/Standard</code> |
     * <code>Worker/SQS/HTTP</code> </p>
     */
    inline void SetSupportedTierList(const Aws::Vector<Aws::String>& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList = value; }

    /**
     * <p>The environment tiers that platform versions in this branch support.</p>
     * <p>Possible values: <code>WebServer/Standard</code> |
     * <code>Worker/SQS/HTTP</code> </p>
     */
    inline void SetSupportedTierList(Aws::Vector<Aws::String>&& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList = std::move(value); }

    /**
     * <p>The environment tiers that platform versions in this branch support.</p>
     * <p>Possible values: <code>WebServer/Standard</code> |
     * <code>Worker/SQS/HTTP</code> </p>
     */
    inline PlatformBranchSummary& WithSupportedTierList(const Aws::Vector<Aws::String>& value) { SetSupportedTierList(value); return *this;}

    /**
     * <p>The environment tiers that platform versions in this branch support.</p>
     * <p>Possible values: <code>WebServer/Standard</code> |
     * <code>Worker/SQS/HTTP</code> </p>
     */
    inline PlatformBranchSummary& WithSupportedTierList(Aws::Vector<Aws::String>&& value) { SetSupportedTierList(std::move(value)); return *this;}

    /**
     * <p>The environment tiers that platform versions in this branch support.</p>
     * <p>Possible values: <code>WebServer/Standard</code> |
     * <code>Worker/SQS/HTTP</code> </p>
     */
    inline PlatformBranchSummary& AddSupportedTierList(const Aws::String& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList.push_back(value); return *this; }

    /**
     * <p>The environment tiers that platform versions in this branch support.</p>
     * <p>Possible values: <code>WebServer/Standard</code> |
     * <code>Worker/SQS/HTTP</code> </p>
     */
    inline PlatformBranchSummary& AddSupportedTierList(Aws::String&& value) { m_supportedTierListHasBeenSet = true; m_supportedTierList.push_back(std::move(value)); return *this; }

    /**
     * <p>The environment tiers that platform versions in this branch support.</p>
     * <p>Possible values: <code>WebServer/Standard</code> |
     * <code>Worker/SQS/HTTP</code> </p>
     */
    inline PlatformBranchSummary& AddSupportedTierList(const char* value) { m_supportedTierListHasBeenSet = true; m_supportedTierList.push_back(value); return *this; }

  private:

    Aws::String m_platformName;
    bool m_platformNameHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::String m_lifecycleState;
    bool m_lifecycleStateHasBeenSet = false;

    int m_branchOrder;
    bool m_branchOrderHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedTierList;
    bool m_supportedTierListHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
