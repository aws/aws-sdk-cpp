/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/ApiDestinationState.h>
#include <aws/core/utils/DateTime.h>
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
namespace EventBridge
{
namespace Model
{
  class AWS_EVENTBRIDGE_API UpdateApiDestinationResult
  {
  public:
    UpdateApiDestinationResult();
    UpdateApiDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateApiDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the API destination that was updated.</p>
     */
    inline const Aws::String& GetApiDestinationArn() const{ return m_apiDestinationArn; }

    /**
     * <p>The ARN of the API destination that was updated.</p>
     */
    inline void SetApiDestinationArn(const Aws::String& value) { m_apiDestinationArn = value; }

    /**
     * <p>The ARN of the API destination that was updated.</p>
     */
    inline void SetApiDestinationArn(Aws::String&& value) { m_apiDestinationArn = std::move(value); }

    /**
     * <p>The ARN of the API destination that was updated.</p>
     */
    inline void SetApiDestinationArn(const char* value) { m_apiDestinationArn.assign(value); }

    /**
     * <p>The ARN of the API destination that was updated.</p>
     */
    inline UpdateApiDestinationResult& WithApiDestinationArn(const Aws::String& value) { SetApiDestinationArn(value); return *this;}

    /**
     * <p>The ARN of the API destination that was updated.</p>
     */
    inline UpdateApiDestinationResult& WithApiDestinationArn(Aws::String&& value) { SetApiDestinationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the API destination that was updated.</p>
     */
    inline UpdateApiDestinationResult& WithApiDestinationArn(const char* value) { SetApiDestinationArn(value); return *this;}


    /**
     * <p>The state of the API destination that was updated.</p>
     */
    inline const ApiDestinationState& GetApiDestinationState() const{ return m_apiDestinationState; }

    /**
     * <p>The state of the API destination that was updated.</p>
     */
    inline void SetApiDestinationState(const ApiDestinationState& value) { m_apiDestinationState = value; }

    /**
     * <p>The state of the API destination that was updated.</p>
     */
    inline void SetApiDestinationState(ApiDestinationState&& value) { m_apiDestinationState = std::move(value); }

    /**
     * <p>The state of the API destination that was updated.</p>
     */
    inline UpdateApiDestinationResult& WithApiDestinationState(const ApiDestinationState& value) { SetApiDestinationState(value); return *this;}

    /**
     * <p>The state of the API destination that was updated.</p>
     */
    inline UpdateApiDestinationResult& WithApiDestinationState(ApiDestinationState&& value) { SetApiDestinationState(std::move(value)); return *this;}


    /**
     * <p>A time stamp for the time that the API destination was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A time stamp for the time that the API destination was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>A time stamp for the time that the API destination was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>A time stamp for the time that the API destination was created.</p>
     */
    inline UpdateApiDestinationResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A time stamp for the time that the API destination was created.</p>
     */
    inline UpdateApiDestinationResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A time stamp for the time that the API destination was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A time stamp for the time that the API destination was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>A time stamp for the time that the API destination was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>A time stamp for the time that the API destination was last modified.</p>
     */
    inline UpdateApiDestinationResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A time stamp for the time that the API destination was last modified.</p>
     */
    inline UpdateApiDestinationResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_apiDestinationArn;

    ApiDestinationState m_apiDestinationState;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
