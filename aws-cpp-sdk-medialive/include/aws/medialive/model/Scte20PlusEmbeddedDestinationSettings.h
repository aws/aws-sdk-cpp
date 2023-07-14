﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

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
namespace MediaLive
{
namespace Model
{

  /**
   * Scte20 Plus Embedded Destination Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte20PlusEmbeddedDestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API Scte20PlusEmbeddedDestinationSettings
  {
  public:
    Scte20PlusEmbeddedDestinationSettings();
    Scte20PlusEmbeddedDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    Scte20PlusEmbeddedDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
