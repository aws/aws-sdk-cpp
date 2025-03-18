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
    AWS_CLEANROOMS_API AnalysisTemplateArtifacts();
    AWS_CLEANROOMS_API AnalysisTemplateArtifacts(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisTemplateArtifacts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The entry point for the analysis template artifacts.</p>
     */
    inline const AnalysisTemplateArtifact& GetEntryPoint() const{ return m_entryPoint; }
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }
    inline void SetEntryPoint(const AnalysisTemplateArtifact& value) { m_entryPointHasBeenSet = true; m_entryPoint = value; }
    inline void SetEntryPoint(AnalysisTemplateArtifact&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::move(value); }
    inline AnalysisTemplateArtifacts& WithEntryPoint(const AnalysisTemplateArtifact& value) { SetEntryPoint(value); return *this;}
    inline AnalysisTemplateArtifacts& WithEntryPoint(AnalysisTemplateArtifact&& value) { SetEntryPoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional artifacts for the analysis template.</p>
     */
    inline const Aws::Vector<AnalysisTemplateArtifact>& GetAdditionalArtifacts() const{ return m_additionalArtifacts; }
    inline bool AdditionalArtifactsHasBeenSet() const { return m_additionalArtifactsHasBeenSet; }
    inline void SetAdditionalArtifacts(const Aws::Vector<AnalysisTemplateArtifact>& value) { m_additionalArtifactsHasBeenSet = true; m_additionalArtifacts = value; }
    inline void SetAdditionalArtifacts(Aws::Vector<AnalysisTemplateArtifact>&& value) { m_additionalArtifactsHasBeenSet = true; m_additionalArtifacts = std::move(value); }
    inline AnalysisTemplateArtifacts& WithAdditionalArtifacts(const Aws::Vector<AnalysisTemplateArtifact>& value) { SetAdditionalArtifacts(value); return *this;}
    inline AnalysisTemplateArtifacts& WithAdditionalArtifacts(Aws::Vector<AnalysisTemplateArtifact>&& value) { SetAdditionalArtifacts(std::move(value)); return *this;}
    inline AnalysisTemplateArtifacts& AddAdditionalArtifacts(const AnalysisTemplateArtifact& value) { m_additionalArtifactsHasBeenSet = true; m_additionalArtifacts.push_back(value); return *this; }
    inline AnalysisTemplateArtifacts& AddAdditionalArtifacts(AnalysisTemplateArtifact&& value) { m_additionalArtifactsHasBeenSet = true; m_additionalArtifacts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The role ARN for the analysis template artifacts.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline AnalysisTemplateArtifacts& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline AnalysisTemplateArtifacts& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline AnalysisTemplateArtifacts& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
