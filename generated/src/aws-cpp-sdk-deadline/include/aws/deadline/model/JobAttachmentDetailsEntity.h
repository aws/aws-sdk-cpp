/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/Attachments.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The job attachments.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/JobAttachmentDetailsEntity">AWS
   * API Reference</a></p>
   */
  class JobAttachmentDetailsEntity
  {
  public:
    AWS_DEADLINE_API JobAttachmentDetailsEntity();
    AWS_DEADLINE_API JobAttachmentDetailsEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API JobAttachmentDetailsEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The job attachments.</p>
     */
    inline const Attachments& GetAttachments() const{ return m_attachments; }

    /**
     * <p>The job attachments.</p>
     */
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }

    /**
     * <p>The job attachments.</p>
     */
    inline void SetAttachments(const Attachments& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }

    /**
     * <p>The job attachments.</p>
     */
    inline void SetAttachments(Attachments&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }

    /**
     * <p>The job attachments.</p>
     */
    inline JobAttachmentDetailsEntity& WithAttachments(const Attachments& value) { SetAttachments(value); return *this;}

    /**
     * <p>The job attachments.</p>
     */
    inline JobAttachmentDetailsEntity& WithAttachments(Attachments&& value) { SetAttachments(std::move(value)); return *this;}


    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job ID.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The job ID.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The job ID.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The job ID.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The job ID.</p>
     */
    inline JobAttachmentDetailsEntity& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job ID.</p>
     */
    inline JobAttachmentDetailsEntity& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job ID.</p>
     */
    inline JobAttachmentDetailsEntity& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Attachments m_attachments;
    bool m_attachmentsHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
