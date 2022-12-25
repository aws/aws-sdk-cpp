/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p> Label detection settings to use on a streaming video. Defining the settings
   * is required in the request parameter for <a>CreateStreamProcessor</a>. Including
   * this setting in the <code>CreateStreamProcessor</code> request enables you to
   * use the stream processor for label detection. You can then select what you want
   * the stream processor to detect, such as people or pets. When the stream
   * processor has started, one notification is sent for each object class specified.
   * For example, if packages and pets are selected, one SNS notification is
   * published the first time a package is detected and one SNS notification is
   * published the first time a pet is detected, as well as an end-of-session
   * summary. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ConnectedHomeSettings">AWS
   * API Reference</a></p>
   */
  class ConnectedHomeSettings
  {
  public:
    AWS_REKOGNITION_API ConnectedHomeSettings();
    AWS_REKOGNITION_API ConnectedHomeSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ConnectedHomeSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies what you want to detect in the video, such as people, packages, or
     * pets. The current valid labels you can include in this list are: "PERSON",
     * "PET", "PACKAGE", and "ALL". </p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * <p> Specifies what you want to detect in the video, such as people, packages, or
     * pets. The current valid labels you can include in this list are: "PERSON",
     * "PET", "PACKAGE", and "ALL". </p>
     */
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }

    /**
     * <p> Specifies what you want to detect in the video, such as people, packages, or
     * pets. The current valid labels you can include in this list are: "PERSON",
     * "PET", "PACKAGE", and "ALL". </p>
     */
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }

    /**
     * <p> Specifies what you want to detect in the video, such as people, packages, or
     * pets. The current valid labels you can include in this list are: "PERSON",
     * "PET", "PACKAGE", and "ALL". </p>
     */
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }

    /**
     * <p> Specifies what you want to detect in the video, such as people, packages, or
     * pets. The current valid labels you can include in this list are: "PERSON",
     * "PET", "PACKAGE", and "ALL". </p>
     */
    inline ConnectedHomeSettings& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * <p> Specifies what you want to detect in the video, such as people, packages, or
     * pets. The current valid labels you can include in this list are: "PERSON",
     * "PET", "PACKAGE", and "ALL". </p>
     */
    inline ConnectedHomeSettings& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p> Specifies what you want to detect in the video, such as people, packages, or
     * pets. The current valid labels you can include in this list are: "PERSON",
     * "PET", "PACKAGE", and "ALL". </p>
     */
    inline ConnectedHomeSettings& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }

    /**
     * <p> Specifies what you want to detect in the video, such as people, packages, or
     * pets. The current valid labels you can include in this list are: "PERSON",
     * "PET", "PACKAGE", and "ALL". </p>
     */
    inline ConnectedHomeSettings& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }

    /**
     * <p> Specifies what you want to detect in the video, such as people, packages, or
     * pets. The current valid labels you can include in this list are: "PERSON",
     * "PET", "PACKAGE", and "ALL". </p>
     */
    inline ConnectedHomeSettings& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }


    /**
     * <p> The minimum confidence required to label an object in the video. </p>
     */
    inline double GetMinConfidence() const{ return m_minConfidence; }

    /**
     * <p> The minimum confidence required to label an object in the video. </p>
     */
    inline bool MinConfidenceHasBeenSet() const { return m_minConfidenceHasBeenSet; }

    /**
     * <p> The minimum confidence required to label an object in the video. </p>
     */
    inline void SetMinConfidence(double value) { m_minConfidenceHasBeenSet = true; m_minConfidence = value; }

    /**
     * <p> The minimum confidence required to label an object in the video. </p>
     */
    inline ConnectedHomeSettings& WithMinConfidence(double value) { SetMinConfidence(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;

    double m_minConfidence;
    bool m_minConfidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
