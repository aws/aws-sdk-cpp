/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EKS_API Update
  {
  public:
    Update();
    Update(Aws::Utils::Json::JsonView jsonValue);
    Update& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A UUID that is used to track the update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A UUID that is used to track the update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A UUID that is used to track the update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A UUID that is used to track the update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A UUID that is used to track the update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A UUID that is used to track the update.</p>
     */
    inline Update& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A UUID that is used to track the update.</p>
     */
    inline Update& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A UUID that is used to track the update.</p>
     */
    inline Update& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The current status of the update.</p>
     */
    inline const UpdateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the update.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the update.</p>
     */
    inline void SetStatus(const UpdateStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the update.</p>
     */
    inline void SetStatus(UpdateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the update.</p>
     */
    inline Update& WithStatus(const UpdateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the update.</p>
     */
    inline Update& WithStatus(UpdateStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The type of the update.</p>
     */
    inline const UpdateType& GetType() const{ return m_type; }

    /**
     * <p>The type of the update.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the update.</p>
     */
    inline void SetType(const UpdateType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the update.</p>
     */
    inline void SetType(UpdateType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the update.</p>
     */
    inline Update& WithType(const UpdateType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the update.</p>
     */
    inline Update& WithType(UpdateType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A key-value map that contains the parameters associated with the update.</p>
     */
    inline const Aws::Vector<UpdateParam>& GetParams() const{ return m_params; }

    /**
     * <p>A key-value map that contains the parameters associated with the update.</p>
     */
    inline bool ParamsHasBeenSet() const { return m_paramsHasBeenSet; }

    /**
     * <p>A key-value map that contains the parameters associated with the update.</p>
     */
    inline void SetParams(const Aws::Vector<UpdateParam>& value) { m_paramsHasBeenSet = true; m_params = value; }

    /**
     * <p>A key-value map that contains the parameters associated with the update.</p>
     */
    inline void SetParams(Aws::Vector<UpdateParam>&& value) { m_paramsHasBeenSet = true; m_params = std::move(value); }

    /**
     * <p>A key-value map that contains the parameters associated with the update.</p>
     */
    inline Update& WithParams(const Aws::Vector<UpdateParam>& value) { SetParams(value); return *this;}

    /**
     * <p>A key-value map that contains the parameters associated with the update.</p>
     */
    inline Update& WithParams(Aws::Vector<UpdateParam>&& value) { SetParams(std::move(value)); return *this;}

    /**
     * <p>A key-value map that contains the parameters associated with the update.</p>
     */
    inline Update& AddParams(const UpdateParam& value) { m_paramsHasBeenSet = true; m_params.push_back(value); return *this; }

    /**
     * <p>A key-value map that contains the parameters associated with the update.</p>
     */
    inline Update& AddParams(UpdateParam&& value) { m_paramsHasBeenSet = true; m_params.push_back(std::move(value)); return *this; }


    /**
     * <p>The Unix epoch timestamp in seconds for when the update was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the update was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the update was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the update was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The Unix epoch timestamp in seconds for when the update was created.</p>
     */
    inline Update& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix epoch timestamp in seconds for when the update was created.</p>
     */
    inline Update& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Any errors associated with a <code>Failed</code> update.</p>
     */
    inline const Aws::Vector<ErrorDetail>& GetErrors() const{ return m_errors; }

    /**
     * <p>Any errors associated with a <code>Failed</code> update.</p>
     */
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }

    /**
     * <p>Any errors associated with a <code>Failed</code> update.</p>
     */
    inline void SetErrors(const Aws::Vector<ErrorDetail>& value) { m_errorsHasBeenSet = true; m_errors = value; }

    /**
     * <p>Any errors associated with a <code>Failed</code> update.</p>
     */
    inline void SetErrors(Aws::Vector<ErrorDetail>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }

    /**
     * <p>Any errors associated with a <code>Failed</code> update.</p>
     */
    inline Update& WithErrors(const Aws::Vector<ErrorDetail>& value) { SetErrors(value); return *this;}

    /**
     * <p>Any errors associated with a <code>Failed</code> update.</p>
     */
    inline Update& WithErrors(Aws::Vector<ErrorDetail>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Any errors associated with a <code>Failed</code> update.</p>
     */
    inline Update& AddErrors(const ErrorDetail& value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }

    /**
     * <p>Any errors associated with a <code>Failed</code> update.</p>
     */
    inline Update& AddErrors(ErrorDetail&& value) { m_errorsHasBeenSet = true; m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    UpdateStatus m_status;
    bool m_statusHasBeenSet;

    UpdateType m_type;
    bool m_typeHasBeenSet;

    Aws::Vector<UpdateParam> m_params;
    bool m_paramsHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Vector<ErrorDetail> m_errors;
    bool m_errorsHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
