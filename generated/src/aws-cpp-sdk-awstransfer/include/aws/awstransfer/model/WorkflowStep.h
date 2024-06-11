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
    AWS_TRANSFER_API WorkflowStep();
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
    inline const WorkflowStepType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const WorkflowStepType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(WorkflowStepType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline WorkflowStep& WithType(const WorkflowStepType& value) { SetType(value); return *this;}
    inline WorkflowStep& WithType(WorkflowStepType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for a step that performs a file copy.</p> <p> Consists of the
     * following values: </p> <ul> <li> <p>A description</p> </li> <li> <p>An Amazon S3
     * location for the destination of the file copy.</p> </li> <li> <p>A flag that
     * indicates whether to overwrite an existing file of the same name. The default is
     * <code>FALSE</code>.</p> </li> </ul>
     */
    inline const CopyStepDetails& GetCopyStepDetails() const{ return m_copyStepDetails; }
    inline bool CopyStepDetailsHasBeenSet() const { return m_copyStepDetailsHasBeenSet; }
    inline void SetCopyStepDetails(const CopyStepDetails& value) { m_copyStepDetailsHasBeenSet = true; m_copyStepDetails = value; }
    inline void SetCopyStepDetails(CopyStepDetails&& value) { m_copyStepDetailsHasBeenSet = true; m_copyStepDetails = std::move(value); }
    inline WorkflowStep& WithCopyStepDetails(const CopyStepDetails& value) { SetCopyStepDetails(value); return *this;}
    inline WorkflowStep& WithCopyStepDetails(CopyStepDetails&& value) { SetCopyStepDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for a step that invokes an Lambda function.</p> <p>Consists of the
     * Lambda function's name, target, and timeout (in seconds). </p>
     */
    inline const CustomStepDetails& GetCustomStepDetails() const{ return m_customStepDetails; }
    inline bool CustomStepDetailsHasBeenSet() const { return m_customStepDetailsHasBeenSet; }
    inline void SetCustomStepDetails(const CustomStepDetails& value) { m_customStepDetailsHasBeenSet = true; m_customStepDetails = value; }
    inline void SetCustomStepDetails(CustomStepDetails&& value) { m_customStepDetailsHasBeenSet = true; m_customStepDetails = std::move(value); }
    inline WorkflowStep& WithCustomStepDetails(const CustomStepDetails& value) { SetCustomStepDetails(value); return *this;}
    inline WorkflowStep& WithCustomStepDetails(CustomStepDetails&& value) { SetCustomStepDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for a step that deletes the file.</p>
     */
    inline const DeleteStepDetails& GetDeleteStepDetails() const{ return m_deleteStepDetails; }
    inline bool DeleteStepDetailsHasBeenSet() const { return m_deleteStepDetailsHasBeenSet; }
    inline void SetDeleteStepDetails(const DeleteStepDetails& value) { m_deleteStepDetailsHasBeenSet = true; m_deleteStepDetails = value; }
    inline void SetDeleteStepDetails(DeleteStepDetails&& value) { m_deleteStepDetailsHasBeenSet = true; m_deleteStepDetails = std::move(value); }
    inline WorkflowStep& WithDeleteStepDetails(const DeleteStepDetails& value) { SetDeleteStepDetails(value); return *this;}
    inline WorkflowStep& WithDeleteStepDetails(DeleteStepDetails&& value) { SetDeleteStepDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for a step that creates one or more tags.</p> <p>You specify one or
     * more tags. Each tag contains a key-value pair.</p>
     */
    inline const TagStepDetails& GetTagStepDetails() const{ return m_tagStepDetails; }
    inline bool TagStepDetailsHasBeenSet() const { return m_tagStepDetailsHasBeenSet; }
    inline void SetTagStepDetails(const TagStepDetails& value) { m_tagStepDetailsHasBeenSet = true; m_tagStepDetails = value; }
    inline void SetTagStepDetails(TagStepDetails&& value) { m_tagStepDetailsHasBeenSet = true; m_tagStepDetails = std::move(value); }
    inline WorkflowStep& WithTagStepDetails(const TagStepDetails& value) { SetTagStepDetails(value); return *this;}
    inline WorkflowStep& WithTagStepDetails(TagStepDetails&& value) { SetTagStepDetails(std::move(value)); return *this;}
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
    inline const DecryptStepDetails& GetDecryptStepDetails() const{ return m_decryptStepDetails; }
    inline bool DecryptStepDetailsHasBeenSet() const { return m_decryptStepDetailsHasBeenSet; }
    inline void SetDecryptStepDetails(const DecryptStepDetails& value) { m_decryptStepDetailsHasBeenSet = true; m_decryptStepDetails = value; }
    inline void SetDecryptStepDetails(DecryptStepDetails&& value) { m_decryptStepDetailsHasBeenSet = true; m_decryptStepDetails = std::move(value); }
    inline WorkflowStep& WithDecryptStepDetails(const DecryptStepDetails& value) { SetDecryptStepDetails(value); return *this;}
    inline WorkflowStep& WithDecryptStepDetails(DecryptStepDetails&& value) { SetDecryptStepDetails(std::move(value)); return *this;}
    ///@}
  private:

    WorkflowStepType m_type;
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
