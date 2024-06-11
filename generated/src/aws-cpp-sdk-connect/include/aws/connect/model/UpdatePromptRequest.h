﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdatePromptRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdatePromptRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePrompt"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdatePromptRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdatePromptRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdatePromptRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the prompt.</p>
     */
    inline const Aws::String& GetPromptId() const{ return m_promptId; }
    inline bool PromptIdHasBeenSet() const { return m_promptIdHasBeenSet; }
    inline void SetPromptId(const Aws::String& value) { m_promptIdHasBeenSet = true; m_promptId = value; }
    inline void SetPromptId(Aws::String&& value) { m_promptIdHasBeenSet = true; m_promptId = std::move(value); }
    inline void SetPromptId(const char* value) { m_promptIdHasBeenSet = true; m_promptId.assign(value); }
    inline UpdatePromptRequest& WithPromptId(const Aws::String& value) { SetPromptId(value); return *this;}
    inline UpdatePromptRequest& WithPromptId(Aws::String&& value) { SetPromptId(std::move(value)); return *this;}
    inline UpdatePromptRequest& WithPromptId(const char* value) { SetPromptId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the prompt.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdatePromptRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdatePromptRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdatePromptRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the prompt.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdatePromptRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdatePromptRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdatePromptRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI for the S3 bucket where the prompt is stored. You can provide S3
     * pre-signed URLs returned by the <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_GetPromptFile.html">GetPromptFile</a>
     * API instead of providing S3 URIs.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }
    inline UpdatePromptRequest& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}
    inline UpdatePromptRequest& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}
    inline UpdatePromptRequest& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_promptId;
    bool m_promptIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
