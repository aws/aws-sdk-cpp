/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/UpdateStatus.h>
#include <aws/eks/model/UpdateType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/eks/model/UpdateParam.h>
#include <aws/eks/model/ErrorDetail.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing an asynchronous update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/Update">AWS API
   * Reference</a></p>
   */
  class Update
  {
  public:
    AWS_EKS_API Update() = default;
    AWS_EKS_API Update(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Update& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A UUID that is used to track the update.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Update& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the update.</p>
     */
    inline UpdateStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(UpdateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Update& WithStatus(UpdateStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the update.</p>
     */
    inline UpdateType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(UpdateType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Update& WithType(UpdateType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value map that contains the parameters associated with the update.</p>
     */
    inline const Aws::Vector<UpdateParam>& GetParams() const { return m_params; }
    inline bool ParamsHasBeenSet() const { return m_paramsHasBeenSet; }
    template<typename ParamsT = Aws::Vector<UpdateParam>>
    void SetParams(ParamsT&& value) { m_paramsHasBeenSet = true; m_params = std::forward<ParamsT>(value); }
    template<typename ParamsT = Aws::Vector<UpdateParam>>
    Update& WithParams(ParamsT&& value) { SetParams(std::forward<ParamsT>(value)); return *this;}
    template<typename ParamsT = UpdateParam>
    Update& AddParams(ParamsT&& value) { m_paramsHasBeenSet = true; m_params.emplace_back(std::forward<ParamsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Unix epoch timestamp at object creation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Update& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any errors associated with a <code>Failed</code> update.</p>
     */
    inline const Aws::Vector<ErrorDetail>& GetErrors() const { return m_errors; }
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
    template<typename ErrorsT = Aws::Vector<ErrorDetail>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<ErrorDetail>>
    Update& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = ErrorDetail>
    Update& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    UpdateStatus m_status{UpdateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    UpdateType m_type{UpdateType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<UpdateParam> m_params;
    bool m_paramsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<ErrorDetail> m_errors;
    bool m_errorsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
