/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{
  class CreateMeetingDialOutResult
  {
  public:
    AWS_CHIME_API CreateMeetingDialOutResult();
    AWS_CHIME_API CreateMeetingDialOutResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API CreateMeetingDialOutResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Unique ID that tracks API calls.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>Unique ID that tracks API calls.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionId = value; }

    /**
     * <p>Unique ID that tracks API calls.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionId = std::move(value); }

    /**
     * <p>Unique ID that tracks API calls.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionId.assign(value); }

    /**
     * <p>Unique ID that tracks API calls.</p>
     */
    inline CreateMeetingDialOutResult& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>Unique ID that tracks API calls.</p>
     */
    inline CreateMeetingDialOutResult& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>Unique ID that tracks API calls.</p>
     */
    inline CreateMeetingDialOutResult& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}

  private:

    Aws::String m_transactionId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
