/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Metadata about tasks where an image was in use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AwsEcsMetadataDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsMetadataDetails
  {
  public:
    AWS_INSPECTOR2_API AwsEcsMetadataDetails() = default;
    AWS_INSPECTOR2_API AwsEcsMetadataDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AwsEcsMetadataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details group information for a task in a cluster.</p>
     */
    inline const Aws::String& GetDetailsGroup() const { return m_detailsGroup; }
    inline bool DetailsGroupHasBeenSet() const { return m_detailsGroupHasBeenSet; }
    template<typename DetailsGroupT = Aws::String>
    void SetDetailsGroup(DetailsGroupT&& value) { m_detailsGroupHasBeenSet = true; m_detailsGroup = std::forward<DetailsGroupT>(value); }
    template<typename DetailsGroupT = Aws::String>
    AwsEcsMetadataDetails& WithDetailsGroup(DetailsGroupT&& value) { SetDetailsGroup(std::forward<DetailsGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task definition ARN.</p>
     */
    inline const Aws::String& GetTaskDefinitionArn() const { return m_taskDefinitionArn; }
    inline bool TaskDefinitionArnHasBeenSet() const { return m_taskDefinitionArnHasBeenSet; }
    template<typename TaskDefinitionArnT = Aws::String>
    void SetTaskDefinitionArn(TaskDefinitionArnT&& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = std::forward<TaskDefinitionArnT>(value); }
    template<typename TaskDefinitionArnT = Aws::String>
    AwsEcsMetadataDetails& WithTaskDefinitionArn(TaskDefinitionArnT&& value) { SetTaskDefinitionArn(std::forward<TaskDefinitionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_detailsGroup;
    bool m_detailsGroupHasBeenSet = false;

    Aws::String m_taskDefinitionArn;
    bool m_taskDefinitionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
