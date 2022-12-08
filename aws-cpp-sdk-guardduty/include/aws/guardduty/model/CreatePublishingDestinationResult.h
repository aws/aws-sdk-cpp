/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{
  class CreatePublishingDestinationResult
  {
  public:
    AWS_GUARDDUTY_API CreatePublishingDestinationResult();
    AWS_GUARDDUTY_API CreatePublishingDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API CreatePublishingDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the publishing destination that is created.</p>
     */
    inline const Aws::String& GetDestinationId() const{ return m_destinationId; }

    /**
     * <p>The ID of the publishing destination that is created.</p>
     */
    inline void SetDestinationId(const Aws::String& value) { m_destinationId = value; }

    /**
     * <p>The ID of the publishing destination that is created.</p>
     */
    inline void SetDestinationId(Aws::String&& value) { m_destinationId = std::move(value); }

    /**
     * <p>The ID of the publishing destination that is created.</p>
     */
    inline void SetDestinationId(const char* value) { m_destinationId.assign(value); }

    /**
     * <p>The ID of the publishing destination that is created.</p>
     */
    inline CreatePublishingDestinationResult& WithDestinationId(const Aws::String& value) { SetDestinationId(value); return *this;}

    /**
     * <p>The ID of the publishing destination that is created.</p>
     */
    inline CreatePublishingDestinationResult& WithDestinationId(Aws::String&& value) { SetDestinationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the publishing destination that is created.</p>
     */
    inline CreatePublishingDestinationResult& WithDestinationId(const char* value) { SetDestinationId(value); return *this;}

  private:

    Aws::String m_destinationId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
