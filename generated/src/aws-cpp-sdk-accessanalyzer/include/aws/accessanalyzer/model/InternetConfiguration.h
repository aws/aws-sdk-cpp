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
   * <p>This configuration sets the network origin for the Amazon S3 access point or
   * multi-region access point to <code>Internet</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/InternetConfiguration">AWS
   * API Reference</a></p>
   */
  class InternetConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API InternetConfiguration();
    AWS_ACCESSANALYZER_API InternetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API InternetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
