/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateActiveModelVersionResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API UpdateActiveModelVersionResult() = default;
    AWS_LOOKOUTEQUIPMENT_API UpdateActiveModelVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API UpdateActiveModelVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the machine learning model for which the active model version was
     * set.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    UpdateActiveModelVersionResult& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model for which the
     * active model version was set.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    UpdateActiveModelVersionResult& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version that is currently active of the machine learning model for which
     * the active model version was set.</p>
     */
    inline long long GetCurrentActiveVersion() const { return m_currentActiveVersion; }
    inline void SetCurrentActiveVersion(long long value) { m_currentActiveVersionHasBeenSet = true; m_currentActiveVersion = value; }
    inline UpdateActiveModelVersionResult& WithCurrentActiveVersion(long long value) { SetCurrentActiveVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous version that was active of the machine learning model for which
     * the active model version was set.</p>
     */
    inline long long GetPreviousActiveVersion() const { return m_previousActiveVersion; }
    inline void SetPreviousActiveVersion(long long value) { m_previousActiveVersionHasBeenSet = true; m_previousActiveVersion = value; }
    inline UpdateActiveModelVersionResult& WithPreviousActiveVersion(long long value) { SetPreviousActiveVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model version that is
     * the current active model version.</p>
     */
    inline const Aws::String& GetCurrentActiveVersionArn() const { return m_currentActiveVersionArn; }
    template<typename CurrentActiveVersionArnT = Aws::String>
    void SetCurrentActiveVersionArn(CurrentActiveVersionArnT&& value) { m_currentActiveVersionArnHasBeenSet = true; m_currentActiveVersionArn = std::forward<CurrentActiveVersionArnT>(value); }
    template<typename CurrentActiveVersionArnT = Aws::String>
    UpdateActiveModelVersionResult& WithCurrentActiveVersionArn(CurrentActiveVersionArnT&& value) { SetCurrentActiveVersionArn(std::forward<CurrentActiveVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model version that was
     * the previous active model version.</p>
     */
    inline const Aws::String& GetPreviousActiveVersionArn() const { return m_previousActiveVersionArn; }
    template<typename PreviousActiveVersionArnT = Aws::String>
    void SetPreviousActiveVersionArn(PreviousActiveVersionArnT&& value) { m_previousActiveVersionArnHasBeenSet = true; m_previousActiveVersionArn = std::forward<PreviousActiveVersionArnT>(value); }
    template<typename PreviousActiveVersionArnT = Aws::String>
    UpdateActiveModelVersionResult& WithPreviousActiveVersionArn(PreviousActiveVersionArnT&& value) { SetPreviousActiveVersionArn(std::forward<PreviousActiveVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateActiveModelVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    long long m_currentActiveVersion{0};
    bool m_currentActiveVersionHasBeenSet = false;

    long long m_previousActiveVersion{0};
    bool m_previousActiveVersionHasBeenSet = false;

    Aws::String m_currentActiveVersionArn;
    bool m_currentActiveVersionArnHasBeenSet = false;

    Aws::String m_previousActiveVersionArn;
    bool m_previousActiveVersionArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
