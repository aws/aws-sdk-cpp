/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/model/KeyMetadata.h>
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

  private:

    KeyMetadata m_keyMetadata;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
