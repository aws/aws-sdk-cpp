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
    AWS_KINESISANALYTICS_API DiscoverInputSchemaResult();
    AWS_KINESISANALYTICS_API DiscoverInputSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICS_API DiscoverInputSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Schema inferred from the streaming source. It identifies the format of the
     * data in the streaming source and how each data element maps to corresponding
     * columns in the in-application stream that you can create.</p>
     */
    inline const SourceSchema& GetInputSchema() const{ return m_inputSchema; }
    inline void SetInputSchema(const SourceSchema& value) { m_inputSchema = value; }
    inline void SetInputSchema(SourceSchema&& value) { m_inputSchema = std::move(value); }
    inline DiscoverInputSchemaResult& WithInputSchema(const SourceSchema& value) { SetInputSchema(value); return *this;}
    inline DiscoverInputSchemaResult& WithInputSchema(SourceSchema&& value) { SetInputSchema(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of elements, where each element corresponds to a row in a stream
     * record (a stream record can have more than one row).</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetParsedInputRecords() const{ return m_parsedInputRecords; }
    inline void SetParsedInputRecords(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_parsedInputRecords = value; }
    inline void SetParsedInputRecords(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_parsedInputRecords = std::move(value); }
    inline DiscoverInputSchemaResult& WithParsedInputRecords(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetParsedInputRecords(value); return *this;}
    inline DiscoverInputSchemaResult& WithParsedInputRecords(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetParsedInputRecords(std::move(value)); return *this;}
    inline DiscoverInputSchemaResult& AddParsedInputRecords(const Aws::Vector<Aws::String>& value) { m_parsedInputRecords.push_back(value); return *this; }
    inline DiscoverInputSchemaResult& AddParsedInputRecords(Aws::Vector<Aws::String>&& value) { m_parsedInputRecords.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProcessedInputRecords() const{ return m_processedInputRecords; }
    inline void SetProcessedInputRecords(const Aws::Vector<Aws::String>& value) { m_processedInputRecords = value; }
    inline void SetProcessedInputRecords(Aws::Vector<Aws::String>&& value) { m_processedInputRecords = std::move(value); }
    inline DiscoverInputSchemaResult& WithProcessedInputRecords(const Aws::Vector<Aws::String>& value) { SetProcessedInputRecords(value); return *this;}
    inline DiscoverInputSchemaResult& WithProcessedInputRecords(Aws::Vector<Aws::String>&& value) { SetProcessedInputRecords(std::move(value)); return *this;}
    inline DiscoverInputSchemaResult& AddProcessedInputRecords(const Aws::String& value) { m_processedInputRecords.push_back(value); return *this; }
    inline DiscoverInputSchemaResult& AddProcessedInputRecords(Aws::String&& value) { m_processedInputRecords.push_back(std::move(value)); return *this; }
    inline DiscoverInputSchemaResult& AddProcessedInputRecords(const char* value) { m_processedInputRecords.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRawInputRecords() const{ return m_rawInputRecords; }
    inline void SetRawInputRecords(const Aws::Vector<Aws::String>& value) { m_rawInputRecords = value; }
    inline void SetRawInputRecords(Aws::Vector<Aws::String>&& value) { m_rawInputRecords = std::move(value); }
    inline DiscoverInputSchemaResult& WithRawInputRecords(const Aws::Vector<Aws::String>& value) { SetRawInputRecords(value); return *this;}
    inline DiscoverInputSchemaResult& WithRawInputRecords(Aws::Vector<Aws::String>&& value) { SetRawInputRecords(std::move(value)); return *this;}
    inline DiscoverInputSchemaResult& AddRawInputRecords(const Aws::String& value) { m_rawInputRecords.push_back(value); return *this; }
    inline DiscoverInputSchemaResult& AddRawInputRecords(Aws::String&& value) { m_rawInputRecords.push_back(std::move(value)); return *this; }
    inline DiscoverInputSchemaResult& AddRawInputRecords(const char* value) { m_rawInputRecords.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DiscoverInputSchemaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DiscoverInputSchemaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DiscoverInputSchemaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SourceSchema m_inputSchema;

    Aws::Vector<Aws::Vector<Aws::String>> m_parsedInputRecords;

    Aws::Vector<Aws::String> m_processedInputRecords;

    Aws::Vector<Aws::String> m_rawInputRecords;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
