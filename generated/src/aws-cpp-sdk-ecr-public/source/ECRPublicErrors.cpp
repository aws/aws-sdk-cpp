/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecr-public/ECRPublicErrors.h>
#include <aws/ecr-public/model/InvalidLayerPartException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ECRPublic;
using namespace Aws::ECRPublic::Model;

namespace Aws
{
namespace ECRPublic
{
template<> AWS_ECRPUBLIC_API InvalidLayerPartException ECRPublicError::GetModeledError()
{
  assert(this->GetErrorType() == ECRPublicErrors::INVALID_LAYER_PART);
  return InvalidLayerPartException(this->GetJsonPayload().View());
}

namespace ECRPublicErrorMapper
{

static constexpr uint32_t INVALID_LAYER_HASH = ConstExprHashingUtils::HashString("InvalidLayerException");
static constexpr uint32_t IMAGE_DIGEST_DOES_NOT_MATCH_HASH = ConstExprHashingUtils::HashString("ImageDigestDoesNotMatchException");
static constexpr uint32_t REFERENCED_IMAGES_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ReferencedImagesNotFoundException");
static constexpr uint32_t IMAGE_TAG_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ImageTagAlreadyExistsException");
static constexpr uint32_t REPOSITORY_NOT_EMPTY_HASH = ConstExprHashingUtils::HashString("RepositoryNotEmptyException");
static constexpr uint32_t REPOSITORY_CATALOG_DATA_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("RepositoryCatalogDataNotFoundException");
static constexpr uint32_t LAYERS_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("LayersNotFoundException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t SERVER_HASH = ConstExprHashingUtils::HashString("ServerException");
static constexpr uint32_t REPOSITORY_POLICY_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("RepositoryPolicyNotFoundException");
static constexpr uint32_t REPOSITORY_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("RepositoryNotFoundException");
static constexpr uint32_t LAYER_PART_TOO_SMALL_HASH = ConstExprHashingUtils::HashString("LayerPartTooSmallException");
static constexpr uint32_t EMPTY_UPLOAD_HASH = ConstExprHashingUtils::HashString("EmptyUploadException");
static constexpr uint32_t UNSUPPORTED_COMMAND_HASH = ConstExprHashingUtils::HashString("UnsupportedCommandException");
static constexpr uint32_t REPOSITORY_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("RepositoryAlreadyExistsException");
static constexpr uint32_t REGISTRY_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("RegistryNotFoundException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t IMAGE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ImageAlreadyExistsException");
static constexpr uint32_t INVALID_TAG_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidTagParameterException");
static constexpr uint32_t LAYER_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("LayerAlreadyExistsException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t INVALID_LAYER_PART_HASH = ConstExprHashingUtils::HashString("InvalidLayerPartException");
static constexpr uint32_t IMAGE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ImageNotFoundException");
static constexpr uint32_t UPLOAD_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("UploadNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_LAYER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::INVALID_LAYER), false);
  }
  else if (hashCode == IMAGE_DIGEST_DOES_NOT_MATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::IMAGE_DIGEST_DOES_NOT_MATCH), false);
  }
  else if (hashCode == REFERENCED_IMAGES_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::REFERENCED_IMAGES_NOT_FOUND), false);
  }
  else if (hashCode == IMAGE_TAG_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::IMAGE_TAG_ALREADY_EXISTS), false);
  }
  else if (hashCode == REPOSITORY_NOT_EMPTY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::REPOSITORY_NOT_EMPTY), false);
  }
  else if (hashCode == REPOSITORY_CATALOG_DATA_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::REPOSITORY_CATALOG_DATA_NOT_FOUND), false);
  }
  else if (hashCode == LAYERS_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::LAYERS_NOT_FOUND), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::SERVER), false);
  }
  else if (hashCode == REPOSITORY_POLICY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::REPOSITORY_POLICY_NOT_FOUND), false);
  }
  else if (hashCode == REPOSITORY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::REPOSITORY_NOT_FOUND), false);
  }
  else if (hashCode == LAYER_PART_TOO_SMALL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::LAYER_PART_TOO_SMALL), false);
  }
  else if (hashCode == EMPTY_UPLOAD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::EMPTY_UPLOAD), false);
  }
  else if (hashCode == UNSUPPORTED_COMMAND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::UNSUPPORTED_COMMAND), false);
  }
  else if (hashCode == REPOSITORY_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::REPOSITORY_ALREADY_EXISTS), false);
  }
  else if (hashCode == REGISTRY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::REGISTRY_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == IMAGE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::IMAGE_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_TAG_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::INVALID_TAG_PARAMETER), false);
  }
  else if (hashCode == LAYER_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::LAYER_ALREADY_EXISTS), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == INVALID_LAYER_PART_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::INVALID_LAYER_PART), false);
  }
  else if (hashCode == IMAGE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::IMAGE_NOT_FOUND), false);
  }
  else if (hashCode == UPLOAD_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECRPublicErrors::UPLOAD_NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ECRPublicErrorMapper
} // namespace ECRPublic
} // namespace Aws
