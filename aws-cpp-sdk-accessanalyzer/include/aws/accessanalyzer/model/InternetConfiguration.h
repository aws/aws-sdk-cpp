/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>

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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>This configuration sets the Amazon S3 access point network origin to
   * <code>Internet</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/InternetConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ACCESSANALYZER_API InternetConfiguration
  {
  public:
    InternetConfiguration();
    InternetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    InternetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
