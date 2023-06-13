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
   * <p>The identifier for a resource object that contains resources where a finding
   * was detected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/ResourceId">AWS
   * API Reference</a></p>
   */
  class ResourceId
  {
  public:
    AWS_CODEGURUSECURITY_API ResourceId();
    AWS_CODEGURUSECURITY_API ResourceId(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API ResourceId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the code file uploaded to the resource where a finding was
     * detected.</p>
     */
    inline const Aws::String& GetCodeArtifactId() const{ return m_codeArtifactId; }

    /**
     * <p>The identifier for the code file uploaded to the resource where a finding was
     * detected.</p>
     */
    inline bool CodeArtifactIdHasBeenSet() const { return m_codeArtifactIdHasBeenSet; }

    /**
     * <p>The identifier for the code file uploaded to the resource where a finding was
     * detected.</p>
     */
    inline void SetCodeArtifactId(const Aws::String& value) { m_codeArtifactIdHasBeenSet = true; m_codeArtifactId = value; }

    /**
     * <p>The identifier for the code file uploaded to the resource where a finding was
     * detected.</p>
     */
    inline void SetCodeArtifactId(Aws::String&& value) { m_codeArtifactIdHasBeenSet = true; m_codeArtifactId = std::move(value); }

    /**
     * <p>The identifier for the code file uploaded to the resource where a finding was
     * detected.</p>
     */
    inline void SetCodeArtifactId(const char* value) { m_codeArtifactIdHasBeenSet = true; m_codeArtifactId.assign(value); }

    /**
     * <p>The identifier for the code file uploaded to the resource where a finding was
     * detected.</p>
     */
    inline ResourceId& WithCodeArtifactId(const Aws::String& value) { SetCodeArtifactId(value); return *this;}

    /**
     * <p>The identifier for the code file uploaded to the resource where a finding was
     * detected.</p>
     */
    inline ResourceId& WithCodeArtifactId(Aws::String&& value) { SetCodeArtifactId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the code file uploaded to the resource where a finding was
     * detected.</p>
     */
    inline ResourceId& WithCodeArtifactId(const char* value) { SetCodeArtifactId(value); return *this;}

  private:

    Aws::String m_codeArtifactId;
    bool m_codeArtifactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
