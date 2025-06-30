/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/WitnessStatus.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the properties of a witness Region in a MRSC global table.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/GlobalTableWitnessDescription">AWS
   * API Reference</a></p>
   */
  class GlobalTableWitnessDescription
  {
  public:
    AWS_DYNAMODB_API GlobalTableWitnessDescription() = default;
    AWS_DYNAMODB_API GlobalTableWitnessDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API GlobalTableWitnessDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon Web Services Region that serves as a witness for the
     * MRSC global table.</p>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    GlobalTableWitnessDescription& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the witness Region in the MRSC global table.</p>
     */
    inline WitnessStatus GetWitnessStatus() const { return m_witnessStatus; }
    inline bool WitnessStatusHasBeenSet() const { return m_witnessStatusHasBeenSet; }
    inline void SetWitnessStatus(WitnessStatus value) { m_witnessStatusHasBeenSet = true; m_witnessStatus = value; }
    inline GlobalTableWitnessDescription& WithWitnessStatus(WitnessStatus value) { SetWitnessStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    WitnessStatus m_witnessStatus{WitnessStatus::NOT_SET};
    bool m_witnessStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
