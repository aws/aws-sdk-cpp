/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Information about Amazon Web Services CloudFormation stacks. You can use up
   * to 500 stacks to specify which Amazon Web Services resources in your account to
   * analyze. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacks.html">Stacks</a>
   * in the <i>Amazon Web Services CloudFormation User Guide</i>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/CloudFormationCollectionFilter">AWS
   * API Reference</a></p>
   */
  class CloudFormationCollectionFilter
  {
  public:
    AWS_DEVOPSGURU_API CloudFormationCollectionFilter();
    AWS_DEVOPSGURU_API CloudFormationCollectionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API CloudFormationCollectionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> An array of CloudFormation stack names. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStackNames() const{ return m_stackNames; }

    /**
     * <p> An array of CloudFormation stack names. </p>
     */
    inline bool StackNamesHasBeenSet() const { return m_stackNamesHasBeenSet; }

    /**
     * <p> An array of CloudFormation stack names. </p>
     */
    inline void SetStackNames(const Aws::Vector<Aws::String>& value) { m_stackNamesHasBeenSet = true; m_stackNames = value; }

    /**
     * <p> An array of CloudFormation stack names. </p>
     */
    inline void SetStackNames(Aws::Vector<Aws::String>&& value) { m_stackNamesHasBeenSet = true; m_stackNames = std::move(value); }

    /**
     * <p> An array of CloudFormation stack names. </p>
     */
    inline CloudFormationCollectionFilter& WithStackNames(const Aws::Vector<Aws::String>& value) { SetStackNames(value); return *this;}

    /**
     * <p> An array of CloudFormation stack names. </p>
     */
    inline CloudFormationCollectionFilter& WithStackNames(Aws::Vector<Aws::String>&& value) { SetStackNames(std::move(value)); return *this;}

    /**
     * <p> An array of CloudFormation stack names. </p>
     */
    inline CloudFormationCollectionFilter& AddStackNames(const Aws::String& value) { m_stackNamesHasBeenSet = true; m_stackNames.push_back(value); return *this; }

    /**
     * <p> An array of CloudFormation stack names. </p>
     */
    inline CloudFormationCollectionFilter& AddStackNames(Aws::String&& value) { m_stackNamesHasBeenSet = true; m_stackNames.push_back(std::move(value)); return *this; }

    /**
     * <p> An array of CloudFormation stack names. </p>
     */
    inline CloudFormationCollectionFilter& AddStackNames(const char* value) { m_stackNamesHasBeenSet = true; m_stackNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_stackNames;
    bool m_stackNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
