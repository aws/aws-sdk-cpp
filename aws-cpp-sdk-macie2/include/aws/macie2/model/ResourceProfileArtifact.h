/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about an S3 object that Amazon Macie selected for
   * analysis while performing automated sensitive data discovery for an S3 bucket,
   * and the status and results of the analysis. This information is available only
   * if automated sensitive data discovery is currently enabled for your
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ResourceProfileArtifact">AWS
   * API Reference</a></p>
   */
  class ResourceProfileArtifact
  {
  public:
    AWS_MACIE2_API ResourceProfileArtifact();
    AWS_MACIE2_API ResourceProfileArtifact(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ResourceProfileArtifact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the object.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the object.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the object.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the object.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the object.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the object.</p>
     */
    inline ResourceProfileArtifact& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the object.</p>
     */
    inline ResourceProfileArtifact& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the object.</p>
     */
    inline ResourceProfileArtifact& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The status of the analysis. Possible values are:</p> <ul><li><p>COMPLETE -
     * Amazon Macie successfully completed its analysis of the object.</p></li>
     * <li><p>PARTIAL - Macie analyzed only a subset of data in the object. For
     * example, the object is an archive file that contains files in an unsupported
     * format.</p></li> <li><p>SKIPPED - Macie wasn't able to analyze the object. For
     * example, the object is a malformed file.</p></li></ul>
     */
    inline const Aws::String& GetClassificationResultStatus() const{ return m_classificationResultStatus; }

    /**
     * <p>The status of the analysis. Possible values are:</p> <ul><li><p>COMPLETE -
     * Amazon Macie successfully completed its analysis of the object.</p></li>
     * <li><p>PARTIAL - Macie analyzed only a subset of data in the object. For
     * example, the object is an archive file that contains files in an unsupported
     * format.</p></li> <li><p>SKIPPED - Macie wasn't able to analyze the object. For
     * example, the object is a malformed file.</p></li></ul>
     */
    inline bool ClassificationResultStatusHasBeenSet() const { return m_classificationResultStatusHasBeenSet; }

    /**
     * <p>The status of the analysis. Possible values are:</p> <ul><li><p>COMPLETE -
     * Amazon Macie successfully completed its analysis of the object.</p></li>
     * <li><p>PARTIAL - Macie analyzed only a subset of data in the object. For
     * example, the object is an archive file that contains files in an unsupported
     * format.</p></li> <li><p>SKIPPED - Macie wasn't able to analyze the object. For
     * example, the object is a malformed file.</p></li></ul>
     */
    inline void SetClassificationResultStatus(const Aws::String& value) { m_classificationResultStatusHasBeenSet = true; m_classificationResultStatus = value; }

    /**
     * <p>The status of the analysis. Possible values are:</p> <ul><li><p>COMPLETE -
     * Amazon Macie successfully completed its analysis of the object.</p></li>
     * <li><p>PARTIAL - Macie analyzed only a subset of data in the object. For
     * example, the object is an archive file that contains files in an unsupported
     * format.</p></li> <li><p>SKIPPED - Macie wasn't able to analyze the object. For
     * example, the object is a malformed file.</p></li></ul>
     */
    inline void SetClassificationResultStatus(Aws::String&& value) { m_classificationResultStatusHasBeenSet = true; m_classificationResultStatus = std::move(value); }

    /**
     * <p>The status of the analysis. Possible values are:</p> <ul><li><p>COMPLETE -
     * Amazon Macie successfully completed its analysis of the object.</p></li>
     * <li><p>PARTIAL - Macie analyzed only a subset of data in the object. For
     * example, the object is an archive file that contains files in an unsupported
     * format.</p></li> <li><p>SKIPPED - Macie wasn't able to analyze the object. For
     * example, the object is a malformed file.</p></li></ul>
     */
    inline void SetClassificationResultStatus(const char* value) { m_classificationResultStatusHasBeenSet = true; m_classificationResultStatus.assign(value); }

    /**
     * <p>The status of the analysis. Possible values are:</p> <ul><li><p>COMPLETE -
     * Amazon Macie successfully completed its analysis of the object.</p></li>
     * <li><p>PARTIAL - Macie analyzed only a subset of data in the object. For
     * example, the object is an archive file that contains files in an unsupported
     * format.</p></li> <li><p>SKIPPED - Macie wasn't able to analyze the object. For
     * example, the object is a malformed file.</p></li></ul>
     */
    inline ResourceProfileArtifact& WithClassificationResultStatus(const Aws::String& value) { SetClassificationResultStatus(value); return *this;}

    /**
     * <p>The status of the analysis. Possible values are:</p> <ul><li><p>COMPLETE -
     * Amazon Macie successfully completed its analysis of the object.</p></li>
     * <li><p>PARTIAL - Macie analyzed only a subset of data in the object. For
     * example, the object is an archive file that contains files in an unsupported
     * format.</p></li> <li><p>SKIPPED - Macie wasn't able to analyze the object. For
     * example, the object is a malformed file.</p></li></ul>
     */
    inline ResourceProfileArtifact& WithClassificationResultStatus(Aws::String&& value) { SetClassificationResultStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the analysis. Possible values are:</p> <ul><li><p>COMPLETE -
     * Amazon Macie successfully completed its analysis of the object.</p></li>
     * <li><p>PARTIAL - Macie analyzed only a subset of data in the object. For
     * example, the object is an archive file that contains files in an unsupported
     * format.</p></li> <li><p>SKIPPED - Macie wasn't able to analyze the object. For
     * example, the object is a malformed file.</p></li></ul>
     */
    inline ResourceProfileArtifact& WithClassificationResultStatus(const char* value) { SetClassificationResultStatus(value); return *this;}


    /**
     * <p>Specifies whether Amazon Macie found sensitive data in the object.</p>
     */
    inline bool GetSensitive() const{ return m_sensitive; }

    /**
     * <p>Specifies whether Amazon Macie found sensitive data in the object.</p>
     */
    inline bool SensitiveHasBeenSet() const { return m_sensitiveHasBeenSet; }

    /**
     * <p>Specifies whether Amazon Macie found sensitive data in the object.</p>
     */
    inline void SetSensitive(bool value) { m_sensitiveHasBeenSet = true; m_sensitive = value; }

    /**
     * <p>Specifies whether Amazon Macie found sensitive data in the object.</p>
     */
    inline ResourceProfileArtifact& WithSensitive(bool value) { SetSensitive(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_classificationResultStatus;
    bool m_classificationResultStatusHasBeenSet = false;

    bool m_sensitive;
    bool m_sensitiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
