﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/connect-contact-lens/model/CharacterOffsets.h>
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
namespace ConnectContactLens
{
namespace Model
{

  /**
   * <p>Potential issues that are detected based on an artificial intelligence
   * analysis of each turn in the conversation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-contact-lens-2020-08-21/IssueDetected">AWS
   * API Reference</a></p>
   */
  class IssueDetected
  {
  public:
    AWS_CONNECTCONTACTLENS_API IssueDetected() = default;
    AWS_CONNECTCONTACTLENS_API IssueDetected(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API IssueDetected& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The offset for when the issue was detected in the segment.</p>
     */
    inline const CharacterOffsets& GetCharacterOffsets() const { return m_characterOffsets; }
    inline bool CharacterOffsetsHasBeenSet() const { return m_characterOffsetsHasBeenSet; }
    template<typename CharacterOffsetsT = CharacterOffsets>
    void SetCharacterOffsets(CharacterOffsetsT&& value) { m_characterOffsetsHasBeenSet = true; m_characterOffsets = std::forward<CharacterOffsetsT>(value); }
    template<typename CharacterOffsetsT = CharacterOffsets>
    IssueDetected& WithCharacterOffsets(CharacterOffsetsT&& value) { SetCharacterOffsets(std::forward<CharacterOffsetsT>(value)); return *this;}
    ///@}
  private:

    CharacterOffsets m_characterOffsets;
    bool m_characterOffsetsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
