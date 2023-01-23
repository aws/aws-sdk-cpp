/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/InputFileLocation.h>
#include <aws/awstransfer/model/OverwriteExisting.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/CopyStepDetails">AWS
   * API Reference</a></p>
   */
  class CopyStepDetails
  {
  public:
    AWS_TRANSFER_API CopyStepDetails();
    AWS_TRANSFER_API CopyStepDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API CopyStepDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline CopyStepDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline CopyStepDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline CopyStepDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the location for the file being copied. Only applicable for Copy
     * type workflow steps. Use <code>${Transfer:username}</code> in this field to
     * parametrize the destination prefix by username.</p>
     */
    inline const InputFileLocation& GetDestinationFileLocation() const{ return m_destinationFileLocation; }

    /**
     * <p>Specifies the location for the file being copied. Only applicable for Copy
     * type workflow steps. Use <code>${Transfer:username}</code> in this field to
     * parametrize the destination prefix by username.</p>
     */
    inline bool DestinationFileLocationHasBeenSet() const { return m_destinationFileLocationHasBeenSet; }

    /**
     * <p>Specifies the location for the file being copied. Only applicable for Copy
     * type workflow steps. Use <code>${Transfer:username}</code> in this field to
     * parametrize the destination prefix by username.</p>
     */
    inline void SetDestinationFileLocation(const InputFileLocation& value) { m_destinationFileLocationHasBeenSet = true; m_destinationFileLocation = value; }

    /**
     * <p>Specifies the location for the file being copied. Only applicable for Copy
     * type workflow steps. Use <code>${Transfer:username}</code> in this field to
     * parametrize the destination prefix by username.</p>
     */
    inline void SetDestinationFileLocation(InputFileLocation&& value) { m_destinationFileLocationHasBeenSet = true; m_destinationFileLocation = std::move(value); }

    /**
     * <p>Specifies the location for the file being copied. Only applicable for Copy
     * type workflow steps. Use <code>${Transfer:username}</code> in this field to
     * parametrize the destination prefix by username.</p>
     */
    inline CopyStepDetails& WithDestinationFileLocation(const InputFileLocation& value) { SetDestinationFileLocation(value); return *this;}

    /**
     * <p>Specifies the location for the file being copied. Only applicable for Copy
     * type workflow steps. Use <code>${Transfer:username}</code> in this field to
     * parametrize the destination prefix by username.</p>
     */
    inline CopyStepDetails& WithDestinationFileLocation(InputFileLocation&& value) { SetDestinationFileLocation(std::move(value)); return *this;}


    /**
     * <p>A flag that indicates whether or not to overwrite an existing file of the
     * same name. The default is <code>FALSE</code>.</p>
     */
    inline const OverwriteExisting& GetOverwriteExisting() const{ return m_overwriteExisting; }

    /**
     * <p>A flag that indicates whether or not to overwrite an existing file of the
     * same name. The default is <code>FALSE</code>.</p>
     */
    inline bool OverwriteExistingHasBeenSet() const { return m_overwriteExistingHasBeenSet; }

    /**
     * <p>A flag that indicates whether or not to overwrite an existing file of the
     * same name. The default is <code>FALSE</code>.</p>
     */
    inline void SetOverwriteExisting(const OverwriteExisting& value) { m_overwriteExistingHasBeenSet = true; m_overwriteExisting = value; }

    /**
     * <p>A flag that indicates whether or not to overwrite an existing file of the
     * same name. The default is <code>FALSE</code>.</p>
     */
    inline void SetOverwriteExisting(OverwriteExisting&& value) { m_overwriteExistingHasBeenSet = true; m_overwriteExisting = std::move(value); }

    /**
     * <p>A flag that indicates whether or not to overwrite an existing file of the
     * same name. The default is <code>FALSE</code>.</p>
     */
    inline CopyStepDetails& WithOverwriteExisting(const OverwriteExisting& value) { SetOverwriteExisting(value); return *this;}

    /**
     * <p>A flag that indicates whether or not to overwrite an existing file of the
     * same name. The default is <code>FALSE</code>.</p>
     */
    inline CopyStepDetails& WithOverwriteExisting(OverwriteExisting&& value) { SetOverwriteExisting(std::move(value)); return *this;}


    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>Enter <code>${previous.file}</code> to use the previous file as the
     * input. In this case, this workflow step uses the output file from the previous
     * workflow step as input. This is the default value.</p> </li> <li> <p>Enter
     * <code>${original.file}</code> to use the originally-uploaded file location as
     * input for this step.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceFileLocation() const{ return m_sourceFileLocation; }

    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>Enter <code>${previous.file}</code> to use the previous file as the
     * input. In this case, this workflow step uses the output file from the previous
     * workflow step as input. This is the default value.</p> </li> <li> <p>Enter
     * <code>${original.file}</code> to use the originally-uploaded file location as
     * input for this step.</p> </li> </ul>
     */
    inline bool SourceFileLocationHasBeenSet() const { return m_sourceFileLocationHasBeenSet; }

    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>Enter <code>${previous.file}</code> to use the previous file as the
     * input. In this case, this workflow step uses the output file from the previous
     * workflow step as input. This is the default value.</p> </li> <li> <p>Enter
     * <code>${original.file}</code> to use the originally-uploaded file location as
     * input for this step.</p> </li> </ul>
     */
    inline void SetSourceFileLocation(const Aws::String& value) { m_sourceFileLocationHasBeenSet = true; m_sourceFileLocation = value; }

    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>Enter <code>${previous.file}</code> to use the previous file as the
     * input. In this case, this workflow step uses the output file from the previous
     * workflow step as input. This is the default value.</p> </li> <li> <p>Enter
     * <code>${original.file}</code> to use the originally-uploaded file location as
     * input for this step.</p> </li> </ul>
     */
    inline void SetSourceFileLocation(Aws::String&& value) { m_sourceFileLocationHasBeenSet = true; m_sourceFileLocation = std::move(value); }

    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>Enter <code>${previous.file}</code> to use the previous file as the
     * input. In this case, this workflow step uses the output file from the previous
     * workflow step as input. This is the default value.</p> </li> <li> <p>Enter
     * <code>${original.file}</code> to use the originally-uploaded file location as
     * input for this step.</p> </li> </ul>
     */
    inline void SetSourceFileLocation(const char* value) { m_sourceFileLocationHasBeenSet = true; m_sourceFileLocation.assign(value); }

    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>Enter <code>${previous.file}</code> to use the previous file as the
     * input. In this case, this workflow step uses the output file from the previous
     * workflow step as input. This is the default value.</p> </li> <li> <p>Enter
     * <code>${original.file}</code> to use the originally-uploaded file location as
     * input for this step.</p> </li> </ul>
     */
    inline CopyStepDetails& WithSourceFileLocation(const Aws::String& value) { SetSourceFileLocation(value); return *this;}

    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>Enter <code>${previous.file}</code> to use the previous file as the
     * input. In this case, this workflow step uses the output file from the previous
     * workflow step as input. This is the default value.</p> </li> <li> <p>Enter
     * <code>${original.file}</code> to use the originally-uploaded file location as
     * input for this step.</p> </li> </ul>
     */
    inline CopyStepDetails& WithSourceFileLocation(Aws::String&& value) { SetSourceFileLocation(std::move(value)); return *this;}

    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>Enter <code>${previous.file}</code> to use the previous file as the
     * input. In this case, this workflow step uses the output file from the previous
     * workflow step as input. This is the default value.</p> </li> <li> <p>Enter
     * <code>${original.file}</code> to use the originally-uploaded file location as
     * input for this step.</p> </li> </ul>
     */
    inline CopyStepDetails& WithSourceFileLocation(const char* value) { SetSourceFileLocation(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InputFileLocation m_destinationFileLocation;
    bool m_destinationFileLocationHasBeenSet = false;

    OverwriteExisting m_overwriteExisting;
    bool m_overwriteExistingHasBeenSet = false;

    Aws::String m_sourceFileLocation;
    bool m_sourceFileLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
