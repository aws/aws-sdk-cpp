/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/Deserializer.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Specifies the deserializer you want to use to convert the format of the input
   * data. This parameter is required if <code>Enabled</code> is set to
   * true.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/InputFormatConfiguration">AWS
   * API Reference</a></p>
   */
  class InputFormatConfiguration
  {
  public:
    AWS_FIREHOSE_API InputFormatConfiguration() = default;
    AWS_FIREHOSE_API InputFormatConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API InputFormatConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies which deserializer to use. You can choose either the Apache Hive
     * JSON SerDe or the OpenX JSON SerDe. If both are non-null, the server rejects the
     * request.</p>
     */
    inline const Deserializer& GetDeserializer() const { return m_deserializer; }
    inline bool DeserializerHasBeenSet() const { return m_deserializerHasBeenSet; }
    template<typename DeserializerT = Deserializer>
    void SetDeserializer(DeserializerT&& value) { m_deserializerHasBeenSet = true; m_deserializer = std::forward<DeserializerT>(value); }
    template<typename DeserializerT = Deserializer>
    InputFormatConfiguration& WithDeserializer(DeserializerT&& value) { SetDeserializer(std::forward<DeserializerT>(value)); return *this;}
    ///@}
  private:

    Deserializer m_deserializer;
    bool m_deserializerHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
