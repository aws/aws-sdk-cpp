/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda
   * layer</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/LayerVersionContentOutput">AWS
   * API Reference</a></p>
   */
  class LayerVersionContentOutput
  {
  public:
    AWS_LAMBDA_API LayerVersionContentOutput() = default;
    AWS_LAMBDA_API LayerVersionContentOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API LayerVersionContentOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A link to the layer archive in Amazon S3 that is valid for 10 minutes.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    LayerVersionContentOutput& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA-256 hash of the layer archive.</p>
     */
    inline const Aws::String& GetCodeSha256() const { return m_codeSha256; }
    inline bool CodeSha256HasBeenSet() const { return m_codeSha256HasBeenSet; }
    template<typename CodeSha256T = Aws::String>
    void SetCodeSha256(CodeSha256T&& value) { m_codeSha256HasBeenSet = true; m_codeSha256 = std::forward<CodeSha256T>(value); }
    template<typename CodeSha256T = Aws::String>
    LayerVersionContentOutput& WithCodeSha256(CodeSha256T&& value) { SetCodeSha256(std::forward<CodeSha256T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the layer archive in bytes.</p>
     */
    inline long long GetCodeSize() const { return m_codeSize; }
    inline bool CodeSizeHasBeenSet() const { return m_codeSizeHasBeenSet; }
    inline void SetCodeSize(long long value) { m_codeSizeHasBeenSet = true; m_codeSize = value; }
    inline LayerVersionContentOutput& WithCodeSize(long long value) { SetCodeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for a signing profile version.</p>
     */
    inline const Aws::String& GetSigningProfileVersionArn() const { return m_signingProfileVersionArn; }
    inline bool SigningProfileVersionArnHasBeenSet() const { return m_signingProfileVersionArnHasBeenSet; }
    template<typename SigningProfileVersionArnT = Aws::String>
    void SetSigningProfileVersionArn(SigningProfileVersionArnT&& value) { m_signingProfileVersionArnHasBeenSet = true; m_signingProfileVersionArn = std::forward<SigningProfileVersionArnT>(value); }
    template<typename SigningProfileVersionArnT = Aws::String>
    LayerVersionContentOutput& WithSigningProfileVersionArn(SigningProfileVersionArnT&& value) { SetSigningProfileVersionArn(std::forward<SigningProfileVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a signing job.</p>
     */
    inline const Aws::String& GetSigningJobArn() const { return m_signingJobArn; }
    inline bool SigningJobArnHasBeenSet() const { return m_signingJobArnHasBeenSet; }
    template<typename SigningJobArnT = Aws::String>
    void SetSigningJobArn(SigningJobArnT&& value) { m_signingJobArnHasBeenSet = true; m_signingJobArn = std::forward<SigningJobArnT>(value); }
    template<typename SigningJobArnT = Aws::String>
    LayerVersionContentOutput& WithSigningJobArn(SigningJobArnT&& value) { SetSigningJobArn(std::forward<SigningJobArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_codeSha256;
    bool m_codeSha256HasBeenSet = false;

    long long m_codeSize{0};
    bool m_codeSizeHasBeenSet = false;

    Aws::String m_signingProfileVersionArn;
    bool m_signingProfileVersionArnHasBeenSet = false;

    Aws::String m_signingJobArn;
    bool m_signingJobArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
