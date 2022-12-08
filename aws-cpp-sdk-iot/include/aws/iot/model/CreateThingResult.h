/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  /**
   * <p>The output of the CreateThing operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateThingResponse">AWS
   * API Reference</a></p>
   */
  class CreateThingResult
  {
  public:
    AWS_IOT_API CreateThingResult();
    AWS_IOT_API CreateThingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateThingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the new thing.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the new thing.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingName = value; }

    /**
     * <p>The name of the new thing.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingName = std::move(value); }

    /**
     * <p>The name of the new thing.</p>
     */
    inline void SetThingName(const char* value) { m_thingName.assign(value); }

    /**
     * <p>The name of the new thing.</p>
     */
    inline CreateThingResult& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the new thing.</p>
     */
    inline CreateThingResult& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the new thing.</p>
     */
    inline CreateThingResult& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The ARN of the new thing.</p>
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }

    /**
     * <p>The ARN of the new thing.</p>
     */
    inline void SetThingArn(const Aws::String& value) { m_thingArn = value; }

    /**
     * <p>The ARN of the new thing.</p>
     */
    inline void SetThingArn(Aws::String&& value) { m_thingArn = std::move(value); }

    /**
     * <p>The ARN of the new thing.</p>
     */
    inline void SetThingArn(const char* value) { m_thingArn.assign(value); }

    /**
     * <p>The ARN of the new thing.</p>
     */
    inline CreateThingResult& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}

    /**
     * <p>The ARN of the new thing.</p>
     */
    inline CreateThingResult& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the new thing.</p>
     */
    inline CreateThingResult& WithThingArn(const char* value) { SetThingArn(value); return *this;}


    /**
     * <p>The thing ID.</p>
     */
    inline const Aws::String& GetThingId() const{ return m_thingId; }

    /**
     * <p>The thing ID.</p>
     */
    inline void SetThingId(const Aws::String& value) { m_thingId = value; }

    /**
     * <p>The thing ID.</p>
     */
    inline void SetThingId(Aws::String&& value) { m_thingId = std::move(value); }

    /**
     * <p>The thing ID.</p>
     */
    inline void SetThingId(const char* value) { m_thingId.assign(value); }

    /**
     * <p>The thing ID.</p>
     */
    inline CreateThingResult& WithThingId(const Aws::String& value) { SetThingId(value); return *this;}

    /**
     * <p>The thing ID.</p>
     */
    inline CreateThingResult& WithThingId(Aws::String&& value) { SetThingId(std::move(value)); return *this;}

    /**
     * <p>The thing ID.</p>
     */
    inline CreateThingResult& WithThingId(const char* value) { SetThingId(value); return *this;}

  private:

    Aws::String m_thingName;

    Aws::String m_thingArn;

    Aws::String m_thingId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
