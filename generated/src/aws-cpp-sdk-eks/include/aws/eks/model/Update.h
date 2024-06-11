﻿/**
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
    AWS_EKS_API Update();
    AWS_EKS_API Update(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Update& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A UUID that is used to track the update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Update& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Update& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Update& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the update.</p>
     */
    inline const UpdateStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const UpdateStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(UpdateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Update& WithStatus(const UpdateStatus& value) { SetStatus(value); return *this;}
    inline Update& WithStatus(UpdateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the update.</p>
     */
    inline const UpdateType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const UpdateType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(UpdateType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Update& WithType(const UpdateType& value) { SetType(value); return *this;}
    inline Update& WithType(UpdateType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value map that contains the parameters associated with the update.</p>
     */
    inline const Aws::Vector<UpdateParam>& GetParams() const{ return m_params; }
    inline bool ParamsHasBeenSet() const { return m_paramsHasBeenSet; }
    inline void SetParams(const Aws::Vector<UpdateParam>& value) { m_paramsHasBeenSet = true; m_params = value; }
    inline void SetParams(Aws::Vector<UpdateParam>&& value) { m_paramsHasBeenSet = true; m_params = std::move(value); }
    inline Update& WithParams(const Aws::Vector<UpdateParam>& value) { SetParams(value); return *this;}
    inline Update& WithParams(Aws::Vector<UpdateParam>&& value) { SetParams(std::move(value)); return *this;}
    inline Update& AddParams(const UpdateParam& value) { m_paramsHasBeenSet = true; m_params.push_back(value); return *this; }
    inline Update& AddParams(UpdateParam&& value) { m_paramsHasBeenSet = true; m_params.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Unix epoch timestamp at object creation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Update& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Update& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any errors associated with a <code>Failed</code> update.</p>
     */
    inline const Aws::Vector<ErrorDetail>& GetErrors() const{ return m_errors; }
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
    inline void SetErrors(const Aws::Vector<ErrorDetail>& value) { m_errorsHasBeenSet = true; m_errors = value; }
    inline void SetErrors(Aws::Vector<ErrorDetail>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }
    inline Update& WithErrors(const Aws::Vector<ErrorDetail>& value) { SetErrors(value); return *this;}
    inline Update& WithErrors(Aws::Vector<ErrorDetail>&& value) { SetErrors(std::move(value)); return *this;}
    inline Update& AddErrors(const ErrorDetail& value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }
    inline Update& AddErrors(ErrorDetail&& value) { m_errorsHasBeenSet = true; m_errors.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    UpdateStatus m_status;
    bool m_statusHasBeenSet = false;

    UpdateType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<UpdateParam> m_params;
    bool m_paramsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<ErrorDetail> m_errors;
    bool m_errorsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
