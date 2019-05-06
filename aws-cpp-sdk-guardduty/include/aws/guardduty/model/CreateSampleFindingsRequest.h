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
   * CreateSampleFindings request body.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateSampleFindingsRequest">AWS
   * API Reference</a></p>
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
     * The ID of the detector to create sample findings for.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The ID of the detector to create sample findings for.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The ID of the detector to create sample findings for.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The ID of the detector to create sample findings for.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The ID of the detector to create sample findings for.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The ID of the detector to create sample findings for.
     */
    inline CreateSampleFindingsRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The ID of the detector to create sample findings for.
     */
    inline CreateSampleFindingsRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The ID of the detector to create sample findings for.
     */
    inline CreateSampleFindingsRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * Types of sample findings that you want to generate.
     */
    inline const Aws::Vector<Aws::String>& GetFindingTypes() const{ return m_findingTypes; }

    /**
     * Types of sample findings that you want to generate.
     */
    inline bool FindingTypesHasBeenSet() const { return m_findingTypesHasBeenSet; }

    /**
     * Types of sample findings that you want to generate.
     */
    inline void SetFindingTypes(const Aws::Vector<Aws::String>& value) { m_findingTypesHasBeenSet = true; m_findingTypes = value; }

    /**
     * Types of sample findings that you want to generate.
     */
    inline void SetFindingTypes(Aws::Vector<Aws::String>&& value) { m_findingTypesHasBeenSet = true; m_findingTypes = std::move(value); }

    /**
     * Types of sample findings that you want to generate.
     */
    inline CreateSampleFindingsRequest& WithFindingTypes(const Aws::Vector<Aws::String>& value) { SetFindingTypes(value); return *this;}

    /**
     * Types of sample findings that you want to generate.
     */
    inline CreateSampleFindingsRequest& WithFindingTypes(Aws::Vector<Aws::String>&& value) { SetFindingTypes(std::move(value)); return *this;}

    /**
     * Types of sample findings that you want to generate.
     */
    inline CreateSampleFindingsRequest& AddFindingTypes(const Aws::String& value) { m_findingTypesHasBeenSet = true; m_findingTypes.push_back(value); return *this; }

    /**
     * Types of sample findings that you want to generate.
     */
    inline CreateSampleFindingsRequest& AddFindingTypes(Aws::String&& value) { m_findingTypesHasBeenSet = true; m_findingTypes.push_back(std::move(value)); return *this; }

    /**
     * Types of sample findings that you want to generate.
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
