/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/model/BulkDeploymentMetrics.h>
#include <aws/greengrass/model/BulkDeploymentStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/greengrass/model/ErrorDetail.h>
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
  class GetBulkDeploymentStatusResult
  {
  public:
    AWS_GREENGRASS_API GetBulkDeploymentStatusResult() = default;
    AWS_GREENGRASS_API GetBulkDeploymentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API GetBulkDeploymentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Relevant metrics on input records processed during bulk deployment.
     */
    inline const BulkDeploymentMetrics& GetBulkDeploymentMetrics() const { return m_bulkDeploymentMetrics; }
    template<typename BulkDeploymentMetricsT = BulkDeploymentMetrics>
    void SetBulkDeploymentMetrics(BulkDeploymentMetricsT&& value) { m_bulkDeploymentMetricsHasBeenSet = true; m_bulkDeploymentMetrics = std::forward<BulkDeploymentMetricsT>(value); }
    template<typename BulkDeploymentMetricsT = BulkDeploymentMetrics>
    GetBulkDeploymentStatusResult& WithBulkDeploymentMetrics(BulkDeploymentMetricsT&& value) { SetBulkDeploymentMetrics(std::forward<BulkDeploymentMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The status of the bulk deployment.
     */
    inline BulkDeploymentStatus GetBulkDeploymentStatus() const { return m_bulkDeploymentStatus; }
    inline void SetBulkDeploymentStatus(BulkDeploymentStatus value) { m_bulkDeploymentStatusHasBeenSet = true; m_bulkDeploymentStatus = value; }
    inline GetBulkDeploymentStatusResult& WithBulkDeploymentStatus(BulkDeploymentStatus value) { SetBulkDeploymentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    GetBulkDeploymentStatusResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Error details
     */
    inline const Aws::Vector<ErrorDetail>& GetErrorDetails() const { return m_errorDetails; }
    template<typename ErrorDetailsT = Aws::Vector<ErrorDetail>>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = Aws::Vector<ErrorDetail>>
    GetBulkDeploymentStatusResult& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    template<typename ErrorDetailsT = ErrorDetail>
    GetBulkDeploymentStatusResult& AddErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails.emplace_back(std::forward<ErrorDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Error message
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    GetBulkDeploymentStatusResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Tag(s) attached to the resource arn.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetBulkDeploymentStatusResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetBulkDeploymentStatusResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBulkDeploymentStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BulkDeploymentMetrics m_bulkDeploymentMetrics;
    bool m_bulkDeploymentMetricsHasBeenSet = false;

    BulkDeploymentStatus m_bulkDeploymentStatus{BulkDeploymentStatus::NOT_SET};
    bool m_bulkDeploymentStatusHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<ErrorDetail> m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
