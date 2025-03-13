/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>A revision for an Lambda deployment that is a YAML-formatted or
   * JSON-formatted string. For Lambda deployments, the revision is the same as the
   * AppSpec file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RawString">AWS
   * API Reference</a></p>
   */
  class RawString
  {
  public:
    AWS_CODEDEPLOY_API RawString() = default;
    AWS_CODEDEPLOY_API RawString(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API RawString& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The YAML-formatted or JSON-formatted revision string. It includes information
     * about which Lambda function to update and optional Lambda functions that
     * validate deployment lifecycle events.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    RawString& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA256 hash value of the revision content.</p>
     */
    inline const Aws::String& GetSha256() const { return m_sha256; }
    inline bool Sha256HasBeenSet() const { return m_sha256HasBeenSet; }
    template<typename Sha256T = Aws::String>
    void SetSha256(Sha256T&& value) { m_sha256HasBeenSet = true; m_sha256 = std::forward<Sha256T>(value); }
    template<typename Sha256T = Aws::String>
    RawString& WithSha256(Sha256T&& value) { SetSha256(std::forward<Sha256T>(value)); return *this;}
    ///@}
  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_sha256;
    bool m_sha256HasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
