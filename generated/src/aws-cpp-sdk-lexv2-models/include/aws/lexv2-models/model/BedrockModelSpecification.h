/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains information about the Amazon Bedrock model used to interpret the
   * prompt used in descriptive bot building.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BedrockModelSpecification">AWS
   * API Reference</a></p>
   */
  class BedrockModelSpecification
  {
  public:
    AWS_LEXMODELSV2_API BedrockModelSpecification();
    AWS_LEXMODELSV2_API BedrockModelSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BedrockModelSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the foundation model used in descriptive bot building.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The ARN of the foundation model used in descriptive bot building.</p>
     */
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }

    /**
     * <p>The ARN of the foundation model used in descriptive bot building.</p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }

    /**
     * <p>The ARN of the foundation model used in descriptive bot building.</p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }

    /**
     * <p>The ARN of the foundation model used in descriptive bot building.</p>
     */
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }

    /**
     * <p>The ARN of the foundation model used in descriptive bot building.</p>
     */
    inline BedrockModelSpecification& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The ARN of the foundation model used in descriptive bot building.</p>
     */
    inline BedrockModelSpecification& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the foundation model used in descriptive bot building.</p>
     */
    inline BedrockModelSpecification& WithModelArn(const char* value) { SetModelArn(value); return *this;}

  private:

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
