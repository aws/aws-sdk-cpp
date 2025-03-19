/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Configure image tests for your pipeline build. Tests run after building the
   * image, to verify that the AMI or container image is valid before distributing
   * it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImageTestsConfiguration">AWS
   * API Reference</a></p>
   */
  class ImageTestsConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API ImageTestsConfiguration() = default;
    AWS_IMAGEBUILDER_API ImageTestsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ImageTestsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines if tests should run after building the image. Image Builder
     * defaults to enable tests to run following the image build, before image
     * distribution.</p>
     */
    inline bool GetImageTestsEnabled() const { return m_imageTestsEnabled; }
    inline bool ImageTestsEnabledHasBeenSet() const { return m_imageTestsEnabledHasBeenSet; }
    inline void SetImageTestsEnabled(bool value) { m_imageTestsEnabledHasBeenSet = true; m_imageTestsEnabled = value; }
    inline ImageTestsConfiguration& WithImageTestsEnabled(bool value) { SetImageTestsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum time in minutes that tests are permitted to run.</p> 
     * <p>The timeout property is not currently active. This value is ignored.</p>
     * 
     */
    inline int GetTimeoutMinutes() const { return m_timeoutMinutes; }
    inline bool TimeoutMinutesHasBeenSet() const { return m_timeoutMinutesHasBeenSet; }
    inline void SetTimeoutMinutes(int value) { m_timeoutMinutesHasBeenSet = true; m_timeoutMinutes = value; }
    inline ImageTestsConfiguration& WithTimeoutMinutes(int value) { SetTimeoutMinutes(value); return *this;}
    ///@}
  private:

    bool m_imageTestsEnabled{false};
    bool m_imageTestsEnabledHasBeenSet = false;

    int m_timeoutMinutes{0};
    bool m_timeoutMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
