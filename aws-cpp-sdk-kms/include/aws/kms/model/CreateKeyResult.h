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
  class AWS_KMS_API CreateKeyResult
  {
  public:
    CreateKeyResult();
    CreateKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata associated with the CMK.</p>
     */
    inline const KeyMetadata& GetKeyMetadata() const{ return m_keyMetadata; }

    /**
     * <p>Metadata associated with the CMK.</p>
     */
    inline void SetKeyMetadata(const KeyMetadata& value) { m_keyMetadata = value; }

    /**
     * <p>Metadata associated with the CMK.</p>
     */
    inline void SetKeyMetadata(KeyMetadata&& value) { m_keyMetadata = std::move(value); }

    /**
     * <p>Metadata associated with the CMK.</p>
     */
    inline CreateKeyResult& WithKeyMetadata(const KeyMetadata& value) { SetKeyMetadata(value); return *this;}

    /**
     * <p>Metadata associated with the CMK.</p>
     */
    inline CreateKeyResult& WithKeyMetadata(KeyMetadata&& value) { SetKeyMetadata(std::move(value)); return *this;}

  private:

    KeyMetadata m_keyMetadata;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
