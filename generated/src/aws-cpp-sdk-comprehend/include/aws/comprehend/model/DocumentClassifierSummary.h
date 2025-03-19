/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/comprehend/model/ModelStatus.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Describes information about a document classifier and its
   * versions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DocumentClassifierSummary">AWS
   * API Reference</a></p>
   */
  class DocumentClassifierSummary
  {
  public:
    AWS_COMPREHEND_API DocumentClassifierSummary() = default;
    AWS_COMPREHEND_API DocumentClassifierSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DocumentClassifierSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name that you assigned the document classifier.</p>
     */
    inline const Aws::String& GetDocumentClassifierName() const { return m_documentClassifierName; }
    inline bool DocumentClassifierNameHasBeenSet() const { return m_documentClassifierNameHasBeenSet; }
    template<typename DocumentClassifierNameT = Aws::String>
    void SetDocumentClassifierName(DocumentClassifierNameT&& value) { m_documentClassifierNameHasBeenSet = true; m_documentClassifierName = std::forward<DocumentClassifierNameT>(value); }
    template<typename DocumentClassifierNameT = Aws::String>
    DocumentClassifierSummary& WithDocumentClassifierName(DocumentClassifierNameT&& value) { SetDocumentClassifierName(std::forward<DocumentClassifierNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of versions you created.</p>
     */
    inline int GetNumberOfVersions() const { return m_numberOfVersions; }
    inline bool NumberOfVersionsHasBeenSet() const { return m_numberOfVersionsHasBeenSet; }
    inline void SetNumberOfVersions(int value) { m_numberOfVersionsHasBeenSet = true; m_numberOfVersions = value; }
    inline DocumentClassifierSummary& WithNumberOfVersions(int value) { SetNumberOfVersions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the latest document classifier version was submitted for
     * processing.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestVersionCreatedAt() const { return m_latestVersionCreatedAt; }
    inline bool LatestVersionCreatedAtHasBeenSet() const { return m_latestVersionCreatedAtHasBeenSet; }
    template<typename LatestVersionCreatedAtT = Aws::Utils::DateTime>
    void SetLatestVersionCreatedAt(LatestVersionCreatedAtT&& value) { m_latestVersionCreatedAtHasBeenSet = true; m_latestVersionCreatedAt = std::forward<LatestVersionCreatedAtT>(value); }
    template<typename LatestVersionCreatedAtT = Aws::Utils::DateTime>
    DocumentClassifierSummary& WithLatestVersionCreatedAt(LatestVersionCreatedAtT&& value) { SetLatestVersionCreatedAt(std::forward<LatestVersionCreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version name you assigned to the latest document classifier version.</p>
     */
    inline const Aws::String& GetLatestVersionName() const { return m_latestVersionName; }
    inline bool LatestVersionNameHasBeenSet() const { return m_latestVersionNameHasBeenSet; }
    template<typename LatestVersionNameT = Aws::String>
    void SetLatestVersionName(LatestVersionNameT&& value) { m_latestVersionNameHasBeenSet = true; m_latestVersionName = std::forward<LatestVersionNameT>(value); }
    template<typename LatestVersionNameT = Aws::String>
    DocumentClassifierSummary& WithLatestVersionName(LatestVersionNameT&& value) { SetLatestVersionName(std::forward<LatestVersionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status of the latest document classifier version.</p>
     */
    inline ModelStatus GetLatestVersionStatus() const { return m_latestVersionStatus; }
    inline bool LatestVersionStatusHasBeenSet() const { return m_latestVersionStatusHasBeenSet; }
    inline void SetLatestVersionStatus(ModelStatus value) { m_latestVersionStatusHasBeenSet = true; m_latestVersionStatus = value; }
    inline DocumentClassifierSummary& WithLatestVersionStatus(ModelStatus value) { SetLatestVersionStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_documentClassifierName;
    bool m_documentClassifierNameHasBeenSet = false;

    int m_numberOfVersions{0};
    bool m_numberOfVersionsHasBeenSet = false;

    Aws::Utils::DateTime m_latestVersionCreatedAt{};
    bool m_latestVersionCreatedAtHasBeenSet = false;

    Aws::String m_latestVersionName;
    bool m_latestVersionNameHasBeenSet = false;

    ModelStatus m_latestVersionStatus{ModelStatus::NOT_SET};
    bool m_latestVersionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
