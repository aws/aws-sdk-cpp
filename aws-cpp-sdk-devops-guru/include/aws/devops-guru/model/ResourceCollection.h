/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/CloudFormationCollection.h>
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
   * <p> A collection of Amazon Web Services resources supported by DevOps Guru. The
   * one type of Amazon Web Services resource collection supported is Amazon Web
   * Services CloudFormation stacks. DevOps Guru can be configured to analyze only
   * the Amazon Web Services resources that are defined in the stacks. You can
   * specify up to 500 Amazon Web Services CloudFormation stacks. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ResourceCollection">AWS
   * API Reference</a></p>
   */
  class AWS_DEVOPSGURU_API ResourceCollection
  {
  public:
    ResourceCollection();
    ResourceCollection(Aws::Utils::Json::JsonView jsonValue);
    ResourceCollection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> An array of the names of Amazon Web Services CloudFormation stacks. The
     * stacks define Amazon Web Services resources that DevOps Guru analyzes. You can
     * specify up to 500 Amazon Web Services CloudFormation stacks. </p>
     */
    inline const CloudFormationCollection& GetCloudFormation() const{ return m_cloudFormation; }

    /**
     * <p> An array of the names of Amazon Web Services CloudFormation stacks. The
     * stacks define Amazon Web Services resources that DevOps Guru analyzes. You can
     * specify up to 500 Amazon Web Services CloudFormation stacks. </p>
     */
    inline bool CloudFormationHasBeenSet() const { return m_cloudFormationHasBeenSet; }

    /**
     * <p> An array of the names of Amazon Web Services CloudFormation stacks. The
     * stacks define Amazon Web Services resources that DevOps Guru analyzes. You can
     * specify up to 500 Amazon Web Services CloudFormation stacks. </p>
     */
    inline void SetCloudFormation(const CloudFormationCollection& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = value; }

    /**
     * <p> An array of the names of Amazon Web Services CloudFormation stacks. The
     * stacks define Amazon Web Services resources that DevOps Guru analyzes. You can
     * specify up to 500 Amazon Web Services CloudFormation stacks. </p>
     */
    inline void SetCloudFormation(CloudFormationCollection&& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = std::move(value); }

    /**
     * <p> An array of the names of Amazon Web Services CloudFormation stacks. The
     * stacks define Amazon Web Services resources that DevOps Guru analyzes. You can
     * specify up to 500 Amazon Web Services CloudFormation stacks. </p>
     */
    inline ResourceCollection& WithCloudFormation(const CloudFormationCollection& value) { SetCloudFormation(value); return *this;}

    /**
     * <p> An array of the names of Amazon Web Services CloudFormation stacks. The
     * stacks define Amazon Web Services resources that DevOps Guru analyzes. You can
     * specify up to 500 Amazon Web Services CloudFormation stacks. </p>
     */
    inline ResourceCollection& WithCloudFormation(CloudFormationCollection&& value) { SetCloudFormation(std::move(value)); return *this;}

  private:

    CloudFormationCollection m_cloudFormation;
    bool m_cloudFormationHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
