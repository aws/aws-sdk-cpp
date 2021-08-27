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
   * <p> Contains the names of AWS CloudFormation stacks used to update a collection
   * of stacks. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/UpdateCloudFormationCollectionFilter">AWS
   * API Reference</a></p>
   */
  class AWS_DEVOPSGURU_API UpdateCloudFormationCollectionFilter
  {
  public:
    UpdateCloudFormationCollectionFilter();
    UpdateCloudFormationCollectionFilter(Aws::Utils::Json::JsonView jsonValue);
    UpdateCloudFormationCollectionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> An array of the name of stacks to update. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStackNames() const{ return m_stackNames; }

    /**
     * <p> An array of the name of stacks to update. </p>
     */
    inline bool StackNamesHasBeenSet() const { return m_stackNamesHasBeenSet; }

    /**
     * <p> An array of the name of stacks to update. </p>
     */
    inline void SetStackNames(const Aws::Vector<Aws::String>& value) { m_stackNamesHasBeenSet = true; m_stackNames = value; }

    /**
     * <p> An array of the name of stacks to update. </p>
     */
    inline void SetStackNames(Aws::Vector<Aws::String>&& value) { m_stackNamesHasBeenSet = true; m_stackNames = std::move(value); }

    /**
     * <p> An array of the name of stacks to update. </p>
     */
    inline UpdateCloudFormationCollectionFilter& WithStackNames(const Aws::Vector<Aws::String>& value) { SetStackNames(value); return *this;}

    /**
     * <p> An array of the name of stacks to update. </p>
     */
    inline UpdateCloudFormationCollectionFilter& WithStackNames(Aws::Vector<Aws::String>&& value) { SetStackNames(std::move(value)); return *this;}

    /**
     * <p> An array of the name of stacks to update. </p>
     */
    inline UpdateCloudFormationCollectionFilter& AddStackNames(const Aws::String& value) { m_stackNamesHasBeenSet = true; m_stackNames.push_back(value); return *this; }

    /**
     * <p> An array of the name of stacks to update. </p>
     */
    inline UpdateCloudFormationCollectionFilter& AddStackNames(Aws::String&& value) { m_stackNamesHasBeenSet = true; m_stackNames.push_back(std::move(value)); return *this; }

    /**
     * <p> An array of the name of stacks to update. </p>
     */
    inline UpdateCloudFormationCollectionFilter& AddStackNames(const char* value) { m_stackNamesHasBeenSet = true; m_stackNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_stackNames;
    bool m_stackNamesHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
