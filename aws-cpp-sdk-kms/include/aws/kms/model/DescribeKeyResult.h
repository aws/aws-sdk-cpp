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
  class AWS_KMS_API DescribeKeyResult
  {
  public:
    DescribeKeyResult();
    DescribeKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
