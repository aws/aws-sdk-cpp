﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BulkDeployment
  {
  public:
    AWS_GREENGRASS_API BulkDeployment();
    AWS_GREENGRASS_API BulkDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API BulkDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of the bulk deployment.
     */
    inline const Aws::String& GetBulkDeploymentArn() const{ return m_bulkDeploymentArn; }
    inline bool BulkDeploymentArnHasBeenSet() const { return m_bulkDeploymentArnHasBeenSet; }
    inline void SetBulkDeploymentArn(const Aws::String& value) { m_bulkDeploymentArnHasBeenSet = true; m_bulkDeploymentArn = value; }
    inline void SetBulkDeploymentArn(Aws::String&& value) { m_bulkDeploymentArnHasBeenSet = true; m_bulkDeploymentArn = std::move(value); }
    inline void SetBulkDeploymentArn(const char* value) { m_bulkDeploymentArnHasBeenSet = true; m_bulkDeploymentArn.assign(value); }
    inline BulkDeployment& WithBulkDeploymentArn(const Aws::String& value) { SetBulkDeploymentArn(value); return *this;}
    inline BulkDeployment& WithBulkDeploymentArn(Aws::String&& value) { SetBulkDeploymentArn(std::move(value)); return *this;}
    inline BulkDeployment& WithBulkDeploymentArn(const char* value) { SetBulkDeploymentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the bulk deployment.
     */
    inline const Aws::String& GetBulkDeploymentId() const{ return m_bulkDeploymentId; }
    inline bool BulkDeploymentIdHasBeenSet() const { return m_bulkDeploymentIdHasBeenSet; }
    inline void SetBulkDeploymentId(const Aws::String& value) { m_bulkDeploymentIdHasBeenSet = true; m_bulkDeploymentId = value; }
    inline void SetBulkDeploymentId(Aws::String&& value) { m_bulkDeploymentIdHasBeenSet = true; m_bulkDeploymentId = std::move(value); }
    inline void SetBulkDeploymentId(const char* value) { m_bulkDeploymentIdHasBeenSet = true; m_bulkDeploymentId.assign(value); }
    inline BulkDeployment& WithBulkDeploymentId(const Aws::String& value) { SetBulkDeploymentId(value); return *this;}
    inline BulkDeployment& WithBulkDeploymentId(Aws::String&& value) { SetBulkDeploymentId(std::move(value)); return *this;}
    inline BulkDeployment& WithBulkDeploymentId(const char* value) { SetBulkDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }
    inline BulkDeployment& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}
    inline BulkDeployment& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}
    inline BulkDeployment& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}
    ///@}
  private:

    Aws::String m_bulkDeploymentArn;
    bool m_bulkDeploymentArnHasBeenSet = false;

    Aws::String m_bulkDeploymentId;
    bool m_bulkDeploymentIdHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
