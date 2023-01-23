/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
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
namespace LookoutMetrics
{
namespace Model
{
  class GetSampleDataResult
  {
  public:
    AWS_LOOKOUTMETRICS_API GetSampleDataResult();
    AWS_LOOKOUTMETRICS_API GetSampleDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API GetSampleDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of header labels for the records.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHeaderValues() const{ return m_headerValues; }

    /**
     * <p>A list of header labels for the records.</p>
     */
    inline void SetHeaderValues(const Aws::Vector<Aws::String>& value) { m_headerValues = value; }

    /**
     * <p>A list of header labels for the records.</p>
     */
    inline void SetHeaderValues(Aws::Vector<Aws::String>&& value) { m_headerValues = std::move(value); }

    /**
     * <p>A list of header labels for the records.</p>
     */
    inline GetSampleDataResult& WithHeaderValues(const Aws::Vector<Aws::String>& value) { SetHeaderValues(value); return *this;}

    /**
     * <p>A list of header labels for the records.</p>
     */
    inline GetSampleDataResult& WithHeaderValues(Aws::Vector<Aws::String>&& value) { SetHeaderValues(std::move(value)); return *this;}

    /**
     * <p>A list of header labels for the records.</p>
     */
    inline GetSampleDataResult& AddHeaderValues(const Aws::String& value) { m_headerValues.push_back(value); return *this; }

    /**
     * <p>A list of header labels for the records.</p>
     */
    inline GetSampleDataResult& AddHeaderValues(Aws::String&& value) { m_headerValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of header labels for the records.</p>
     */
    inline GetSampleDataResult& AddHeaderValues(const char* value) { m_headerValues.push_back(value); return *this; }


    /**
     * <p>A list of records.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetSampleRows() const{ return m_sampleRows; }

    /**
     * <p>A list of records.</p>
     */
    inline void SetSampleRows(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_sampleRows = value; }

    /**
     * <p>A list of records.</p>
     */
    inline void SetSampleRows(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_sampleRows = std::move(value); }

    /**
     * <p>A list of records.</p>
     */
    inline GetSampleDataResult& WithSampleRows(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetSampleRows(value); return *this;}

    /**
     * <p>A list of records.</p>
     */
    inline GetSampleDataResult& WithSampleRows(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetSampleRows(std::move(value)); return *this;}

    /**
     * <p>A list of records.</p>
     */
    inline GetSampleDataResult& AddSampleRows(const Aws::Vector<Aws::String>& value) { m_sampleRows.push_back(value); return *this; }

    /**
     * <p>A list of records.</p>
     */
    inline GetSampleDataResult& AddSampleRows(Aws::Vector<Aws::String>&& value) { m_sampleRows.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_headerValues;

    Aws::Vector<Aws::Vector<Aws::String>> m_sampleRows;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
