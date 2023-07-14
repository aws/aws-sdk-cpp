﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>RetrieveTapeArchiveOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/RetrieveTapeArchiveOutput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API RetrieveTapeArchiveResult
  {
  public:
    RetrieveTapeArchiveResult();
    RetrieveTapeArchiveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RetrieveTapeArchiveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the retrieved virtual tape.</p>
     */
    inline const Aws::String& GetTapeARN() const{ return m_tapeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the retrieved virtual tape.</p>
     */
    inline void SetTapeARN(const Aws::String& value) { m_tapeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the retrieved virtual tape.</p>
     */
    inline void SetTapeARN(Aws::String&& value) { m_tapeARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the retrieved virtual tape.</p>
     */
    inline void SetTapeARN(const char* value) { m_tapeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the retrieved virtual tape.</p>
     */
    inline RetrieveTapeArchiveResult& WithTapeARN(const Aws::String& value) { SetTapeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the retrieved virtual tape.</p>
     */
    inline RetrieveTapeArchiveResult& WithTapeARN(Aws::String&& value) { SetTapeARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the retrieved virtual tape.</p>
     */
    inline RetrieveTapeArchiveResult& WithTapeARN(const char* value) { SetTapeARN(value); return *this;}

  private:

    Aws::String m_tapeARN;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
