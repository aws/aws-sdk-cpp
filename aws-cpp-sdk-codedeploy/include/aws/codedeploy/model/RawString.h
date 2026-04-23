/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>A revision for an AWS Lambda deployment that is a YAML-formatted or
   * JSON-formatted string. For AWS Lambda deployments, the revision is the same as
   * the AppSpec file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RawString">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API RawString
  {
  public:
    RawString();
    RawString(Aws::Utils::Json::JsonView jsonValue);
    RawString& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The YAML-formatted or JSON-formatted revision string. It includes information
     * about which Lambda function to update and optional Lambda functions that
     * validate deployment lifecycle events.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The YAML-formatted or JSON-formatted revision string. It includes information
     * about which Lambda function to update and optional Lambda functions that
     * validate deployment lifecycle events.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The YAML-formatted or JSON-formatted revision string. It includes information
     * about which Lambda function to update and optional Lambda functions that
     * validate deployment lifecycle events.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The YAML-formatted or JSON-formatted revision string. It includes information
     * about which Lambda function to update and optional Lambda functions that
     * validate deployment lifecycle events.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The YAML-formatted or JSON-formatted revision string. It includes information
     * about which Lambda function to update and optional Lambda functions that
     * validate deployment lifecycle events.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The YAML-formatted or JSON-formatted revision string. It includes information
     * about which Lambda function to update and optional Lambda functions that
     * validate deployment lifecycle events.</p>
     */
    inline RawString& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The YAML-formatted or JSON-formatted revision string. It includes information
     * about which Lambda function to update and optional Lambda functions that
     * validate deployment lifecycle events.</p>
     */
    inline RawString& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The YAML-formatted or JSON-formatted revision string. It includes information
     * about which Lambda function to update and optional Lambda functions that
     * validate deployment lifecycle events.</p>
     */
    inline RawString& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The SHA256 hash value of the revision content.</p>
     */
    inline const Aws::String& GetSha256() const{ return m_sha256; }

    /**
     * <p>The SHA256 hash value of the revision content.</p>
     */
    inline bool Sha256HasBeenSet() const { return m_sha256HasBeenSet; }

    /**
     * <p>The SHA256 hash value of the revision content.</p>
     */
    inline void SetSha256(const Aws::String& value) { m_sha256HasBeenSet = true; m_sha256 = value; }

    /**
     * <p>The SHA256 hash value of the revision content.</p>
     */
    inline void SetSha256(Aws::String&& value) { m_sha256HasBeenSet = true; m_sha256 = std::move(value); }

    /**
     * <p>The SHA256 hash value of the revision content.</p>
     */
    inline void SetSha256(const char* value) { m_sha256HasBeenSet = true; m_sha256.assign(value); }

    /**
     * <p>The SHA256 hash value of the revision content.</p>
     */
    inline RawString& WithSha256(const Aws::String& value) { SetSha256(value); return *this;}

    /**
     * <p>The SHA256 hash value of the revision content.</p>
     */
    inline RawString& WithSha256(Aws::String&& value) { SetSha256(std::move(value)); return *this;}

    /**
     * <p>The SHA256 hash value of the revision content.</p>
     */
    inline RawString& WithSha256(const char* value) { SetSha256(value); return *this;}

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet;

    Aws::String m_sha256;
    bool m_sha256HasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
