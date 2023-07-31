/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>

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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the DataStore configuration for an API for a code generation
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/DataStoreRenderConfig">AWS
   * API Reference</a></p>
   */
  class DataStoreRenderConfig
  {
  public:
    AWS_AMPLIFYUIBUILDER_API DataStoreRenderConfig();
    AWS_AMPLIFYUIBUILDER_API DataStoreRenderConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API DataStoreRenderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
