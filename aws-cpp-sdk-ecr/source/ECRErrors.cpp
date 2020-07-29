/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecr/ECRErrors.h>
#include <aws/ecr/model/KmsException.h>
#include <aws/ecr/model/InvalidLayerPartException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ECR;
using namespace Aws::ECR::Model;

namespace Aws
{
namespace ECR
{
template<> AWS_ECR_API KmsException ECRError::GetModeledError()
{
  assert(this->GetErrorType() == ECRErrors::KMS);
  return KmsException(this->GetJsonPayload().View());
}

template<> AWS_ECR_API InvalidLayerPartException ECRError::GetModeledError()
{
  assert(this->GetErrorType() == ECRErrors::INVALID_LAYER_PART);
  return InvalidLayerPartException(this->GetJsonPayload().View());
}

namespace ECRErrorMapper
{

static const int IMAGE_DIGEST_DOES_NOT_MATCH_HASH = HashingUtils::HashString("ImageDigestDoesNotMatchException");
static const int IMAGE_TAG_ALREADY_EXISTS_HASH = HashingUtils::HashString("ImageTagAlreadyExistsException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int LAYER_INACCESSIBLE_HASH = HashingUtils::HashString("LayerInaccessibleException");
static const int REPOSITORY_POLICY_NOT_FOUND_HASH = HashingUtils::HashString("RepositoryPolicyNotFoundException");
static const int SCAN_NOT_FOUND_HASH = HashingUtils::HashString("ScanNotFoundException");
static const int LAYER_PART_TOO_SMALL_HASH = HashingUtils::HashString("LayerPartTooSmallException");
static const int LIFECYCLE_POLICY_NOT_FOUND_HASH = HashingUtils::HashString("LifecyclePolicyNotFoundException");
static const int LIFECYCLE_POLICY_PREVIEW_NOT_FOUND_HASH = HashingUtils::HashString("LifecyclePolicyPreviewNotFoundException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int INVALID_TAG_PARAMETER_HASH = HashingUtils::HashString("InvalidTagParameterException");
static const int IMAGE_NOT_FOUND_HASH = HashingUtils::HashString("ImageNotFoundException");
static const int INVALID_LAYER_HASH = HashingUtils::HashString("InvalidLayerException");
static const int REFERENCED_IMAGES_NOT_FOUND_HASH = HashingUtils::HashString("ReferencedImagesNotFoundException");
static const int REPOSITORY_NOT_EMPTY_HASH = HashingUtils::HashString("RepositoryNotEmptyException");
static const int LAYERS_NOT_FOUND_HASH = HashingUtils::HashString("LayersNotFoundException");
static const int SERVER_HASH = HashingUtils::HashString("ServerException");
static const int REPOSITORY_NOT_FOUND_HASH = HashingUtils::HashString("RepositoryNotFoundException");
static const int LIFECYCLE_POLICY_PREVIEW_IN_PROGRESS_HASH = HashingUtils::HashString("LifecyclePolicyPreviewInProgressException");
static const int EMPTY_UPLOAD_HASH = HashingUtils::HashString("EmptyUploadException");
static const int REPOSITORY_ALREADY_EXISTS_HASH = HashingUtils::HashString("RepositoryAlreadyExistsException");
static const int UNSUPPORTED_IMAGE_TYPE_HASH = HashingUtils::HashString("UnsupportedImageTypeException");
static const int KMS_HASH = HashingUtils::HashString("KmsException");
static const int IMAGE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ImageAlreadyExistsException");
static const int LAYER_ALREADY_EXISTS_HASH = HashingUtils::HashString("LayerAlreadyExistsException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int INVALID_LAYER_PART_HASH = HashingUtils::HashString("InvalidLayerPartException");
static const int UPLOAD_NOT_FOUND_HASH = HashingUtils::HashString("UploadNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == IMAGE_DIGEST_DOES_NOT_MATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::IMAGE_DIGEST_DOES_NOT_MATCH), false);
  }
  else if (hashCode == IMAGE_TAG_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::IMAGE_TAG_ALREADY_EXISTS), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == LAYER_INACCESSIBLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::LAYER_INACCESSIBLE), false);
  }
  else if (hashCode == REPOSITORY_POLICY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::REPOSITORY_POLICY_NOT_FOUND), false);
  }
  else if (hashCode == SCAN_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::SCAN_NOT_FOUND), false);
  }
  else if (hashCode == LAYER_PART_TOO_SMALL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::LAYER_PART_TOO_SMALL), false);
  }
  else if (hashCode == LIFECYCLE_POLICY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::LIFECYCLE_POLICY_NOT_FOUND), false);
  }
  else if (hashCode == LIFECYCLE_POLICY_PREVIEW_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::LIFECYCLE_POLICY_PREVIEW_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == INVALID_TAG_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::INVALID_TAG_PARAMETER), false);
  }
  else if (hashCode == IMAGE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::IMAGE_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_LAYER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::INVALID_LAYER), false);
  }
  else if (hashCode == REFERENCED_IMAGES_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::REFERENCED_IMAGES_NOT_FOUND), false);
  }
  else if (hashCode == REPOSITORY_NOT_EMPTY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::REPOSITORY_NOT_EMPTY), false);
  }
  else if (hashCode == LAYERS_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::LAYERS_NOT_FOUND), false);
  }
  else if (hashCode == SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::SERVER), false);
  }
  else if (hashCode == REPOSITORY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::REPOSITORY_NOT_FOUND), false);
  }
  else if (hashCode == LIFECYCLE_POLICY_PREVIEW_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::LIFECYCLE_POLICY_PREVIEW_IN_PROGRESS), false);
  }
  else if (hashCode == EMPTY_UPLOAD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::EMPTY_UPLOAD), false);
  }
  else if (hashCode == REPOSITORY_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::REPOSITORY_ALREADY_EXISTS), false);
  }
  else if (hashCode == UNSUPPORTED_IMAGE_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::UNSUPPORTED_IMAGE_TYPE), false);
  }
  else if (hashCode == KMS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::KMS), false);
  }
  else if (hashCode == IMAGE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::IMAGE_ALREADY_EXISTS), false);
  }
  else if (hashCode == LAYER_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::LAYER_ALREADY_EXISTS), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == INVALID_LAYER_PART_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::INVALID_LAYER_PART), false);
  }
  else if (hashCode == UPLOAD_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::UPLOAD_NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ECRErrorMapper
} // namespace ECR
} // namespace Aws
