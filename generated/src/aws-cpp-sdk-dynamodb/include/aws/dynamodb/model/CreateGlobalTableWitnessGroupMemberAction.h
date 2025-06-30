/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Specifies the action to add a new witness Region to a MRSC global table. A
   * MRSC global table can be configured with either three replicas, or with two
   * replicas and one witness.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CreateGlobalTableWitnessGroupMemberAction">AWS
   * API Reference</a></p>
   */
  class CreateGlobalTableWitnessGroupMemberAction
  {
  public:
    AWS_DYNAMODB_API CreateGlobalTableWitnessGroupMemberAction() = default;
    AWS_DYNAMODB_API CreateGlobalTableWitnessGroupMemberAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API CreateGlobalTableWitnessGroupMemberAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Region name to be added as a witness Region for the
     * MRSC global table. The witness must be in a different Region than the replicas
     * and within the same Region set:</p> <ul> <li> <p>US Region set: US East (N.
     * Virginia), US East (Ohio), US West (Oregon)</p> </li> <li> <p>EU Region set:
     * Europe (Ireland), Europe (London), Europe (Paris), Europe (Frankfurt)</p> </li>
     * <li> <p>AP Region set: Asia Pacific (Tokyo), Asia Pacific (Seoul), Asia Pacific
     * (Osaka)</p> </li> </ul>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    CreateGlobalTableWitnessGroupMemberAction& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
