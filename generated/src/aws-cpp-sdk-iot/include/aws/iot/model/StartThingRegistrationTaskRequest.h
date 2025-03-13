/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class StartThingRegistrationTaskRequest : public IoTRequest
  {
  public:
    AWS_IOT_API StartThingRegistrationTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartThingRegistrationTask"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The provisioning template.</p>
     */
    inline const Aws::String& GetTemplateBody() const { return m_templateBody; }
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }
    template<typename TemplateBodyT = Aws::String>
    void SetTemplateBody(TemplateBodyT&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::forward<TemplateBodyT>(value); }
    template<typename TemplateBodyT = Aws::String>
    StartThingRegistrationTaskRequest& WithTemplateBody(TemplateBodyT&& value) { SetTemplateBody(std::forward<TemplateBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket that contains the input file.</p>
     */
    inline const Aws::String& GetInputFileBucket() const { return m_inputFileBucket; }
    inline bool InputFileBucketHasBeenSet() const { return m_inputFileBucketHasBeenSet; }
    template<typename InputFileBucketT = Aws::String>
    void SetInputFileBucket(InputFileBucketT&& value) { m_inputFileBucketHasBeenSet = true; m_inputFileBucket = std::forward<InputFileBucketT>(value); }
    template<typename InputFileBucketT = Aws::String>
    StartThingRegistrationTaskRequest& WithInputFileBucket(InputFileBucketT&& value) { SetInputFileBucket(std::forward<InputFileBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of input file within the S3 bucket. This file contains a newline
     * delimited JSON file. Each line contains the parameter values to provision one
     * device (thing).</p>
     */
    inline const Aws::String& GetInputFileKey() const { return m_inputFileKey; }
    inline bool InputFileKeyHasBeenSet() const { return m_inputFileKeyHasBeenSet; }
    template<typename InputFileKeyT = Aws::String>
    void SetInputFileKey(InputFileKeyT&& value) { m_inputFileKeyHasBeenSet = true; m_inputFileKey = std::forward<InputFileKeyT>(value); }
    template<typename InputFileKeyT = Aws::String>
    StartThingRegistrationTaskRequest& WithInputFileKey(InputFileKeyT&& value) { SetInputFileKey(std::forward<InputFileKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role ARN that grants permission the input file.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    StartThingRegistrationTaskRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet = false;

    Aws::String m_inputFileBucket;
    bool m_inputFileBucketHasBeenSet = false;

    Aws::String m_inputFileKey;
    bool m_inputFileKeyHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
