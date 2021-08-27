/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/CloudFormationCollectionFilter.h>
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
   * <p> Information about a filter used to specify which AWS resources are analyzed
   * for anomalous behavior by DevOps Guru. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ResourceCollectionFilter">AWS
   * API Reference</a></p>
   */
  class AWS_DEVOPSGURU_API ResourceCollectionFilter
  {
  public:
    ResourceCollectionFilter();
    ResourceCollectionFilter(Aws::Utils::Json::JsonView jsonValue);
    ResourceCollectionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Information about AWS CloudFormation stacks. You can use stacks to specify
     * which AWS resources in your account to analyze. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacks.html">Stacks</a>
     * in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline const CloudFormationCollectionFilter& GetCloudFormation() const{ return m_cloudFormation; }

    /**
     * <p> Information about AWS CloudFormation stacks. You can use stacks to specify
     * which AWS resources in your account to analyze. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacks.html">Stacks</a>
     * in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline bool CloudFormationHasBeenSet() const { return m_cloudFormationHasBeenSet; }

    /**
     * <p> Information about AWS CloudFormation stacks. You can use stacks to specify
     * which AWS resources in your account to analyze. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacks.html">Stacks</a>
     * in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline void SetCloudFormation(const CloudFormationCollectionFilter& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = value; }

    /**
     * <p> Information about AWS CloudFormation stacks. You can use stacks to specify
     * which AWS resources in your account to analyze. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacks.html">Stacks</a>
     * in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline void SetCloudFormation(CloudFormationCollectionFilter&& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = std::move(value); }

    /**
     * <p> Information about AWS CloudFormation stacks. You can use stacks to specify
     * which AWS resources in your account to analyze. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacks.html">Stacks</a>
     * in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline ResourceCollectionFilter& WithCloudFormation(const CloudFormationCollectionFilter& value) { SetCloudFormation(value); return *this;}

    /**
     * <p> Information about AWS CloudFormation stacks. You can use stacks to specify
     * which AWS resources in your account to analyze. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacks.html">Stacks</a>
     * in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline ResourceCollectionFilter& WithCloudFormation(CloudFormationCollectionFilter&& value) { SetCloudFormation(std::move(value)); return *this;}

  private:

    CloudFormationCollectionFilter m_cloudFormation;
    bool m_cloudFormationHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
