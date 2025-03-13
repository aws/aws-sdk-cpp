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
    AWS_CONNECTPARTICIPANT_API StartPosition() = default;
    AWS_CONNECTPARTICIPANT_API StartPosition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API StartPosition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the message or event where to start. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    StartPosition& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time in ISO format where to start.</p> <p>It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline const Aws::String& GetAbsoluteTime() const { return m_absoluteTime; }
    inline bool AbsoluteTimeHasBeenSet() const { return m_absoluteTimeHasBeenSet; }
    template<typename AbsoluteTimeT = Aws::String>
    void SetAbsoluteTime(AbsoluteTimeT&& value) { m_absoluteTimeHasBeenSet = true; m_absoluteTime = std::forward<AbsoluteTimeT>(value); }
    template<typename AbsoluteTimeT = Aws::String>
    StartPosition& WithAbsoluteTime(AbsoluteTimeT&& value) { SetAbsoluteTime(std::forward<AbsoluteTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start position of the most recent message where you want to start. </p>
     */
    inline int GetMostRecent() const { return m_mostRecent; }
    inline bool MostRecentHasBeenSet() const { return m_mostRecentHasBeenSet; }
    inline void SetMostRecent(int value) { m_mostRecentHasBeenSet = true; m_mostRecent = value; }
    inline StartPosition& WithMostRecent(int value) { SetMostRecent(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_absoluteTime;
    bool m_absoluteTimeHasBeenSet = false;

    int m_mostRecent{0};
    bool m_mostRecentHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
