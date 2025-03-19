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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Bedrock
{
namespace Model
{
  class GetInferenceProfileResult
  {
  public:
    AWS_BEDROCK_API GetInferenceProfileResult() = default;
    AWS_BEDROCK_API GetInferenceProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetInferenceProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the inference profile.</p>
     */
    inline const Aws::String& GetInferenceProfileName() const { return m_inferenceProfileName; }
    template<typename InferenceProfileNameT = Aws::String>
    void SetInferenceProfileName(InferenceProfileNameT&& value) { m_inferenceProfileNameHasBeenSet = true; m_inferenceProfileName = std::forward<InferenceProfileNameT>(value); }
    template<typename InferenceProfileNameT = Aws::String>
    GetInferenceProfileResult& WithInferenceProfileName(InferenceProfileNameT&& value) { SetInferenceProfileName(std::forward<InferenceProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the inference profile.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetInferenceProfileResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the inference profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetInferenceProfileResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the inference profile was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetInferenceProfileResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the inference profile.</p>
     */
    inline const Aws::String& GetInferenceProfileArn() const { return m_inferenceProfileArn; }
    template<typename InferenceProfileArnT = Aws::String>
    void SetInferenceProfileArn(InferenceProfileArnT&& value) { m_inferenceProfileArnHasBeenSet = true; m_inferenceProfileArn = std::forward<InferenceProfileArnT>(value); }
    template<typename InferenceProfileArnT = Aws::String>
    GetInferenceProfileResult& WithInferenceProfileArn(InferenceProfileArnT&& value) { SetInferenceProfileArn(std::forward<InferenceProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of information about each model in the inference profile.</p>
     */
    inline const Aws::Vector<InferenceProfileModel>& GetModels() const { return m_models; }
    template<typename ModelsT = Aws::Vector<InferenceProfileModel>>
    void SetModels(ModelsT&& value) { m_modelsHasBeenSet = true; m_models = std::forward<ModelsT>(value); }
    template<typename ModelsT = Aws::Vector<InferenceProfileModel>>
    GetInferenceProfileResult& WithModels(ModelsT&& value) { SetModels(std::forward<ModelsT>(value)); return *this;}
    template<typename ModelsT = InferenceProfileModel>
    GetInferenceProfileResult& AddModels(ModelsT&& value) { m_modelsHasBeenSet = true; m_models.emplace_back(std::forward<ModelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the inference profile.</p>
     */
    inline const Aws::String& GetInferenceProfileId() const { return m_inferenceProfileId; }
    template<typename InferenceProfileIdT = Aws::String>
    void SetInferenceProfileId(InferenceProfileIdT&& value) { m_inferenceProfileIdHasBeenSet = true; m_inferenceProfileId = std::forward<InferenceProfileIdT>(value); }
    template<typename InferenceProfileIdT = Aws::String>
    GetInferenceProfileResult& WithInferenceProfileId(InferenceProfileIdT&& value) { SetInferenceProfileId(std::forward<InferenceProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the inference profile. <code>ACTIVE</code> means that the
     * inference profile is ready to be used.</p>
     */
    inline InferenceProfileStatus GetStatus() const { return m_status; }
    inline void SetStatus(InferenceProfileStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetInferenceProfileResult& WithStatus(InferenceProfileStatus value) { SetStatus(value); return *this;}
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
    inline InferenceProfileType GetType() const { return m_type; }
    inline void SetType(InferenceProfileType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetInferenceProfileResult& WithType(InferenceProfileType value) { SetType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInferenceProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inferenceProfileName;
    bool m_inferenceProfileNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_inferenceProfileArn;
    bool m_inferenceProfileArnHasBeenSet = false;

    Aws::Vector<InferenceProfileModel> m_models;
    bool m_modelsHasBeenSet = false;

    Aws::String m_inferenceProfileId;
    bool m_inferenceProfileIdHasBeenSet = false;

    InferenceProfileStatus m_status{InferenceProfileStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    InferenceProfileType m_type{InferenceProfileType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
