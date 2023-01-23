/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
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
namespace ControlTower
{
namespace Model
{
  class EnableControlResult
  {
  public:
    AWS_CONTROLTOWER_API EnableControlResult();
    AWS_CONTROLTOWER_API EnableControlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API EnableControlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the asynchronous operation, which is used to track status. The
     * operation is available for 90 days.</p>
     */
    inline const Aws::String& GetOperationIdentifier() const{ return m_operationIdentifier; }

    /**
     * <p>The ID of the asynchronous operation, which is used to track status. The
     * operation is available for 90 days.</p>
     */
    inline void SetOperationIdentifier(const Aws::String& value) { m_operationIdentifier = value; }

    /**
     * <p>The ID of the asynchronous operation, which is used to track status. The
     * operation is available for 90 days.</p>
     */
    inline void SetOperationIdentifier(Aws::String&& value) { m_operationIdentifier = std::move(value); }

    /**
     * <p>The ID of the asynchronous operation, which is used to track status. The
     * operation is available for 90 days.</p>
     */
    inline void SetOperationIdentifier(const char* value) { m_operationIdentifier.assign(value); }

    /**
     * <p>The ID of the asynchronous operation, which is used to track status. The
     * operation is available for 90 days.</p>
     */
    inline EnableControlResult& WithOperationIdentifier(const Aws::String& value) { SetOperationIdentifier(value); return *this;}

    /**
     * <p>The ID of the asynchronous operation, which is used to track status. The
     * operation is available for 90 days.</p>
     */
    inline EnableControlResult& WithOperationIdentifier(Aws::String&& value) { SetOperationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the asynchronous operation, which is used to track status. The
     * operation is available for 90 days.</p>
     */
    inline EnableControlResult& WithOperationIdentifier(const char* value) { SetOperationIdentifier(value); return *this;}

  private:

    Aws::String m_operationIdentifier;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
