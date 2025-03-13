/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ActionStatus.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Request to list an environment's upcoming and in-progress managed
   * actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentManagedActionsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeEnvironmentManagedActionsRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentManagedActionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEnvironmentManagedActions"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the target environment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const { return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    template<typename EnvironmentNameT = Aws::String>
    void SetEnvironmentName(EnvironmentNameT&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::forward<EnvironmentNameT>(value); }
    template<typename EnvironmentNameT = Aws::String>
    DescribeEnvironmentManagedActionsRequest& WithEnvironmentName(EnvironmentNameT&& value) { SetEnvironmentName(std::forward<EnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment ID of the target environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    DescribeEnvironmentManagedActionsRequest& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To show only actions with a particular status, specify a status.</p>
     */
    inline ActionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ActionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeEnvironmentManagedActionsRequest& WithStatus(ActionStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    ActionStatus m_status{ActionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
