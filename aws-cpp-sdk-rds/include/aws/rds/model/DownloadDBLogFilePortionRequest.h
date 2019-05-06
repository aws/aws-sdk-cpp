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
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DownloadDBLogFilePortionMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DownloadDBLogFilePortionRequest : public RDSRequest
  {
  public:
    DownloadDBLogFilePortionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DownloadDBLogFilePortion"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The customer-assigned name of the DB instance that contains the log files you
     * want to list.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of
     * an existing DBInstance.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The customer-assigned name of the DB instance that contains the log files you
     * want to list.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of
     * an existing DBInstance.</p> </li> </ul>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The customer-assigned name of the DB instance that contains the log files you
     * want to list.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of
     * an existing DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The customer-assigned name of the DB instance that contains the log files you
     * want to list.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of
     * an existing DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The customer-assigned name of the DB instance that contains the log files you
     * want to list.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of
     * an existing DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The customer-assigned name of the DB instance that contains the log files you
     * want to list.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of
     * an existing DBInstance.</p> </li> </ul>
     */
    inline DownloadDBLogFilePortionRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The customer-assigned name of the DB instance that contains the log files you
     * want to list.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of
     * an existing DBInstance.</p> </li> </ul>
     */
    inline DownloadDBLogFilePortionRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The customer-assigned name of the DB instance that contains the log files you
     * want to list.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of
     * an existing DBInstance.</p> </li> </ul>
     */
    inline DownloadDBLogFilePortionRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The name of the log file to be downloaded.</p>
     */
    inline const Aws::String& GetLogFileName() const{ return m_logFileName; }

    /**
     * <p>The name of the log file to be downloaded.</p>
     */
    inline bool LogFileNameHasBeenSet() const { return m_logFileNameHasBeenSet; }

    /**
     * <p>The name of the log file to be downloaded.</p>
     */
    inline void SetLogFileName(const Aws::String& value) { m_logFileNameHasBeenSet = true; m_logFileName = value; }

    /**
     * <p>The name of the log file to be downloaded.</p>
     */
    inline void SetLogFileName(Aws::String&& value) { m_logFileNameHasBeenSet = true; m_logFileName = std::move(value); }

    /**
     * <p>The name of the log file to be downloaded.</p>
     */
    inline void SetLogFileName(const char* value) { m_logFileNameHasBeenSet = true; m_logFileName.assign(value); }

    /**
     * <p>The name of the log file to be downloaded.</p>
     */
    inline DownloadDBLogFilePortionRequest& WithLogFileName(const Aws::String& value) { SetLogFileName(value); return *this;}

    /**
     * <p>The name of the log file to be downloaded.</p>
     */
    inline DownloadDBLogFilePortionRequest& WithLogFileName(Aws::String&& value) { SetLogFileName(std::move(value)); return *this;}

    /**
     * <p>The name of the log file to be downloaded.</p>
     */
    inline DownloadDBLogFilePortionRequest& WithLogFileName(const char* value) { SetLogFileName(value); return *this;}


    /**
     * <p>The pagination token provided in the previous request or "0". If the Marker
     * parameter is specified the response includes only records beyond the marker
     * until the end of the file or up to NumberOfLines.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The pagination token provided in the previous request or "0". If the Marker
     * parameter is specified the response includes only records beyond the marker
     * until the end of the file or up to NumberOfLines.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The pagination token provided in the previous request or "0". If the Marker
     * parameter is specified the response includes only records beyond the marker
     * until the end of the file or up to NumberOfLines.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The pagination token provided in the previous request or "0". If the Marker
     * parameter is specified the response includes only records beyond the marker
     * until the end of the file or up to NumberOfLines.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The pagination token provided in the previous request or "0". If the Marker
     * parameter is specified the response includes only records beyond the marker
     * until the end of the file or up to NumberOfLines.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The pagination token provided in the previous request or "0". If the Marker
     * parameter is specified the response includes only records beyond the marker
     * until the end of the file or up to NumberOfLines.</p>
     */
    inline DownloadDBLogFilePortionRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The pagination token provided in the previous request or "0". If the Marker
     * parameter is specified the response includes only records beyond the marker
     * until the end of the file or up to NumberOfLines.</p>
     */
    inline DownloadDBLogFilePortionRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The pagination token provided in the previous request or "0". If the Marker
     * parameter is specified the response includes only records beyond the marker
     * until the end of the file or up to NumberOfLines.</p>
     */
    inline DownloadDBLogFilePortionRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The number of lines to download. If the number of lines specified results in
     * a file over 1 MB in size, the file is truncated at 1 MB in size.</p> <p>If the
     * NumberOfLines parameter is specified, then the block of lines returned can be
     * from the beginning or the end of the log file, depending on the value of the
     * Marker parameter.</p> <ul> <li> <p>If neither Marker or NumberOfLines are
     * specified, the entire log file is returned up to a maximum of 10000 lines,
     * starting with the most recent log entries first.</p> </li> <li> <p>If
     * NumberOfLines is specified and Marker is not specified, then the most recent
     * lines from the end of the log file are returned.</p> </li> <li> <p>If Marker is
     * specified as "0", then the specified number of lines from the beginning of the
     * log file are returned.</p> </li> <li> <p>You can download the log file in blocks
     * of lines by specifying the size of the block using the NumberOfLines parameter,
     * and by specifying a value of "0" for the Marker parameter in your first request.
     * Include the Marker value returned in the response as the Marker value for the
     * next request, continuing until the AdditionalDataPending response element
     * returns false.</p> </li> </ul>
     */
    inline int GetNumberOfLines() const{ return m_numberOfLines; }

    /**
     * <p>The number of lines to download. If the number of lines specified results in
     * a file over 1 MB in size, the file is truncated at 1 MB in size.</p> <p>If the
     * NumberOfLines parameter is specified, then the block of lines returned can be
     * from the beginning or the end of the log file, depending on the value of the
     * Marker parameter.</p> <ul> <li> <p>If neither Marker or NumberOfLines are
     * specified, the entire log file is returned up to a maximum of 10000 lines,
     * starting with the most recent log entries first.</p> </li> <li> <p>If
     * NumberOfLines is specified and Marker is not specified, then the most recent
     * lines from the end of the log file are returned.</p> </li> <li> <p>If Marker is
     * specified as "0", then the specified number of lines from the beginning of the
     * log file are returned.</p> </li> <li> <p>You can download the log file in blocks
     * of lines by specifying the size of the block using the NumberOfLines parameter,
     * and by specifying a value of "0" for the Marker parameter in your first request.
     * Include the Marker value returned in the response as the Marker value for the
     * next request, continuing until the AdditionalDataPending response element
     * returns false.</p> </li> </ul>
     */
    inline bool NumberOfLinesHasBeenSet() const { return m_numberOfLinesHasBeenSet; }

    /**
     * <p>The number of lines to download. If the number of lines specified results in
     * a file over 1 MB in size, the file is truncated at 1 MB in size.</p> <p>If the
     * NumberOfLines parameter is specified, then the block of lines returned can be
     * from the beginning or the end of the log file, depending on the value of the
     * Marker parameter.</p> <ul> <li> <p>If neither Marker or NumberOfLines are
     * specified, the entire log file is returned up to a maximum of 10000 lines,
     * starting with the most recent log entries first.</p> </li> <li> <p>If
     * NumberOfLines is specified and Marker is not specified, then the most recent
     * lines from the end of the log file are returned.</p> </li> <li> <p>If Marker is
     * specified as "0", then the specified number of lines from the beginning of the
     * log file are returned.</p> </li> <li> <p>You can download the log file in blocks
     * of lines by specifying the size of the block using the NumberOfLines parameter,
     * and by specifying a value of "0" for the Marker parameter in your first request.
     * Include the Marker value returned in the response as the Marker value for the
     * next request, continuing until the AdditionalDataPending response element
     * returns false.</p> </li> </ul>
     */
    inline void SetNumberOfLines(int value) { m_numberOfLinesHasBeenSet = true; m_numberOfLines = value; }

    /**
     * <p>The number of lines to download. If the number of lines specified results in
     * a file over 1 MB in size, the file is truncated at 1 MB in size.</p> <p>If the
     * NumberOfLines parameter is specified, then the block of lines returned can be
     * from the beginning or the end of the log file, depending on the value of the
     * Marker parameter.</p> <ul> <li> <p>If neither Marker or NumberOfLines are
     * specified, the entire log file is returned up to a maximum of 10000 lines,
     * starting with the most recent log entries first.</p> </li> <li> <p>If
     * NumberOfLines is specified and Marker is not specified, then the most recent
     * lines from the end of the log file are returned.</p> </li> <li> <p>If Marker is
     * specified as "0", then the specified number of lines from the beginning of the
     * log file are returned.</p> </li> <li> <p>You can download the log file in blocks
     * of lines by specifying the size of the block using the NumberOfLines parameter,
     * and by specifying a value of "0" for the Marker parameter in your first request.
     * Include the Marker value returned in the response as the Marker value for the
     * next request, continuing until the AdditionalDataPending response element
     * returns false.</p> </li> </ul>
     */
    inline DownloadDBLogFilePortionRequest& WithNumberOfLines(int value) { SetNumberOfLines(value); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;

    Aws::String m_logFileName;
    bool m_logFileNameHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    int m_numberOfLines;
    bool m_numberOfLinesHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
