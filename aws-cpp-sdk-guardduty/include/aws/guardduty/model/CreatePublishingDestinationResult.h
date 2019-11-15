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
  class AWS_GUARDDUTY_API CreatePublishingDestinationResult
  {
  public:
    CreatePublishingDestinationResult();
    CreatePublishingDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreatePublishingDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the publishing destination created.</p>
     */
    inline const Aws::String& GetDestinationId() const{ return m_destinationId; }

    /**
     * <p>The ID of the publishing destination created.</p>
     */
    inline void SetDestinationId(const Aws::String& value) { m_destinationId = value; }

    /**
     * <p>The ID of the publishing destination created.</p>
     */
    inline void SetDestinationId(Aws::String&& value) { m_destinationId = std::move(value); }

    /**
     * <p>The ID of the publishing destination created.</p>
     */
    inline void SetDestinationId(const char* value) { m_destinationId.assign(value); }

    /**
     * <p>The ID of the publishing destination created.</p>
     */
    inline CreatePublishingDestinationResult& WithDestinationId(const Aws::String& value) { SetDestinationId(value); return *this;}

    /**
     * <p>The ID of the publishing destination created.</p>
     */
    inline CreatePublishingDestinationResult& WithDestinationId(Aws::String&& value) { SetDestinationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the publishing destination created.</p>
     */
    inline CreatePublishingDestinationResult& WithDestinationId(const char* value) { SetDestinationId(value); return *this;}

  private:

    Aws::String m_destinationId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
