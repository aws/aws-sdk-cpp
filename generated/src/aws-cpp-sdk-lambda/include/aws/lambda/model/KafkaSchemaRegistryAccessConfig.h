/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/KafkaSchemaRegistryAuthType.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>Specific access configuration settings that tell Lambda how to authenticate
   * with your schema registry.</p> <p>If you're working with an Glue schema
   * registry, don't provide authentication details in this object. Instead, ensure
   * that your execution role has the required permissions for Lambda to access your
   * cluster.</p> <p>If you're working with a Confluent schema registry, choose the
   * authentication method in the <code>Type</code> field, and provide the Secrets
   * Manager secret ARN in the <code>URI</code> field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/KafkaSchemaRegistryAccessConfig">AWS
   * API Reference</a></p>
   */
  class KafkaSchemaRegistryAccessConfig
  {
  public:
    AWS_LAMBDA_API KafkaSchemaRegistryAccessConfig() = default;
    AWS_LAMBDA_API KafkaSchemaRegistryAccessConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API KafkaSchemaRegistryAccessConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of authentication Lambda uses to access your schema registry. </p>
     */
    inline KafkaSchemaRegistryAuthType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(KafkaSchemaRegistryAuthType value) { m_typeHasBeenSet = true; m_type = value; }
    inline KafkaSchemaRegistryAccessConfig& WithType(KafkaSchemaRegistryAuthType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URI of the secret (Secrets Manager secret ARN) to authenticate with your
     * schema registry. </p>
     */
    inline const Aws::String& GetURI() const { return m_uRI; }
    inline bool URIHasBeenSet() const { return m_uRIHasBeenSet; }
    template<typename URIT = Aws::String>
    void SetURI(URIT&& value) { m_uRIHasBeenSet = true; m_uRI = std::forward<URIT>(value); }
    template<typename URIT = Aws::String>
    KafkaSchemaRegistryAccessConfig& WithURI(URIT&& value) { SetURI(std::forward<URIT>(value)); return *this;}
    ///@}
  private:

    KafkaSchemaRegistryAuthType m_type{KafkaSchemaRegistryAuthType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_uRI;
    bool m_uRIHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
