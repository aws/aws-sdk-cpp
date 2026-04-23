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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a bulk deployment. You cannot start a new bulk deployment
   * while another one is still running or in a non-terminal state.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/BulkDeployment">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API BulkDeployment
  {
  public:
    BulkDeployment();
    BulkDeployment(Aws::Utils::Json::JsonView jsonValue);
    BulkDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ARN of the bulk deployment.
     */
    inline const Aws::String& GetBulkDeploymentArn() const{ return m_bulkDeploymentArn; }

    /**
     * The ARN of the bulk deployment.
     */
    inline bool BulkDeploymentArnHasBeenSet() const { return m_bulkDeploymentArnHasBeenSet; }

    /**
     * The ARN of the bulk deployment.
     */
    inline void SetBulkDeploymentArn(const Aws::String& value) { m_bulkDeploymentArnHasBeenSet = true; m_bulkDeploymentArn = value; }

    /**
     * The ARN of the bulk deployment.
     */
    inline void SetBulkDeploymentArn(Aws::String&& value) { m_bulkDeploymentArnHasBeenSet = true; m_bulkDeploymentArn = std::move(value); }

    /**
     * The ARN of the bulk deployment.
     */
    inline void SetBulkDeploymentArn(const char* value) { m_bulkDeploymentArnHasBeenSet = true; m_bulkDeploymentArn.assign(value); }

    /**
     * The ARN of the bulk deployment.
     */
    inline BulkDeployment& WithBulkDeploymentArn(const Aws::String& value) { SetBulkDeploymentArn(value); return *this;}

    /**
     * The ARN of the bulk deployment.
     */
    inline BulkDeployment& WithBulkDeploymentArn(Aws::String&& value) { SetBulkDeploymentArn(std::move(value)); return *this;}

    /**
     * The ARN of the bulk deployment.
     */
    inline BulkDeployment& WithBulkDeploymentArn(const char* value) { SetBulkDeploymentArn(value); return *this;}


    /**
     * The ID of the bulk deployment.
     */
    inline const Aws::String& GetBulkDeploymentId() const{ return m_bulkDeploymentId; }

    /**
     * The ID of the bulk deployment.
     */
    inline bool BulkDeploymentIdHasBeenSet() const { return m_bulkDeploymentIdHasBeenSet; }

    /**
     * The ID of the bulk deployment.
     */
    inline void SetBulkDeploymentId(const Aws::String& value) { m_bulkDeploymentIdHasBeenSet = true; m_bulkDeploymentId = value; }

    /**
     * The ID of the bulk deployment.
     */
    inline void SetBulkDeploymentId(Aws::String&& value) { m_bulkDeploymentIdHasBeenSet = true; m_bulkDeploymentId = std::move(value); }

    /**
     * The ID of the bulk deployment.
     */
    inline void SetBulkDeploymentId(const char* value) { m_bulkDeploymentIdHasBeenSet = true; m_bulkDeploymentId.assign(value); }

    /**
     * The ID of the bulk deployment.
     */
    inline BulkDeployment& WithBulkDeploymentId(const Aws::String& value) { SetBulkDeploymentId(value); return *this;}

    /**
     * The ID of the bulk deployment.
     */
    inline BulkDeployment& WithBulkDeploymentId(Aws::String&& value) { SetBulkDeploymentId(std::move(value)); return *this;}

    /**
     * The ID of the bulk deployment.
     */
    inline BulkDeployment& WithBulkDeploymentId(const char* value) { SetBulkDeploymentId(value); return *this;}


    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline BulkDeployment& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline BulkDeployment& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline BulkDeployment& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}

  private:

    Aws::String m_bulkDeploymentArn;
    bool m_bulkDeploymentArnHasBeenSet;

    Aws::String m_bulkDeploymentId;
    bool m_bulkDeploymentIdHasBeenSet;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
