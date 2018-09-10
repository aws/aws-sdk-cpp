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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/EncryptionConfig.h>
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
namespace XRay
{
namespace Model
{
  class AWS_XRAY_API PutEncryptionConfigResult
  {
  public:
    PutEncryptionConfigResult();
    PutEncryptionConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutEncryptionConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The new encryption configuration.</p>
     */
    inline const EncryptionConfig& GetEncryptionConfig() const{ return m_encryptionConfig; }

    /**
     * <p>The new encryption configuration.</p>
     */
    inline void SetEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfig = value; }

    /**
     * <p>The new encryption configuration.</p>
     */
    inline void SetEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfig = std::move(value); }

    /**
     * <p>The new encryption configuration.</p>
     */
    inline PutEncryptionConfigResult& WithEncryptionConfig(const EncryptionConfig& value) { SetEncryptionConfig(value); return *this;}

    /**
     * <p>The new encryption configuration.</p>
     */
    inline PutEncryptionConfigResult& WithEncryptionConfig(EncryptionConfig&& value) { SetEncryptionConfig(std::move(value)); return *this;}

  private:

    EncryptionConfig m_encryptionConfig;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
