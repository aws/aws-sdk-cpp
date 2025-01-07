/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/OpenSearchResourceStatus.h>
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
   * <p>This structure contains information about the OpenSearch Service application
   * used for this integration. An OpenSearch Service application is the web
   * application created by the integration with CloudWatch Logs. It hosts the vended
   * logs dashboards.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/OpenSearchApplication">AWS
   * API Reference</a></p>
   */
  class OpenSearchApplication
  {
  public:
    AWS_CLOUDWATCHLOGS_API OpenSearchApplication();
    AWS_CLOUDWATCHLOGS_API OpenSearchApplication(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API OpenSearchApplication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint of the application.</p>
     */
    inline const Aws::String& GetApplicationEndpoint() const{ return m_applicationEndpoint; }
    inline bool ApplicationEndpointHasBeenSet() const { return m_applicationEndpointHasBeenSet; }
    inline void SetApplicationEndpoint(const Aws::String& value) { m_applicationEndpointHasBeenSet = true; m_applicationEndpoint = value; }
    inline void SetApplicationEndpoint(Aws::String&& value) { m_applicationEndpointHasBeenSet = true; m_applicationEndpoint = std::move(value); }
    inline void SetApplicationEndpoint(const char* value) { m_applicationEndpointHasBeenSet = true; m_applicationEndpoint.assign(value); }
    inline OpenSearchApplication& WithApplicationEndpoint(const Aws::String& value) { SetApplicationEndpoint(value); return *this;}
    inline OpenSearchApplication& WithApplicationEndpoint(Aws::String&& value) { SetApplicationEndpoint(std::move(value)); return *this;}
    inline OpenSearchApplication& WithApplicationEndpoint(const char* value) { SetApplicationEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }
    inline OpenSearchApplication& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}
    inline OpenSearchApplication& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}
    inline OpenSearchApplication& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline OpenSearchApplication& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline OpenSearchApplication& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline OpenSearchApplication& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains information about the status of this OpenSearch
     * Service resource.</p>
     */
    inline const OpenSearchResourceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OpenSearchResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OpenSearchResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline OpenSearchApplication& WithStatus(const OpenSearchResourceStatus& value) { SetStatus(value); return *this;}
    inline OpenSearchApplication& WithStatus(OpenSearchResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationEndpoint;
    bool m_applicationEndpointHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    OpenSearchResourceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
