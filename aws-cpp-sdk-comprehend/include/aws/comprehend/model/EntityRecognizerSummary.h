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
   * <p> Describes the information about an entity recognizer and its
   * versions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EntityRecognizerSummary">AWS
   * API Reference</a></p>
   */
  class EntityRecognizerSummary
  {
  public:
    AWS_COMPREHEND_API EntityRecognizerSummary();
    AWS_COMPREHEND_API EntityRecognizerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EntityRecognizerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name that you assigned the entity recognizer.</p>
     */
    inline const Aws::String& GetRecognizerName() const{ return m_recognizerName; }

    /**
     * <p> The name that you assigned the entity recognizer.</p>
     */
    inline bool RecognizerNameHasBeenSet() const { return m_recognizerNameHasBeenSet; }

    /**
     * <p> The name that you assigned the entity recognizer.</p>
     */
    inline void SetRecognizerName(const Aws::String& value) { m_recognizerNameHasBeenSet = true; m_recognizerName = value; }

    /**
     * <p> The name that you assigned the entity recognizer.</p>
     */
    inline void SetRecognizerName(Aws::String&& value) { m_recognizerNameHasBeenSet = true; m_recognizerName = std::move(value); }

    /**
     * <p> The name that you assigned the entity recognizer.</p>
     */
    inline void SetRecognizerName(const char* value) { m_recognizerNameHasBeenSet = true; m_recognizerName.assign(value); }

    /**
     * <p> The name that you assigned the entity recognizer.</p>
     */
    inline EntityRecognizerSummary& WithRecognizerName(const Aws::String& value) { SetRecognizerName(value); return *this;}

    /**
     * <p> The name that you assigned the entity recognizer.</p>
     */
    inline EntityRecognizerSummary& WithRecognizerName(Aws::String&& value) { SetRecognizerName(std::move(value)); return *this;}

    /**
     * <p> The name that you assigned the entity recognizer.</p>
     */
    inline EntityRecognizerSummary& WithRecognizerName(const char* value) { SetRecognizerName(value); return *this;}


    /**
     * <p> The number of versions you created.</p>
     */
    inline int GetNumberOfVersions() const{ return m_numberOfVersions; }

    /**
     * <p> The number of versions you created.</p>
     */
    inline bool NumberOfVersionsHasBeenSet() const { return m_numberOfVersionsHasBeenSet; }

    /**
     * <p> The number of versions you created.</p>
     */
    inline void SetNumberOfVersions(int value) { m_numberOfVersionsHasBeenSet = true; m_numberOfVersions = value; }

    /**
     * <p> The number of versions you created.</p>
     */
    inline EntityRecognizerSummary& WithNumberOfVersions(int value) { SetNumberOfVersions(value); return *this;}


    /**
     * <p> The time that the latest entity recognizer version was submitted for
     * processing.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestVersionCreatedAt() const{ return m_latestVersionCreatedAt; }

    /**
     * <p> The time that the latest entity recognizer version was submitted for
     * processing.</p>
     */
    inline bool LatestVersionCreatedAtHasBeenSet() const { return m_latestVersionCreatedAtHasBeenSet; }

    /**
     * <p> The time that the latest entity recognizer version was submitted for
     * processing.</p>
     */
    inline void SetLatestVersionCreatedAt(const Aws::Utils::DateTime& value) { m_latestVersionCreatedAtHasBeenSet = true; m_latestVersionCreatedAt = value; }

    /**
     * <p> The time that the latest entity recognizer version was submitted for
     * processing.</p>
     */
    inline void SetLatestVersionCreatedAt(Aws::Utils::DateTime&& value) { m_latestVersionCreatedAtHasBeenSet = true; m_latestVersionCreatedAt = std::move(value); }

    /**
     * <p> The time that the latest entity recognizer version was submitted for
     * processing.</p>
     */
    inline EntityRecognizerSummary& WithLatestVersionCreatedAt(const Aws::Utils::DateTime& value) { SetLatestVersionCreatedAt(value); return *this;}

    /**
     * <p> The time that the latest entity recognizer version was submitted for
     * processing.</p>
     */
    inline EntityRecognizerSummary& WithLatestVersionCreatedAt(Aws::Utils::DateTime&& value) { SetLatestVersionCreatedAt(std::move(value)); return *this;}


    /**
     * <p> The version name you assigned to the latest entity recognizer version.</p>
     */
    inline const Aws::String& GetLatestVersionName() const{ return m_latestVersionName; }

    /**
     * <p> The version name you assigned to the latest entity recognizer version.</p>
     */
    inline bool LatestVersionNameHasBeenSet() const { return m_latestVersionNameHasBeenSet; }

    /**
     * <p> The version name you assigned to the latest entity recognizer version.</p>
     */
    inline void SetLatestVersionName(const Aws::String& value) { m_latestVersionNameHasBeenSet = true; m_latestVersionName = value; }

    /**
     * <p> The version name you assigned to the latest entity recognizer version.</p>
     */
    inline void SetLatestVersionName(Aws::String&& value) { m_latestVersionNameHasBeenSet = true; m_latestVersionName = std::move(value); }

    /**
     * <p> The version name you assigned to the latest entity recognizer version.</p>
     */
    inline void SetLatestVersionName(const char* value) { m_latestVersionNameHasBeenSet = true; m_latestVersionName.assign(value); }

    /**
     * <p> The version name you assigned to the latest entity recognizer version.</p>
     */
    inline EntityRecognizerSummary& WithLatestVersionName(const Aws::String& value) { SetLatestVersionName(value); return *this;}

    /**
     * <p> The version name you assigned to the latest entity recognizer version.</p>
     */
    inline EntityRecognizerSummary& WithLatestVersionName(Aws::String&& value) { SetLatestVersionName(std::move(value)); return *this;}

    /**
     * <p> The version name you assigned to the latest entity recognizer version.</p>
     */
    inline EntityRecognizerSummary& WithLatestVersionName(const char* value) { SetLatestVersionName(value); return *this;}


    /**
     * <p> Provides the status of the latest entity recognizer version.</p>
     */
    inline const ModelStatus& GetLatestVersionStatus() const{ return m_latestVersionStatus; }

    /**
     * <p> Provides the status of the latest entity recognizer version.</p>
     */
    inline bool LatestVersionStatusHasBeenSet() const { return m_latestVersionStatusHasBeenSet; }

    /**
     * <p> Provides the status of the latest entity recognizer version.</p>
     */
    inline void SetLatestVersionStatus(const ModelStatus& value) { m_latestVersionStatusHasBeenSet = true; m_latestVersionStatus = value; }

    /**
     * <p> Provides the status of the latest entity recognizer version.</p>
     */
    inline void SetLatestVersionStatus(ModelStatus&& value) { m_latestVersionStatusHasBeenSet = true; m_latestVersionStatus = std::move(value); }

    /**
     * <p> Provides the status of the latest entity recognizer version.</p>
     */
    inline EntityRecognizerSummary& WithLatestVersionStatus(const ModelStatus& value) { SetLatestVersionStatus(value); return *this;}

    /**
     * <p> Provides the status of the latest entity recognizer version.</p>
     */
    inline EntityRecognizerSummary& WithLatestVersionStatus(ModelStatus&& value) { SetLatestVersionStatus(std::move(value)); return *this;}

  private:

    Aws::String m_recognizerName;
    bool m_recognizerNameHasBeenSet = false;

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
