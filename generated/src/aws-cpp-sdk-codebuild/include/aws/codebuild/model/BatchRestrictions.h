/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Specifies restrictions for the batch build.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchRestrictions">AWS
   * API Reference</a></p>
   */
  class BatchRestrictions
  {
  public:
    AWS_CODEBUILD_API BatchRestrictions();
    AWS_CODEBUILD_API BatchRestrictions(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API BatchRestrictions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the maximum number of builds allowed.</p>
     */
    inline int GetMaximumBuildsAllowed() const{ return m_maximumBuildsAllowed; }
    inline bool MaximumBuildsAllowedHasBeenSet() const { return m_maximumBuildsAllowedHasBeenSet; }
    inline void SetMaximumBuildsAllowed(int value) { m_maximumBuildsAllowedHasBeenSet = true; m_maximumBuildsAllowed = value; }
    inline BatchRestrictions& WithMaximumBuildsAllowed(int value) { SetMaximumBuildsAllowed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that specify the compute types that are allowed for the
     * batch build. See <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild User Guide</i> for these
     * values. </p>
     */
    inline const Aws::Vector<Aws::String>& GetComputeTypesAllowed() const{ return m_computeTypesAllowed; }
    inline bool ComputeTypesAllowedHasBeenSet() const { return m_computeTypesAllowedHasBeenSet; }
    inline void SetComputeTypesAllowed(const Aws::Vector<Aws::String>& value) { m_computeTypesAllowedHasBeenSet = true; m_computeTypesAllowed = value; }
    inline void SetComputeTypesAllowed(Aws::Vector<Aws::String>&& value) { m_computeTypesAllowedHasBeenSet = true; m_computeTypesAllowed = std::move(value); }
    inline BatchRestrictions& WithComputeTypesAllowed(const Aws::Vector<Aws::String>& value) { SetComputeTypesAllowed(value); return *this;}
    inline BatchRestrictions& WithComputeTypesAllowed(Aws::Vector<Aws::String>&& value) { SetComputeTypesAllowed(std::move(value)); return *this;}
    inline BatchRestrictions& AddComputeTypesAllowed(const Aws::String& value) { m_computeTypesAllowedHasBeenSet = true; m_computeTypesAllowed.push_back(value); return *this; }
    inline BatchRestrictions& AddComputeTypesAllowed(Aws::String&& value) { m_computeTypesAllowedHasBeenSet = true; m_computeTypesAllowed.push_back(std::move(value)); return *this; }
    inline BatchRestrictions& AddComputeTypesAllowed(const char* value) { m_computeTypesAllowedHasBeenSet = true; m_computeTypesAllowed.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of strings that specify the fleets that are allowed for the batch
     * build. See <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/fleets.html">Run
     * builds on reserved capacity fleets</a> in the <i>CodeBuild User Guide</i> for
     * more information. </p>
     */
    inline const Aws::Vector<Aws::String>& GetFleetsAllowed() const{ return m_fleetsAllowed; }
    inline bool FleetsAllowedHasBeenSet() const { return m_fleetsAllowedHasBeenSet; }
    inline void SetFleetsAllowed(const Aws::Vector<Aws::String>& value) { m_fleetsAllowedHasBeenSet = true; m_fleetsAllowed = value; }
    inline void SetFleetsAllowed(Aws::Vector<Aws::String>&& value) { m_fleetsAllowedHasBeenSet = true; m_fleetsAllowed = std::move(value); }
    inline BatchRestrictions& WithFleetsAllowed(const Aws::Vector<Aws::String>& value) { SetFleetsAllowed(value); return *this;}
    inline BatchRestrictions& WithFleetsAllowed(Aws::Vector<Aws::String>&& value) { SetFleetsAllowed(std::move(value)); return *this;}
    inline BatchRestrictions& AddFleetsAllowed(const Aws::String& value) { m_fleetsAllowedHasBeenSet = true; m_fleetsAllowed.push_back(value); return *this; }
    inline BatchRestrictions& AddFleetsAllowed(Aws::String&& value) { m_fleetsAllowedHasBeenSet = true; m_fleetsAllowed.push_back(std::move(value)); return *this; }
    inline BatchRestrictions& AddFleetsAllowed(const char* value) { m_fleetsAllowedHasBeenSet = true; m_fleetsAllowed.push_back(value); return *this; }
    ///@}
  private:

    int m_maximumBuildsAllowed;
    bool m_maximumBuildsAllowedHasBeenSet = false;

    Aws::Vector<Aws::String> m_computeTypesAllowed;
    bool m_computeTypesAllowedHasBeenSet = false;

    Aws::Vector<Aws::String> m_fleetsAllowed;
    bool m_fleetsAllowedHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
