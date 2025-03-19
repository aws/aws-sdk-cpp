/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalysisTemplateArtifact.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The analysis template artifacts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisTemplateArtifacts">AWS
   * API Reference</a></p>
   */
  class AnalysisTemplateArtifacts
  {
  public:
    AWS_CLEANROOMS_API AnalysisTemplateArtifacts() = default;
    AWS_CLEANROOMS_API AnalysisTemplateArtifacts(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisTemplateArtifacts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The entry point for the analysis template artifacts.</p>
     */
    inline const AnalysisTemplateArtifact& GetEntryPoint() const { return m_entryPoint; }
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }
    template<typename EntryPointT = AnalysisTemplateArtifact>
    void SetEntryPoint(EntryPointT&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::forward<EntryPointT>(value); }
    template<typename EntryPointT = AnalysisTemplateArtifact>
    AnalysisTemplateArtifacts& WithEntryPoint(EntryPointT&& value) { SetEntryPoint(std::forward<EntryPointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional artifacts for the analysis template.</p>
     */
    inline const Aws::Vector<AnalysisTemplateArtifact>& GetAdditionalArtifacts() const { return m_additionalArtifacts; }
    inline bool AdditionalArtifactsHasBeenSet() const { return m_additionalArtifactsHasBeenSet; }
    template<typename AdditionalArtifactsT = Aws::Vector<AnalysisTemplateArtifact>>
    void SetAdditionalArtifacts(AdditionalArtifactsT&& value) { m_additionalArtifactsHasBeenSet = true; m_additionalArtifacts = std::forward<AdditionalArtifactsT>(value); }
    template<typename AdditionalArtifactsT = Aws::Vector<AnalysisTemplateArtifact>>
    AnalysisTemplateArtifacts& WithAdditionalArtifacts(AdditionalArtifactsT&& value) { SetAdditionalArtifacts(std::forward<AdditionalArtifactsT>(value)); return *this;}
    template<typename AdditionalArtifactsT = AnalysisTemplateArtifact>
    AnalysisTemplateArtifacts& AddAdditionalArtifacts(AdditionalArtifactsT&& value) { m_additionalArtifactsHasBeenSet = true; m_additionalArtifacts.emplace_back(std::forward<AdditionalArtifactsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The role ARN for the analysis template artifacts.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    AnalysisTemplateArtifacts& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    AnalysisTemplateArtifact m_entryPoint;
    bool m_entryPointHasBeenSet = false;

    Aws::Vector<AnalysisTemplateArtifact> m_additionalArtifacts;
    bool m_additionalArtifactsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
