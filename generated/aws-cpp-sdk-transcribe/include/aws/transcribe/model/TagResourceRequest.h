﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/Tag.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class AWS_TRANSCRIBESERVICE_API TagResourceRequest : public TranscribeServiceRequest
  {
  public:
    TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Transcribe resource you want to
     * tag. ARNs have the format
     * <code>arn:partition:service:region:account-id:resource-type/resource-id</code>
     * (for example,
     * <code>arn:aws:transcribe:us-east-1:account-id:transcription-job/your-job-name</code>).
     * Valid values for <code>resource-type</code> are: <code>transcription-job</code>,
     * <code>medical-transcription-job</code>, <code>vocabulary</code>,
     * <code>medical-vocabulary</code>, <code>vocabulary-filter</code>, and
     * <code>language-model</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Transcribe resource you want to
     * tag. ARNs have the format
     * <code>arn:partition:service:region:account-id:resource-type/resource-id</code>
     * (for example,
     * <code>arn:aws:transcribe:us-east-1:account-id:transcription-job/your-job-name</code>).
     * Valid values for <code>resource-type</code> are: <code>transcription-job</code>,
     * <code>medical-transcription-job</code>, <code>vocabulary</code>,
     * <code>medical-vocabulary</code>, <code>vocabulary-filter</code>, and
     * <code>language-model</code>.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Transcribe resource you want to
     * tag. ARNs have the format
     * <code>arn:partition:service:region:account-id:resource-type/resource-id</code>
     * (for example,
     * <code>arn:aws:transcribe:us-east-1:account-id:transcription-job/your-job-name</code>).
     * Valid values for <code>resource-type</code> are: <code>transcription-job</code>,
     * <code>medical-transcription-job</code>, <code>vocabulary</code>,
     * <code>medical-vocabulary</code>, <code>vocabulary-filter</code>, and
     * <code>language-model</code>.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Transcribe resource you want to
     * tag. ARNs have the format
     * <code>arn:partition:service:region:account-id:resource-type/resource-id</code>
     * (for example,
     * <code>arn:aws:transcribe:us-east-1:account-id:transcription-job/your-job-name</code>).
     * Valid values for <code>resource-type</code> are: <code>transcription-job</code>,
     * <code>medical-transcription-job</code>, <code>vocabulary</code>,
     * <code>medical-vocabulary</code>, <code>vocabulary-filter</code>, and
     * <code>language-model</code>.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Transcribe resource you want to
     * tag. ARNs have the format
     * <code>arn:partition:service:region:account-id:resource-type/resource-id</code>
     * (for example,
     * <code>arn:aws:transcribe:us-east-1:account-id:transcription-job/your-job-name</code>).
     * Valid values for <code>resource-type</code> are: <code>transcription-job</code>,
     * <code>medical-transcription-job</code>, <code>vocabulary</code>,
     * <code>medical-vocabulary</code>, <code>vocabulary-filter</code>, and
     * <code>language-model</code>.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Transcribe resource you want to
     * tag. ARNs have the format
     * <code>arn:partition:service:region:account-id:resource-type/resource-id</code>
     * (for example,
     * <code>arn:aws:transcribe:us-east-1:account-id:transcription-job/your-job-name</code>).
     * Valid values for <code>resource-type</code> are: <code>transcription-job</code>,
     * <code>medical-transcription-job</code>, <code>vocabulary</code>,
     * <code>medical-vocabulary</code>, <code>vocabulary-filter</code>, and
     * <code>language-model</code>.</p>
     */
    inline TagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Transcribe resource you want to
     * tag. ARNs have the format
     * <code>arn:partition:service:region:account-id:resource-type/resource-id</code>
     * (for example,
     * <code>arn:aws:transcribe:us-east-1:account-id:transcription-job/your-job-name</code>).
     * Valid values for <code>resource-type</code> are: <code>transcription-job</code>,
     * <code>medical-transcription-job</code>, <code>vocabulary</code>,
     * <code>medical-vocabulary</code>, <code>vocabulary-filter</code>, and
     * <code>language-model</code>.</p>
     */
    inline TagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Transcribe resource you want to
     * tag. ARNs have the format
     * <code>arn:partition:service:region:account-id:resource-type/resource-id</code>
     * (for example,
     * <code>arn:aws:transcribe:us-east-1:account-id:transcription-job/your-job-name</code>).
     * Valid values for <code>resource-type</code> are: <code>transcription-job</code>,
     * <code>medical-transcription-job</code>, <code>vocabulary</code>,
     * <code>medical-vocabulary</code>, <code>vocabulary-filter</code>, and
     * <code>language-model</code>.</p>
     */
    inline TagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The tags you are assigning to a given Amazon Transcribe resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags you are assigning to a given Amazon Transcribe resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags you are assigning to a given Amazon Transcribe resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags you are assigning to a given Amazon Transcribe resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags you are assigning to a given Amazon Transcribe resource.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags you are assigning to a given Amazon Transcribe resource.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags you are assigning to a given Amazon Transcribe resource.</p>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags you are assigning to a given Amazon Transcribe resource.</p>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
