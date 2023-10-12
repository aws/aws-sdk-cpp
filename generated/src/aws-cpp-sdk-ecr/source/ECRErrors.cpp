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

static constexpr uint32_t IMAGE_DIGEST_DOES_NOT_MATCH_HASH = ConstExprHashingUtils::HashString("ImageDigestDoesNotMatchException");
static constexpr uint32_t IMAGE_TAG_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ImageTagAlreadyExistsException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t LAYER_INACCESSIBLE_HASH = ConstExprHashingUtils::HashString("LayerInaccessibleException");
static constexpr uint32_t UNSUPPORTED_UPSTREAM_REGISTRY_HASH = ConstExprHashingUtils::HashString("UnsupportedUpstreamRegistryException");
static constexpr uint32_t REPOSITORY_POLICY_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("RepositoryPolicyNotFoundException");
static constexpr uint32_t SCAN_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ScanNotFoundException");
static constexpr uint32_t LAYER_PART_TOO_SMALL_HASH = ConstExprHashingUtils::HashString("LayerPartTooSmallException");
static constexpr uint32_t LIFECYCLE_POLICY_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("LifecyclePolicyNotFoundException");
static constexpr uint32_t LIFECYCLE_POLICY_PREVIEW_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("LifecyclePolicyPreviewNotFoundException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t REGISTRY_POLICY_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("RegistryPolicyNotFoundException");
static constexpr uint32_t INVALID_TAG_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidTagParameterException");
static constexpr uint32_t PULL_THROUGH_CACHE_RULE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("PullThroughCacheRuleNotFoundException");
static constexpr uint32_t IMAGE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ImageNotFoundException");
static constexpr uint32_t INVALID_LAYER_HASH = ConstExprHashingUtils::HashString("InvalidLayerException");
static constexpr uint32_t REFERENCED_IMAGES_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ReferencedImagesNotFoundException");
static constexpr uint32_t REPOSITORY_NOT_EMPTY_HASH = ConstExprHashingUtils::HashString("RepositoryNotEmptyException");
static constexpr uint32_t LAYERS_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("LayersNotFoundException");
static constexpr uint32_t SERVER_HASH = ConstExprHashingUtils::HashString("ServerException");
static constexpr uint32_t REPOSITORY_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("RepositoryNotFoundException");
static constexpr uint32_t LIFECYCLE_POLICY_PREVIEW_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("LifecyclePolicyPreviewInProgressException");
static constexpr uint32_t EMPTY_UPLOAD_HASH = ConstExprHashingUtils::HashString("EmptyUploadException");
static constexpr uint32_t REPOSITORY_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("RepositoryAlreadyExistsException");
static constexpr uint32_t UNSUPPORTED_IMAGE_TYPE_HASH = ConstExprHashingUtils::HashString("UnsupportedImageTypeException");
static constexpr uint32_t KMS_HASH = ConstExprHashingUtils::HashString("KmsException");
static constexpr uint32_t IMAGE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ImageAlreadyExistsException");
static constexpr uint32_t LAYER_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("LayerAlreadyExistsException");
static constexpr uint32_t PULL_THROUGH_CACHE_RULE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("PullThroughCacheRuleAlreadyExistsException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t INVALID_LAYER_PART_HASH = ConstExprHashingUtils::HashString("InvalidLayerPartException");
static constexpr uint32_t UPLOAD_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("UploadNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
  else if (hashCode == UNSUPPORTED_UPSTREAM_REGISTRY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::UNSUPPORTED_UPSTREAM_REGISTRY), false);
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
  else if (hashCode == REGISTRY_POLICY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::REGISTRY_POLICY_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_TAG_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::INVALID_TAG_PARAMETER), false);
  }
  else if (hashCode == PULL_THROUGH_CACHE_RULE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::PULL_THROUGH_CACHE_RULE_NOT_FOUND), false);
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
  else if (hashCode == PULL_THROUGH_CACHE_RULE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRErrors::PULL_THROUGH_CACHE_RULE_ALREADY_EXISTS), false);
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
