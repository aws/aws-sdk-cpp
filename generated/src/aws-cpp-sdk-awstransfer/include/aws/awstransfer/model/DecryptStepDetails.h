/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/EncryptionType.h>
#include <aws/awstransfer/model/OverwriteExisting.h>
#include <aws/awstransfer/model/InputFileLocation.h>
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
   * <p>Each step type has its own <code>StepDetails</code> structure.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DecryptStepDetails">AWS
   * API Reference</a></p>
   */
  class DecryptStepDetails
  {
  public:
    AWS_TRANSFER_API DecryptStepDetails() = default;
    AWS_TRANSFER_API DecryptStepDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DecryptStepDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DecryptStepDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of encryption used. Currently, this value must be
     * <code>PGP</code>.</p>
     */
    inline EncryptionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EncryptionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DecryptStepDetails& WithType(EncryptionType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>To use the previous file as the input, enter
     * <code>${previous.file}</code>. In this case, this workflow step uses the output
     * file from the previous workflow step as input. This is the default value.</p>
     * </li> <li> <p>To use the originally uploaded file location as input for this
     * step, enter <code>${original.file}</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceFileLocation() const { return m_sourceFileLocation; }
    inline bool SourceFileLocationHasBeenSet() const { return m_sourceFileLocationHasBeenSet; }
    template<typename SourceFileLocationT = Aws::String>
    void SetSourceFileLocation(SourceFileLocationT&& value) { m_sourceFileLocationHasBeenSet = true; m_sourceFileLocation = std::forward<SourceFileLocationT>(value); }
    template<typename SourceFileLocationT = Aws::String>
    DecryptStepDetails& WithSourceFileLocation(SourceFileLocationT&& value) { SetSourceFileLocation(std::forward<SourceFileLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether to overwrite an existing file of the same name.
     * The default is <code>FALSE</code>.</p> <p>If the workflow is processing a file
     * that has the same name as an existing file, the behavior is as follows:</p> <ul>
     * <li> <p>If <code>OverwriteExisting</code> is <code>TRUE</code>, the existing
     * file is replaced with the file being processed.</p> </li> <li> <p>If
     * <code>OverwriteExisting</code> is <code>FALSE</code>, nothing happens, and the
     * workflow processing stops.</p> </li> </ul>
     */
    inline OverwriteExisting GetOverwriteExisting() const { return m_overwriteExisting; }
    inline bool OverwriteExistingHasBeenSet() const { return m_overwriteExistingHasBeenSet; }
    inline void SetOverwriteExisting(OverwriteExisting value) { m_overwriteExistingHasBeenSet = true; m_overwriteExisting = value; }
    inline DecryptStepDetails& WithOverwriteExisting(OverwriteExisting value) { SetOverwriteExisting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the location for the file being decrypted. Use
     * <code>${Transfer:UserName}</code> or <code>${Transfer:UploadDate}</code> in this
     * field to parametrize the destination prefix by username or uploaded date.</p>
     * <ul> <li> <p>Set the value of <code>DestinationFileLocation</code> to
     * <code>${Transfer:UserName}</code> to decrypt uploaded files to an Amazon S3
     * bucket that is prefixed with the name of the Transfer Family user that uploaded
     * the file.</p> </li> <li> <p>Set the value of
     * <code>DestinationFileLocation</code> to <code>${Transfer:UploadDate}</code> to
     * decrypt uploaded files to an Amazon S3 bucket that is prefixed with the date of
     * the upload.</p>  <p>The system resolves <code>UploadDate</code> to a date
     * format of <i>YYYY-MM-DD</i>, based on the date the file is uploaded in UTC.</p>
     *  </li> </ul>
     */
    inline const InputFileLocation& GetDestinationFileLocation() const { return m_destinationFileLocation; }
    inline bool DestinationFileLocationHasBeenSet() const { return m_destinationFileLocationHasBeenSet; }
    template<typename DestinationFileLocationT = InputFileLocation>
    void SetDestinationFileLocation(DestinationFileLocationT&& value) { m_destinationFileLocationHasBeenSet = true; m_destinationFileLocation = std::forward<DestinationFileLocationT>(value); }
    template<typename DestinationFileLocationT = InputFileLocation>
    DecryptStepDetails& WithDestinationFileLocation(DestinationFileLocationT&& value) { SetDestinationFileLocation(std::forward<DestinationFileLocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EncryptionType m_type{EncryptionType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_sourceFileLocation;
    bool m_sourceFileLocationHasBeenSet = false;

    OverwriteExisting m_overwriteExisting{OverwriteExisting::NOT_SET};
    bool m_overwriteExistingHasBeenSet = false;

    InputFileLocation m_destinationFileLocation;
    bool m_destinationFileLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
