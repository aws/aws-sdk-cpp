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
   * <p> Contains the names of Amazon Web Services CloudFormation stacks used to
   * update a collection of stacks. You can specify up to 500 Amazon Web Services
   * CloudFormation stacks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/UpdateCloudFormationCollectionFilter">AWS
   * API Reference</a></p>
   */
  class UpdateCloudFormationCollectionFilter
  {
  public:
    AWS_DEVOPSGURU_API UpdateCloudFormationCollectionFilter() = default;
    AWS_DEVOPSGURU_API UpdateCloudFormationCollectionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API UpdateCloudFormationCollectionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> An array of the names of the Amazon Web Services CloudFormation stacks to
     * update. You can specify up to 500 Amazon Web Services CloudFormation stacks.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetStackNames() const { return m_stackNames; }
    inline bool StackNamesHasBeenSet() const { return m_stackNamesHasBeenSet; }
    template<typename StackNamesT = Aws::Vector<Aws::String>>
    void SetStackNames(StackNamesT&& value) { m_stackNamesHasBeenSet = true; m_stackNames = std::forward<StackNamesT>(value); }
    template<typename StackNamesT = Aws::Vector<Aws::String>>
    UpdateCloudFormationCollectionFilter& WithStackNames(StackNamesT&& value) { SetStackNames(std::forward<StackNamesT>(value)); return *this;}
    template<typename StackNamesT = Aws::String>
    UpdateCloudFormationCollectionFilter& AddStackNames(StackNamesT&& value) { m_stackNamesHasBeenSet = true; m_stackNames.emplace_back(std::forward<StackNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_stackNames;
    bool m_stackNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
