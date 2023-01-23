/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConnectParticipant
{
namespace Model
{

  /**
   * <p>A filtering option for where to start. For example, if you sent 100 messages,
   * start with message 50. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/StartPosition">AWS
   * API Reference</a></p>
   */
  class StartPosition
  {
  public:
    AWS_CONNECTPARTICIPANT_API StartPosition();
    AWS_CONNECTPARTICIPANT_API StartPosition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API StartPosition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the message or event where to start. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the message or event where to start. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the message or event where to start. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the message or event where to start. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the message or event where to start. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the message or event where to start. </p>
     */
    inline StartPosition& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the message or event where to start. </p>
     */
    inline StartPosition& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the message or event where to start. </p>
     */
    inline StartPosition& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The time in ISO format where to start.</p> <p>It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline const Aws::String& GetAbsoluteTime() const{ return m_absoluteTime; }

    /**
     * <p>The time in ISO format where to start.</p> <p>It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline bool AbsoluteTimeHasBeenSet() const { return m_absoluteTimeHasBeenSet; }

    /**
     * <p>The time in ISO format where to start.</p> <p>It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetAbsoluteTime(const Aws::String& value) { m_absoluteTimeHasBeenSet = true; m_absoluteTime = value; }

    /**
     * <p>The time in ISO format where to start.</p> <p>It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetAbsoluteTime(Aws::String&& value) { m_absoluteTimeHasBeenSet = true; m_absoluteTime = std::move(value); }

    /**
     * <p>The time in ISO format where to start.</p> <p>It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetAbsoluteTime(const char* value) { m_absoluteTimeHasBeenSet = true; m_absoluteTime.assign(value); }

    /**
     * <p>The time in ISO format where to start.</p> <p>It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline StartPosition& WithAbsoluteTime(const Aws::String& value) { SetAbsoluteTime(value); return *this;}

    /**
     * <p>The time in ISO format where to start.</p> <p>It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline StartPosition& WithAbsoluteTime(Aws::String&& value) { SetAbsoluteTime(std::move(value)); return *this;}

    /**
     * <p>The time in ISO format where to start.</p> <p>It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline StartPosition& WithAbsoluteTime(const char* value) { SetAbsoluteTime(value); return *this;}


    /**
     * <p>The start position of the most recent message where you want to start. </p>
     */
    inline int GetMostRecent() const{ return m_mostRecent; }

    /**
     * <p>The start position of the most recent message where you want to start. </p>
     */
    inline bool MostRecentHasBeenSet() const { return m_mostRecentHasBeenSet; }

    /**
     * <p>The start position of the most recent message where you want to start. </p>
     */
    inline void SetMostRecent(int value) { m_mostRecentHasBeenSet = true; m_mostRecent = value; }

    /**
     * <p>The start position of the most recent message where you want to start. </p>
     */
    inline StartPosition& WithMostRecent(int value) { SetMostRecent(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_absoluteTime;
    bool m_absoluteTimeHasBeenSet = false;

    int m_mostRecent;
    bool m_mostRecentHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
