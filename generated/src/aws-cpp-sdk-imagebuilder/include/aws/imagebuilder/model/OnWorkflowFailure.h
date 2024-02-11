/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{
  enum class OnWorkflowFailure
  {
    NOT_SET,
    CONTINUE,
    ABORT
  };

namespace OnWorkflowFailureMapper
{
AWS_IMAGEBUILDER_API OnWorkflowFailure GetOnWorkflowFailureForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForOnWorkflowFailure(OnWorkflowFailure value);
} // namespace OnWorkflowFailureMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
