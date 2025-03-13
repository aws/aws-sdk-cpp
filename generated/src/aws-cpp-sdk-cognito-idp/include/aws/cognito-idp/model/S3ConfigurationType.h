/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Configuration for the Amazon S3 bucket destination of user activity log
   * export with threat protection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/S3ConfigurationType">AWS
   * API Reference</a></p>
   */
  class S3ConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API S3ConfigurationType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API S3ConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API S3ConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of an Amazon S3 bucket that's the destination for threat protection
     * log export.</p>
     */
    inline const Aws::String& GetBucketArn() const { return m_bucketArn; }
    inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }
    template<typename BucketArnT = Aws::String>
    void SetBucketArn(BucketArnT&& value) { m_bucketArnHasBeenSet = true; m_bucketArn = std::forward<BucketArnT>(value); }
    template<typename BucketArnT = Aws::String>
    S3ConfigurationType& WithBucketArn(BucketArnT&& value) { SetBucketArn(std::forward<BucketArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketArn;
    bool m_bucketArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
