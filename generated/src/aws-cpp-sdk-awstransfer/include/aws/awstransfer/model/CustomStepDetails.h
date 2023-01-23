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
   * <p>Each step type has its own <code>StepDetails</code> structure.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/CustomStepDetails">AWS
   * API Reference</a></p>
   */
  class CustomStepDetails
  {
  public:
    AWS_TRANSFER_API CustomStepDetails();
    AWS_TRANSFER_API CustomStepDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API CustomStepDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline CustomStepDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline CustomStepDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline CustomStepDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN for the lambda function that is being called.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The ARN for the lambda function that is being called.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The ARN for the lambda function that is being called.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The ARN for the lambda function that is being called.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The ARN for the lambda function that is being called.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The ARN for the lambda function that is being called.</p>
     */
    inline CustomStepDetails& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The ARN for the lambda function that is being called.</p>
     */
    inline CustomStepDetails& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The ARN for the lambda function that is being called.</p>
     */
    inline CustomStepDetails& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>Timeout, in seconds, for the step.</p>
     */
    inline int GetTimeoutSeconds() const{ return m_timeoutSeconds; }

    /**
     * <p>Timeout, in seconds, for the step.</p>
     */
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }

    /**
     * <p>Timeout, in seconds, for the step.</p>
     */
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }

    /**
     * <p>Timeout, in seconds, for the step.</p>
     */
    inline CustomStepDetails& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}


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
    inline CustomStepDetails& WithSourceFileLocation(const Aws::String& value) { SetSourceFileLocation(value); return *this;}

    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>Enter <code>${previous.file}</code> to use the previous file as the
     * input. In this case, this workflow step uses the output file from the previous
     * workflow step as input. This is the default value.</p> </li> <li> <p>Enter
     * <code>${original.file}</code> to use the originally-uploaded file location as
     * input for this step.</p> </li> </ul>
     */
    inline CustomStepDetails& WithSourceFileLocation(Aws::String&& value) { SetSourceFileLocation(std::move(value)); return *this;}

    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>Enter <code>${previous.file}</code> to use the previous file as the
     * input. In this case, this workflow step uses the output file from the previous
     * workflow step as input. This is the default value.</p> </li> <li> <p>Enter
     * <code>${original.file}</code> to use the originally-uploaded file location as
     * input for this step.</p> </li> </ul>
     */
    inline CustomStepDetails& WithSourceFileLocation(const char* value) { SetSourceFileLocation(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    int m_timeoutSeconds;
    bool m_timeoutSecondsHasBeenSet = false;

    Aws::String m_sourceFileLocation;
    bool m_sourceFileLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
