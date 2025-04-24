/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/DesiredModality.h>
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
namespace BedrockDataAutomation
{
namespace Model
{

  /**
   * <p>Configuration for routing file type to desired modality</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/ModalityRoutingConfiguration">AWS
   * API Reference</a></p>
   */
  class ModalityRoutingConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API ModalityRoutingConfiguration() = default;
    AWS_BEDROCKDATAAUTOMATION_API ModalityRoutingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API ModalityRoutingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline DesiredModality GetJpeg() const { return m_jpeg; }
    inline bool JpegHasBeenSet() const { return m_jpegHasBeenSet; }
    inline void SetJpeg(DesiredModality value) { m_jpegHasBeenSet = true; m_jpeg = value; }
    inline ModalityRoutingConfiguration& WithJpeg(DesiredModality value) { SetJpeg(value); return *this;}
    ///@}

    ///@{
    
    inline DesiredModality GetPng() const { return m_png; }
    inline bool PngHasBeenSet() const { return m_pngHasBeenSet; }
    inline void SetPng(DesiredModality value) { m_pngHasBeenSet = true; m_png = value; }
    inline ModalityRoutingConfiguration& WithPng(DesiredModality value) { SetPng(value); return *this;}
    ///@}

    ///@{
    
    inline DesiredModality GetMp4() const { return m_mp4; }
    inline bool Mp4HasBeenSet() const { return m_mp4HasBeenSet; }
    inline void SetMp4(DesiredModality value) { m_mp4HasBeenSet = true; m_mp4 = value; }
    inline ModalityRoutingConfiguration& WithMp4(DesiredModality value) { SetMp4(value); return *this;}
    ///@}

    ///@{
    
    inline DesiredModality GetMov() const { return m_mov; }
    inline bool MovHasBeenSet() const { return m_movHasBeenSet; }
    inline void SetMov(DesiredModality value) { m_movHasBeenSet = true; m_mov = value; }
    inline ModalityRoutingConfiguration& WithMov(DesiredModality value) { SetMov(value); return *this;}
    ///@}
  private:

    DesiredModality m_jpeg{DesiredModality::NOT_SET};
    bool m_jpegHasBeenSet = false;

    DesiredModality m_png{DesiredModality::NOT_SET};
    bool m_pngHasBeenSet = false;

    DesiredModality m_mp4{DesiredModality::NOT_SET};
    bool m_mp4HasBeenSet = false;

    DesiredModality m_mov{DesiredModality::NOT_SET};
    bool m_movHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
