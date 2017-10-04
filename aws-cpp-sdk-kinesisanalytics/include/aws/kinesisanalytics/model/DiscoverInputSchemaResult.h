/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_KINESISANALYTICS_API DiscoverInputSchemaResult
  {
  public:
    DiscoverInputSchemaResult();
    DiscoverInputSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DiscoverInputSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Schema inferred from the streaming source. It identifies the format of the
     * data in the streaming source and how each data element maps to corresponding
     * columns in the in-application stream that you can create.</p>
     */
    inline const SourceSchema& GetInputSchema() const{ return m_inputSchema; }

    /**
     * <p>Schema inferred from the streaming source. It identifies the format of the
     * data in the streaming source and how each data element maps to corresponding
     * columns in the in-application stream that you can create.</p>
     */
    inline void SetInputSchema(const SourceSchema& value) { m_inputSchema = value; }

    /**
     * <p>Schema inferred from the streaming source. It identifies the format of the
     * data in the streaming source and how each data element maps to corresponding
     * columns in the in-application stream that you can create.</p>
     */
    inline void SetInputSchema(SourceSchema&& value) { m_inputSchema = std::move(value); }

    /**
     * <p>Schema inferred from the streaming source. It identifies the format of the
     * data in the streaming source and how each data element maps to corresponding
     * columns in the in-application stream that you can create.</p>
     */
    inline DiscoverInputSchemaResult& WithInputSchema(const SourceSchema& value) { SetInputSchema(value); return *this;}

    /**
     * <p>Schema inferred from the streaming source. It identifies the format of the
     * data in the streaming source and how each data element maps to corresponding
     * columns in the in-application stream that you can create.</p>
     */
    inline DiscoverInputSchemaResult& WithInputSchema(SourceSchema&& value) { SetInputSchema(std::move(value)); return *this;}


    /**
     * <p>An array of elements, where each element corresponds to a row in a stream
     * record (a stream record can have more than one row).</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetParsedInputRecords() const{ return m_parsedInputRecords; }

    /**
     * <p>An array of elements, where each element corresponds to a row in a stream
     * record (a stream record can have more than one row).</p>
     */
    inline void SetParsedInputRecords(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_parsedInputRecords = value; }

    /**
     * <p>An array of elements, where each element corresponds to a row in a stream
     * record (a stream record can have more than one row).</p>
     */
    inline void SetParsedInputRecords(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_parsedInputRecords = std::move(value); }

    /**
     * <p>An array of elements, where each element corresponds to a row in a stream
     * record (a stream record can have more than one row).</p>
     */
    inline DiscoverInputSchemaResult& WithParsedInputRecords(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetParsedInputRecords(value); return *this;}

    /**
     * <p>An array of elements, where each element corresponds to a row in a stream
     * record (a stream record can have more than one row).</p>
     */
    inline DiscoverInputSchemaResult& WithParsedInputRecords(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetParsedInputRecords(std::move(value)); return *this;}

    /**
     * <p>An array of elements, where each element corresponds to a row in a stream
     * record (a stream record can have more than one row).</p>
     */
    inline DiscoverInputSchemaResult& AddParsedInputRecords(const Aws::Vector<Aws::String>& value) { m_parsedInputRecords.push_back(value); return *this; }

    /**
     * <p>An array of elements, where each element corresponds to a row in a stream
     * record (a stream record can have more than one row).</p>
     */
    inline DiscoverInputSchemaResult& AddParsedInputRecords(Aws::Vector<Aws::String>&& value) { m_parsedInputRecords.push_back(std::move(value)); return *this; }


    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProcessedInputRecords() const{ return m_processedInputRecords; }

    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter.</p>
     */
    inline void SetProcessedInputRecords(const Aws::Vector<Aws::String>& value) { m_processedInputRecords = value; }

    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter.</p>
     */
    inline void SetProcessedInputRecords(Aws::Vector<Aws::String>&& value) { m_processedInputRecords = std::move(value); }

    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter.</p>
     */
    inline DiscoverInputSchemaResult& WithProcessedInputRecords(const Aws::Vector<Aws::String>& value) { SetProcessedInputRecords(value); return *this;}

    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter.</p>
     */
    inline DiscoverInputSchemaResult& WithProcessedInputRecords(Aws::Vector<Aws::String>&& value) { SetProcessedInputRecords(std::move(value)); return *this;}

    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter.</p>
     */
    inline DiscoverInputSchemaResult& AddProcessedInputRecords(const Aws::String& value) { m_processedInputRecords.push_back(value); return *this; }

    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter.</p>
     */
    inline DiscoverInputSchemaResult& AddProcessedInputRecords(Aws::String&& value) { m_processedInputRecords.push_back(std::move(value)); return *this; }

    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter.</p>
     */
    inline DiscoverInputSchemaResult& AddProcessedInputRecords(const char* value) { m_processedInputRecords.push_back(value); return *this; }


    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRawInputRecords() const{ return m_rawInputRecords; }

    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
    inline void SetRawInputRecords(const Aws::Vector<Aws::String>& value) { m_rawInputRecords = value; }

    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
    inline void SetRawInputRecords(Aws::Vector<Aws::String>&& value) { m_rawInputRecords = std::move(value); }

    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
    inline DiscoverInputSchemaResult& WithRawInputRecords(const Aws::Vector<Aws::String>& value) { SetRawInputRecords(value); return *this;}

    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
    inline DiscoverInputSchemaResult& WithRawInputRecords(Aws::Vector<Aws::String>&& value) { SetRawInputRecords(std::move(value)); return *this;}

    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
    inline DiscoverInputSchemaResult& AddRawInputRecords(const Aws::String& value) { m_rawInputRecords.push_back(value); return *this; }

    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
    inline DiscoverInputSchemaResult& AddRawInputRecords(Aws::String&& value) { m_rawInputRecords.push_back(std::move(value)); return *this; }

    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
    inline DiscoverInputSchemaResult& AddRawInputRecords(const char* value) { m_rawInputRecords.push_back(value); return *this; }

  private:

    SourceSchema m_inputSchema;

    Aws::Vector<Aws::Vector<Aws::String>> m_parsedInputRecords;

    Aws::Vector<Aws::String> m_processedInputRecords;

    Aws::Vector<Aws::String> m_rawInputRecords;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
