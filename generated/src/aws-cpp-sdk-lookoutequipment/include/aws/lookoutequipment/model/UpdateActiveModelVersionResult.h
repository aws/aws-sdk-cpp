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
    AWS_LOOKOUTEQUIPMENT_API UpdateActiveModelVersionResult();
    AWS_LOOKOUTEQUIPMENT_API UpdateActiveModelVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API UpdateActiveModelVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the machine learning model for which the active model version was
     * set.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the machine learning model for which the active model version was
     * set.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelName = value; }

    /**
     * <p>The name of the machine learning model for which the active model version was
     * set.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelName = std::move(value); }

    /**
     * <p>The name of the machine learning model for which the active model version was
     * set.</p>
     */
    inline void SetModelName(const char* value) { m_modelName.assign(value); }

    /**
     * <p>The name of the machine learning model for which the active model version was
     * set.</p>
     */
    inline UpdateActiveModelVersionResult& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the machine learning model for which the active model version was
     * set.</p>
     */
    inline UpdateActiveModelVersionResult& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the machine learning model for which the active model version was
     * set.</p>
     */
    inline UpdateActiveModelVersionResult& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model for which the
     * active model version was set.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model for which the
     * active model version was set.</p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model for which the
     * active model version was set.</p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model for which the
     * active model version was set.</p>
     */
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model for which the
     * active model version was set.</p>
     */
    inline UpdateActiveModelVersionResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model for which the
     * active model version was set.</p>
     */
    inline UpdateActiveModelVersionResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model for which the
     * active model version was set.</p>
     */
    inline UpdateActiveModelVersionResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>The version that is currently active of the machine learning model for which
     * the active model version was set.</p>
     */
    inline long long GetCurrentActiveVersion() const{ return m_currentActiveVersion; }

    /**
     * <p>The version that is currently active of the machine learning model for which
     * the active model version was set.</p>
     */
    inline void SetCurrentActiveVersion(long long value) { m_currentActiveVersion = value; }

    /**
     * <p>The version that is currently active of the machine learning model for which
     * the active model version was set.</p>
     */
    inline UpdateActiveModelVersionResult& WithCurrentActiveVersion(long long value) { SetCurrentActiveVersion(value); return *this;}


    /**
     * <p>The previous version that was active of the machine learning model for which
     * the active model version was set.</p>
     */
    inline long long GetPreviousActiveVersion() const{ return m_previousActiveVersion; }

    /**
     * <p>The previous version that was active of the machine learning model for which
     * the active model version was set.</p>
     */
    inline void SetPreviousActiveVersion(long long value) { m_previousActiveVersion = value; }

    /**
     * <p>The previous version that was active of the machine learning model for which
     * the active model version was set.</p>
     */
    inline UpdateActiveModelVersionResult& WithPreviousActiveVersion(long long value) { SetPreviousActiveVersion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model version that is
     * the current active model version.</p>
     */
    inline const Aws::String& GetCurrentActiveVersionArn() const{ return m_currentActiveVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model version that is
     * the current active model version.</p>
     */
    inline void SetCurrentActiveVersionArn(const Aws::String& value) { m_currentActiveVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model version that is
     * the current active model version.</p>
     */
    inline void SetCurrentActiveVersionArn(Aws::String&& value) { m_currentActiveVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model version that is
     * the current active model version.</p>
     */
    inline void SetCurrentActiveVersionArn(const char* value) { m_currentActiveVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model version that is
     * the current active model version.</p>
     */
    inline UpdateActiveModelVersionResult& WithCurrentActiveVersionArn(const Aws::String& value) { SetCurrentActiveVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model version that is
     * the current active model version.</p>
     */
    inline UpdateActiveModelVersionResult& WithCurrentActiveVersionArn(Aws::String&& value) { SetCurrentActiveVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model version that is
     * the current active model version.</p>
     */
    inline UpdateActiveModelVersionResult& WithCurrentActiveVersionArn(const char* value) { SetCurrentActiveVersionArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model version that was
     * the previous active model version.</p>
     */
    inline const Aws::String& GetPreviousActiveVersionArn() const{ return m_previousActiveVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model version that was
     * the previous active model version.</p>
     */
    inline void SetPreviousActiveVersionArn(const Aws::String& value) { m_previousActiveVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model version that was
     * the previous active model version.</p>
     */
    inline void SetPreviousActiveVersionArn(Aws::String&& value) { m_previousActiveVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model version that was
     * the previous active model version.</p>
     */
    inline void SetPreviousActiveVersionArn(const char* value) { m_previousActiveVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model version that was
     * the previous active model version.</p>
     */
    inline UpdateActiveModelVersionResult& WithPreviousActiveVersionArn(const Aws::String& value) { SetPreviousActiveVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model version that was
     * the previous active model version.</p>
     */
    inline UpdateActiveModelVersionResult& WithPreviousActiveVersionArn(Aws::String&& value) { SetPreviousActiveVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model version that was
     * the previous active model version.</p>
     */
    inline UpdateActiveModelVersionResult& WithPreviousActiveVersionArn(const char* value) { SetPreviousActiveVersionArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateActiveModelVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateActiveModelVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateActiveModelVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_modelName;

    Aws::String m_modelArn;

    long long m_currentActiveVersion;

    long long m_previousActiveVersion;

    Aws::String m_currentActiveVersionArn;

    Aws::String m_previousActiveVersionArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
