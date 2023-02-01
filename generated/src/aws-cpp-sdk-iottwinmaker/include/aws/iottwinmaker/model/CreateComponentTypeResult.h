/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iottwinmaker/model/State.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class CreateComponentTypeResult
  {
  public:
    AWS_IOTTWINMAKER_API CreateComponentTypeResult();
    AWS_IOTTWINMAKER_API CreateComponentTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API CreateComponentTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the component type.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the component type.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the component type.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the component type.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the component type.</p>
     */
    inline CreateComponentTypeResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the component type.</p>
     */
    inline CreateComponentTypeResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the component type.</p>
     */
    inline CreateComponentTypeResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time when the entity was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time when the entity was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The date and time when the entity was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time when the entity was created.</p>
     */
    inline CreateComponentTypeResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time when the entity was created.</p>
     */
    inline CreateComponentTypeResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The current state of the component type.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>The current state of the component type.</p>
     */
    inline void SetState(const State& value) { m_state = value; }

    /**
     * <p>The current state of the component type.</p>
     */
    inline void SetState(State&& value) { m_state = std::move(value); }

    /**
     * <p>The current state of the component type.</p>
     */
    inline CreateComponentTypeResult& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the component type.</p>
     */
    inline CreateComponentTypeResult& WithState(State&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationDateTime;

    State m_state;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
