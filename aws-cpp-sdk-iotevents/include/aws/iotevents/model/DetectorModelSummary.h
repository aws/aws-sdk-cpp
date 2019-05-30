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
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Information about the detector model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DetectorModelSummary">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTS_API DetectorModelSummary
  {
  public:
    DetectorModelSummary();
    DetectorModelSummary(Aws::Utils::Json::JsonView jsonValue);
    DetectorModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelName() const{ return m_detectorModelName; }

    /**
     * <p>The name of the detector model.</p>
     */
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }

    /**
     * <p>The name of the detector model.</p>
     */
    inline void SetDetectorModelName(const Aws::String& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = value; }

    /**
     * <p>The name of the detector model.</p>
     */
    inline void SetDetectorModelName(Aws::String&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::move(value); }

    /**
     * <p>The name of the detector model.</p>
     */
    inline void SetDetectorModelName(const char* value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName.assign(value); }

    /**
     * <p>The name of the detector model.</p>
     */
    inline DetectorModelSummary& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}

    /**
     * <p>The name of the detector model.</p>
     */
    inline DetectorModelSummary& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the detector model.</p>
     */
    inline DetectorModelSummary& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}


    /**
     * <p>A brief description of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelDescription() const{ return m_detectorModelDescription; }

    /**
     * <p>A brief description of the detector model.</p>
     */
    inline bool DetectorModelDescriptionHasBeenSet() const { return m_detectorModelDescriptionHasBeenSet; }

    /**
     * <p>A brief description of the detector model.</p>
     */
    inline void SetDetectorModelDescription(const Aws::String& value) { m_detectorModelDescriptionHasBeenSet = true; m_detectorModelDescription = value; }

    /**
     * <p>A brief description of the detector model.</p>
     */
    inline void SetDetectorModelDescription(Aws::String&& value) { m_detectorModelDescriptionHasBeenSet = true; m_detectorModelDescription = std::move(value); }

    /**
     * <p>A brief description of the detector model.</p>
     */
    inline void SetDetectorModelDescription(const char* value) { m_detectorModelDescriptionHasBeenSet = true; m_detectorModelDescription.assign(value); }

    /**
     * <p>A brief description of the detector model.</p>
     */
    inline DetectorModelSummary& WithDetectorModelDescription(const Aws::String& value) { SetDetectorModelDescription(value); return *this;}

    /**
     * <p>A brief description of the detector model.</p>
     */
    inline DetectorModelSummary& WithDetectorModelDescription(Aws::String&& value) { SetDetectorModelDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the detector model.</p>
     */
    inline DetectorModelSummary& WithDetectorModelDescription(const char* value) { SetDetectorModelDescription(value); return *this;}


    /**
     * <p>The time the detector model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the detector model was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the detector model was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the detector model was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the detector model was created.</p>
     */
    inline DetectorModelSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the detector model was created.</p>
     */
    inline DetectorModelSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet;

    Aws::String m_detectorModelDescription;
    bool m_detectorModelDescriptionHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
