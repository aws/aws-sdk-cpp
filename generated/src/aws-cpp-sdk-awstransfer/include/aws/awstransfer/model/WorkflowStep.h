/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/WorkflowStepType.h>
#include <aws/awstransfer/model/CopyStepDetails.h>
#include <aws/awstransfer/model/CustomStepDetails.h>
#include <aws/awstransfer/model/DeleteStepDetails.h>
#include <aws/awstransfer/model/TagStepDetails.h>
#include <aws/awstransfer/model/DecryptStepDetails.h>
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
   * <p>The basic building block of a workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/WorkflowStep">AWS
   * API Reference</a></p>
   */
  class WorkflowStep
  {
  public:
    AWS_TRANSFER_API WorkflowStep() = default;
    AWS_TRANSFER_API WorkflowStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API WorkflowStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Currently, the following step types are supported. </p> <ul> <li> <p> <b>
     * <code>COPY</code> </b> - Copy the file to another location.</p> </li> <li> <p>
     * <b> <code>CUSTOM</code> </b> - Perform a custom step with an Lambda function
     * target.</p> </li> <li> <p> <b> <code>DECRYPT</code> </b> - Decrypt a file that
     * was encrypted before it was uploaded.</p> </li> <li> <p> <b> <code>DELETE</code>
     * </b> - Delete the file.</p> </li> <li> <p> <b> <code>TAG</code> </b> - Add a tag
     * to the file.</p> </li> </ul>
     */
    inline WorkflowStepType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(WorkflowStepType value) { m_typeHasBeenSet = true; m_type = value; }
    inline WorkflowStep& WithType(WorkflowStepType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for a step that performs a file copy.</p> <p> Consists of the
     * following values: </p> <ul> <li> <p>A description</p> </li> <li> <p>An Amazon S3
     * location for the destination of the file copy.</p> </li> <li> <p>A flag that
     * indicates whether to overwrite an existing file of the same name. The default is
     * <code>FALSE</code>.</p> </li> </ul>
     */
    inline const CopyStepDetails& GetCopyStepDetails() const { return m_copyStepDetails; }
    inline bool CopyStepDetailsHasBeenSet() const { return m_copyStepDetailsHasBeenSet; }
    template<typename CopyStepDetailsT = CopyStepDetails>
    void SetCopyStepDetails(CopyStepDetailsT&& value) { m_copyStepDetailsHasBeenSet = true; m_copyStepDetails = std::forward<CopyStepDetailsT>(value); }
    template<typename CopyStepDetailsT = CopyStepDetails>
    WorkflowStep& WithCopyStepDetails(CopyStepDetailsT&& value) { SetCopyStepDetails(std::forward<CopyStepDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for a step that invokes an Lambda function.</p> <p>Consists of the
     * Lambda function's name, target, and timeout (in seconds). </p>
     */
    inline const CustomStepDetails& GetCustomStepDetails() const { return m_customStepDetails; }
    inline bool CustomStepDetailsHasBeenSet() const { return m_customStepDetailsHasBeenSet; }
    template<typename CustomStepDetailsT = CustomStepDetails>
    void SetCustomStepDetails(CustomStepDetailsT&& value) { m_customStepDetailsHasBeenSet = true; m_customStepDetails = std::forward<CustomStepDetailsT>(value); }
    template<typename CustomStepDetailsT = CustomStepDetails>
    WorkflowStep& WithCustomStepDetails(CustomStepDetailsT&& value) { SetCustomStepDetails(std::forward<CustomStepDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for a step that deletes the file.</p>
     */
    inline const DeleteStepDetails& GetDeleteStepDetails() const { return m_deleteStepDetails; }
    inline bool DeleteStepDetailsHasBeenSet() const { return m_deleteStepDetailsHasBeenSet; }
    template<typename DeleteStepDetailsT = DeleteStepDetails>
    void SetDeleteStepDetails(DeleteStepDetailsT&& value) { m_deleteStepDetailsHasBeenSet = true; m_deleteStepDetails = std::forward<DeleteStepDetailsT>(value); }
    template<typename DeleteStepDetailsT = DeleteStepDetails>
    WorkflowStep& WithDeleteStepDetails(DeleteStepDetailsT&& value) { SetDeleteStepDetails(std::forward<DeleteStepDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for a step that creates one or more tags.</p> <p>You specify one or
     * more tags. Each tag contains a key-value pair.</p>
     */
    inline const TagStepDetails& GetTagStepDetails() const { return m_tagStepDetails; }
    inline bool TagStepDetailsHasBeenSet() const { return m_tagStepDetailsHasBeenSet; }
    template<typename TagStepDetailsT = TagStepDetails>
    void SetTagStepDetails(TagStepDetailsT&& value) { m_tagStepDetailsHasBeenSet = true; m_tagStepDetails = std::forward<TagStepDetailsT>(value); }
    template<typename TagStepDetailsT = TagStepDetails>
    WorkflowStep& WithTagStepDetails(TagStepDetailsT&& value) { SetTagStepDetails(std::forward<TagStepDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for a step that decrypts an encrypted file.</p> <p>Consists of the
     * following values:</p> <ul> <li> <p>A descriptive name</p> </li> <li> <p>An
     * Amazon S3 or Amazon Elastic File System (Amazon EFS) location for the source
     * file to decrypt.</p> </li> <li> <p>An S3 or Amazon EFS location for the
     * destination of the file decryption.</p> </li> <li> <p>A flag that indicates
     * whether to overwrite an existing file of the same name. The default is
     * <code>FALSE</code>.</p> </li> <li> <p>The type of encryption that's used.
     * Currently, only PGP encryption is supported.</p> </li> </ul>
     */
    inline const DecryptStepDetails& GetDecryptStepDetails() const { return m_decryptStepDetails; }
    inline bool DecryptStepDetailsHasBeenSet() const { return m_decryptStepDetailsHasBeenSet; }
    template<typename DecryptStepDetailsT = DecryptStepDetails>
    void SetDecryptStepDetails(DecryptStepDetailsT&& value) { m_decryptStepDetailsHasBeenSet = true; m_decryptStepDetails = std::forward<DecryptStepDetailsT>(value); }
    template<typename DecryptStepDetailsT = DecryptStepDetails>
    WorkflowStep& WithDecryptStepDetails(DecryptStepDetailsT&& value) { SetDecryptStepDetails(std::forward<DecryptStepDetailsT>(value)); return *this;}
    ///@}
  private:

    WorkflowStepType m_type{WorkflowStepType::NOT_SET};
    bool m_typeHasBeenSet = false;

    CopyStepDetails m_copyStepDetails;
    bool m_copyStepDetailsHasBeenSet = false;

    CustomStepDetails m_customStepDetails;
    bool m_customStepDetailsHasBeenSet = false;

    DeleteStepDetails m_deleteStepDetails;
    bool m_deleteStepDetailsHasBeenSet = false;

    TagStepDetails m_tagStepDetails;
    bool m_tagStepDetailsHasBeenSet = false;

    DecryptStepDetails m_decryptStepDetails;
    bool m_decryptStepDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
