/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/ModelStatus.h>
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
  class CreateModelResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API CreateModelResult();
    AWS_LOOKOUTEQUIPMENT_API CreateModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API CreateModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the model being created. </p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model being created. </p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model being created. </p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model being created. </p>
     */
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model being created. </p>
     */
    inline CreateModelResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model being created. </p>
     */
    inline CreateModelResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model being created. </p>
     */
    inline CreateModelResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>Indicates the status of the <code>CreateModel</code> operation. </p>
     */
    inline const ModelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the status of the <code>CreateModel</code> operation. </p>
     */
    inline void SetStatus(const ModelStatus& value) { m_status = value; }

    /**
     * <p>Indicates the status of the <code>CreateModel</code> operation. </p>
     */
    inline void SetStatus(ModelStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Indicates the status of the <code>CreateModel</code> operation. </p>
     */
    inline CreateModelResult& WithStatus(const ModelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the status of the <code>CreateModel</code> operation. </p>
     */
    inline CreateModelResult& WithStatus(ModelStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_modelArn;

    ModelStatus m_status;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
