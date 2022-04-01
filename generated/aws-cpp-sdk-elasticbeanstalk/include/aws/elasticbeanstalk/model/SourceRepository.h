/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{
  enum class SourceRepository
  {
    NOT_SET,
    CodeCommit,
    S3
  };

namespace SourceRepositoryMapper
{
AWS_ELASTICBEANSTALK_API SourceRepository GetSourceRepositoryForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForSourceRepository(SourceRepository value);
} // namespace SourceRepositoryMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
