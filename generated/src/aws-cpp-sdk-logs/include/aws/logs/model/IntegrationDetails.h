/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/OpenSearchIntegrationDetails.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure contains information about the integration configuration. For
   * an integration with OpenSearch Service, this includes information about
   * OpenSearch Service resources such as the collection, the workspace, and
   * policies.</p> <p>This structure is returned by a <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_GetIntegration.html">GetIntegration</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/IntegrationDetails">AWS
   * API Reference</a></p>
   */
  class IntegrationDetails
  {
  public:
    AWS_CLOUDWATCHLOGS_API IntegrationDetails() = default;
    AWS_CLOUDWATCHLOGS_API IntegrationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API IntegrationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This structure contains complete information about one integration between
     * CloudWatch Logs and OpenSearch Service.</p>
     */
    inline const OpenSearchIntegrationDetails& GetOpenSearchIntegrationDetails() const { return m_openSearchIntegrationDetails; }
    inline bool OpenSearchIntegrationDetailsHasBeenSet() const { return m_openSearchIntegrationDetailsHasBeenSet; }
    template<typename OpenSearchIntegrationDetailsT = OpenSearchIntegrationDetails>
    void SetOpenSearchIntegrationDetails(OpenSearchIntegrationDetailsT&& value) { m_openSearchIntegrationDetailsHasBeenSet = true; m_openSearchIntegrationDetails = std::forward<OpenSearchIntegrationDetailsT>(value); }
    template<typename OpenSearchIntegrationDetailsT = OpenSearchIntegrationDetails>
    IntegrationDetails& WithOpenSearchIntegrationDetails(OpenSearchIntegrationDetailsT&& value) { SetOpenSearchIntegrationDetails(std::forward<OpenSearchIntegrationDetailsT>(value)); return *this;}
    ///@}
  private:

    OpenSearchIntegrationDetails m_openSearchIntegrationDetails;
    bool m_openSearchIntegrationDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
