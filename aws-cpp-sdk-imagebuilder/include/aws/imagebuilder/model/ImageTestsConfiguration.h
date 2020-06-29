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
   * <p>Image tests configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImageTestsConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_IMAGEBUILDER_API ImageTestsConfiguration
  {
  public:
    ImageTestsConfiguration();
    ImageTestsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ImageTestsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines if tests should be executed when building this image.</p>
     */
    inline bool GetImageTestsEnabled() const{ return m_imageTestsEnabled; }

    /**
     * <p>Defines if tests should be executed when building this image.</p>
     */
    inline bool ImageTestsEnabledHasBeenSet() const { return m_imageTestsEnabledHasBeenSet; }

    /**
     * <p>Defines if tests should be executed when building this image.</p>
     */
    inline void SetImageTestsEnabled(bool value) { m_imageTestsEnabledHasBeenSet = true; m_imageTestsEnabled = value; }

    /**
     * <p>Defines if tests should be executed when building this image.</p>
     */
    inline ImageTestsConfiguration& WithImageTestsEnabled(bool value) { SetImageTestsEnabled(value); return *this;}


    /**
     * <p>The maximum time in minutes that tests are permitted to run.</p>
     */
    inline int GetTimeoutMinutes() const{ return m_timeoutMinutes; }

    /**
     * <p>The maximum time in minutes that tests are permitted to run.</p>
     */
    inline bool TimeoutMinutesHasBeenSet() const { return m_timeoutMinutesHasBeenSet; }

    /**
     * <p>The maximum time in minutes that tests are permitted to run.</p>
     */
    inline void SetTimeoutMinutes(int value) { m_timeoutMinutesHasBeenSet = true; m_timeoutMinutes = value; }

    /**
     * <p>The maximum time in minutes that tests are permitted to run.</p>
     */
    inline ImageTestsConfiguration& WithTimeoutMinutes(int value) { SetTimeoutMinutes(value); return *this;}

  private:

    bool m_imageTestsEnabled;
    bool m_imageTestsEnabledHasBeenSet;

    int m_timeoutMinutes;
    bool m_timeoutMinutesHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
