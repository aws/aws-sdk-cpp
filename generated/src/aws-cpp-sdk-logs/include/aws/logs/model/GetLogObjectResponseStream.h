/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/FieldsData.h>
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
   * <p>A stream of structured log data returned by the GetLogObject operation. This
   * stream contains log events with their associated metadata and extracted
   * fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetLogObjectResponseStream">AWS
   * API Reference</a></p>
   */
  class GetLogObjectResponseStream
  {
  public:
    AWS_CLOUDWATCHLOGS_API GetLogObjectResponseStream() = default;
    AWS_CLOUDWATCHLOGS_API GetLogObjectResponseStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API GetLogObjectResponseStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const FieldsData& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = FieldsData>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = FieldsData>
    GetLogObjectResponseStream& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchLogsError& GetInternalStreamingException() const { return m_internalStreamingException; }
    inline bool InternalStreamingExceptionHasBeenSet() const { return m_internalStreamingExceptionHasBeenSet; }
    template<typename InternalStreamingExceptionT = CloudWatchLogsError>
    void SetInternalStreamingException(InternalStreamingExceptionT&& value) { m_internalStreamingExceptionHasBeenSet = true; m_internalStreamingException = std::forward<InternalStreamingExceptionT>(value); }
    template<typename InternalStreamingExceptionT = CloudWatchLogsError>
    GetLogObjectResponseStream& WithInternalStreamingException(InternalStreamingExceptionT&& value) { SetInternalStreamingException(std::forward<InternalStreamingExceptionT>(value)); return *this;}
    ///@}
  private:

    FieldsData m_fields;
    bool m_fieldsHasBeenSet = false;

    CloudWatchLogsError m_internalStreamingException;
    bool m_internalStreamingExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
