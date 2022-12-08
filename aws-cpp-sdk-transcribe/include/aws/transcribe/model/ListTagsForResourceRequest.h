/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class ListTagsForResourceRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Returns a list of all tags associated with the specified Amazon Resource Name
     * (ARN). ARNs have the format
     * <code>arn:partition:service:region:account-id:resource-type/resource-id</code>.</p>
     * <p>For example,
     * <code>arn:aws:transcribe:us-west-2:111122223333:transcription-job/transcription-job-name</code>.</p>
     * <p>Valid values for <code>resource-type</code> are:
     * <code>transcription-job</code>, <code>medical-transcription-job</code>,
     * <code>vocabulary</code>, <code>medical-vocabulary</code>,
     * <code>vocabulary-filter</code>, and <code>language-model</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>Returns a list of all tags associated with the specified Amazon Resource Name
     * (ARN). ARNs have the format
     * <code>arn:partition:service:region:account-id:resource-type/resource-id</code>.</p>
     * <p>For example,
     * <code>arn:aws:transcribe:us-west-2:111122223333:transcription-job/transcription-job-name</code>.</p>
     * <p>Valid values for <code>resource-type</code> are:
     * <code>transcription-job</code>, <code>medical-transcription-job</code>,
     * <code>vocabulary</code>, <code>medical-vocabulary</code>,
     * <code>vocabulary-filter</code>, and <code>language-model</code>.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>Returns a list of all tags associated with the specified Amazon Resource Name
     * (ARN). ARNs have the format
     * <code>arn:partition:service:region:account-id:resource-type/resource-id</code>.</p>
     * <p>For example,
     * <code>arn:aws:transcribe:us-west-2:111122223333:transcription-job/transcription-job-name</code>.</p>
     * <p>Valid values for <code>resource-type</code> are:
     * <code>transcription-job</code>, <code>medical-transcription-job</code>,
     * <code>vocabulary</code>, <code>medical-vocabulary</code>,
     * <code>vocabulary-filter</code>, and <code>language-model</code>.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>Returns a list of all tags associated with the specified Amazon Resource Name
     * (ARN). ARNs have the format
     * <code>arn:partition:service:region:account-id:resource-type/resource-id</code>.</p>
     * <p>For example,
     * <code>arn:aws:transcribe:us-west-2:111122223333:transcription-job/transcription-job-name</code>.</p>
     * <p>Valid values for <code>resource-type</code> are:
     * <code>transcription-job</code>, <code>medical-transcription-job</code>,
     * <code>vocabulary</code>, <code>medical-vocabulary</code>,
     * <code>vocabulary-filter</code>, and <code>language-model</code>.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>Returns a list of all tags associated with the specified Amazon Resource Name
     * (ARN). ARNs have the format
     * <code>arn:partition:service:region:account-id:resource-type/resource-id</code>.</p>
     * <p>For example,
     * <code>arn:aws:transcribe:us-west-2:111122223333:transcription-job/transcription-job-name</code>.</p>
     * <p>Valid values for <code>resource-type</code> are:
     * <code>transcription-job</code>, <code>medical-transcription-job</code>,
     * <code>vocabulary</code>, <code>medical-vocabulary</code>,
     * <code>vocabulary-filter</code>, and <code>language-model</code>.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>Returns a list of all tags associated with the specified Amazon Resource Name
     * (ARN). ARNs have the format
     * <code>arn:partition:service:region:account-id:resource-type/resource-id</code>.</p>
     * <p>For example,
     * <code>arn:aws:transcribe:us-west-2:111122223333:transcription-job/transcription-job-name</code>.</p>
     * <p>Valid values for <code>resource-type</code> are:
     * <code>transcription-job</code>, <code>medical-transcription-job</code>,
     * <code>vocabulary</code>, <code>medical-vocabulary</code>,
     * <code>vocabulary-filter</code>, and <code>language-model</code>.</p>
     */
    inline ListTagsForResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>Returns a list of all tags associated with the specified Amazon Resource Name
     * (ARN). ARNs have the format
     * <code>arn:partition:service:region:account-id:resource-type/resource-id</code>.</p>
     * <p>For example,
     * <code>arn:aws:transcribe:us-west-2:111122223333:transcription-job/transcription-job-name</code>.</p>
     * <p>Valid values for <code>resource-type</code> are:
     * <code>transcription-job</code>, <code>medical-transcription-job</code>,
     * <code>vocabulary</code>, <code>medical-vocabulary</code>,
     * <code>vocabulary-filter</code>, and <code>language-model</code>.</p>
     */
    inline ListTagsForResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>Returns a list of all tags associated with the specified Amazon Resource Name
     * (ARN). ARNs have the format
     * <code>arn:partition:service:region:account-id:resource-type/resource-id</code>.</p>
     * <p>For example,
     * <code>arn:aws:transcribe:us-west-2:111122223333:transcription-job/transcription-job-name</code>.</p>
     * <p>Valid values for <code>resource-type</code> are:
     * <code>transcription-job</code>, <code>medical-transcription-job</code>,
     * <code>vocabulary</code>, <code>medical-vocabulary</code>,
     * <code>vocabulary-filter</code>, and <code>language-model</code>.</p>
     */
    inline ListTagsForResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
