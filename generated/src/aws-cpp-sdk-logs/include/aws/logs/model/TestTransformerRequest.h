/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/Processor.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class TestTransformerRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API TestTransformerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestTransformer"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>This structure contains the configuration of this log transformer that you
     * want to test. A log transformer is an array of processors, where each processor
     * applies one type of transformation to the log events that are ingested.</p>
     */
    inline const Aws::Vector<Processor>& GetTransformerConfig() const { return m_transformerConfig; }
    inline bool TransformerConfigHasBeenSet() const { return m_transformerConfigHasBeenSet; }
    template<typename TransformerConfigT = Aws::Vector<Processor>>
    void SetTransformerConfig(TransformerConfigT&& value) { m_transformerConfigHasBeenSet = true; m_transformerConfig = std::forward<TransformerConfigT>(value); }
    template<typename TransformerConfigT = Aws::Vector<Processor>>
    TestTransformerRequest& WithTransformerConfig(TransformerConfigT&& value) { SetTransformerConfig(std::forward<TransformerConfigT>(value)); return *this;}
    template<typename TransformerConfigT = Processor>
    TestTransformerRequest& AddTransformerConfig(TransformerConfigT&& value) { m_transformerConfigHasBeenSet = true; m_transformerConfig.emplace_back(std::forward<TransformerConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of the raw log events that you want to use to test this
     * transformer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogEventMessages() const { return m_logEventMessages; }
    inline bool LogEventMessagesHasBeenSet() const { return m_logEventMessagesHasBeenSet; }
    template<typename LogEventMessagesT = Aws::Vector<Aws::String>>
    void SetLogEventMessages(LogEventMessagesT&& value) { m_logEventMessagesHasBeenSet = true; m_logEventMessages = std::forward<LogEventMessagesT>(value); }
    template<typename LogEventMessagesT = Aws::Vector<Aws::String>>
    TestTransformerRequest& WithLogEventMessages(LogEventMessagesT&& value) { SetLogEventMessages(std::forward<LogEventMessagesT>(value)); return *this;}
    template<typename LogEventMessagesT = Aws::String>
    TestTransformerRequest& AddLogEventMessages(LogEventMessagesT&& value) { m_logEventMessagesHasBeenSet = true; m_logEventMessages.emplace_back(std::forward<LogEventMessagesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Processor> m_transformerConfig;
    bool m_transformerConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_logEventMessages;
    bool m_logEventMessagesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
