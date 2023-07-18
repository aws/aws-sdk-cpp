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

static const int INVALID_LAYER_HASH = HashingUtils::HashString("InvalidLayerException");
static const int IMAGE_DIGEST_DOES_NOT_MATCH_HASH = HashingUtils::HashString("ImageDigestDoesNotMatchException");
static const int REFERENCED_IMAGES_NOT_FOUND_HASH = HashingUtils::HashString("ReferencedImagesNotFoundException");
static const int IMAGE_TAG_ALREADY_EXISTS_HASH = HashingUtils::HashString("ImageTagAlreadyExistsException");
static const int REPOSITORY_NOT_EMPTY_HASH = HashingUtils::HashString("RepositoryNotEmptyException");
static const int LAYERS_NOT_FOUND_HASH = HashingUtils::HashString("LayersNotFoundException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int SERVER_HASH = HashingUtils::HashString("ServerException");
static const int REPOSITORY_POLICY_NOT_FOUND_HASH = HashingUtils::HashString("RepositoryPolicyNotFoundException");
static const int REPOSITORY_NOT_FOUND_HASH = HashingUtils::HashString("RepositoryNotFoundException");
static const int LAYER_PART_TOO_SMALL_HASH = HashingUtils::HashString("LayerPartTooSmallException");
static const int EMPTY_UPLOAD_HASH = HashingUtils::HashString("EmptyUploadException");
static const int UNSUPPORTED_COMMAND_HASH = HashingUtils::HashString("UnsupportedCommandException");
static const int REPOSITORY_ALREADY_EXISTS_HASH = HashingUtils::HashString("RepositoryAlreadyExistsException");
static const int REGISTRY_NOT_FOUND_HASH = HashingUtils::HashString("RegistryNotFoundException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int IMAGE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ImageAlreadyExistsException");
static const int INVALID_TAG_PARAMETER_HASH = HashingUtils::HashString("InvalidTagParameterException");
static const int LAYER_ALREADY_EXISTS_HASH = HashingUtils::HashString("LayerAlreadyExistsException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int INVALID_LAYER_PART_HASH = HashingUtils::HashString("InvalidLayerPartException");
static const int IMAGE_NOT_FOUND_HASH = HashingUtils::HashString("ImageNotFoundException");
static const int UPLOAD_NOT_FOUND_HASH = HashingUtils::HashString("UploadNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
