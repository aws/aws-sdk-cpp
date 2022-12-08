/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   */
  class DeleteResourcesByExternalIdRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API DeleteResourcesByExternalIdRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourcesByExternalId"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique ID of an external resource (for example, a CloudFormation stack
     * ID) that is linked to one or more CodeDeploy resources.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>The unique ID of an external resource (for example, a CloudFormation stack
     * ID) that is linked to one or more CodeDeploy resources.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>The unique ID of an external resource (for example, a CloudFormation stack
     * ID) that is linked to one or more CodeDeploy resources.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>The unique ID of an external resource (for example, a CloudFormation stack
     * ID) that is linked to one or more CodeDeploy resources.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>The unique ID of an external resource (for example, a CloudFormation stack
     * ID) that is linked to one or more CodeDeploy resources.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>The unique ID of an external resource (for example, a CloudFormation stack
     * ID) that is linked to one or more CodeDeploy resources.</p>
     */
    inline DeleteResourcesByExternalIdRequest& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The unique ID of an external resource (for example, a CloudFormation stack
     * ID) that is linked to one or more CodeDeploy resources.</p>
     */
    inline DeleteResourcesByExternalIdRequest& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of an external resource (for example, a CloudFormation stack
     * ID) that is linked to one or more CodeDeploy resources.</p>
     */
    inline DeleteResourcesByExternalIdRequest& WithExternalId(const char* value) { SetExternalId(value); return *this;}

  private:

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
