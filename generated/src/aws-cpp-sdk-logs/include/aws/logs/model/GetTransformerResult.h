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
    AWS_CLOUDWATCHLOGS_API GetTransformerResult();
    AWS_CLOUDWATCHLOGS_API GetTransformerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API GetTransformerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the log group that you specified in your request.</p>
     */
    inline const Aws::String& GetLogGroupIdentifier() const{ return m_logGroupIdentifier; }
    inline void SetLogGroupIdentifier(const Aws::String& value) { m_logGroupIdentifier = value; }
    inline void SetLogGroupIdentifier(Aws::String&& value) { m_logGroupIdentifier = std::move(value); }
    inline void SetLogGroupIdentifier(const char* value) { m_logGroupIdentifier.assign(value); }
    inline GetTransformerResult& WithLogGroupIdentifier(const Aws::String& value) { SetLogGroupIdentifier(value); return *this;}
    inline GetTransformerResult& WithLogGroupIdentifier(Aws::String&& value) { SetLogGroupIdentifier(std::move(value)); return *this;}
    inline GetTransformerResult& WithLogGroupIdentifier(const char* value) { SetLogGroupIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the transformer, expressed as the number of milliseconds
     * after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline long long GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(long long value) { m_creationTime = value; }
    inline GetTransformerResult& WithCreationTime(long long value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this transformer was most recently modified, expressed
     * as the number of milliseconds after Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTime = value; }
    inline GetTransformerResult& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This sructure contains the configuration of the requested transformer.</p>
     */
    inline const Aws::Vector<Processor>& GetTransformerConfig() const{ return m_transformerConfig; }
    inline void SetTransformerConfig(const Aws::Vector<Processor>& value) { m_transformerConfig = value; }
    inline void SetTransformerConfig(Aws::Vector<Processor>&& value) { m_transformerConfig = std::move(value); }
    inline GetTransformerResult& WithTransformerConfig(const Aws::Vector<Processor>& value) { SetTransformerConfig(value); return *this;}
    inline GetTransformerResult& WithTransformerConfig(Aws::Vector<Processor>&& value) { SetTransformerConfig(std::move(value)); return *this;}
    inline GetTransformerResult& AddTransformerConfig(const Processor& value) { m_transformerConfig.push_back(value); return *this; }
    inline GetTransformerResult& AddTransformerConfig(Processor&& value) { m_transformerConfig.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTransformerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTransformerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTransformerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_logGroupIdentifier;

    long long m_creationTime;

    long long m_lastModifiedTime;

    Aws::Vector<Processor> m_transformerConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
