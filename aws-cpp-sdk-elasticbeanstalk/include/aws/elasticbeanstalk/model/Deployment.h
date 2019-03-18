/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ELASTICBEANSTALK_API Deployment
  {
  public:
    Deployment();
    Deployment(const Aws::Utils::Xml::XmlNode& xmlNode);
    Deployment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The version label of the application version in the deployment.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }

    /**
     * <p>The version label of the application version in the deployment.</p>
     */
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }

    /**
     * <p>The version label of the application version in the deployment.</p>
     */
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }

    /**
     * <p>The version label of the application version in the deployment.</p>
     */
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::move(value); }

    /**
     * <p>The version label of the application version in the deployment.</p>
     */
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }

    /**
     * <p>The version label of the application version in the deployment.</p>
     */
    inline Deployment& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}

    /**
     * <p>The version label of the application version in the deployment.</p>
     */
    inline Deployment& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}

    /**
     * <p>The version label of the application version in the deployment.</p>
     */
    inline Deployment& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}


    /**
     * <p>The ID of the deployment. This number increases by one each time that you
     * deploy source code or change instance configuration settings.</p>
     */
    inline long long GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The ID of the deployment. This number increases by one each time that you
     * deploy source code or change instance configuration settings.</p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p>The ID of the deployment. This number increases by one each time that you
     * deploy source code or change instance configuration settings.</p>
     */
    inline void SetDeploymentId(long long value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The ID of the deployment. This number increases by one each time that you
     * deploy source code or change instance configuration settings.</p>
     */
    inline Deployment& WithDeploymentId(long long value) { SetDeploymentId(value); return *this;}


    /**
     * <p>The status of the deployment:</p> <ul> <li> <p> <code>In Progress</code> :
     * The deployment is in progress.</p> </li> <li> <p> <code>Deployed</code> : The
     * deployment succeeded.</p> </li> <li> <p> <code>Failed</code> : The deployment
     * failed.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the deployment:</p> <ul> <li> <p> <code>In Progress</code> :
     * The deployment is in progress.</p> </li> <li> <p> <code>Deployed</code> : The
     * deployment succeeded.</p> </li> <li> <p> <code>Failed</code> : The deployment
     * failed.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the deployment:</p> <ul> <li> <p> <code>In Progress</code> :
     * The deployment is in progress.</p> </li> <li> <p> <code>Deployed</code> : The
     * deployment succeeded.</p> </li> <li> <p> <code>Failed</code> : The deployment
     * failed.</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the deployment:</p> <ul> <li> <p> <code>In Progress</code> :
     * The deployment is in progress.</p> </li> <li> <p> <code>Deployed</code> : The
     * deployment succeeded.</p> </li> <li> <p> <code>Failed</code> : The deployment
     * failed.</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the deployment:</p> <ul> <li> <p> <code>In Progress</code> :
     * The deployment is in progress.</p> </li> <li> <p> <code>Deployed</code> : The
     * deployment succeeded.</p> </li> <li> <p> <code>Failed</code> : The deployment
     * failed.</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the deployment:</p> <ul> <li> <p> <code>In Progress</code> :
     * The deployment is in progress.</p> </li> <li> <p> <code>Deployed</code> : The
     * deployment succeeded.</p> </li> <li> <p> <code>Failed</code> : The deployment
     * failed.</p> </li> </ul>
     */
    inline Deployment& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the deployment:</p> <ul> <li> <p> <code>In Progress</code> :
     * The deployment is in progress.</p> </li> <li> <p> <code>Deployed</code> : The
     * deployment succeeded.</p> </li> <li> <p> <code>Failed</code> : The deployment
     * failed.</p> </li> </ul>
     */
    inline Deployment& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the deployment:</p> <ul> <li> <p> <code>In Progress</code> :
     * The deployment is in progress.</p> </li> <li> <p> <code>Deployed</code> : The
     * deployment succeeded.</p> </li> <li> <p> <code>Failed</code> : The deployment
     * failed.</p> </li> </ul>
     */
    inline Deployment& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>For in-progress deployments, the time that the deployment started.</p> <p>For
     * completed deployments, the time that the deployment ended.</p>
     */
    inline const Aws::Utils::DateTime& GetDeploymentTime() const{ return m_deploymentTime; }

    /**
     * <p>For in-progress deployments, the time that the deployment started.</p> <p>For
     * completed deployments, the time that the deployment ended.</p>
     */
    inline bool DeploymentTimeHasBeenSet() const { return m_deploymentTimeHasBeenSet; }

    /**
     * <p>For in-progress deployments, the time that the deployment started.</p> <p>For
     * completed deployments, the time that the deployment ended.</p>
     */
    inline void SetDeploymentTime(const Aws::Utils::DateTime& value) { m_deploymentTimeHasBeenSet = true; m_deploymentTime = value; }

    /**
     * <p>For in-progress deployments, the time that the deployment started.</p> <p>For
     * completed deployments, the time that the deployment ended.</p>
     */
    inline void SetDeploymentTime(Aws::Utils::DateTime&& value) { m_deploymentTimeHasBeenSet = true; m_deploymentTime = std::move(value); }

    /**
     * <p>For in-progress deployments, the time that the deployment started.</p> <p>For
     * completed deployments, the time that the deployment ended.</p>
     */
    inline Deployment& WithDeploymentTime(const Aws::Utils::DateTime& value) { SetDeploymentTime(value); return *this;}

    /**
     * <p>For in-progress deployments, the time that the deployment started.</p> <p>For
     * completed deployments, the time that the deployment ended.</p>
     */
    inline Deployment& WithDeploymentTime(Aws::Utils::DateTime&& value) { SetDeploymentTime(std::move(value)); return *this;}

  private:

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet;

    long long m_deploymentId;
    bool m_deploymentIdHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_deploymentTime;
    bool m_deploymentTimeHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
