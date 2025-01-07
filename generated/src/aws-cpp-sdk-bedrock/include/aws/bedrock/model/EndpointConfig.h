﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/SageMakerEndpoint.h>
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
   * <p>Specifies the configuration for the endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EndpointConfig">AWS
   * API Reference</a></p>
   */
  class EndpointConfig
  {
  public:
    AWS_BEDROCK_API EndpointConfig();
    AWS_BEDROCK_API EndpointConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EndpointConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration specific to Amazon SageMaker for the endpoint.</p>
     */
    inline const SageMakerEndpoint& GetSageMaker() const{ return m_sageMaker; }
    inline bool SageMakerHasBeenSet() const { return m_sageMakerHasBeenSet; }
    inline void SetSageMaker(const SageMakerEndpoint& value) { m_sageMakerHasBeenSet = true; m_sageMaker = value; }
    inline void SetSageMaker(SageMakerEndpoint&& value) { m_sageMakerHasBeenSet = true; m_sageMaker = std::move(value); }
    inline EndpointConfig& WithSageMaker(const SageMakerEndpoint& value) { SetSageMaker(value); return *this;}
    inline EndpointConfig& WithSageMaker(SageMakerEndpoint&& value) { SetSageMaker(std::move(value)); return *this;}
    ///@}
  private:

    SageMakerEndpoint m_sageMaker;
    bool m_sageMakerHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
