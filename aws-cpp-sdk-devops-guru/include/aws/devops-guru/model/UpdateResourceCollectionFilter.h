/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/UpdateCloudFormationCollectionFilter.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Contains information used to update a collection of AWS resources.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/UpdateResourceCollectionFilter">AWS
   * API Reference</a></p>
   */
  class AWS_DEVOPSGURU_API UpdateResourceCollectionFilter
  {
  public:
    UpdateResourceCollectionFilter();
    UpdateResourceCollectionFilter(Aws::Utils::Json::JsonView jsonValue);
    UpdateResourceCollectionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> An collection of AWS CloudFormation stacks. </p>
     */
    inline const UpdateCloudFormationCollectionFilter& GetCloudFormation() const{ return m_cloudFormation; }

    /**
     * <p> An collection of AWS CloudFormation stacks. </p>
     */
    inline bool CloudFormationHasBeenSet() const { return m_cloudFormationHasBeenSet; }

    /**
     * <p> An collection of AWS CloudFormation stacks. </p>
     */
    inline void SetCloudFormation(const UpdateCloudFormationCollectionFilter& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = value; }

    /**
     * <p> An collection of AWS CloudFormation stacks. </p>
     */
    inline void SetCloudFormation(UpdateCloudFormationCollectionFilter&& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = std::move(value); }

    /**
     * <p> An collection of AWS CloudFormation stacks. </p>
     */
    inline UpdateResourceCollectionFilter& WithCloudFormation(const UpdateCloudFormationCollectionFilter& value) { SetCloudFormation(value); return *this;}

    /**
     * <p> An collection of AWS CloudFormation stacks. </p>
     */
    inline UpdateResourceCollectionFilter& WithCloudFormation(UpdateCloudFormationCollectionFilter&& value) { SetCloudFormation(std::move(value)); return *this;}

  private:

    UpdateCloudFormationCollectionFilter m_cloudFormation;
    bool m_cloudFormationHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
