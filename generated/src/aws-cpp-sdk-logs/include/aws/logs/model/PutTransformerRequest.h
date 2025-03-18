/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/Processor.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class PutTransformerRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutTransformerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutTransformer"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specify either the name or ARN of the log group to create the transformer
     * for. </p>
     */
    inline const Aws::String& GetLogGroupIdentifier() const { return m_logGroupIdentifier; }
    inline bool LogGroupIdentifierHasBeenSet() const { return m_logGroupIdentifierHasBeenSet; }
    template<typename LogGroupIdentifierT = Aws::String>
    void SetLogGroupIdentifier(LogGroupIdentifierT&& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = std::forward<LogGroupIdentifierT>(value); }
    template<typename LogGroupIdentifierT = Aws::String>
    PutTransformerRequest& WithLogGroupIdentifier(LogGroupIdentifierT&& value) { SetLogGroupIdentifier(std::forward<LogGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains the configuration of this log transformer. A log
     * transformer is an array of processors, where each processor applies one type of
     * transformation to the log events that are ingested.</p>
     */
    inline const Aws::Vector<Processor>& GetTransformerConfig() const { return m_transformerConfig; }
    inline bool TransformerConfigHasBeenSet() const { return m_transformerConfigHasBeenSet; }
    template<typename TransformerConfigT = Aws::Vector<Processor>>
    void SetTransformerConfig(TransformerConfigT&& value) { m_transformerConfigHasBeenSet = true; m_transformerConfig = std::forward<TransformerConfigT>(value); }
    template<typename TransformerConfigT = Aws::Vector<Processor>>
    PutTransformerRequest& WithTransformerConfig(TransformerConfigT&& value) { SetTransformerConfig(std::forward<TransformerConfigT>(value)); return *this;}
    template<typename TransformerConfigT = Processor>
    PutTransformerRequest& AddTransformerConfig(TransformerConfigT&& value) { m_transformerConfigHasBeenSet = true; m_transformerConfig.emplace_back(std::forward<TransformerConfigT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_logGroupIdentifier;
    bool m_logGroupIdentifierHasBeenSet = false;

    Aws::Vector<Processor> m_transformerConfig;
    bool m_transformerConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
