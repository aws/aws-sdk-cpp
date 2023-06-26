/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/model/KeyMetadata.h>
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
  class DescribeKeyResult
  {
  public:
    AWS_KMS_API DescribeKeyResult();
    AWS_KMS_API DescribeKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API DescribeKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata associated with the key.</p>
     */
    inline const KeyMetadata& GetKeyMetadata() const{ return m_keyMetadata; }

    /**
     * <p>Metadata associated with the key.</p>
     */
    inline void SetKeyMetadata(const KeyMetadata& value) { m_keyMetadata = value; }

    /**
     * <p>Metadata associated with the key.</p>
     */
    inline void SetKeyMetadata(KeyMetadata&& value) { m_keyMetadata = std::move(value); }

    /**
     * <p>Metadata associated with the key.</p>
     */
    inline DescribeKeyResult& WithKeyMetadata(const KeyMetadata& value) { SetKeyMetadata(value); return *this;}

    /**
     * <p>Metadata associated with the key.</p>
     */
    inline DescribeKeyResult& WithKeyMetadata(KeyMetadata&& value) { SetKeyMetadata(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    KeyMetadata m_keyMetadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
