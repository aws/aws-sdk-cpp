/**
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
    AWS_GREENGRASS_API BulkDeployment() = default;
    AWS_GREENGRASS_API BulkDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API BulkDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of the bulk deployment.
     */
    inline const Aws::String& GetBulkDeploymentArn() const { return m_bulkDeploymentArn; }
    inline bool BulkDeploymentArnHasBeenSet() const { return m_bulkDeploymentArnHasBeenSet; }
    template<typename BulkDeploymentArnT = Aws::String>
    void SetBulkDeploymentArn(BulkDeploymentArnT&& value) { m_bulkDeploymentArnHasBeenSet = true; m_bulkDeploymentArn = std::forward<BulkDeploymentArnT>(value); }
    template<typename BulkDeploymentArnT = Aws::String>
    BulkDeployment& WithBulkDeploymentArn(BulkDeploymentArnT&& value) { SetBulkDeploymentArn(std::forward<BulkDeploymentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the bulk deployment.
     */
    inline const Aws::String& GetBulkDeploymentId() const { return m_bulkDeploymentId; }
    inline bool BulkDeploymentIdHasBeenSet() const { return m_bulkDeploymentIdHasBeenSet; }
    template<typename BulkDeploymentIdT = Aws::String>
    void SetBulkDeploymentId(BulkDeploymentIdT&& value) { m_bulkDeploymentIdHasBeenSet = true; m_bulkDeploymentId = std::forward<BulkDeploymentIdT>(value); }
    template<typename BulkDeploymentIdT = Aws::String>
    BulkDeployment& WithBulkDeploymentId(BulkDeploymentIdT&& value) { SetBulkDeploymentId(std::forward<BulkDeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    BulkDeployment& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
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
