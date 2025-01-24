/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains Amazon S3 locations for storing specific types of AS2 message
   * files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/CustomDirectoriesType">AWS
   * API Reference</a></p>
   */
  class CustomDirectoriesType
  {
  public:
    AWS_TRANSFER_API CustomDirectoriesType();
    AWS_TRANSFER_API CustomDirectoriesType(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API CustomDirectoriesType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies a location to store failed AS2 message files.</p>
     */
    inline const Aws::String& GetFailedFilesDirectory() const{ return m_failedFilesDirectory; }
    inline bool FailedFilesDirectoryHasBeenSet() const { return m_failedFilesDirectoryHasBeenSet; }
    inline void SetFailedFilesDirectory(const Aws::String& value) { m_failedFilesDirectoryHasBeenSet = true; m_failedFilesDirectory = value; }
    inline void SetFailedFilesDirectory(Aws::String&& value) { m_failedFilesDirectoryHasBeenSet = true; m_failedFilesDirectory = std::move(value); }
    inline void SetFailedFilesDirectory(const char* value) { m_failedFilesDirectoryHasBeenSet = true; m_failedFilesDirectory.assign(value); }
    inline CustomDirectoriesType& WithFailedFilesDirectory(const Aws::String& value) { SetFailedFilesDirectory(value); return *this;}
    inline CustomDirectoriesType& WithFailedFilesDirectory(Aws::String&& value) { SetFailedFilesDirectory(std::move(value)); return *this;}
    inline CustomDirectoriesType& WithFailedFilesDirectory(const char* value) { SetFailedFilesDirectory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a location to store MDN files.</p>
     */
    inline const Aws::String& GetMdnFilesDirectory() const{ return m_mdnFilesDirectory; }
    inline bool MdnFilesDirectoryHasBeenSet() const { return m_mdnFilesDirectoryHasBeenSet; }
    inline void SetMdnFilesDirectory(const Aws::String& value) { m_mdnFilesDirectoryHasBeenSet = true; m_mdnFilesDirectory = value; }
    inline void SetMdnFilesDirectory(Aws::String&& value) { m_mdnFilesDirectoryHasBeenSet = true; m_mdnFilesDirectory = std::move(value); }
    inline void SetMdnFilesDirectory(const char* value) { m_mdnFilesDirectoryHasBeenSet = true; m_mdnFilesDirectory.assign(value); }
    inline CustomDirectoriesType& WithMdnFilesDirectory(const Aws::String& value) { SetMdnFilesDirectory(value); return *this;}
    inline CustomDirectoriesType& WithMdnFilesDirectory(Aws::String&& value) { SetMdnFilesDirectory(std::move(value)); return *this;}
    inline CustomDirectoriesType& WithMdnFilesDirectory(const char* value) { SetMdnFilesDirectory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a location to store the payload for AS2 message files.</p>
     */
    inline const Aws::String& GetPayloadFilesDirectory() const{ return m_payloadFilesDirectory; }
    inline bool PayloadFilesDirectoryHasBeenSet() const { return m_payloadFilesDirectoryHasBeenSet; }
    inline void SetPayloadFilesDirectory(const Aws::String& value) { m_payloadFilesDirectoryHasBeenSet = true; m_payloadFilesDirectory = value; }
    inline void SetPayloadFilesDirectory(Aws::String&& value) { m_payloadFilesDirectoryHasBeenSet = true; m_payloadFilesDirectory = std::move(value); }
    inline void SetPayloadFilesDirectory(const char* value) { m_payloadFilesDirectoryHasBeenSet = true; m_payloadFilesDirectory.assign(value); }
    inline CustomDirectoriesType& WithPayloadFilesDirectory(const Aws::String& value) { SetPayloadFilesDirectory(value); return *this;}
    inline CustomDirectoriesType& WithPayloadFilesDirectory(Aws::String&& value) { SetPayloadFilesDirectory(std::move(value)); return *this;}
    inline CustomDirectoriesType& WithPayloadFilesDirectory(const char* value) { SetPayloadFilesDirectory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a location to store AS2 status messages.</p>
     */
    inline const Aws::String& GetStatusFilesDirectory() const{ return m_statusFilesDirectory; }
    inline bool StatusFilesDirectoryHasBeenSet() const { return m_statusFilesDirectoryHasBeenSet; }
    inline void SetStatusFilesDirectory(const Aws::String& value) { m_statusFilesDirectoryHasBeenSet = true; m_statusFilesDirectory = value; }
    inline void SetStatusFilesDirectory(Aws::String&& value) { m_statusFilesDirectoryHasBeenSet = true; m_statusFilesDirectory = std::move(value); }
    inline void SetStatusFilesDirectory(const char* value) { m_statusFilesDirectoryHasBeenSet = true; m_statusFilesDirectory.assign(value); }
    inline CustomDirectoriesType& WithStatusFilesDirectory(const Aws::String& value) { SetStatusFilesDirectory(value); return *this;}
    inline CustomDirectoriesType& WithStatusFilesDirectory(Aws::String&& value) { SetStatusFilesDirectory(std::move(value)); return *this;}
    inline CustomDirectoriesType& WithStatusFilesDirectory(const char* value) { SetStatusFilesDirectory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a location to store temporary AS2 message files.</p>
     */
    inline const Aws::String& GetTemporaryFilesDirectory() const{ return m_temporaryFilesDirectory; }
    inline bool TemporaryFilesDirectoryHasBeenSet() const { return m_temporaryFilesDirectoryHasBeenSet; }
    inline void SetTemporaryFilesDirectory(const Aws::String& value) { m_temporaryFilesDirectoryHasBeenSet = true; m_temporaryFilesDirectory = value; }
    inline void SetTemporaryFilesDirectory(Aws::String&& value) { m_temporaryFilesDirectoryHasBeenSet = true; m_temporaryFilesDirectory = std::move(value); }
    inline void SetTemporaryFilesDirectory(const char* value) { m_temporaryFilesDirectoryHasBeenSet = true; m_temporaryFilesDirectory.assign(value); }
    inline CustomDirectoriesType& WithTemporaryFilesDirectory(const Aws::String& value) { SetTemporaryFilesDirectory(value); return *this;}
    inline CustomDirectoriesType& WithTemporaryFilesDirectory(Aws::String&& value) { SetTemporaryFilesDirectory(std::move(value)); return *this;}
    inline CustomDirectoriesType& WithTemporaryFilesDirectory(const char* value) { SetTemporaryFilesDirectory(value); return *this;}
    ///@}
  private:

    Aws::String m_failedFilesDirectory;
    bool m_failedFilesDirectoryHasBeenSet = false;

    Aws::String m_mdnFilesDirectory;
    bool m_mdnFilesDirectoryHasBeenSet = false;

    Aws::String m_payloadFilesDirectory;
    bool m_payloadFilesDirectoryHasBeenSet = false;

    Aws::String m_statusFilesDirectory;
    bool m_statusFilesDirectoryHasBeenSet = false;

    Aws::String m_temporaryFilesDirectory;
    bool m_temporaryFilesDirectoryHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
