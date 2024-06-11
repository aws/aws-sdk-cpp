/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>An object that contains information about the job template.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/JobTemplateSummary">AWS
   * API Reference</a></p>
   */
  class JobTemplateSummary
  {
  public:
    AWS_IOT_API JobTemplateSummary();
    AWS_IOT_API JobTemplateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API JobTemplateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the job template.</p>
     */
    inline const Aws::String& GetJobTemplateArn() const{ return m_jobTemplateArn; }
    inline bool JobTemplateArnHasBeenSet() const { return m_jobTemplateArnHasBeenSet; }
    inline void SetJobTemplateArn(const Aws::String& value) { m_jobTemplateArnHasBeenSet = true; m_jobTemplateArn = value; }
    inline void SetJobTemplateArn(Aws::String&& value) { m_jobTemplateArnHasBeenSet = true; m_jobTemplateArn = std::move(value); }
    inline void SetJobTemplateArn(const char* value) { m_jobTemplateArnHasBeenSet = true; m_jobTemplateArn.assign(value); }
    inline JobTemplateSummary& WithJobTemplateArn(const Aws::String& value) { SetJobTemplateArn(value); return *this;}
    inline JobTemplateSummary& WithJobTemplateArn(Aws::String&& value) { SetJobTemplateArn(std::move(value)); return *this;}
    inline JobTemplateSummary& WithJobTemplateArn(const char* value) { SetJobTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline const Aws::String& GetJobTemplateId() const{ return m_jobTemplateId; }
    inline bool JobTemplateIdHasBeenSet() const { return m_jobTemplateIdHasBeenSet; }
    inline void SetJobTemplateId(const Aws::String& value) { m_jobTemplateIdHasBeenSet = true; m_jobTemplateId = value; }
    inline void SetJobTemplateId(Aws::String&& value) { m_jobTemplateIdHasBeenSet = true; m_jobTemplateId = std::move(value); }
    inline void SetJobTemplateId(const char* value) { m_jobTemplateIdHasBeenSet = true; m_jobTemplateId.assign(value); }
    inline JobTemplateSummary& WithJobTemplateId(const Aws::String& value) { SetJobTemplateId(value); return *this;}
    inline JobTemplateSummary& WithJobTemplateId(Aws::String&& value) { SetJobTemplateId(std::move(value)); return *this;}
    inline JobTemplateSummary& WithJobTemplateId(const char* value) { SetJobTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the job template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline JobTemplateSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline JobTemplateSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline JobTemplateSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline JobTemplateSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline JobTemplateSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobTemplateArn;
    bool m_jobTemplateArnHasBeenSet = false;

    Aws::String m_jobTemplateId;
    bool m_jobTemplateIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
