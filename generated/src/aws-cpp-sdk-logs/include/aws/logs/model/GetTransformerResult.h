/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/Processor.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class GetTransformerResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API GetTransformerResult() = default;
    AWS_CLOUDWATCHLOGS_API GetTransformerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API GetTransformerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the log group that you specified in your request.</p>
     */
    inline const Aws::String& GetLogGroupIdentifier() const { return m_logGroupIdentifier; }
    template<typename LogGroupIdentifierT = Aws::String>
    void SetLogGroupIdentifier(LogGroupIdentifierT&& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = std::forward<LogGroupIdentifierT>(value); }
    template<typename LogGroupIdentifierT = Aws::String>
    GetTransformerResult& WithLogGroupIdentifier(LogGroupIdentifierT&& value) { SetLogGroupIdentifier(std::forward<LogGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the transformer, expressed as the number of milliseconds
     * after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline long long GetCreationTime() const { return m_creationTime; }
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline GetTransformerResult& WithCreationTime(long long value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this transformer was most recently modified, expressed
     * as the number of milliseconds after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline long long GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline GetTransformerResult& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This sructure contains the configuration of the requested transformer.</p>
     */
    inline const Aws::Vector<Processor>& GetTransformerConfig() const { return m_transformerConfig; }
    template<typename TransformerConfigT = Aws::Vector<Processor>>
    void SetTransformerConfig(TransformerConfigT&& value) { m_transformerConfigHasBeenSet = true; m_transformerConfig = std::forward<TransformerConfigT>(value); }
    template<typename TransformerConfigT = Aws::Vector<Processor>>
    GetTransformerResult& WithTransformerConfig(TransformerConfigT&& value) { SetTransformerConfig(std::forward<TransformerConfigT>(value)); return *this;}
    template<typename TransformerConfigT = Processor>
    GetTransformerResult& AddTransformerConfig(TransformerConfigT&& value) { m_transformerConfigHasBeenSet = true; m_transformerConfig.emplace_back(std::forward<TransformerConfigT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTransformerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_logGroupIdentifier;
    bool m_logGroupIdentifierHasBeenSet = false;

    long long m_creationTime{0};
    bool m_creationTimeHasBeenSet = false;

    long long m_lastModifiedTime{0};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Vector<Processor> m_transformerConfig;
    bool m_transformerConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
