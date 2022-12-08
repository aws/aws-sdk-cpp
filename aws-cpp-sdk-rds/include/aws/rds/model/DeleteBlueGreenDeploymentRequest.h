/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class DeleteBlueGreenDeploymentRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DeleteBlueGreenDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBlueGreenDeployment"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The blue/green deployment identifier of the deployment to be deleted. This
     * parameter isn't case-sensitive.</p> <p>Constraints: </p> <ul> <li> <p>Must match
     * an existing blue/green deployment identifier.</p> </li> </ul>
     */
    inline const Aws::String& GetBlueGreenDeploymentIdentifier() const{ return m_blueGreenDeploymentIdentifier; }

    /**
     * <p>The blue/green deployment identifier of the deployment to be deleted. This
     * parameter isn't case-sensitive.</p> <p>Constraints: </p> <ul> <li> <p>Must match
     * an existing blue/green deployment identifier.</p> </li> </ul>
     */
    inline bool BlueGreenDeploymentIdentifierHasBeenSet() const { return m_blueGreenDeploymentIdentifierHasBeenSet; }

    /**
     * <p>The blue/green deployment identifier of the deployment to be deleted. This
     * parameter isn't case-sensitive.</p> <p>Constraints: </p> <ul> <li> <p>Must match
     * an existing blue/green deployment identifier.</p> </li> </ul>
     */
    inline void SetBlueGreenDeploymentIdentifier(const Aws::String& value) { m_blueGreenDeploymentIdentifierHasBeenSet = true; m_blueGreenDeploymentIdentifier = value; }

    /**
     * <p>The blue/green deployment identifier of the deployment to be deleted. This
     * parameter isn't case-sensitive.</p> <p>Constraints: </p> <ul> <li> <p>Must match
     * an existing blue/green deployment identifier.</p> </li> </ul>
     */
    inline void SetBlueGreenDeploymentIdentifier(Aws::String&& value) { m_blueGreenDeploymentIdentifierHasBeenSet = true; m_blueGreenDeploymentIdentifier = std::move(value); }

    /**
     * <p>The blue/green deployment identifier of the deployment to be deleted. This
     * parameter isn't case-sensitive.</p> <p>Constraints: </p> <ul> <li> <p>Must match
     * an existing blue/green deployment identifier.</p> </li> </ul>
     */
    inline void SetBlueGreenDeploymentIdentifier(const char* value) { m_blueGreenDeploymentIdentifierHasBeenSet = true; m_blueGreenDeploymentIdentifier.assign(value); }

    /**
     * <p>The blue/green deployment identifier of the deployment to be deleted. This
     * parameter isn't case-sensitive.</p> <p>Constraints: </p> <ul> <li> <p>Must match
     * an existing blue/green deployment identifier.</p> </li> </ul>
     */
    inline DeleteBlueGreenDeploymentRequest& WithBlueGreenDeploymentIdentifier(const Aws::String& value) { SetBlueGreenDeploymentIdentifier(value); return *this;}

    /**
     * <p>The blue/green deployment identifier of the deployment to be deleted. This
     * parameter isn't case-sensitive.</p> <p>Constraints: </p> <ul> <li> <p>Must match
     * an existing blue/green deployment identifier.</p> </li> </ul>
     */
    inline DeleteBlueGreenDeploymentRequest& WithBlueGreenDeploymentIdentifier(Aws::String&& value) { SetBlueGreenDeploymentIdentifier(std::move(value)); return *this;}

    /**
     * <p>The blue/green deployment identifier of the deployment to be deleted. This
     * parameter isn't case-sensitive.</p> <p>Constraints: </p> <ul> <li> <p>Must match
     * an existing blue/green deployment identifier.</p> </li> </ul>
     */
    inline DeleteBlueGreenDeploymentRequest& WithBlueGreenDeploymentIdentifier(const char* value) { SetBlueGreenDeploymentIdentifier(value); return *this;}


    /**
     * <p>A value that indicates whether to delete the resources in the green
     * environment.</p>
     */
    inline bool GetDeleteTarget() const{ return m_deleteTarget; }

    /**
     * <p>A value that indicates whether to delete the resources in the green
     * environment.</p>
     */
    inline bool DeleteTargetHasBeenSet() const { return m_deleteTargetHasBeenSet; }

    /**
     * <p>A value that indicates whether to delete the resources in the green
     * environment.</p>
     */
    inline void SetDeleteTarget(bool value) { m_deleteTargetHasBeenSet = true; m_deleteTarget = value; }

    /**
     * <p>A value that indicates whether to delete the resources in the green
     * environment.</p>
     */
    inline DeleteBlueGreenDeploymentRequest& WithDeleteTarget(bool value) { SetDeleteTarget(value); return *this;}

  private:

    Aws::String m_blueGreenDeploymentIdentifier;
    bool m_blueGreenDeploymentIdentifierHasBeenSet = false;

    bool m_deleteTarget;
    bool m_deleteTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
