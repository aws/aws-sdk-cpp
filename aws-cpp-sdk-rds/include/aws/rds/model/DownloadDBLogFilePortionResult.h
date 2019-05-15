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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  /**
   * <p>This data type is used as a response element to
   * <code>DownloadDBLogFilePortion</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DownloadDBLogFilePortionDetails">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DownloadDBLogFilePortionResult
  {
  public:
    DownloadDBLogFilePortionResult();
    DownloadDBLogFilePortionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DownloadDBLogFilePortionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Entries from the specified log file.</p>
     */
    inline const Aws::String& GetLogFileData() const{ return m_logFileData; }

    /**
     * <p>Entries from the specified log file.</p>
     */
    inline void SetLogFileData(const Aws::String& value) { m_logFileData = value; }

    /**
     * <p>Entries from the specified log file.</p>
     */
    inline void SetLogFileData(Aws::String&& value) { m_logFileData = std::move(value); }

    /**
     * <p>Entries from the specified log file.</p>
     */
    inline void SetLogFileData(const char* value) { m_logFileData.assign(value); }

    /**
     * <p>Entries from the specified log file.</p>
     */
    inline DownloadDBLogFilePortionResult& WithLogFileData(const Aws::String& value) { SetLogFileData(value); return *this;}

    /**
     * <p>Entries from the specified log file.</p>
     */
    inline DownloadDBLogFilePortionResult& WithLogFileData(Aws::String&& value) { SetLogFileData(std::move(value)); return *this;}

    /**
     * <p>Entries from the specified log file.</p>
     */
    inline DownloadDBLogFilePortionResult& WithLogFileData(const char* value) { SetLogFileData(value); return *this;}


    /**
     * <p>A pagination token that can be used in a subsequent DownloadDBLogFilePortion
     * request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A pagination token that can be used in a subsequent DownloadDBLogFilePortion
     * request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A pagination token that can be used in a subsequent DownloadDBLogFilePortion
     * request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A pagination token that can be used in a subsequent DownloadDBLogFilePortion
     * request.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A pagination token that can be used in a subsequent DownloadDBLogFilePortion
     * request.</p>
     */
    inline DownloadDBLogFilePortionResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent DownloadDBLogFilePortion
     * request.</p>
     */
    inline DownloadDBLogFilePortionResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent DownloadDBLogFilePortion
     * request.</p>
     */
    inline DownloadDBLogFilePortionResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Boolean value that if true, indicates there is more data to be
     * downloaded.</p>
     */
    inline bool GetAdditionalDataPending() const{ return m_additionalDataPending; }

    /**
     * <p>Boolean value that if true, indicates there is more data to be
     * downloaded.</p>
     */
    inline void SetAdditionalDataPending(bool value) { m_additionalDataPending = value; }

    /**
     * <p>Boolean value that if true, indicates there is more data to be
     * downloaded.</p>
     */
    inline DownloadDBLogFilePortionResult& WithAdditionalDataPending(bool value) { SetAdditionalDataPending(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DownloadDBLogFilePortionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DownloadDBLogFilePortionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_logFileData;

    Aws::String m_marker;

    bool m_additionalDataPending;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
