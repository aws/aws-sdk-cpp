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
   * analysis while performing automated sensitive data discovery for an account, and
   * the status and results of the analysis. This information is available only if
   * automated sensitive data discovery has been enabled for the
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ResourceProfileArtifact">AWS
   * API Reference</a></p>
   */
  class ResourceProfileArtifact
  {
  public:
    AWS_MACIE2_API ResourceProfileArtifact() = default;
    AWS_MACIE2_API ResourceProfileArtifact(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ResourceProfileArtifact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the object.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ResourceProfileArtifact& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the analysis. Possible values are:</p> <ul><li><p>COMPLETE -
     * Amazon Macie successfully completed its analysis of the object.</p></li>
     * <li><p>PARTIAL - Macie analyzed only a subset of data in the object. For
     * example, the object is an archive file that contains files in an unsupported
     * format.</p></li> <li><p>SKIPPED - Macie wasn't able to analyze the object. For
     * example, the object is a malformed file.</p></li></ul>
     */
    inline const Aws::String& GetClassificationResultStatus() const { return m_classificationResultStatus; }
    inline bool ClassificationResultStatusHasBeenSet() const { return m_classificationResultStatusHasBeenSet; }
    template<typename ClassificationResultStatusT = Aws::String>
    void SetClassificationResultStatus(ClassificationResultStatusT&& value) { m_classificationResultStatusHasBeenSet = true; m_classificationResultStatus = std::forward<ClassificationResultStatusT>(value); }
    template<typename ClassificationResultStatusT = Aws::String>
    ResourceProfileArtifact& WithClassificationResultStatus(ClassificationResultStatusT&& value) { SetClassificationResultStatus(std::forward<ClassificationResultStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Amazon Macie found sensitive data in the object.</p>
     */
    inline bool GetSensitive() const { return m_sensitive; }
    inline bool SensitiveHasBeenSet() const { return m_sensitiveHasBeenSet; }
    inline void SetSensitive(bool value) { m_sensitiveHasBeenSet = true; m_sensitive = value; }
    inline ResourceProfileArtifact& WithSensitive(bool value) { SetSensitive(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_classificationResultStatus;
    bool m_classificationResultStatusHasBeenSet = false;

    bool m_sensitive{false};
    bool m_sensitiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
