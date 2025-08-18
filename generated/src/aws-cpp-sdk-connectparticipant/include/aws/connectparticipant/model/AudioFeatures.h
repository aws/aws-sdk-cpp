/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/connectparticipant/model/MeetingFeatureStatus.h>
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
   * <p>Has audio-specific configurations as the operating parameter for Echo
   * Reduction.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/AudioFeatures">AWS
   * API Reference</a></p>
   */
  class AudioFeatures
  {
  public:
    AWS_CONNECTPARTICIPANT_API AudioFeatures() = default;
    AWS_CONNECTPARTICIPANT_API AudioFeatures(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API AudioFeatures& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Makes echo reduction available to clients who connect to the meeting.</p>
     */
    inline MeetingFeatureStatus GetEchoReduction() const { return m_echoReduction; }
    inline bool EchoReductionHasBeenSet() const { return m_echoReductionHasBeenSet; }
    inline void SetEchoReduction(MeetingFeatureStatus value) { m_echoReductionHasBeenSet = true; m_echoReduction = value; }
    inline AudioFeatures& WithEchoReduction(MeetingFeatureStatus value) { SetEchoReduction(value); return *this;}
    ///@}
  private:

    MeetingFeatureStatus m_echoReduction{MeetingFeatureStatus::NOT_SET};
    bool m_echoReductionHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
