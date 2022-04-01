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
  enum class ConfigurationOptionValueType
  {
    NOT_SET,
    Scalar,
    List
  };

namespace ConfigurationOptionValueTypeMapper
{
AWS_ELASTICBEANSTALK_API ConfigurationOptionValueType GetConfigurationOptionValueTypeForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForConfigurationOptionValueType(ConfigurationOptionValueType value);
} // namespace ConfigurationOptionValueTypeMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
