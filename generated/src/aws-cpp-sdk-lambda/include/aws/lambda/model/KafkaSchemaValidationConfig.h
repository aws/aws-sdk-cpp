/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/KafkaSchemaValidationAttribute.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>Specific schema validation configuration settings that tell Lambda the
   * message attributes you want to validate and filter using your schema
   * registry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/KafkaSchemaValidationConfig">AWS
   * API Reference</a></p>
   */
  class KafkaSchemaValidationConfig
  {
  public:
    AWS_LAMBDA_API KafkaSchemaValidationConfig() = default;
    AWS_LAMBDA_API KafkaSchemaValidationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API KafkaSchemaValidationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The attributes you want your schema registry to validate and filter for. If
     * you selected <code>JSON</code> as the <code>EventRecordFormat</code>, Lambda
     * also deserializes the selected message attributes. </p>
     */
    inline KafkaSchemaValidationAttribute GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(KafkaSchemaValidationAttribute value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline KafkaSchemaValidationConfig& WithAttribute(KafkaSchemaValidationAttribute value) { SetAttribute(value); return *this;}
    ///@}
  private:

    KafkaSchemaValidationAttribute m_attribute{KafkaSchemaValidationAttribute::NOT_SET};
    bool m_attributeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
