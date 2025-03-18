/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
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
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   * <p>The identifier for a resource object that contains resources to scan.
   * Specifying a codeArtifactId is required to create a scan.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/ResourceId">AWS
   * API Reference</a></p>
   */
  class ResourceId
  {
  public:
    AWS_CODEGURUSECURITY_API ResourceId() = default;
    AWS_CODEGURUSECURITY_API ResourceId(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API ResourceId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the code file uploaded to the resource object. Returned by
     * <code>CreateUploadUrl</code> when you upload resources to be scanned.</p>
     */
    inline const Aws::String& GetCodeArtifactId() const { return m_codeArtifactId; }
    inline bool CodeArtifactIdHasBeenSet() const { return m_codeArtifactIdHasBeenSet; }
    template<typename CodeArtifactIdT = Aws::String>
    void SetCodeArtifactId(CodeArtifactIdT&& value) { m_codeArtifactIdHasBeenSet = true; m_codeArtifactId = std::forward<CodeArtifactIdT>(value); }
    template<typename CodeArtifactIdT = Aws::String>
    ResourceId& WithCodeArtifactId(CodeArtifactIdT&& value) { SetCodeArtifactId(std::forward<CodeArtifactIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeArtifactId;
    bool m_codeArtifactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
