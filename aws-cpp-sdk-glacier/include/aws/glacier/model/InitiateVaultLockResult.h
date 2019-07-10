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
#include <aws/glacier/Glacier_EXPORTS.h>
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
namespace Glacier
{
namespace Model
{
  /**
   * <p>Contains the Amazon S3 Glacier response to your request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/InitiateVaultLockOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GLACIER_API InitiateVaultLockResult
  {
  public:
    InitiateVaultLockResult();
    InitiateVaultLockResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    InitiateVaultLockResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The lock ID, which is used to complete the vault locking process.</p>
     */
    inline const Aws::String& GetLockId() const{ return m_lockId; }

    /**
     * <p>The lock ID, which is used to complete the vault locking process.</p>
     */
    inline void SetLockId(const Aws::String& value) { m_lockId = value; }

    /**
     * <p>The lock ID, which is used to complete the vault locking process.</p>
     */
    inline void SetLockId(Aws::String&& value) { m_lockId = std::move(value); }

    /**
     * <p>The lock ID, which is used to complete the vault locking process.</p>
     */
    inline void SetLockId(const char* value) { m_lockId.assign(value); }

    /**
     * <p>The lock ID, which is used to complete the vault locking process.</p>
     */
    inline InitiateVaultLockResult& WithLockId(const Aws::String& value) { SetLockId(value); return *this;}

    /**
     * <p>The lock ID, which is used to complete the vault locking process.</p>
     */
    inline InitiateVaultLockResult& WithLockId(Aws::String&& value) { SetLockId(std::move(value)); return *this;}

    /**
     * <p>The lock ID, which is used to complete the vault locking process.</p>
     */
    inline InitiateVaultLockResult& WithLockId(const char* value) { SetLockId(value); return *this;}

  private:

    Aws::String m_lockId;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
