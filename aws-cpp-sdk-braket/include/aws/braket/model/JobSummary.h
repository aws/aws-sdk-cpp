/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/JobPrimaryStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Braket
{
namespace Model
{

  /**
   * <p>Provides summary information about an Amazon Braket job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/JobSummary">AWS
   * API Reference</a></p>
   */
  class JobSummary
  {
  public:
    AWS_BRAKET_API JobSummary();
    AWS_BRAKET_API JobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API JobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time that the Amazon Braket job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the Amazon Braket job was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the Amazon Braket job was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the Amazon Braket job was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the Amazon Braket job was created.</p>
     */
    inline JobSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the Amazon Braket job was created.</p>
     */
    inline JobSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Provides summary information about the primary device used by an Amazon
     * Braket job.</p>
     */
    inline const Aws::String& GetDevice() const{ return m_device; }

    /**
     * <p>Provides summary information about the primary device used by an Amazon
     * Braket job.</p>
     */
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }

    /**
     * <p>Provides summary information about the primary device used by an Amazon
     * Braket job.</p>
     */
    inline void SetDevice(const Aws::String& value) { m_deviceHasBeenSet = true; m_device = value; }

    /**
     * <p>Provides summary information about the primary device used by an Amazon
     * Braket job.</p>
     */
    inline void SetDevice(Aws::String&& value) { m_deviceHasBeenSet = true; m_device = std::move(value); }

    /**
     * <p>Provides summary information about the primary device used by an Amazon
     * Braket job.</p>
     */
    inline void SetDevice(const char* value) { m_deviceHasBeenSet = true; m_device.assign(value); }

    /**
     * <p>Provides summary information about the primary device used by an Amazon
     * Braket job.</p>
     */
    inline JobSummary& WithDevice(const Aws::String& value) { SetDevice(value); return *this;}

    /**
     * <p>Provides summary information about the primary device used by an Amazon
     * Braket job.</p>
     */
    inline JobSummary& WithDevice(Aws::String&& value) { SetDevice(std::move(value)); return *this;}

    /**
     * <p>Provides summary information about the primary device used by an Amazon
     * Braket job.</p>
     */
    inline JobSummary& WithDevice(const char* value) { SetDevice(value); return *this;}


    /**
     * <p>The date and time that the Amazon Braket job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }

    /**
     * <p>The date and time that the Amazon Braket job ended.</p>
     */
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }

    /**
     * <p>The date and time that the Amazon Braket job ended.</p>
     */
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAtHasBeenSet = true; m_endedAt = value; }

    /**
     * <p>The date and time that the Amazon Braket job ended.</p>
     */
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::move(value); }

    /**
     * <p>The date and time that the Amazon Braket job ended.</p>
     */
    inline JobSummary& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}

    /**
     * <p>The date and time that the Amazon Braket job ended.</p>
     */
    inline JobSummary& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}


    /**
     * <p>The ARN of the Amazon Braket job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p>The ARN of the Amazon Braket job.</p>
     */
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon Braket job.</p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }

    /**
     * <p>The ARN of the Amazon Braket job.</p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon Braket job.</p>
     */
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }

    /**
     * <p>The ARN of the Amazon Braket job.</p>
     */
    inline JobSummary& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon Braket job.</p>
     */
    inline JobSummary& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon Braket job.</p>
     */
    inline JobSummary& WithJobArn(const char* value) { SetJobArn(value); return *this;}


    /**
     * <p>The name of the Amazon Braket job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the Amazon Braket job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Braket job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the Amazon Braket job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the Amazon Braket job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the Amazon Braket job.</p>
     */
    inline JobSummary& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the Amazon Braket job.</p>
     */
    inline JobSummary& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Braket job.</p>
     */
    inline JobSummary& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The date and time that the Amazon Braket job was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The date and time that the Amazon Braket job was started.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The date and time that the Amazon Braket job was started.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The date and time that the Amazon Braket job was started.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p>The date and time that the Amazon Braket job was started.</p>
     */
    inline JobSummary& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The date and time that the Amazon Braket job was started.</p>
     */
    inline JobSummary& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The status of the Amazon Braket job.</p>
     */
    inline const JobPrimaryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Amazon Braket job.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Amazon Braket job.</p>
     */
    inline void SetStatus(const JobPrimaryStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Amazon Braket job.</p>
     */
    inline void SetStatus(JobPrimaryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Amazon Braket job.</p>
     */
    inline JobSummary& WithStatus(const JobPrimaryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Amazon Braket job.</p>
     */
    inline JobSummary& WithStatus(JobPrimaryStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline JobSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline JobSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline JobSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline JobSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline JobSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline JobSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline JobSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline JobSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline JobSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_device;
    bool m_deviceHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    JobPrimaryStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
