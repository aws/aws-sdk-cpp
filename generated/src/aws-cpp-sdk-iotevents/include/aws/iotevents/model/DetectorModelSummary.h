/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DetectorModelSummary
  {
  public:
    AWS_IOTEVENTS_API DetectorModelSummary();
    AWS_IOTEVENTS_API DetectorModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API DetectorModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelName() const{ return m_detectorModelName; }
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }
    inline void SetDetectorModelName(const Aws::String& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = value; }
    inline void SetDetectorModelName(Aws::String&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::move(value); }
    inline void SetDetectorModelName(const char* value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName.assign(value); }
    inline DetectorModelSummary& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}
    inline DetectorModelSummary& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}
    inline DetectorModelSummary& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelDescription() const{ return m_detectorModelDescription; }
    inline bool DetectorModelDescriptionHasBeenSet() const { return m_detectorModelDescriptionHasBeenSet; }
    inline void SetDetectorModelDescription(const Aws::String& value) { m_detectorModelDescriptionHasBeenSet = true; m_detectorModelDescription = value; }
    inline void SetDetectorModelDescription(Aws::String&& value) { m_detectorModelDescriptionHasBeenSet = true; m_detectorModelDescription = std::move(value); }
    inline void SetDetectorModelDescription(const char* value) { m_detectorModelDescriptionHasBeenSet = true; m_detectorModelDescription.assign(value); }
    inline DetectorModelSummary& WithDetectorModelDescription(const Aws::String& value) { SetDetectorModelDescription(value); return *this;}
    inline DetectorModelSummary& WithDetectorModelDescription(Aws::String&& value) { SetDetectorModelDescription(std::move(value)); return *this;}
    inline DetectorModelSummary& WithDetectorModelDescription(const char* value) { SetDetectorModelDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the detector model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline DetectorModelSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DetectorModelSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet = false;

    Aws::String m_detectorModelDescription;
    bool m_detectorModelDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
