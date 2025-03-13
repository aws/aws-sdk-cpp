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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{
  class StartBulkDeploymentResult
  {
  public:
    AWS_GREENGRASS_API StartBulkDeploymentResult() = default;
    AWS_GREENGRASS_API StartBulkDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API StartBulkDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of the bulk deployment.
     */
    inline const Aws::String& GetBulkDeploymentArn() const { return m_bulkDeploymentArn; }
    template<typename BulkDeploymentArnT = Aws::String>
    void SetBulkDeploymentArn(BulkDeploymentArnT&& value) { m_bulkDeploymentArnHasBeenSet = true; m_bulkDeploymentArn = std::forward<BulkDeploymentArnT>(value); }
    template<typename BulkDeploymentArnT = Aws::String>
    StartBulkDeploymentResult& WithBulkDeploymentArn(BulkDeploymentArnT&& value) { SetBulkDeploymentArn(std::forward<BulkDeploymentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the bulk deployment.
     */
    inline const Aws::String& GetBulkDeploymentId() const { return m_bulkDeploymentId; }
    template<typename BulkDeploymentIdT = Aws::String>
    void SetBulkDeploymentId(BulkDeploymentIdT&& value) { m_bulkDeploymentIdHasBeenSet = true; m_bulkDeploymentId = std::forward<BulkDeploymentIdT>(value); }
    template<typename BulkDeploymentIdT = Aws::String>
    StartBulkDeploymentResult& WithBulkDeploymentId(BulkDeploymentIdT&& value) { SetBulkDeploymentId(std::forward<BulkDeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartBulkDeploymentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bulkDeploymentArn;
    bool m_bulkDeploymentArnHasBeenSet = false;

    Aws::String m_bulkDeploymentId;
    bool m_bulkDeploymentIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
