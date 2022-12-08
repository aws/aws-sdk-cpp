/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/BraketRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Braket
{
namespace Model
{

  /**
   */
  class CreateQuantumTaskRequest : public BraketRequest
  {
  public:
    AWS_BRAKET_API CreateQuantumTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateQuantumTask"; }

    AWS_BRAKET_API Aws::String SerializePayload() const override;


    /**
     * <p>The action associated with the task.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The action associated with the task.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action associated with the task.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action associated with the task.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action associated with the task.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>The action associated with the task.</p>
     */
    inline CreateQuantumTaskRequest& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The action associated with the task.</p>
     */
    inline CreateQuantumTaskRequest& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The action associated with the task.</p>
     */
    inline CreateQuantumTaskRequest& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>The client token associated with the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline CreateQuantumTaskRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client token associated with the request.</p>
     */
    inline CreateQuantumTaskRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client token associated with the request.</p>
     */
    inline CreateQuantumTaskRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ARN of the device to run the task on.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }

    /**
     * <p>The ARN of the device to run the task on.</p>
     */
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }

    /**
     * <p>The ARN of the device to run the task on.</p>
     */
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArnHasBeenSet = true; m_deviceArn = value; }

    /**
     * <p>The ARN of the device to run the task on.</p>
     */
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::move(value); }

    /**
     * <p>The ARN of the device to run the task on.</p>
     */
    inline void SetDeviceArn(const char* value) { m_deviceArnHasBeenSet = true; m_deviceArn.assign(value); }

    /**
     * <p>The ARN of the device to run the task on.</p>
     */
    inline CreateQuantumTaskRequest& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}

    /**
     * <p>The ARN of the device to run the task on.</p>
     */
    inline CreateQuantumTaskRequest& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the device to run the task on.</p>
     */
    inline CreateQuantumTaskRequest& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}


    /**
     * <p>The parameters for the device to run the task on.</p>
     */
    inline const Aws::String& GetDeviceParameters() const{ return m_deviceParameters; }

    /**
     * <p>The parameters for the device to run the task on.</p>
     */
    inline bool DeviceParametersHasBeenSet() const { return m_deviceParametersHasBeenSet; }

    /**
     * <p>The parameters for the device to run the task on.</p>
     */
    inline void SetDeviceParameters(const Aws::String& value) { m_deviceParametersHasBeenSet = true; m_deviceParameters = value; }

    /**
     * <p>The parameters for the device to run the task on.</p>
     */
    inline void SetDeviceParameters(Aws::String&& value) { m_deviceParametersHasBeenSet = true; m_deviceParameters = std::move(value); }

    /**
     * <p>The parameters for the device to run the task on.</p>
     */
    inline void SetDeviceParameters(const char* value) { m_deviceParametersHasBeenSet = true; m_deviceParameters.assign(value); }

    /**
     * <p>The parameters for the device to run the task on.</p>
     */
    inline CreateQuantumTaskRequest& WithDeviceParameters(const Aws::String& value) { SetDeviceParameters(value); return *this;}

    /**
     * <p>The parameters for the device to run the task on.</p>
     */
    inline CreateQuantumTaskRequest& WithDeviceParameters(Aws::String&& value) { SetDeviceParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters for the device to run the task on.</p>
     */
    inline CreateQuantumTaskRequest& WithDeviceParameters(const char* value) { SetDeviceParameters(value); return *this;}


    /**
     * <p>The token for an Amazon Braket job that associates it with the quantum
     * task.</p>
     */
    inline const Aws::String& GetJobToken() const{ return m_jobToken; }

    /**
     * <p>The token for an Amazon Braket job that associates it with the quantum
     * task.</p>
     */
    inline bool JobTokenHasBeenSet() const { return m_jobTokenHasBeenSet; }

    /**
     * <p>The token for an Amazon Braket job that associates it with the quantum
     * task.</p>
     */
    inline void SetJobToken(const Aws::String& value) { m_jobTokenHasBeenSet = true; m_jobToken = value; }

    /**
     * <p>The token for an Amazon Braket job that associates it with the quantum
     * task.</p>
     */
    inline void SetJobToken(Aws::String&& value) { m_jobTokenHasBeenSet = true; m_jobToken = std::move(value); }

    /**
     * <p>The token for an Amazon Braket job that associates it with the quantum
     * task.</p>
     */
    inline void SetJobToken(const char* value) { m_jobTokenHasBeenSet = true; m_jobToken.assign(value); }

    /**
     * <p>The token for an Amazon Braket job that associates it with the quantum
     * task.</p>
     */
    inline CreateQuantumTaskRequest& WithJobToken(const Aws::String& value) { SetJobToken(value); return *this;}

    /**
     * <p>The token for an Amazon Braket job that associates it with the quantum
     * task.</p>
     */
    inline CreateQuantumTaskRequest& WithJobToken(Aws::String&& value) { SetJobToken(std::move(value)); return *this;}

    /**
     * <p>The token for an Amazon Braket job that associates it with the quantum
     * task.</p>
     */
    inline CreateQuantumTaskRequest& WithJobToken(const char* value) { SetJobToken(value); return *this;}


    /**
     * <p>The S3 bucket to store task result files in.</p>
     */
    inline const Aws::String& GetOutputS3Bucket() const{ return m_outputS3Bucket; }

    /**
     * <p>The S3 bucket to store task result files in.</p>
     */
    inline bool OutputS3BucketHasBeenSet() const { return m_outputS3BucketHasBeenSet; }

    /**
     * <p>The S3 bucket to store task result files in.</p>
     */
    inline void SetOutputS3Bucket(const Aws::String& value) { m_outputS3BucketHasBeenSet = true; m_outputS3Bucket = value; }

    /**
     * <p>The S3 bucket to store task result files in.</p>
     */
    inline void SetOutputS3Bucket(Aws::String&& value) { m_outputS3BucketHasBeenSet = true; m_outputS3Bucket = std::move(value); }

    /**
     * <p>The S3 bucket to store task result files in.</p>
     */
    inline void SetOutputS3Bucket(const char* value) { m_outputS3BucketHasBeenSet = true; m_outputS3Bucket.assign(value); }

    /**
     * <p>The S3 bucket to store task result files in.</p>
     */
    inline CreateQuantumTaskRequest& WithOutputS3Bucket(const Aws::String& value) { SetOutputS3Bucket(value); return *this;}

    /**
     * <p>The S3 bucket to store task result files in.</p>
     */
    inline CreateQuantumTaskRequest& WithOutputS3Bucket(Aws::String&& value) { SetOutputS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket to store task result files in.</p>
     */
    inline CreateQuantumTaskRequest& WithOutputS3Bucket(const char* value) { SetOutputS3Bucket(value); return *this;}


    /**
     * <p>The key prefix for the location in the S3 bucket to store task results
     * in.</p>
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const{ return m_outputS3KeyPrefix; }

    /**
     * <p>The key prefix for the location in the S3 bucket to store task results
     * in.</p>
     */
    inline bool OutputS3KeyPrefixHasBeenSet() const { return m_outputS3KeyPrefixHasBeenSet; }

    /**
     * <p>The key prefix for the location in the S3 bucket to store task results
     * in.</p>
     */
    inline void SetOutputS3KeyPrefix(const Aws::String& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * <p>The key prefix for the location in the S3 bucket to store task results
     * in.</p>
     */
    inline void SetOutputS3KeyPrefix(Aws::String&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = std::move(value); }

    /**
     * <p>The key prefix for the location in the S3 bucket to store task results
     * in.</p>
     */
    inline void SetOutputS3KeyPrefix(const char* value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix.assign(value); }

    /**
     * <p>The key prefix for the location in the S3 bucket to store task results
     * in.</p>
     */
    inline CreateQuantumTaskRequest& WithOutputS3KeyPrefix(const Aws::String& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * <p>The key prefix for the location in the S3 bucket to store task results
     * in.</p>
     */
    inline CreateQuantumTaskRequest& WithOutputS3KeyPrefix(Aws::String&& value) { SetOutputS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The key prefix for the location in the S3 bucket to store task results
     * in.</p>
     */
    inline CreateQuantumTaskRequest& WithOutputS3KeyPrefix(const char* value) { SetOutputS3KeyPrefix(value); return *this;}


    /**
     * <p>The number of shots to use for the task.</p>
     */
    inline long long GetShots() const{ return m_shots; }

    /**
     * <p>The number of shots to use for the task.</p>
     */
    inline bool ShotsHasBeenSet() const { return m_shotsHasBeenSet; }

    /**
     * <p>The number of shots to use for the task.</p>
     */
    inline void SetShots(long long value) { m_shotsHasBeenSet = true; m_shots = value; }

    /**
     * <p>The number of shots to use for the task.</p>
     */
    inline CreateQuantumTaskRequest& WithShots(long long value) { SetShots(value); return *this;}


    /**
     * <p>Tags to be added to the quantum task you're creating.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to be added to the quantum task you're creating.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to be added to the quantum task you're creating.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to be added to the quantum task you're creating.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to be added to the quantum task you're creating.</p>
     */
    inline CreateQuantumTaskRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to be added to the quantum task you're creating.</p>
     */
    inline CreateQuantumTaskRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to be added to the quantum task you're creating.</p>
     */
    inline CreateQuantumTaskRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags to be added to the quantum task you're creating.</p>
     */
    inline CreateQuantumTaskRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to be added to the quantum task you're creating.</p>
     */
    inline CreateQuantumTaskRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to be added to the quantum task you're creating.</p>
     */
    inline CreateQuantumTaskRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags to be added to the quantum task you're creating.</p>
     */
    inline CreateQuantumTaskRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to be added to the quantum task you're creating.</p>
     */
    inline CreateQuantumTaskRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to be added to the quantum task you're creating.</p>
     */
    inline CreateQuantumTaskRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet = false;

    Aws::String m_deviceParameters;
    bool m_deviceParametersHasBeenSet = false;

    Aws::String m_jobToken;
    bool m_jobTokenHasBeenSet = false;

    Aws::String m_outputS3Bucket;
    bool m_outputS3BucketHasBeenSet = false;

    Aws::String m_outputS3KeyPrefix;
    bool m_outputS3KeyPrefixHasBeenSet = false;

    long long m_shots;
    bool m_shotsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
