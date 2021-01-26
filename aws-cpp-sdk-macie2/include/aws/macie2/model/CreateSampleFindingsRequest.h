/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/FindingType.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class AWS_MACIE2_API CreateSampleFindingsRequest : public Macie2Request
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
     * <p>An array that lists one or more types of findings to include in the set of
     * sample findings. Currently, the only supported value is
     * Policy:IAMUser/S3BucketEncryptionDisabled.</p> 
     */
    inline const Aws::Vector<FindingType>& GetFindingTypes() const{ return m_findingTypes; }

    /**
     * <p>An array that lists one or more types of findings to include in the set of
     * sample findings. Currently, the only supported value is
     * Policy:IAMUser/S3BucketEncryptionDisabled.</p> 
     */
    inline bool FindingTypesHasBeenSet() const { return m_findingTypesHasBeenSet; }

    /**
     * <p>An array that lists one or more types of findings to include in the set of
     * sample findings. Currently, the only supported value is
     * Policy:IAMUser/S3BucketEncryptionDisabled.</p> 
     */
    inline void SetFindingTypes(const Aws::Vector<FindingType>& value) { m_findingTypesHasBeenSet = true; m_findingTypes = value; }

    /**
     * <p>An array that lists one or more types of findings to include in the set of
     * sample findings. Currently, the only supported value is
     * Policy:IAMUser/S3BucketEncryptionDisabled.</p> 
     */
    inline void SetFindingTypes(Aws::Vector<FindingType>&& value) { m_findingTypesHasBeenSet = true; m_findingTypes = std::move(value); }

    /**
     * <p>An array that lists one or more types of findings to include in the set of
     * sample findings. Currently, the only supported value is
     * Policy:IAMUser/S3BucketEncryptionDisabled.</p> 
     */
    inline CreateSampleFindingsRequest& WithFindingTypes(const Aws::Vector<FindingType>& value) { SetFindingTypes(value); return *this;}

    /**
     * <p>An array that lists one or more types of findings to include in the set of
     * sample findings. Currently, the only supported value is
     * Policy:IAMUser/S3BucketEncryptionDisabled.</p> 
     */
    inline CreateSampleFindingsRequest& WithFindingTypes(Aws::Vector<FindingType>&& value) { SetFindingTypes(std::move(value)); return *this;}

    /**
     * <p>An array that lists one or more types of findings to include in the set of
     * sample findings. Currently, the only supported value is
     * Policy:IAMUser/S3BucketEncryptionDisabled.</p> 
     */
    inline CreateSampleFindingsRequest& AddFindingTypes(const FindingType& value) { m_findingTypesHasBeenSet = true; m_findingTypes.push_back(value); return *this; }

    /**
     * <p>An array that lists one or more types of findings to include in the set of
     * sample findings. Currently, the only supported value is
     * Policy:IAMUser/S3BucketEncryptionDisabled.</p> 
     */
    inline CreateSampleFindingsRequest& AddFindingTypes(FindingType&& value) { m_findingTypesHasBeenSet = true; m_findingTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FindingType> m_findingTypes;
    bool m_findingTypesHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
