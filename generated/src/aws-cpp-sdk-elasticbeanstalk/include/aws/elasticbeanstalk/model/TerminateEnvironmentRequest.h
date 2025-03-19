/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Request to terminate an environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/TerminateEnvironmentMessage">AWS
   * API Reference</a></p>
   */
  class TerminateEnvironmentRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API TerminateEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TerminateEnvironment"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the environment to terminate.</p> <p> Condition: You must specify
     * either this or an EnvironmentName, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    TerminateEnvironmentRequest& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment to terminate.</p> <p> Condition: You must specify
     * either this or an EnvironmentId, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline const Aws::String& GetEnvironmentName() const { return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    template<typename EnvironmentNameT = Aws::String>
    void SetEnvironmentName(EnvironmentNameT&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::forward<EnvironmentNameT>(value); }
    template<typename EnvironmentNameT = Aws::String>
    TerminateEnvironmentRequest& WithEnvironmentName(EnvironmentNameT&& value) { SetEnvironmentName(std::forward<EnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the associated AWS resources should shut down when the
     * environment is terminated:</p> <ul> <li> <p> <code>true</code>: The specified
     * environment as well as the associated AWS resources, such as Auto Scaling group
     * and LoadBalancer, are terminated.</p> </li> <li> <p> <code>false</code>: AWS
     * Elastic Beanstalk resource management is removed from the environment, but the
     * AWS resources continue to operate.</p> </li> </ul> <p> For more information, see
     * the <a href="https://docs.aws.amazon.com/elasticbeanstalk/latest/ug/"> AWS
     * Elastic Beanstalk User Guide. </a> </p> <p> Default: <code>true</code> </p> <p>
     * Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline bool GetTerminateResources() const { return m_terminateResources; }
    inline bool TerminateResourcesHasBeenSet() const { return m_terminateResourcesHasBeenSet; }
    inline void SetTerminateResources(bool value) { m_terminateResourcesHasBeenSet = true; m_terminateResources = value; }
    inline TerminateEnvironmentRequest& WithTerminateResources(bool value) { SetTerminateResources(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Terminates the target environment even if another environment in the same
     * group is dependent on it.</p>
     */
    inline bool GetForceTerminate() const { return m_forceTerminate; }
    inline bool ForceTerminateHasBeenSet() const { return m_forceTerminateHasBeenSet; }
    inline void SetForceTerminate(bool value) { m_forceTerminateHasBeenSet = true; m_forceTerminate = value; }
    inline TerminateEnvironmentRequest& WithForceTerminate(bool value) { SetForceTerminate(value); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    bool m_terminateResources{false};
    bool m_terminateResourcesHasBeenSet = false;

    bool m_forceTerminate{false};
    bool m_forceTerminateHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
