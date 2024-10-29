/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/InferenceProfileStatus.h>
#include <aws/bedrock/model/InferenceProfileType.h>
#include <aws/bedrock/model/InferenceProfileModel.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Contains information about an inference profile.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/InferenceProfileSummary">AWS
   * API Reference</a></p>
   */
  class InferenceProfileSummary
  {
  public:
    AWS_BEDROCK_API InferenceProfileSummary();
    AWS_BEDROCK_API InferenceProfileSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API InferenceProfileSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the inference profile.</p>
     */
    inline const Aws::String& GetInferenceProfileName() const{ return m_inferenceProfileName; }
    inline bool InferenceProfileNameHasBeenSet() const { return m_inferenceProfileNameHasBeenSet; }
    inline void SetInferenceProfileName(const Aws::String& value) { m_inferenceProfileNameHasBeenSet = true; m_inferenceProfileName = value; }
    inline void SetInferenceProfileName(Aws::String&& value) { m_inferenceProfileNameHasBeenSet = true; m_inferenceProfileName = std::move(value); }
    inline void SetInferenceProfileName(const char* value) { m_inferenceProfileNameHasBeenSet = true; m_inferenceProfileName.assign(value); }
    inline InferenceProfileSummary& WithInferenceProfileName(const Aws::String& value) { SetInferenceProfileName(value); return *this;}
    inline InferenceProfileSummary& WithInferenceProfileName(Aws::String&& value) { SetInferenceProfileName(std::move(value)); return *this;}
    inline InferenceProfileSummary& WithInferenceProfileName(const char* value) { SetInferenceProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the inference profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline InferenceProfileSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline InferenceProfileSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline InferenceProfileSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the inference profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline InferenceProfileSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline InferenceProfileSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the inference profile was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline InferenceProfileSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline InferenceProfileSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the inference profile.</p>
     */
    inline const Aws::String& GetInferenceProfileArn() const{ return m_inferenceProfileArn; }
    inline bool InferenceProfileArnHasBeenSet() const { return m_inferenceProfileArnHasBeenSet; }
    inline void SetInferenceProfileArn(const Aws::String& value) { m_inferenceProfileArnHasBeenSet = true; m_inferenceProfileArn = value; }
    inline void SetInferenceProfileArn(Aws::String&& value) { m_inferenceProfileArnHasBeenSet = true; m_inferenceProfileArn = std::move(value); }
    inline void SetInferenceProfileArn(const char* value) { m_inferenceProfileArnHasBeenSet = true; m_inferenceProfileArn.assign(value); }
    inline InferenceProfileSummary& WithInferenceProfileArn(const Aws::String& value) { SetInferenceProfileArn(value); return *this;}
    inline InferenceProfileSummary& WithInferenceProfileArn(Aws::String&& value) { SetInferenceProfileArn(std::move(value)); return *this;}
    inline InferenceProfileSummary& WithInferenceProfileArn(const char* value) { SetInferenceProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of information about each model in the inference profile.</p>
     */
    inline const Aws::Vector<InferenceProfileModel>& GetModels() const{ return m_models; }
    inline bool ModelsHasBeenSet() const { return m_modelsHasBeenSet; }
    inline void SetModels(const Aws::Vector<InferenceProfileModel>& value) { m_modelsHasBeenSet = true; m_models = value; }
    inline void SetModels(Aws::Vector<InferenceProfileModel>&& value) { m_modelsHasBeenSet = true; m_models = std::move(value); }
    inline InferenceProfileSummary& WithModels(const Aws::Vector<InferenceProfileModel>& value) { SetModels(value); return *this;}
    inline InferenceProfileSummary& WithModels(Aws::Vector<InferenceProfileModel>&& value) { SetModels(std::move(value)); return *this;}
    inline InferenceProfileSummary& AddModels(const InferenceProfileModel& value) { m_modelsHasBeenSet = true; m_models.push_back(value); return *this; }
    inline InferenceProfileSummary& AddModels(InferenceProfileModel&& value) { m_modelsHasBeenSet = true; m_models.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the inference profile.</p>
     */
    inline const Aws::String& GetInferenceProfileId() const{ return m_inferenceProfileId; }
    inline bool InferenceProfileIdHasBeenSet() const { return m_inferenceProfileIdHasBeenSet; }
    inline void SetInferenceProfileId(const Aws::String& value) { m_inferenceProfileIdHasBeenSet = true; m_inferenceProfileId = value; }
    inline void SetInferenceProfileId(Aws::String&& value) { m_inferenceProfileIdHasBeenSet = true; m_inferenceProfileId = std::move(value); }
    inline void SetInferenceProfileId(const char* value) { m_inferenceProfileIdHasBeenSet = true; m_inferenceProfileId.assign(value); }
    inline InferenceProfileSummary& WithInferenceProfileId(const Aws::String& value) { SetInferenceProfileId(value); return *this;}
    inline InferenceProfileSummary& WithInferenceProfileId(Aws::String&& value) { SetInferenceProfileId(std::move(value)); return *this;}
    inline InferenceProfileSummary& WithInferenceProfileId(const char* value) { SetInferenceProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the inference profile. <code>ACTIVE</code> means that the
     * inference profile is ready to be used.</p>
     */
    inline const InferenceProfileStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const InferenceProfileStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(InferenceProfileStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline InferenceProfileSummary& WithStatus(const InferenceProfileStatus& value) { SetStatus(value); return *this;}
    inline InferenceProfileSummary& WithStatus(InferenceProfileStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the inference profile. The following types are possible:</p> <ul>
     * <li> <p> <code>SYSTEM_DEFINED</code> – The inference profile is defined by
     * Amazon Bedrock. You can route inference requests across regions with these
     * inference profiles.</p> </li> <li> <p> <code>APPLICATION</code> – The inference
     * profile was created by a user. This type of inference profile can track metrics
     * and costs when invoking the model in it. The inference profile may route
     * requests to one or multiple regions.</p> </li> </ul>
     */
    inline const InferenceProfileType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const InferenceProfileType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(InferenceProfileType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline InferenceProfileSummary& WithType(const InferenceProfileType& value) { SetType(value); return *this;}
    inline InferenceProfileSummary& WithType(InferenceProfileType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_inferenceProfileName;
    bool m_inferenceProfileNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_inferenceProfileArn;
    bool m_inferenceProfileArnHasBeenSet = false;

    Aws::Vector<InferenceProfileModel> m_models;
    bool m_modelsHasBeenSet = false;

    Aws::String m_inferenceProfileId;
    bool m_inferenceProfileIdHasBeenSet = false;

    InferenceProfileStatus m_status;
    bool m_statusHasBeenSet = false;

    InferenceProfileType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
