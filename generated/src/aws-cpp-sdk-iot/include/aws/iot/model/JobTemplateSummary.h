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
    AWS_IOT_API JobTemplateSummary() = default;
    AWS_IOT_API JobTemplateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API JobTemplateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the job template.</p>
     */
    inline const Aws::String& GetJobTemplateArn() const { return m_jobTemplateArn; }
    inline bool JobTemplateArnHasBeenSet() const { return m_jobTemplateArnHasBeenSet; }
    template<typename JobTemplateArnT = Aws::String>
    void SetJobTemplateArn(JobTemplateArnT&& value) { m_jobTemplateArnHasBeenSet = true; m_jobTemplateArn = std::forward<JobTemplateArnT>(value); }
    template<typename JobTemplateArnT = Aws::String>
    JobTemplateSummary& WithJobTemplateArn(JobTemplateArnT&& value) { SetJobTemplateArn(std::forward<JobTemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline const Aws::String& GetJobTemplateId() const { return m_jobTemplateId; }
    inline bool JobTemplateIdHasBeenSet() const { return m_jobTemplateIdHasBeenSet; }
    template<typename JobTemplateIdT = Aws::String>
    void SetJobTemplateId(JobTemplateIdT&& value) { m_jobTemplateIdHasBeenSet = true; m_jobTemplateId = std::forward<JobTemplateIdT>(value); }
    template<typename JobTemplateIdT = Aws::String>
    JobTemplateSummary& WithJobTemplateId(JobTemplateIdT&& value) { SetJobTemplateId(std::forward<JobTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the job template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    JobTemplateSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    JobTemplateSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobTemplateArn;
    bool m_jobTemplateArnHasBeenSet = false;

    Aws::String m_jobTemplateId;
    bool m_jobTemplateIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
