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
    AWS_COMPREHEND_API DocumentClassifierSummary();
    AWS_COMPREHEND_API DocumentClassifierSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DocumentClassifierSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name that you assigned the document classifier.</p>
     */
    inline const Aws::String& GetDocumentClassifierName() const{ return m_documentClassifierName; }
    inline bool DocumentClassifierNameHasBeenSet() const { return m_documentClassifierNameHasBeenSet; }
    inline void SetDocumentClassifierName(const Aws::String& value) { m_documentClassifierNameHasBeenSet = true; m_documentClassifierName = value; }
    inline void SetDocumentClassifierName(Aws::String&& value) { m_documentClassifierNameHasBeenSet = true; m_documentClassifierName = std::move(value); }
    inline void SetDocumentClassifierName(const char* value) { m_documentClassifierNameHasBeenSet = true; m_documentClassifierName.assign(value); }
    inline DocumentClassifierSummary& WithDocumentClassifierName(const Aws::String& value) { SetDocumentClassifierName(value); return *this;}
    inline DocumentClassifierSummary& WithDocumentClassifierName(Aws::String&& value) { SetDocumentClassifierName(std::move(value)); return *this;}
    inline DocumentClassifierSummary& WithDocumentClassifierName(const char* value) { SetDocumentClassifierName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of versions you created.</p>
     */
    inline int GetNumberOfVersions() const{ return m_numberOfVersions; }
    inline bool NumberOfVersionsHasBeenSet() const { return m_numberOfVersionsHasBeenSet; }
    inline void SetNumberOfVersions(int value) { m_numberOfVersionsHasBeenSet = true; m_numberOfVersions = value; }
    inline DocumentClassifierSummary& WithNumberOfVersions(int value) { SetNumberOfVersions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the latest document classifier version was submitted for
     * processing.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestVersionCreatedAt() const{ return m_latestVersionCreatedAt; }
    inline bool LatestVersionCreatedAtHasBeenSet() const { return m_latestVersionCreatedAtHasBeenSet; }
    inline void SetLatestVersionCreatedAt(const Aws::Utils::DateTime& value) { m_latestVersionCreatedAtHasBeenSet = true; m_latestVersionCreatedAt = value; }
    inline void SetLatestVersionCreatedAt(Aws::Utils::DateTime&& value) { m_latestVersionCreatedAtHasBeenSet = true; m_latestVersionCreatedAt = std::move(value); }
    inline DocumentClassifierSummary& WithLatestVersionCreatedAt(const Aws::Utils::DateTime& value) { SetLatestVersionCreatedAt(value); return *this;}
    inline DocumentClassifierSummary& WithLatestVersionCreatedAt(Aws::Utils::DateTime&& value) { SetLatestVersionCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version name you assigned to the latest document classifier version.</p>
     */
    inline const Aws::String& GetLatestVersionName() const{ return m_latestVersionName; }
    inline bool LatestVersionNameHasBeenSet() const { return m_latestVersionNameHasBeenSet; }
    inline void SetLatestVersionName(const Aws::String& value) { m_latestVersionNameHasBeenSet = true; m_latestVersionName = value; }
    inline void SetLatestVersionName(Aws::String&& value) { m_latestVersionNameHasBeenSet = true; m_latestVersionName = std::move(value); }
    inline void SetLatestVersionName(const char* value) { m_latestVersionNameHasBeenSet = true; m_latestVersionName.assign(value); }
    inline DocumentClassifierSummary& WithLatestVersionName(const Aws::String& value) { SetLatestVersionName(value); return *this;}
    inline DocumentClassifierSummary& WithLatestVersionName(Aws::String&& value) { SetLatestVersionName(std::move(value)); return *this;}
    inline DocumentClassifierSummary& WithLatestVersionName(const char* value) { SetLatestVersionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status of the latest document classifier version.</p>
     */
    inline const ModelStatus& GetLatestVersionStatus() const{ return m_latestVersionStatus; }
    inline bool LatestVersionStatusHasBeenSet() const { return m_latestVersionStatusHasBeenSet; }
    inline void SetLatestVersionStatus(const ModelStatus& value) { m_latestVersionStatusHasBeenSet = true; m_latestVersionStatus = value; }
    inline void SetLatestVersionStatus(ModelStatus&& value) { m_latestVersionStatusHasBeenSet = true; m_latestVersionStatus = std::move(value); }
    inline DocumentClassifierSummary& WithLatestVersionStatus(const ModelStatus& value) { SetLatestVersionStatus(value); return *this;}
    inline DocumentClassifierSummary& WithLatestVersionStatus(ModelStatus&& value) { SetLatestVersionStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_documentClassifierName;
    bool m_documentClassifierNameHasBeenSet = false;

    int m_numberOfVersions;
    bool m_numberOfVersionsHasBeenSet = false;

    Aws::Utils::DateTime m_latestVersionCreatedAt;
    bool m_latestVersionCreatedAtHasBeenSet = false;

    Aws::String m_latestVersionName;
    bool m_latestVersionNameHasBeenSet = false;

    ModelStatus m_latestVersionStatus;
    bool m_latestVersionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
