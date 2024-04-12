/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
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
namespace KMS
{
namespace Model
{
  class RotateKeyOnDemandResult
  {
  public:
    AWS_KMS_API RotateKeyOnDemandResult();
    AWS_KMS_API RotateKeyOnDemandResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API RotateKeyOnDemandResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Identifies the symmetric encryption KMS key that you initiated on-demand
     * rotation on.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>Identifies the symmetric encryption KMS key that you initiated on-demand
     * rotation on.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>Identifies the symmetric encryption KMS key that you initiated on-demand
     * rotation on.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }

    /**
     * <p>Identifies the symmetric encryption KMS key that you initiated on-demand
     * rotation on.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>Identifies the symmetric encryption KMS key that you initiated on-demand
     * rotation on.</p>
     */
    inline RotateKeyOnDemandResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Identifies the symmetric encryption KMS key that you initiated on-demand
     * rotation on.</p>
     */
    inline RotateKeyOnDemandResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Identifies the symmetric encryption KMS key that you initiated on-demand
     * rotation on.</p>
     */
    inline RotateKeyOnDemandResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RotateKeyOnDemandResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RotateKeyOnDemandResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RotateKeyOnDemandResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_keyId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
