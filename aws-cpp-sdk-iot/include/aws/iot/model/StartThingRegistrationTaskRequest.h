/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API StartThingRegistrationTaskRequest : public IoTRequest
  {
  public:
    StartThingRegistrationTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartThingRegistrationTask"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The provisioning template.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>The provisioning template.</p>
     */
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }

    /**
     * <p>The provisioning template.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>The provisioning template.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }

    /**
     * <p>The provisioning template.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * <p>The provisioning template.</p>
     */
    inline StartThingRegistrationTaskRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>The provisioning template.</p>
     */
    inline StartThingRegistrationTaskRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * <p>The provisioning template.</p>
     */
    inline StartThingRegistrationTaskRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}


    /**
     * <p>The S3 bucket that contains the input file.</p>
     */
    inline const Aws::String& GetInputFileBucket() const{ return m_inputFileBucket; }

    /**
     * <p>The S3 bucket that contains the input file.</p>
     */
    inline bool InputFileBucketHasBeenSet() const { return m_inputFileBucketHasBeenSet; }

    /**
     * <p>The S3 bucket that contains the input file.</p>
     */
    inline void SetInputFileBucket(const Aws::String& value) { m_inputFileBucketHasBeenSet = true; m_inputFileBucket = value; }

    /**
     * <p>The S3 bucket that contains the input file.</p>
     */
    inline void SetInputFileBucket(Aws::String&& value) { m_inputFileBucketHasBeenSet = true; m_inputFileBucket = std::move(value); }

    /**
     * <p>The S3 bucket that contains the input file.</p>
     */
    inline void SetInputFileBucket(const char* value) { m_inputFileBucketHasBeenSet = true; m_inputFileBucket.assign(value); }

    /**
     * <p>The S3 bucket that contains the input file.</p>
     */
    inline StartThingRegistrationTaskRequest& WithInputFileBucket(const Aws::String& value) { SetInputFileBucket(value); return *this;}

    /**
     * <p>The S3 bucket that contains the input file.</p>
     */
    inline StartThingRegistrationTaskRequest& WithInputFileBucket(Aws::String&& value) { SetInputFileBucket(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket that contains the input file.</p>
     */
    inline StartThingRegistrationTaskRequest& WithInputFileBucket(const char* value) { SetInputFileBucket(value); return *this;}


    /**
     * <p>The name of input file within the S3 bucket. This file contains a newline
     * delimited JSON file. Each line contains the parameter values to provision one
     * device (thing).</p>
     */
    inline const Aws::String& GetInputFileKey() const{ return m_inputFileKey; }

    /**
     * <p>The name of input file within the S3 bucket. This file contains a newline
     * delimited JSON file. Each line contains the parameter values to provision one
     * device (thing).</p>
     */
    inline bool InputFileKeyHasBeenSet() const { return m_inputFileKeyHasBeenSet; }

    /**
     * <p>The name of input file within the S3 bucket. This file contains a newline
     * delimited JSON file. Each line contains the parameter values to provision one
     * device (thing).</p>
     */
    inline void SetInputFileKey(const Aws::String& value) { m_inputFileKeyHasBeenSet = true; m_inputFileKey = value; }

    /**
     * <p>The name of input file within the S3 bucket. This file contains a newline
     * delimited JSON file. Each line contains the parameter values to provision one
     * device (thing).</p>
     */
    inline void SetInputFileKey(Aws::String&& value) { m_inputFileKeyHasBeenSet = true; m_inputFileKey = std::move(value); }

    /**
     * <p>The name of input file within the S3 bucket. This file contains a newline
     * delimited JSON file. Each line contains the parameter values to provision one
     * device (thing).</p>
     */
    inline void SetInputFileKey(const char* value) { m_inputFileKeyHasBeenSet = true; m_inputFileKey.assign(value); }

    /**
     * <p>The name of input file within the S3 bucket. This file contains a newline
     * delimited JSON file. Each line contains the parameter values to provision one
     * device (thing).</p>
     */
    inline StartThingRegistrationTaskRequest& WithInputFileKey(const Aws::String& value) { SetInputFileKey(value); return *this;}

    /**
     * <p>The name of input file within the S3 bucket. This file contains a newline
     * delimited JSON file. Each line contains the parameter values to provision one
     * device (thing).</p>
     */
    inline StartThingRegistrationTaskRequest& WithInputFileKey(Aws::String&& value) { SetInputFileKey(std::move(value)); return *this;}

    /**
     * <p>The name of input file within the S3 bucket. This file contains a newline
     * delimited JSON file. Each line contains the parameter values to provision one
     * device (thing).</p>
     */
    inline StartThingRegistrationTaskRequest& WithInputFileKey(const char* value) { SetInputFileKey(value); return *this;}


    /**
     * <p>The IAM role ARN that grants permission the input file.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role ARN that grants permission the input file.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM role ARN that grants permission the input file.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role ARN that grants permission the input file.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM role ARN that grants permission the input file.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM role ARN that grants permission the input file.</p>
     */
    inline StartThingRegistrationTaskRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role ARN that grants permission the input file.</p>
     */
    inline StartThingRegistrationTaskRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role ARN that grants permission the input file.</p>
     */
    inline StartThingRegistrationTaskRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet;

    Aws::String m_inputFileBucket;
    bool m_inputFileBucketHasBeenSet;

    Aws::String m_inputFileKey;
    bool m_inputFileKeyHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
