/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/TransferTableStatus.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>A structure that contains the details for files transferred using an SFTP
   * connector, during a single transfer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ConnectorFileTransferResult">AWS
   * API Reference</a></p>
   */
  class ConnectorFileTransferResult
  {
  public:
    AWS_TRANSFER_API ConnectorFileTransferResult();
    AWS_TRANSFER_API ConnectorFileTransferResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ConnectorFileTransferResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filename and path to where the file was sent to or retrieved from.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }
    inline ConnectorFileTransferResult& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}
    inline ConnectorFileTransferResult& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}
    inline ConnectorFileTransferResult& WithFilePath(const char* value) { SetFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status for the transfer.</p>
     */
    inline const TransferTableStatus& GetStatusCode() const{ return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(const TransferTableStatus& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline void SetStatusCode(TransferTableStatus&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }
    inline ConnectorFileTransferResult& WithStatusCode(const TransferTableStatus& value) { SetStatusCode(value); return *this;}
    inline ConnectorFileTransferResult& WithStatusCode(TransferTableStatus&& value) { SetStatusCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For transfers that fail, this parameter contains a code indicating the
     * reason. For example, <code>RETRIEVE_FILE_NOT_FOUND</code> </p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(const Aws::String& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline void SetFailureCode(Aws::String&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }
    inline void SetFailureCode(const char* value) { m_failureCodeHasBeenSet = true; m_failureCode.assign(value); }
    inline ConnectorFileTransferResult& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}
    inline ConnectorFileTransferResult& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}
    inline ConnectorFileTransferResult& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For transfers that fail, this parameter describes the reason for the
     * failure.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }
    inline ConnectorFileTransferResult& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline ConnectorFileTransferResult& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline ConnectorFileTransferResult& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    TransferTableStatus m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
