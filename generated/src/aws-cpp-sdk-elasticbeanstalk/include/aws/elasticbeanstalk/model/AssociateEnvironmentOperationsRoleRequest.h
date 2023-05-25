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
   * <p>Request to add or change the operations role used by an
   * environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/AssociateEnvironmentOperationsRoleMessage">AWS
   * API Reference</a></p>
   */
  class AssociateEnvironmentOperationsRoleRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API AssociateEnvironmentOperationsRoleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateEnvironmentOperationsRole"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the environment to which to set the operations role.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the environment to which to set the operations role.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The name of the environment to which to set the operations role.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the environment to which to set the operations role.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The name of the environment to which to set the operations role.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the environment to which to set the operations role.</p>
     */
    inline AssociateEnvironmentOperationsRoleRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the environment to which to set the operations role.</p>
     */
    inline AssociateEnvironmentOperationsRoleRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment to which to set the operations role.</p>
     */
    inline AssociateEnvironmentOperationsRoleRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an existing IAM role to be used as the
     * environment's operations role.</p>
     */
    inline const Aws::String& GetOperationsRole() const{ return m_operationsRole; }

    /**
     * <p>The Amazon Resource Name (ARN) of an existing IAM role to be used as the
     * environment's operations role.</p>
     */
    inline bool OperationsRoleHasBeenSet() const { return m_operationsRoleHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an existing IAM role to be used as the
     * environment's operations role.</p>
     */
    inline void SetOperationsRole(const Aws::String& value) { m_operationsRoleHasBeenSet = true; m_operationsRole = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an existing IAM role to be used as the
     * environment's operations role.</p>
     */
    inline void SetOperationsRole(Aws::String&& value) { m_operationsRoleHasBeenSet = true; m_operationsRole = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an existing IAM role to be used as the
     * environment's operations role.</p>
     */
    inline void SetOperationsRole(const char* value) { m_operationsRoleHasBeenSet = true; m_operationsRole.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an existing IAM role to be used as the
     * environment's operations role.</p>
     */
    inline AssociateEnvironmentOperationsRoleRequest& WithOperationsRole(const Aws::String& value) { SetOperationsRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an existing IAM role to be used as the
     * environment's operations role.</p>
     */
    inline AssociateEnvironmentOperationsRoleRequest& WithOperationsRole(Aws::String&& value) { SetOperationsRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an existing IAM role to be used as the
     * environment's operations role.</p>
     */
    inline AssociateEnvironmentOperationsRoleRequest& WithOperationsRole(const char* value) { SetOperationsRole(value); return *this;}

  private:

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_operationsRole;
    bool m_operationsRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
