/**
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
  class DeleteTapePoolResult
  {
  public:
    AWS_STORAGEGATEWAY_API DeleteTapePoolResult();
    AWS_STORAGEGATEWAY_API DeleteTapePoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DeleteTapePoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool being deleted.</p>
     */
    inline const Aws::String& GetPoolARN() const{ return m_poolARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool being deleted.</p>
     */
    inline void SetPoolARN(const Aws::String& value) { m_poolARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool being deleted.</p>
     */
    inline void SetPoolARN(Aws::String&& value) { m_poolARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool being deleted.</p>
     */
    inline void SetPoolARN(const char* value) { m_poolARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool being deleted.</p>
     */
    inline DeleteTapePoolResult& WithPoolARN(const Aws::String& value) { SetPoolARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool being deleted.</p>
     */
    inline DeleteTapePoolResult& WithPoolARN(Aws::String&& value) { SetPoolARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool being deleted.</p>
     */
    inline DeleteTapePoolResult& WithPoolARN(const char* value) { SetPoolARN(value); return *this;}

  private:

    Aws::String m_poolARN;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
