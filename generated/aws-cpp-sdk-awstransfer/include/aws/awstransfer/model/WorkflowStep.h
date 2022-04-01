﻿/**
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
  class AWS_TRANSFER_API WorkflowStep
  {
  public:
    WorkflowStep();
    WorkflowStep(Aws::Utils::Json::JsonView jsonValue);
    WorkflowStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Currently, the following step types are supported. </p> <ul> <li> <p>
     * <i>Copy</i>: copy the file to another location</p> </li> <li> <p> <i>Custom</i>:
     * custom step with a lambda target</p> </li> <li> <p> <i>Delete</i>: delete the
     * file</p> </li> <li> <p> <i>Tag</i>: add a tag to the file</p> </li> </ul>
     */
    inline const WorkflowStepType& GetType() const{ return m_type; }

    /**
     * <p> Currently, the following step types are supported. </p> <ul> <li> <p>
     * <i>Copy</i>: copy the file to another location</p> </li> <li> <p> <i>Custom</i>:
     * custom step with a lambda target</p> </li> <li> <p> <i>Delete</i>: delete the
     * file</p> </li> <li> <p> <i>Tag</i>: add a tag to the file</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> Currently, the following step types are supported. </p> <ul> <li> <p>
     * <i>Copy</i>: copy the file to another location</p> </li> <li> <p> <i>Custom</i>:
     * custom step with a lambda target</p> </li> <li> <p> <i>Delete</i>: delete the
     * file</p> </li> <li> <p> <i>Tag</i>: add a tag to the file</p> </li> </ul>
     */
    inline void SetType(const WorkflowStepType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> Currently, the following step types are supported. </p> <ul> <li> <p>
     * <i>Copy</i>: copy the file to another location</p> </li> <li> <p> <i>Custom</i>:
     * custom step with a lambda target</p> </li> <li> <p> <i>Delete</i>: delete the
     * file</p> </li> <li> <p> <i>Tag</i>: add a tag to the file</p> </li> </ul>
     */
    inline void SetType(WorkflowStepType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> Currently, the following step types are supported. </p> <ul> <li> <p>
     * <i>Copy</i>: copy the file to another location</p> </li> <li> <p> <i>Custom</i>:
     * custom step with a lambda target</p> </li> <li> <p> <i>Delete</i>: delete the
     * file</p> </li> <li> <p> <i>Tag</i>: add a tag to the file</p> </li> </ul>
     */
    inline WorkflowStep& WithType(const WorkflowStepType& value) { SetType(value); return *this;}

    /**
     * <p> Currently, the following step types are supported. </p> <ul> <li> <p>
     * <i>Copy</i>: copy the file to another location</p> </li> <li> <p> <i>Custom</i>:
     * custom step with a lambda target</p> </li> <li> <p> <i>Delete</i>: delete the
     * file</p> </li> <li> <p> <i>Tag</i>: add a tag to the file</p> </li> </ul>
     */
    inline WorkflowStep& WithType(WorkflowStepType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Details for a step that performs a file copy.</p> <p> Consists of the
     * following values: </p> <ul> <li> <p>A description</p> </li> <li> <p>An S3
     * location for the destination of the file copy.</p> </li> <li> <p>A flag that
     * indicates whether or not to overwrite an existing file of the same name. The
     * default is <code>FALSE</code>.</p> </li> </ul>
     */
    inline const CopyStepDetails& GetCopyStepDetails() const{ return m_copyStepDetails; }

    /**
     * <p>Details for a step that performs a file copy.</p> <p> Consists of the
     * following values: </p> <ul> <li> <p>A description</p> </li> <li> <p>An S3
     * location for the destination of the file copy.</p> </li> <li> <p>A flag that
     * indicates whether or not to overwrite an existing file of the same name. The
     * default is <code>FALSE</code>.</p> </li> </ul>
     */
    inline bool CopyStepDetailsHasBeenSet() const { return m_copyStepDetailsHasBeenSet; }

    /**
     * <p>Details for a step that performs a file copy.</p> <p> Consists of the
     * following values: </p> <ul> <li> <p>A description</p> </li> <li> <p>An S3
     * location for the destination of the file copy.</p> </li> <li> <p>A flag that
     * indicates whether or not to overwrite an existing file of the same name. The
     * default is <code>FALSE</code>.</p> </li> </ul>
     */
    inline void SetCopyStepDetails(const CopyStepDetails& value) { m_copyStepDetailsHasBeenSet = true; m_copyStepDetails = value; }

    /**
     * <p>Details for a step that performs a file copy.</p> <p> Consists of the
     * following values: </p> <ul> <li> <p>A description</p> </li> <li> <p>An S3
     * location for the destination of the file copy.</p> </li> <li> <p>A flag that
     * indicates whether or not to overwrite an existing file of the same name. The
     * default is <code>FALSE</code>.</p> </li> </ul>
     */
    inline void SetCopyStepDetails(CopyStepDetails&& value) { m_copyStepDetailsHasBeenSet = true; m_copyStepDetails = std::move(value); }

    /**
     * <p>Details for a step that performs a file copy.</p> <p> Consists of the
     * following values: </p> <ul> <li> <p>A description</p> </li> <li> <p>An S3
     * location for the destination of the file copy.</p> </li> <li> <p>A flag that
     * indicates whether or not to overwrite an existing file of the same name. The
     * default is <code>FALSE</code>.</p> </li> </ul>
     */
    inline WorkflowStep& WithCopyStepDetails(const CopyStepDetails& value) { SetCopyStepDetails(value); return *this;}

    /**
     * <p>Details for a step that performs a file copy.</p> <p> Consists of the
     * following values: </p> <ul> <li> <p>A description</p> </li> <li> <p>An S3
     * location for the destination of the file copy.</p> </li> <li> <p>A flag that
     * indicates whether or not to overwrite an existing file of the same name. The
     * default is <code>FALSE</code>.</p> </li> </ul>
     */
    inline WorkflowStep& WithCopyStepDetails(CopyStepDetails&& value) { SetCopyStepDetails(std::move(value)); return *this;}


    /**
     * <p>Details for a step that invokes a lambda function.</p> <p> Consists of the
     * lambda function name, target, and timeout (in seconds). </p>
     */
    inline const CustomStepDetails& GetCustomStepDetails() const{ return m_customStepDetails; }

    /**
     * <p>Details for a step that invokes a lambda function.</p> <p> Consists of the
     * lambda function name, target, and timeout (in seconds). </p>
     */
    inline bool CustomStepDetailsHasBeenSet() const { return m_customStepDetailsHasBeenSet; }

    /**
     * <p>Details for a step that invokes a lambda function.</p> <p> Consists of the
     * lambda function name, target, and timeout (in seconds). </p>
     */
    inline void SetCustomStepDetails(const CustomStepDetails& value) { m_customStepDetailsHasBeenSet = true; m_customStepDetails = value; }

    /**
     * <p>Details for a step that invokes a lambda function.</p> <p> Consists of the
     * lambda function name, target, and timeout (in seconds). </p>
     */
    inline void SetCustomStepDetails(CustomStepDetails&& value) { m_customStepDetailsHasBeenSet = true; m_customStepDetails = std::move(value); }

    /**
     * <p>Details for a step that invokes a lambda function.</p> <p> Consists of the
     * lambda function name, target, and timeout (in seconds). </p>
     */
    inline WorkflowStep& WithCustomStepDetails(const CustomStepDetails& value) { SetCustomStepDetails(value); return *this;}

    /**
     * <p>Details for a step that invokes a lambda function.</p> <p> Consists of the
     * lambda function name, target, and timeout (in seconds). </p>
     */
    inline WorkflowStep& WithCustomStepDetails(CustomStepDetails&& value) { SetCustomStepDetails(std::move(value)); return *this;}


    /**
     * <p>Details for a step that deletes the file.</p>
     */
    inline const DeleteStepDetails& GetDeleteStepDetails() const{ return m_deleteStepDetails; }

    /**
     * <p>Details for a step that deletes the file.</p>
     */
    inline bool DeleteStepDetailsHasBeenSet() const { return m_deleteStepDetailsHasBeenSet; }

    /**
     * <p>Details for a step that deletes the file.</p>
     */
    inline void SetDeleteStepDetails(const DeleteStepDetails& value) { m_deleteStepDetailsHasBeenSet = true; m_deleteStepDetails = value; }

    /**
     * <p>Details for a step that deletes the file.</p>
     */
    inline void SetDeleteStepDetails(DeleteStepDetails&& value) { m_deleteStepDetailsHasBeenSet = true; m_deleteStepDetails = std::move(value); }

    /**
     * <p>Details for a step that deletes the file.</p>
     */
    inline WorkflowStep& WithDeleteStepDetails(const DeleteStepDetails& value) { SetDeleteStepDetails(value); return *this;}

    /**
     * <p>Details for a step that deletes the file.</p>
     */
    inline WorkflowStep& WithDeleteStepDetails(DeleteStepDetails&& value) { SetDeleteStepDetails(std::move(value)); return *this;}


    /**
     * <p>Details for a step that creates one or more tags.</p> <p>You specify one or
     * more tags: each tag contains a key/value pair.</p>
     */
    inline const TagStepDetails& GetTagStepDetails() const{ return m_tagStepDetails; }

    /**
     * <p>Details for a step that creates one or more tags.</p> <p>You specify one or
     * more tags: each tag contains a key/value pair.</p>
     */
    inline bool TagStepDetailsHasBeenSet() const { return m_tagStepDetailsHasBeenSet; }

    /**
     * <p>Details for a step that creates one or more tags.</p> <p>You specify one or
     * more tags: each tag contains a key/value pair.</p>
     */
    inline void SetTagStepDetails(const TagStepDetails& value) { m_tagStepDetailsHasBeenSet = true; m_tagStepDetails = value; }

    /**
     * <p>Details for a step that creates one or more tags.</p> <p>You specify one or
     * more tags: each tag contains a key/value pair.</p>
     */
    inline void SetTagStepDetails(TagStepDetails&& value) { m_tagStepDetailsHasBeenSet = true; m_tagStepDetails = std::move(value); }

    /**
     * <p>Details for a step that creates one or more tags.</p> <p>You specify one or
     * more tags: each tag contains a key/value pair.</p>
     */
    inline WorkflowStep& WithTagStepDetails(const TagStepDetails& value) { SetTagStepDetails(value); return *this;}

    /**
     * <p>Details for a step that creates one or more tags.</p> <p>You specify one or
     * more tags: each tag contains a key/value pair.</p>
     */
    inline WorkflowStep& WithTagStepDetails(TagStepDetails&& value) { SetTagStepDetails(std::move(value)); return *this;}

  private:

    WorkflowStepType m_type;
    bool m_typeHasBeenSet;

    CopyStepDetails m_copyStepDetails;
    bool m_copyStepDetailsHasBeenSet;

    CustomStepDetails m_customStepDetails;
    bool m_customStepDetailsHasBeenSet;

    DeleteStepDetails m_deleteStepDetails;
    bool m_deleteStepDetailsHasBeenSet;

    TagStepDetails m_tagStepDetails;
    bool m_tagStepDetailsHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
