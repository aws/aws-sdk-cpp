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
    AWS_LAMBDA_API FunctionCodeLocation();
    AWS_LAMBDA_API FunctionCodeLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API FunctionCodeLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The service that's hosting the file.</p>
     */
    inline const Aws::String& GetRepositoryType() const{ return m_repositoryType; }
    inline bool RepositoryTypeHasBeenSet() const { return m_repositoryTypeHasBeenSet; }
    inline void SetRepositoryType(const Aws::String& value) { m_repositoryTypeHasBeenSet = true; m_repositoryType = value; }
    inline void SetRepositoryType(Aws::String&& value) { m_repositoryTypeHasBeenSet = true; m_repositoryType = std::move(value); }
    inline void SetRepositoryType(const char* value) { m_repositoryTypeHasBeenSet = true; m_repositoryType.assign(value); }
    inline FunctionCodeLocation& WithRepositoryType(const Aws::String& value) { SetRepositoryType(value); return *this;}
    inline FunctionCodeLocation& WithRepositoryType(Aws::String&& value) { SetRepositoryType(std::move(value)); return *this;}
    inline FunctionCodeLocation& WithRepositoryType(const char* value) { SetRepositoryType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A presigned URL that you can use to download the deployment package.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline FunctionCodeLocation& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline FunctionCodeLocation& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline FunctionCodeLocation& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>URI of a container image in the Amazon ECR registry.</p>
     */
    inline const Aws::String& GetImageUri() const{ return m_imageUri; }
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
    inline void SetImageUri(const Aws::String& value) { m_imageUriHasBeenSet = true; m_imageUri = value; }
    inline void SetImageUri(Aws::String&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::move(value); }
    inline void SetImageUri(const char* value) { m_imageUriHasBeenSet = true; m_imageUri.assign(value); }
    inline FunctionCodeLocation& WithImageUri(const Aws::String& value) { SetImageUri(value); return *this;}
    inline FunctionCodeLocation& WithImageUri(Aws::String&& value) { SetImageUri(std::move(value)); return *this;}
    inline FunctionCodeLocation& WithImageUri(const char* value) { SetImageUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resolved URI for the image.</p>
     */
    inline const Aws::String& GetResolvedImageUri() const{ return m_resolvedImageUri; }
    inline bool ResolvedImageUriHasBeenSet() const { return m_resolvedImageUriHasBeenSet; }
    inline void SetResolvedImageUri(const Aws::String& value) { m_resolvedImageUriHasBeenSet = true; m_resolvedImageUri = value; }
    inline void SetResolvedImageUri(Aws::String&& value) { m_resolvedImageUriHasBeenSet = true; m_resolvedImageUri = std::move(value); }
    inline void SetResolvedImageUri(const char* value) { m_resolvedImageUriHasBeenSet = true; m_resolvedImageUri.assign(value); }
    inline FunctionCodeLocation& WithResolvedImageUri(const Aws::String& value) { SetResolvedImageUri(value); return *this;}
    inline FunctionCodeLocation& WithResolvedImageUri(Aws::String&& value) { SetResolvedImageUri(std::move(value)); return *this;}
    inline FunctionCodeLocation& WithResolvedImageUri(const char* value) { SetResolvedImageUri(value); return *this;}
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
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
