/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/model/AutoScalingSettings.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>The optional auto scaling capacity settings for a table in provisioned
   * capacity mode.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/AutoScalingSpecification">AWS
   * API Reference</a></p>
   */
  class AutoScalingSpecification
  {
  public:
    AWS_KEYSPACES_API AutoScalingSpecification() = default;
    AWS_KEYSPACES_API AutoScalingSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API AutoScalingSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The auto scaling settings for the table's write capacity.</p>
     */
    inline const AutoScalingSettings& GetWriteCapacityAutoScaling() const { return m_writeCapacityAutoScaling; }
    inline bool WriteCapacityAutoScalingHasBeenSet() const { return m_writeCapacityAutoScalingHasBeenSet; }
    template<typename WriteCapacityAutoScalingT = AutoScalingSettings>
    void SetWriteCapacityAutoScaling(WriteCapacityAutoScalingT&& value) { m_writeCapacityAutoScalingHasBeenSet = true; m_writeCapacityAutoScaling = std::forward<WriteCapacityAutoScalingT>(value); }
    template<typename WriteCapacityAutoScalingT = AutoScalingSettings>
    AutoScalingSpecification& WithWriteCapacityAutoScaling(WriteCapacityAutoScalingT&& value) { SetWriteCapacityAutoScaling(std::forward<WriteCapacityAutoScalingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The auto scaling settings for the table's read capacity.</p>
     */
    inline const AutoScalingSettings& GetReadCapacityAutoScaling() const { return m_readCapacityAutoScaling; }
    inline bool ReadCapacityAutoScalingHasBeenSet() const { return m_readCapacityAutoScalingHasBeenSet; }
    template<typename ReadCapacityAutoScalingT = AutoScalingSettings>
    void SetReadCapacityAutoScaling(ReadCapacityAutoScalingT&& value) { m_readCapacityAutoScalingHasBeenSet = true; m_readCapacityAutoScaling = std::forward<ReadCapacityAutoScalingT>(value); }
    template<typename ReadCapacityAutoScalingT = AutoScalingSettings>
    AutoScalingSpecification& WithReadCapacityAutoScaling(ReadCapacityAutoScalingT&& value) { SetReadCapacityAutoScaling(std::forward<ReadCapacityAutoScalingT>(value)); return *this;}
    ///@}
  private:

    AutoScalingSettings m_writeCapacityAutoScaling;
    bool m_writeCapacityAutoScalingHasBeenSet = false;

    AutoScalingSettings m_readCapacityAutoScaling;
    bool m_readCapacityAutoScalingHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
