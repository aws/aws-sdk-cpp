/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Information about an application version deployment.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/Deployment">AWS
   * API Reference</a></p>
   */
  class Deployment
  {
  public:
    AWS_ELASTICBEANSTALK_API Deployment() = default;
    AWS_ELASTICBEANSTALK_API Deployment(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API Deployment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The version label of the application version in the deployment.</p>
     */
    inline const Aws::String& GetVersionLabel() const { return m_versionLabel; }
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }
    template<typename VersionLabelT = Aws::String>
    void SetVersionLabel(VersionLabelT&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::forward<VersionLabelT>(value); }
    template<typename VersionLabelT = Aws::String>
    Deployment& WithVersionLabel(VersionLabelT&& value) { SetVersionLabel(std::forward<VersionLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the deployment. This number increases by one each time that you
     * deploy source code or change instance configuration settings.</p>
     */
    inline long long GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    inline void SetDeploymentId(long long value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }
    inline Deployment& WithDeploymentId(long long value) { SetDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the deployment:</p> <ul> <li> <p> <code>In Progress</code> :
     * The deployment is in progress.</p> </li> <li> <p> <code>Deployed</code> : The
     * deployment succeeded.</p> </li> <li> <p> <code>Failed</code> : The deployment
     * failed.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Deployment& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For in-progress deployments, the time that the deployment started.</p> <p>For
     * completed deployments, the time that the deployment ended.</p>
     */
    inline const Aws::Utils::DateTime& GetDeploymentTime() const { return m_deploymentTime; }
    inline bool DeploymentTimeHasBeenSet() const { return m_deploymentTimeHasBeenSet; }
    template<typename DeploymentTimeT = Aws::Utils::DateTime>
    void SetDeploymentTime(DeploymentTimeT&& value) { m_deploymentTimeHasBeenSet = true; m_deploymentTime = std::forward<DeploymentTimeT>(value); }
    template<typename DeploymentTimeT = Aws::Utils::DateTime>
    Deployment& WithDeploymentTime(DeploymentTimeT&& value) { SetDeploymentTime(std::forward<DeploymentTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet = false;

    long long m_deploymentId{0};
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_deploymentTime{};
    bool m_deploymentTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
