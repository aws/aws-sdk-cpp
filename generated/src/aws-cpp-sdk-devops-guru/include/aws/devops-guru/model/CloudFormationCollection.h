﻿/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/CloudFormationCollection">AWS
   * API Reference</a></p>
   */
  class CloudFormationCollection
  {
  public:
    AWS_DEVOPSGURU_API CloudFormationCollection() = default;
    AWS_DEVOPSGURU_API CloudFormationCollection(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API CloudFormationCollection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> An array of CloudFormation stack names. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStackNames() const { return m_stackNames; }
    inline bool StackNamesHasBeenSet() const { return m_stackNamesHasBeenSet; }
    template<typename StackNamesT = Aws::Vector<Aws::String>>
    void SetStackNames(StackNamesT&& value) { m_stackNamesHasBeenSet = true; m_stackNames = std::forward<StackNamesT>(value); }
    template<typename StackNamesT = Aws::Vector<Aws::String>>
    CloudFormationCollection& WithStackNames(StackNamesT&& value) { SetStackNames(std::forward<StackNamesT>(value)); return *this;}
    template<typename StackNamesT = Aws::String>
    CloudFormationCollection& AddStackNames(StackNamesT&& value) { m_stackNamesHasBeenSet = true; m_stackNames.emplace_back(std::forward<StackNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_stackNames;
    bool m_stackNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
