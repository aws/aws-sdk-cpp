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
    AWS_TRANSFER_API CustomDirectoriesType() = default;
    AWS_TRANSFER_API CustomDirectoriesType(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API CustomDirectoriesType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies a location to store failed AS2 message files.</p>
     */
    inline const Aws::String& GetFailedFilesDirectory() const { return m_failedFilesDirectory; }
    inline bool FailedFilesDirectoryHasBeenSet() const { return m_failedFilesDirectoryHasBeenSet; }
    template<typename FailedFilesDirectoryT = Aws::String>
    void SetFailedFilesDirectory(FailedFilesDirectoryT&& value) { m_failedFilesDirectoryHasBeenSet = true; m_failedFilesDirectory = std::forward<FailedFilesDirectoryT>(value); }
    template<typename FailedFilesDirectoryT = Aws::String>
    CustomDirectoriesType& WithFailedFilesDirectory(FailedFilesDirectoryT&& value) { SetFailedFilesDirectory(std::forward<FailedFilesDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a location to store MDN files.</p>
     */
    inline const Aws::String& GetMdnFilesDirectory() const { return m_mdnFilesDirectory; }
    inline bool MdnFilesDirectoryHasBeenSet() const { return m_mdnFilesDirectoryHasBeenSet; }
    template<typename MdnFilesDirectoryT = Aws::String>
    void SetMdnFilesDirectory(MdnFilesDirectoryT&& value) { m_mdnFilesDirectoryHasBeenSet = true; m_mdnFilesDirectory = std::forward<MdnFilesDirectoryT>(value); }
    template<typename MdnFilesDirectoryT = Aws::String>
    CustomDirectoriesType& WithMdnFilesDirectory(MdnFilesDirectoryT&& value) { SetMdnFilesDirectory(std::forward<MdnFilesDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a location to store the payload for AS2 message files.</p>
     */
    inline const Aws::String& GetPayloadFilesDirectory() const { return m_payloadFilesDirectory; }
    inline bool PayloadFilesDirectoryHasBeenSet() const { return m_payloadFilesDirectoryHasBeenSet; }
    template<typename PayloadFilesDirectoryT = Aws::String>
    void SetPayloadFilesDirectory(PayloadFilesDirectoryT&& value) { m_payloadFilesDirectoryHasBeenSet = true; m_payloadFilesDirectory = std::forward<PayloadFilesDirectoryT>(value); }
    template<typename PayloadFilesDirectoryT = Aws::String>
    CustomDirectoriesType& WithPayloadFilesDirectory(PayloadFilesDirectoryT&& value) { SetPayloadFilesDirectory(std::forward<PayloadFilesDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a location to store AS2 status messages.</p>
     */
    inline const Aws::String& GetStatusFilesDirectory() const { return m_statusFilesDirectory; }
    inline bool StatusFilesDirectoryHasBeenSet() const { return m_statusFilesDirectoryHasBeenSet; }
    template<typename StatusFilesDirectoryT = Aws::String>
    void SetStatusFilesDirectory(StatusFilesDirectoryT&& value) { m_statusFilesDirectoryHasBeenSet = true; m_statusFilesDirectory = std::forward<StatusFilesDirectoryT>(value); }
    template<typename StatusFilesDirectoryT = Aws::String>
    CustomDirectoriesType& WithStatusFilesDirectory(StatusFilesDirectoryT&& value) { SetStatusFilesDirectory(std::forward<StatusFilesDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a location to store temporary AS2 message files.</p>
     */
    inline const Aws::String& GetTemporaryFilesDirectory() const { return m_temporaryFilesDirectory; }
    inline bool TemporaryFilesDirectoryHasBeenSet() const { return m_temporaryFilesDirectoryHasBeenSet; }
    template<typename TemporaryFilesDirectoryT = Aws::String>
    void SetTemporaryFilesDirectory(TemporaryFilesDirectoryT&& value) { m_temporaryFilesDirectoryHasBeenSet = true; m_temporaryFilesDirectory = std::forward<TemporaryFilesDirectoryT>(value); }
    template<typename TemporaryFilesDirectoryT = Aws::String>
    CustomDirectoriesType& WithTemporaryFilesDirectory(TemporaryFilesDirectoryT&& value) { SetTemporaryFilesDirectory(std::forward<TemporaryFilesDirectoryT>(value)); return *this;}
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
