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
   * <p>An <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda
   * layer</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/Layer">AWS API
   * Reference</a></p>
   */
  class Layer
  {
  public:
    AWS_LAMBDA_API Layer() = default;
    AWS_LAMBDA_API Layer(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Layer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Layer& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the layer archive in bytes.</p>
     */
    inline long long GetCodeSize() const { return m_codeSize; }
    inline bool CodeSizeHasBeenSet() const { return m_codeSizeHasBeenSet; }
    inline void SetCodeSize(long long value) { m_codeSizeHasBeenSet = true; m_codeSize = value; }
    inline Layer& WithCodeSize(long long value) { SetCodeSize(value); return *this;}
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
    Layer& WithSigningProfileVersionArn(SigningProfileVersionArnT&& value) { SetSigningProfileVersionArn(std::forward<SigningProfileVersionArnT>(value)); return *this;}
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
    Layer& WithSigningJobArn(SigningJobArnT&& value) { SetSigningJobArn(std::forward<SigningJobArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

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
