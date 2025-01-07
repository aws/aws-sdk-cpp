﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/QueryTransformationConfiguration.h>
#include <utility>

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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>The configuration details for the model to process the prompt prior to
   * retrieval and response generation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/OrchestrationConfiguration">AWS
   * API Reference</a></p>
   */
  class OrchestrationConfiguration
  {
  public:
    AWS_BEDROCK_API OrchestrationConfiguration();
    AWS_BEDROCK_API OrchestrationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API OrchestrationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configuration details for transforming the prompt.</p>
     */
    inline const QueryTransformationConfiguration& GetQueryTransformationConfiguration() const{ return m_queryTransformationConfiguration; }
    inline bool QueryTransformationConfigurationHasBeenSet() const { return m_queryTransformationConfigurationHasBeenSet; }
    inline void SetQueryTransformationConfiguration(const QueryTransformationConfiguration& value) { m_queryTransformationConfigurationHasBeenSet = true; m_queryTransformationConfiguration = value; }
    inline void SetQueryTransformationConfiguration(QueryTransformationConfiguration&& value) { m_queryTransformationConfigurationHasBeenSet = true; m_queryTransformationConfiguration = std::move(value); }
    inline OrchestrationConfiguration& WithQueryTransformationConfiguration(const QueryTransformationConfiguration& value) { SetQueryTransformationConfiguration(value); return *this;}
    inline OrchestrationConfiguration& WithQueryTransformationConfiguration(QueryTransformationConfiguration&& value) { SetQueryTransformationConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    QueryTransformationConfiguration m_queryTransformationConfiguration;
    bool m_queryTransformationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
