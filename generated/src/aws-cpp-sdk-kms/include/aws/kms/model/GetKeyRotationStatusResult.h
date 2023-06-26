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
  class GetKeyRotationStatusResult
  {
  public:
    AWS_KMS_API GetKeyRotationStatusResult();
    AWS_KMS_API GetKeyRotationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GetKeyRotationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A Boolean value that specifies whether key rotation is enabled.</p>
     */
    inline bool GetKeyRotationEnabled() const{ return m_keyRotationEnabled; }

    /**
     * <p>A Boolean value that specifies whether key rotation is enabled.</p>
     */
    inline void SetKeyRotationEnabled(bool value) { m_keyRotationEnabled = value; }

    /**
     * <p>A Boolean value that specifies whether key rotation is enabled.</p>
     */
    inline GetKeyRotationStatusResult& WithKeyRotationEnabled(bool value) { SetKeyRotationEnabled(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetKeyRotationStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetKeyRotationStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetKeyRotationStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_keyRotationEnabled;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
