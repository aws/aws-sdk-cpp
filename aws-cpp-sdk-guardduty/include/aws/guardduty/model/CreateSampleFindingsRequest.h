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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class AWS_GUARDDUTY_API CreateSampleFindingsRequest : public GuardDutyRequest
  {
  public:
    CreateSampleFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSampleFindings"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the detector to create sample findings for.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The ID of the detector to create sample findings for.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The ID of the detector to create sample findings for.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The ID of the detector to create sample findings for.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The ID of the detector to create sample findings for.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The ID of the detector to create sample findings for.</p>
     */
    inline CreateSampleFindingsRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The ID of the detector to create sample findings for.</p>
     */
    inline CreateSampleFindingsRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the detector to create sample findings for.</p>
     */
    inline CreateSampleFindingsRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>Types of sample findings that you want to generate.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingTypes() const{ return m_findingTypes; }

    /**
     * <p>Types of sample findings that you want to generate.</p>
     */
    inline bool FindingTypesHasBeenSet() const { return m_findingTypesHasBeenSet; }

    /**
     * <p>Types of sample findings that you want to generate.</p>
     */
    inline void SetFindingTypes(const Aws::Vector<Aws::String>& value) { m_findingTypesHasBeenSet = true; m_findingTypes = value; }

    /**
     * <p>Types of sample findings that you want to generate.</p>
     */
    inline void SetFindingTypes(Aws::Vector<Aws::String>&& value) { m_findingTypesHasBeenSet = true; m_findingTypes = std::move(value); }

    /**
     * <p>Types of sample findings that you want to generate.</p>
     */
    inline CreateSampleFindingsRequest& WithFindingTypes(const Aws::Vector<Aws::String>& value) { SetFindingTypes(value); return *this;}

    /**
     * <p>Types of sample findings that you want to generate.</p>
     */
    inline CreateSampleFindingsRequest& WithFindingTypes(Aws::Vector<Aws::String>&& value) { SetFindingTypes(std::move(value)); return *this;}

    /**
     * <p>Types of sample findings that you want to generate.</p>
     */
    inline CreateSampleFindingsRequest& AddFindingTypes(const Aws::String& value) { m_findingTypesHasBeenSet = true; m_findingTypes.push_back(value); return *this; }

    /**
     * <p>Types of sample findings that you want to generate.</p>
     */
    inline CreateSampleFindingsRequest& AddFindingTypes(Aws::String&& value) { m_findingTypesHasBeenSet = true; m_findingTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>Types of sample findings that you want to generate.</p>
     */
    inline CreateSampleFindingsRequest& AddFindingTypes(const char* value) { m_findingTypesHasBeenSet = true; m_findingTypes.push_back(value); return *this; }

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Aws::Vector<Aws::String> m_findingTypes;
    bool m_findingTypesHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
