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
    AWS_BEDROCK_API GetInferenceProfileResult();
    AWS_BEDROCK_API GetInferenceProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetInferenceProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the inference profile.</p>
     */
    inline const Aws::String& GetInferenceProfileName() const{ return m_inferenceProfileName; }
    inline void SetInferenceProfileName(const Aws::String& value) { m_inferenceProfileName = value; }
    inline void SetInferenceProfileName(Aws::String&& value) { m_inferenceProfileName = std::move(value); }
    inline void SetInferenceProfileName(const char* value) { m_inferenceProfileName.assign(value); }
    inline GetInferenceProfileResult& WithInferenceProfileName(const Aws::String& value) { SetInferenceProfileName(value); return *this;}
    inline GetInferenceProfileResult& WithInferenceProfileName(Aws::String&& value) { SetInferenceProfileName(std::move(value)); return *this;}
    inline GetInferenceProfileResult& WithInferenceProfileName(const char* value) { SetInferenceProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the inference profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetInferenceProfileResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetInferenceProfileResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetInferenceProfileResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the inference profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetInferenceProfileResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetInferenceProfileResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the inference profile was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetInferenceProfileResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetInferenceProfileResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the inference profile.</p>
     */
    inline const Aws::String& GetInferenceProfileArn() const{ return m_inferenceProfileArn; }
    inline void SetInferenceProfileArn(const Aws::String& value) { m_inferenceProfileArn = value; }
    inline void SetInferenceProfileArn(Aws::String&& value) { m_inferenceProfileArn = std::move(value); }
    inline void SetInferenceProfileArn(const char* value) { m_inferenceProfileArn.assign(value); }
    inline GetInferenceProfileResult& WithInferenceProfileArn(const Aws::String& value) { SetInferenceProfileArn(value); return *this;}
    inline GetInferenceProfileResult& WithInferenceProfileArn(Aws::String&& value) { SetInferenceProfileArn(std::move(value)); return *this;}
    inline GetInferenceProfileResult& WithInferenceProfileArn(const char* value) { SetInferenceProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of information about each model in the inference profile.</p>
     */
    inline const Aws::Vector<InferenceProfileModel>& GetModels() const{ return m_models; }
    inline void SetModels(const Aws::Vector<InferenceProfileModel>& value) { m_models = value; }
    inline void SetModels(Aws::Vector<InferenceProfileModel>&& value) { m_models = std::move(value); }
    inline GetInferenceProfileResult& WithModels(const Aws::Vector<InferenceProfileModel>& value) { SetModels(value); return *this;}
    inline GetInferenceProfileResult& WithModels(Aws::Vector<InferenceProfileModel>&& value) { SetModels(std::move(value)); return *this;}
    inline GetInferenceProfileResult& AddModels(const InferenceProfileModel& value) { m_models.push_back(value); return *this; }
    inline GetInferenceProfileResult& AddModels(InferenceProfileModel&& value) { m_models.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the inference profile.</p>
     */
    inline const Aws::String& GetInferenceProfileId() const{ return m_inferenceProfileId; }
    inline void SetInferenceProfileId(const Aws::String& value) { m_inferenceProfileId = value; }
    inline void SetInferenceProfileId(Aws::String&& value) { m_inferenceProfileId = std::move(value); }
    inline void SetInferenceProfileId(const char* value) { m_inferenceProfileId.assign(value); }
    inline GetInferenceProfileResult& WithInferenceProfileId(const Aws::String& value) { SetInferenceProfileId(value); return *this;}
    inline GetInferenceProfileResult& WithInferenceProfileId(Aws::String&& value) { SetInferenceProfileId(std::move(value)); return *this;}
    inline GetInferenceProfileResult& WithInferenceProfileId(const char* value) { SetInferenceProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the inference profile. <code>ACTIVE</code> means that the
     * inference profile is ready to be used.</p>
     */
    inline const InferenceProfileStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const InferenceProfileStatus& value) { m_status = value; }
    inline void SetStatus(InferenceProfileStatus&& value) { m_status = std::move(value); }
    inline GetInferenceProfileResult& WithStatus(const InferenceProfileStatus& value) { SetStatus(value); return *this;}
    inline GetInferenceProfileResult& WithStatus(InferenceProfileStatus&& value) { SetStatus(std::move(value)); return *this;}
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
    inline void SetType(const InferenceProfileType& value) { m_type = value; }
    inline void SetType(InferenceProfileType&& value) { m_type = std::move(value); }
    inline GetInferenceProfileResult& WithType(const InferenceProfileType& value) { SetType(value); return *this;}
    inline GetInferenceProfileResult& WithType(InferenceProfileType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetInferenceProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetInferenceProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetInferenceProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_inferenceProfileName;

    Aws::String m_description;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_inferenceProfileArn;

    Aws::Vector<InferenceProfileModel> m_models;

    Aws::String m_inferenceProfileId;

    InferenceProfileStatus m_status;

    InferenceProfileType m_type;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
