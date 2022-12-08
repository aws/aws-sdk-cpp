/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
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
namespace BackupStorage
{
namespace Model
{

  /**
   * Non-retryable exception. Attempted to create already existing object or chunk.
   * This message contains a checksum of already presented data.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/DataAlreadyExistsException">AWS
   * API Reference</a></p>
   */
  class DataAlreadyExistsException
  {
  public:
    AWS_BACKUPSTORAGE_API DataAlreadyExistsException();
    AWS_BACKUPSTORAGE_API DataAlreadyExistsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSTORAGE_API DataAlreadyExistsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSTORAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline DataAlreadyExistsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline DataAlreadyExistsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline DataAlreadyExistsException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * Data checksum used
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * Data checksum used
     */
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }

    /**
     * Data checksum used
     */
    inline void SetChecksum(const Aws::String& value) { m_checksumHasBeenSet = true; m_checksum = value; }

    /**
     * Data checksum used
     */
    inline void SetChecksum(Aws::String&& value) { m_checksumHasBeenSet = true; m_checksum = std::move(value); }

    /**
     * Data checksum used
     */
    inline void SetChecksum(const char* value) { m_checksumHasBeenSet = true; m_checksum.assign(value); }

    /**
     * Data checksum used
     */
    inline DataAlreadyExistsException& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * Data checksum used
     */
    inline DataAlreadyExistsException& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * Data checksum used
     */
    inline DataAlreadyExistsException& WithChecksum(const char* value) { SetChecksum(value); return *this;}


    /**
     * Checksum algorithm used
     */
    inline const Aws::String& GetChecksumAlgorithm() const{ return m_checksumAlgorithm; }

    /**
     * Checksum algorithm used
     */
    inline bool ChecksumAlgorithmHasBeenSet() const { return m_checksumAlgorithmHasBeenSet; }

    /**
     * Checksum algorithm used
     */
    inline void SetChecksumAlgorithm(const Aws::String& value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = value; }

    /**
     * Checksum algorithm used
     */
    inline void SetChecksumAlgorithm(Aws::String&& value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = std::move(value); }

    /**
     * Checksum algorithm used
     */
    inline void SetChecksumAlgorithm(const char* value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm.assign(value); }

    /**
     * Checksum algorithm used
     */
    inline DataAlreadyExistsException& WithChecksumAlgorithm(const Aws::String& value) { SetChecksumAlgorithm(value); return *this;}

    /**
     * Checksum algorithm used
     */
    inline DataAlreadyExistsException& WithChecksumAlgorithm(Aws::String&& value) { SetChecksumAlgorithm(std::move(value)); return *this;}

    /**
     * Checksum algorithm used
     */
    inline DataAlreadyExistsException& WithChecksumAlgorithm(const char* value) { SetChecksumAlgorithm(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    Aws::String m_checksumAlgorithm;
    bool m_checksumAlgorithmHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
