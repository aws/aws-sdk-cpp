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
  enum class SourceType
  {
    NOT_SET,
    Git,
    Zip
  };

namespace SourceTypeMapper
{
AWS_ELASTICBEANSTALK_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForSourceType(SourceType value);
} // namespace SourceTypeMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
