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
   * <p>Details about a function's deployment package.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/FunctionCodeLocation">AWS
   * API Reference</a></p>
   */
  class FunctionCodeLocation
  {
  public:
    AWS_LAMBDA_API FunctionCodeLocation() = default;
    AWS_LAMBDA_API FunctionCodeLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API FunctionCodeLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The service that's hosting the file.</p>
     */
    inline const Aws::String& GetRepositoryType() const { return m_repositoryType; }
    inline bool RepositoryTypeHasBeenSet() const { return m_repositoryTypeHasBeenSet; }
    template<typename RepositoryTypeT = Aws::String>
    void SetRepositoryType(RepositoryTypeT&& value) { m_repositoryTypeHasBeenSet = true; m_repositoryType = std::forward<RepositoryTypeT>(value); }
    template<typename RepositoryTypeT = Aws::String>
    FunctionCodeLocation& WithRepositoryType(RepositoryTypeT&& value) { SetRepositoryType(std::forward<RepositoryTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A presigned URL that you can use to download the deployment package.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    FunctionCodeLocation& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>URI of a container image in the Amazon ECR registry.</p>
     */
    inline const Aws::String& GetImageUri() const { return m_imageUri; }
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
    template<typename ImageUriT = Aws::String>
    void SetImageUri(ImageUriT&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::forward<ImageUriT>(value); }
    template<typename ImageUriT = Aws::String>
    FunctionCodeLocation& WithImageUri(ImageUriT&& value) { SetImageUri(std::forward<ImageUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resolved URI for the image.</p>
     */
    inline const Aws::String& GetResolvedImageUri() const { return m_resolvedImageUri; }
    inline bool ResolvedImageUriHasBeenSet() const { return m_resolvedImageUriHasBeenSet; }
    template<typename ResolvedImageUriT = Aws::String>
    void SetResolvedImageUri(ResolvedImageUriT&& value) { m_resolvedImageUriHasBeenSet = true; m_resolvedImageUri = std::forward<ResolvedImageUriT>(value); }
    template<typename ResolvedImageUriT = Aws::String>
    FunctionCodeLocation& WithResolvedImageUri(ResolvedImageUriT&& value) { SetResolvedImageUri(std::forward<ResolvedImageUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Key Management Service (KMS) customer managed key that's used
     * to encrypt your function's .zip deployment package. If you don't provide a
     * customer managed key, Lambda uses an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-owned-cmk">Amazon
     * Web Services owned key</a>.</p>
     */
    inline const Aws::String& GetSourceKMSKeyArn() const { return m_sourceKMSKeyArn; }
    inline bool SourceKMSKeyArnHasBeenSet() const { return m_sourceKMSKeyArnHasBeenSet; }
    template<typename SourceKMSKeyArnT = Aws::String>
    void SetSourceKMSKeyArn(SourceKMSKeyArnT&& value) { m_sourceKMSKeyArnHasBeenSet = true; m_sourceKMSKeyArn = std::forward<SourceKMSKeyArnT>(value); }
    template<typename SourceKMSKeyArnT = Aws::String>
    FunctionCodeLocation& WithSourceKMSKeyArn(SourceKMSKeyArnT&& value) { SetSourceKMSKeyArn(std::forward<SourceKMSKeyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryType;
    bool m_repositoryTypeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_imageUri;
    bool m_imageUriHasBeenSet = false;

    Aws::String m_resolvedImageUri;
    bool m_resolvedImageUriHasBeenSet = false;

    Aws::String m_sourceKMSKeyArn;
    bool m_sourceKMSKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
