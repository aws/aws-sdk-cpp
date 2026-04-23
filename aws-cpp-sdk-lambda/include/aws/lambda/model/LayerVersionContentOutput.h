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
#include <aws/lambda/Lambda_EXPORTS.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>Details about a version of an <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
   * Lambda layer</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/LayerVersionContentOutput">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API LayerVersionContentOutput
  {
  public:
    LayerVersionContentOutput();
    LayerVersionContentOutput(Aws::Utils::Json::JsonView jsonValue);
    LayerVersionContentOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A link to the layer archive in Amazon S3 that is valid for 10 minutes.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>A link to the layer archive in Amazon S3 that is valid for 10 minutes.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>A link to the layer archive in Amazon S3 that is valid for 10 minutes.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>A link to the layer archive in Amazon S3 that is valid for 10 minutes.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>A link to the layer archive in Amazon S3 that is valid for 10 minutes.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>A link to the layer archive in Amazon S3 that is valid for 10 minutes.</p>
     */
    inline LayerVersionContentOutput& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>A link to the layer archive in Amazon S3 that is valid for 10 minutes.</p>
     */
    inline LayerVersionContentOutput& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>A link to the layer archive in Amazon S3 that is valid for 10 minutes.</p>
     */
    inline LayerVersionContentOutput& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The SHA-256 hash of the layer archive.</p>
     */
    inline const Aws::String& GetCodeSha256() const{ return m_codeSha256; }

    /**
     * <p>The SHA-256 hash of the layer archive.</p>
     */
    inline bool CodeSha256HasBeenSet() const { return m_codeSha256HasBeenSet; }

    /**
     * <p>The SHA-256 hash of the layer archive.</p>
     */
    inline void SetCodeSha256(const Aws::String& value) { m_codeSha256HasBeenSet = true; m_codeSha256 = value; }

    /**
     * <p>The SHA-256 hash of the layer archive.</p>
     */
    inline void SetCodeSha256(Aws::String&& value) { m_codeSha256HasBeenSet = true; m_codeSha256 = std::move(value); }

    /**
     * <p>The SHA-256 hash of the layer archive.</p>
     */
    inline void SetCodeSha256(const char* value) { m_codeSha256HasBeenSet = true; m_codeSha256.assign(value); }

    /**
     * <p>The SHA-256 hash of the layer archive.</p>
     */
    inline LayerVersionContentOutput& WithCodeSha256(const Aws::String& value) { SetCodeSha256(value); return *this;}

    /**
     * <p>The SHA-256 hash of the layer archive.</p>
     */
    inline LayerVersionContentOutput& WithCodeSha256(Aws::String&& value) { SetCodeSha256(std::move(value)); return *this;}

    /**
     * <p>The SHA-256 hash of the layer archive.</p>
     */
    inline LayerVersionContentOutput& WithCodeSha256(const char* value) { SetCodeSha256(value); return *this;}


    /**
     * <p>The size of the layer archive in bytes.</p>
     */
    inline long long GetCodeSize() const{ return m_codeSize; }

    /**
     * <p>The size of the layer archive in bytes.</p>
     */
    inline bool CodeSizeHasBeenSet() const { return m_codeSizeHasBeenSet; }

    /**
     * <p>The size of the layer archive in bytes.</p>
     */
    inline void SetCodeSize(long long value) { m_codeSizeHasBeenSet = true; m_codeSize = value; }

    /**
     * <p>The size of the layer archive in bytes.</p>
     */
    inline LayerVersionContentOutput& WithCodeSize(long long value) { SetCodeSize(value); return *this;}

  private:

    Aws::String m_location;
    bool m_locationHasBeenSet;

    Aws::String m_codeSha256;
    bool m_codeSha256HasBeenSet;

    long long m_codeSize;
    bool m_codeSizeHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
