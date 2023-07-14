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
  class AWS_LAMBDA_API AllowedPublishers
  {
  public:
    AllowedPublishers();
    AllowedPublishers(Aws::Utils::Json::JsonView jsonValue);
    AllowedPublishers& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for each of the signing profiles. A signing
     * profile defines a trusted user who can sign a code package. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSigningProfileVersionArns() const{ return m_signingProfileVersionArns; }

    /**
     * <p>The Amazon Resource Name (ARN) for each of the signing profiles. A signing
     * profile defines a trusted user who can sign a code package. </p>
     */
    inline bool SigningProfileVersionArnsHasBeenSet() const { return m_signingProfileVersionArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for each of the signing profiles. A signing
     * profile defines a trusted user who can sign a code package. </p>
     */
    inline void SetSigningProfileVersionArns(const Aws::Vector<Aws::String>& value) { m_signingProfileVersionArnsHasBeenSet = true; m_signingProfileVersionArns = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for each of the signing profiles. A signing
     * profile defines a trusted user who can sign a code package. </p>
     */
    inline void SetSigningProfileVersionArns(Aws::Vector<Aws::String>&& value) { m_signingProfileVersionArnsHasBeenSet = true; m_signingProfileVersionArns = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for each of the signing profiles. A signing
     * profile defines a trusted user who can sign a code package. </p>
     */
    inline AllowedPublishers& WithSigningProfileVersionArns(const Aws::Vector<Aws::String>& value) { SetSigningProfileVersionArns(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for each of the signing profiles. A signing
     * profile defines a trusted user who can sign a code package. </p>
     */
    inline AllowedPublishers& WithSigningProfileVersionArns(Aws::Vector<Aws::String>&& value) { SetSigningProfileVersionArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for each of the signing profiles. A signing
     * profile defines a trusted user who can sign a code package. </p>
     */
    inline AllowedPublishers& AddSigningProfileVersionArns(const Aws::String& value) { m_signingProfileVersionArnsHasBeenSet = true; m_signingProfileVersionArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) for each of the signing profiles. A signing
     * profile defines a trusted user who can sign a code package. </p>
     */
    inline AllowedPublishers& AddSigningProfileVersionArns(Aws::String&& value) { m_signingProfileVersionArnsHasBeenSet = true; m_signingProfileVersionArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) for each of the signing profiles. A signing
     * profile defines a trusted user who can sign a code package. </p>
     */
    inline AllowedPublishers& AddSigningProfileVersionArns(const char* value) { m_signingProfileVersionArnsHasBeenSet = true; m_signingProfileVersionArns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_signingProfileVersionArns;
    bool m_signingProfileVersionArnsHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
