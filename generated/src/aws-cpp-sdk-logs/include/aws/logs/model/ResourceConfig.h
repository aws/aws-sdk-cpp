/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/OpenSearchResourceConfig.h>
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
   * <p>This structure contains configuration details about an integration between
   * CloudWatch Logs and another entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ResourceConfig">AWS
   * API Reference</a></p>
   */
  class ResourceConfig
  {
  public:
    AWS_CLOUDWATCHLOGS_API ResourceConfig() = default;
    AWS_CLOUDWATCHLOGS_API ResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API ResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This structure contains configuration details about an integration between
     * CloudWatch Logs and OpenSearch Service.</p>
     */
    inline const OpenSearchResourceConfig& GetOpenSearchResourceConfig() const { return m_openSearchResourceConfig; }
    inline bool OpenSearchResourceConfigHasBeenSet() const { return m_openSearchResourceConfigHasBeenSet; }
    template<typename OpenSearchResourceConfigT = OpenSearchResourceConfig>
    void SetOpenSearchResourceConfig(OpenSearchResourceConfigT&& value) { m_openSearchResourceConfigHasBeenSet = true; m_openSearchResourceConfig = std::forward<OpenSearchResourceConfigT>(value); }
    template<typename OpenSearchResourceConfigT = OpenSearchResourceConfig>
    ResourceConfig& WithOpenSearchResourceConfig(OpenSearchResourceConfigT&& value) { SetOpenSearchResourceConfig(std::forward<OpenSearchResourceConfigT>(value)); return *this;}
    ///@}
  private:

    OpenSearchResourceConfig m_openSearchResourceConfig;
    bool m_openSearchResourceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
