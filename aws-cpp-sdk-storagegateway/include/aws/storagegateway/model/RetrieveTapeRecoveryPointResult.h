﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>RetrieveTapeRecoveryPointOutput</p>
   */
  class AWS_STORAGEGATEWAY_API RetrieveTapeRecoveryPointResult
  {
  public:
    RetrieveTapeRecoveryPointResult();
    RetrieveTapeRecoveryPointResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RetrieveTapeRecoveryPointResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape for which the recovery
     * point was retrieved.</p>
     */
    inline const Aws::String& GetTapeARN() const{ return m_tapeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape for which the recovery
     * point was retrieved.</p>
     */
    inline void SetTapeARN(const Aws::String& value) { m_tapeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape for which the recovery
     * point was retrieved.</p>
     */
    inline void SetTapeARN(Aws::String&& value) { m_tapeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape for which the recovery
     * point was retrieved.</p>
     */
    inline void SetTapeARN(const char* value) { m_tapeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape for which the recovery
     * point was retrieved.</p>
     */
    inline RetrieveTapeRecoveryPointResult& WithTapeARN(const Aws::String& value) { SetTapeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape for which the recovery
     * point was retrieved.</p>
     */
    inline RetrieveTapeRecoveryPointResult& WithTapeARN(Aws::String&& value) { SetTapeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape for which the recovery
     * point was retrieved.</p>
     */
    inline RetrieveTapeRecoveryPointResult& WithTapeARN(const char* value) { SetTapeARN(value); return *this;}

  private:
    Aws::String m_tapeARN;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
