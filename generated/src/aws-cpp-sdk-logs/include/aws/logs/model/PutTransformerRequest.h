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
    AWS_CLOUDWATCHLOGS_API PutTransformerRequest();

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
    inline const Aws::String& GetLogGroupIdentifier() const{ return m_logGroupIdentifier; }
    inline bool LogGroupIdentifierHasBeenSet() const { return m_logGroupIdentifierHasBeenSet; }
    inline void SetLogGroupIdentifier(const Aws::String& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = value; }
    inline void SetLogGroupIdentifier(Aws::String&& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = std::move(value); }
    inline void SetLogGroupIdentifier(const char* value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier.assign(value); }
    inline PutTransformerRequest& WithLogGroupIdentifier(const Aws::String& value) { SetLogGroupIdentifier(value); return *this;}
    inline PutTransformerRequest& WithLogGroupIdentifier(Aws::String&& value) { SetLogGroupIdentifier(std::move(value)); return *this;}
    inline PutTransformerRequest& WithLogGroupIdentifier(const char* value) { SetLogGroupIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains the configuration of this log transformer. A log
     * transformer is an array of processors, where each processor applies one type of
     * transformation to the log events that are ingested.</p>
     */
    inline const Aws::Vector<Processor>& GetTransformerConfig() const{ return m_transformerConfig; }
    inline bool TransformerConfigHasBeenSet() const { return m_transformerConfigHasBeenSet; }
    inline void SetTransformerConfig(const Aws::Vector<Processor>& value) { m_transformerConfigHasBeenSet = true; m_transformerConfig = value; }
    inline void SetTransformerConfig(Aws::Vector<Processor>&& value) { m_transformerConfigHasBeenSet = true; m_transformerConfig = std::move(value); }
    inline PutTransformerRequest& WithTransformerConfig(const Aws::Vector<Processor>& value) { SetTransformerConfig(value); return *this;}
    inline PutTransformerRequest& WithTransformerConfig(Aws::Vector<Processor>&& value) { SetTransformerConfig(std::move(value)); return *this;}
    inline PutTransformerRequest& AddTransformerConfig(const Processor& value) { m_transformerConfigHasBeenSet = true; m_transformerConfig.push_back(value); return *this; }
    inline PutTransformerRequest& AddTransformerConfig(Processor&& value) { m_transformerConfigHasBeenSet = true; m_transformerConfig.push_back(std::move(value)); return *this; }
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
