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
    AWS_KEYSPACES_API AutoScalingSpecification();
    AWS_KEYSPACES_API AutoScalingSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API AutoScalingSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The auto scaling settings for the table's write capacity.</p>
     */
    inline const AutoScalingSettings& GetWriteCapacityAutoScaling() const{ return m_writeCapacityAutoScaling; }
    inline bool WriteCapacityAutoScalingHasBeenSet() const { return m_writeCapacityAutoScalingHasBeenSet; }
    inline void SetWriteCapacityAutoScaling(const AutoScalingSettings& value) { m_writeCapacityAutoScalingHasBeenSet = true; m_writeCapacityAutoScaling = value; }
    inline void SetWriteCapacityAutoScaling(AutoScalingSettings&& value) { m_writeCapacityAutoScalingHasBeenSet = true; m_writeCapacityAutoScaling = std::move(value); }
    inline AutoScalingSpecification& WithWriteCapacityAutoScaling(const AutoScalingSettings& value) { SetWriteCapacityAutoScaling(value); return *this;}
    inline AutoScalingSpecification& WithWriteCapacityAutoScaling(AutoScalingSettings&& value) { SetWriteCapacityAutoScaling(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The auto scaling settings for the table's read capacity.</p>
     */
    inline const AutoScalingSettings& GetReadCapacityAutoScaling() const{ return m_readCapacityAutoScaling; }
    inline bool ReadCapacityAutoScalingHasBeenSet() const { return m_readCapacityAutoScalingHasBeenSet; }
    inline void SetReadCapacityAutoScaling(const AutoScalingSettings& value) { m_readCapacityAutoScalingHasBeenSet = true; m_readCapacityAutoScaling = value; }
    inline void SetReadCapacityAutoScaling(AutoScalingSettings&& value) { m_readCapacityAutoScalingHasBeenSet = true; m_readCapacityAutoScaling = std::move(value); }
    inline AutoScalingSpecification& WithReadCapacityAutoScaling(const AutoScalingSettings& value) { SetReadCapacityAutoScaling(value); return *this;}
    inline AutoScalingSpecification& WithReadCapacityAutoScaling(AutoScalingSettings&& value) { SetReadCapacityAutoScaling(std::move(value)); return *this;}
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
