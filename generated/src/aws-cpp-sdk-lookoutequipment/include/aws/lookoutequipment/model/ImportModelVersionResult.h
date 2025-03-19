/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/ModelVersionStatus.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class ImportModelVersionResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ImportModelVersionResult() = default;
    AWS_LOOKOUTEQUIPMENT_API ImportModelVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ImportModelVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name for the machine learning model.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    ImportModelVersionResult& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model being created. </p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    ImportModelVersionResult& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model version being created. </p>
     */
    inline const Aws::String& GetModelVersionArn() const { return m_modelVersionArn; }
    template<typename ModelVersionArnT = Aws::String>
    void SetModelVersionArn(ModelVersionArnT&& value) { m_modelVersionArnHasBeenSet = true; m_modelVersionArn = std::forward<ModelVersionArnT>(value); }
    template<typename ModelVersionArnT = Aws::String>
    ImportModelVersionResult& WithModelVersionArn(ModelVersionArnT&& value) { SetModelVersionArn(std::forward<ModelVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model being created.</p>
     */
    inline long long GetModelVersion() const { return m_modelVersion; }
    inline void SetModelVersion(long long value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }
    inline ImportModelVersionResult& WithModelVersion(long long value) { SetModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the <code>ImportModelVersion</code> operation. </p>
     */
    inline ModelVersionStatus GetStatus() const { return m_status; }
    inline void SetStatus(ModelVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ImportModelVersionResult& WithStatus(ModelVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ImportModelVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_modelVersionArn;
    bool m_modelVersionArnHasBeenSet = false;

    long long m_modelVersion{0};
    bool m_modelVersionHasBeenSet = false;

    ModelVersionStatus m_status{ModelVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
