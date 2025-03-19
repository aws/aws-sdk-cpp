/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/model/SourceSchema.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace KinesisAnalytics
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DiscoverInputSchemaResponse">AWS
   * API Reference</a></p>
   */
  class DiscoverInputSchemaResult
  {
  public:
    AWS_KINESISANALYTICS_API DiscoverInputSchemaResult() = default;
    AWS_KINESISANALYTICS_API DiscoverInputSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICS_API DiscoverInputSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Schema inferred from the streaming source. It identifies the format of the
     * data in the streaming source and how each data element maps to corresponding
     * columns in the in-application stream that you can create.</p>
     */
    inline const SourceSchema& GetInputSchema() const { return m_inputSchema; }
    template<typename InputSchemaT = SourceSchema>
    void SetInputSchema(InputSchemaT&& value) { m_inputSchemaHasBeenSet = true; m_inputSchema = std::forward<InputSchemaT>(value); }
    template<typename InputSchemaT = SourceSchema>
    DiscoverInputSchemaResult& WithInputSchema(InputSchemaT&& value) { SetInputSchema(std::forward<InputSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of elements, where each element corresponds to a row in a stream
     * record (a stream record can have more than one row).</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetParsedInputRecords() const { return m_parsedInputRecords; }
    template<typename ParsedInputRecordsT = Aws::Vector<Aws::Vector<Aws::String>>>
    void SetParsedInputRecords(ParsedInputRecordsT&& value) { m_parsedInputRecordsHasBeenSet = true; m_parsedInputRecords = std::forward<ParsedInputRecordsT>(value); }
    template<typename ParsedInputRecordsT = Aws::Vector<Aws::Vector<Aws::String>>>
    DiscoverInputSchemaResult& WithParsedInputRecords(ParsedInputRecordsT&& value) { SetParsedInputRecords(std::forward<ParsedInputRecordsT>(value)); return *this;}
    template<typename ParsedInputRecordsT = Aws::Vector<Aws::String>>
    DiscoverInputSchemaResult& AddParsedInputRecords(ParsedInputRecordsT&& value) { m_parsedInputRecordsHasBeenSet = true; m_parsedInputRecords.emplace_back(std::forward<ParsedInputRecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProcessedInputRecords() const { return m_processedInputRecords; }
    template<typename ProcessedInputRecordsT = Aws::Vector<Aws::String>>
    void SetProcessedInputRecords(ProcessedInputRecordsT&& value) { m_processedInputRecordsHasBeenSet = true; m_processedInputRecords = std::forward<ProcessedInputRecordsT>(value); }
    template<typename ProcessedInputRecordsT = Aws::Vector<Aws::String>>
    DiscoverInputSchemaResult& WithProcessedInputRecords(ProcessedInputRecordsT&& value) { SetProcessedInputRecords(std::forward<ProcessedInputRecordsT>(value)); return *this;}
    template<typename ProcessedInputRecordsT = Aws::String>
    DiscoverInputSchemaResult& AddProcessedInputRecords(ProcessedInputRecordsT&& value) { m_processedInputRecordsHasBeenSet = true; m_processedInputRecords.emplace_back(std::forward<ProcessedInputRecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRawInputRecords() const { return m_rawInputRecords; }
    template<typename RawInputRecordsT = Aws::Vector<Aws::String>>
    void SetRawInputRecords(RawInputRecordsT&& value) { m_rawInputRecordsHasBeenSet = true; m_rawInputRecords = std::forward<RawInputRecordsT>(value); }
    template<typename RawInputRecordsT = Aws::Vector<Aws::String>>
    DiscoverInputSchemaResult& WithRawInputRecords(RawInputRecordsT&& value) { SetRawInputRecords(std::forward<RawInputRecordsT>(value)); return *this;}
    template<typename RawInputRecordsT = Aws::String>
    DiscoverInputSchemaResult& AddRawInputRecords(RawInputRecordsT&& value) { m_rawInputRecordsHasBeenSet = true; m_rawInputRecords.emplace_back(std::forward<RawInputRecordsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DiscoverInputSchemaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SourceSchema m_inputSchema;
    bool m_inputSchemaHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_parsedInputRecords;
    bool m_parsedInputRecordsHasBeenSet = false;

    Aws::Vector<Aws::String> m_processedInputRecords;
    bool m_processedInputRecordsHasBeenSet = false;

    Aws::Vector<Aws::String> m_rawInputRecords;
    bool m_rawInputRecordsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
