/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>List of signing profiles that can sign a code package. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AllowedPublishers">AWS
   * API Reference</a></p>
   */
  class AllowedPublishers
  {
  public:
    AWS_LAMBDA_API AllowedPublishers() = default;
    AWS_LAMBDA_API AllowedPublishers(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API AllowedPublishers& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for each of the signing profiles. A signing
     * profile defines a trusted user who can sign a code package. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSigningProfileVersionArns() const { return m_signingProfileVersionArns; }
    inline bool SigningProfileVersionArnsHasBeenSet() const { return m_signingProfileVersionArnsHasBeenSet; }
    template<typename SigningProfileVersionArnsT = Aws::Vector<Aws::String>>
    void SetSigningProfileVersionArns(SigningProfileVersionArnsT&& value) { m_signingProfileVersionArnsHasBeenSet = true; m_signingProfileVersionArns = std::forward<SigningProfileVersionArnsT>(value); }
    template<typename SigningProfileVersionArnsT = Aws::Vector<Aws::String>>
    AllowedPublishers& WithSigningProfileVersionArns(SigningProfileVersionArnsT&& value) { SetSigningProfileVersionArns(std::forward<SigningProfileVersionArnsT>(value)); return *this;}
    template<typename SigningProfileVersionArnsT = Aws::String>
    AllowedPublishers& AddSigningProfileVersionArns(SigningProfileVersionArnsT&& value) { m_signingProfileVersionArnsHasBeenSet = true; m_signingProfileVersionArns.emplace_back(std::forward<SigningProfileVersionArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_signingProfileVersionArns;
    bool m_signingProfileVersionArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
