/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
   * <p>Provides information about a single type of moderated content found in an
   * image or video. Each type of moderated content has a label within a hierarchical
   * taxonomy. For more information, see Detecting Unsafe Content in the Amazon
   * Rekognition Developer Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ModerationLabel">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API ModerationLabel
  {
  public:
    ModerationLabel();
    ModerationLabel(Aws::Utils::Json::JsonView jsonValue);
    ModerationLabel& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the confidence that Amazon Rekognition has that the label has been
     * correctly identified.</p> <p>If you don't specify the <code>MinConfidence</code>
     * parameter in the call to <code>DetectModerationLabels</code>, the operation
     * returns labels with a confidence value greater than or equal to 50 percent.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>Specifies the confidence that Amazon Rekognition has that the label has been
     * correctly identified.</p> <p>If you don't specify the <code>MinConfidence</code>
     * parameter in the call to <code>DetectModerationLabels</code>, the operation
     * returns labels with a confidence value greater than or equal to 50 percent.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>Specifies the confidence that Amazon Rekognition has that the label has been
     * correctly identified.</p> <p>If you don't specify the <code>MinConfidence</code>
     * parameter in the call to <code>DetectModerationLabels</code>, the operation
     * returns labels with a confidence value greater than or equal to 50 percent.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>Specifies the confidence that Amazon Rekognition has that the label has been
     * correctly identified.</p> <p>If you don't specify the <code>MinConfidence</code>
     * parameter in the call to <code>DetectModerationLabels</code>, the operation
     * returns labels with a confidence value greater than or equal to 50 percent.</p>
     */
    inline ModerationLabel& WithConfidence(double value) { SetConfidence(value); return *this;}


    /**
     * <p>The label name for the type of content detected in the image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The label name for the type of content detected in the image.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The label name for the type of content detected in the image.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The label name for the type of content detected in the image.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The label name for the type of content detected in the image.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The label name for the type of content detected in the image.</p>
     */
    inline ModerationLabel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The label name for the type of content detected in the image.</p>
     */
    inline ModerationLabel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The label name for the type of content detected in the image.</p>
     */
    inline ModerationLabel& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name for the parent label. Labels at the top level of the hierarchy have
     * the parent label <code>""</code>.</p>
     */
    inline const Aws::String& GetParentName() const{ return m_parentName; }

    /**
     * <p>The name for the parent label. Labels at the top level of the hierarchy have
     * the parent label <code>""</code>.</p>
     */
    inline bool ParentNameHasBeenSet() const { return m_parentNameHasBeenSet; }

    /**
     * <p>The name for the parent label. Labels at the top level of the hierarchy have
     * the parent label <code>""</code>.</p>
     */
    inline void SetParentName(const Aws::String& value) { m_parentNameHasBeenSet = true; m_parentName = value; }

    /**
     * <p>The name for the parent label. Labels at the top level of the hierarchy have
     * the parent label <code>""</code>.</p>
     */
    inline void SetParentName(Aws::String&& value) { m_parentNameHasBeenSet = true; m_parentName = std::move(value); }

    /**
     * <p>The name for the parent label. Labels at the top level of the hierarchy have
     * the parent label <code>""</code>.</p>
     */
    inline void SetParentName(const char* value) { m_parentNameHasBeenSet = true; m_parentName.assign(value); }

    /**
     * <p>The name for the parent label. Labels at the top level of the hierarchy have
     * the parent label <code>""</code>.</p>
     */
    inline ModerationLabel& WithParentName(const Aws::String& value) { SetParentName(value); return *this;}

    /**
     * <p>The name for the parent label. Labels at the top level of the hierarchy have
     * the parent label <code>""</code>.</p>
     */
    inline ModerationLabel& WithParentName(Aws::String&& value) { SetParentName(std::move(value)); return *this;}

    /**
     * <p>The name for the parent label. Labels at the top level of the hierarchy have
     * the parent label <code>""</code>.</p>
     */
    inline ModerationLabel& WithParentName(const char* value) { SetParentName(value); return *this;}

  private:

    double m_confidence;
    bool m_confidenceHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_parentName;
    bool m_parentNameHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
